//
//  loadViewController.swift
//  CerdAR
//
//  Copyright (c) 2018 APPLIED TECHNOLOGY CO.,LTD., 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
//


import UIKit
import CoreLocation
import SystemConfiguration
import AVFoundation

class loadViewController: UIViewController, termsViewDelegate, CLLocationManagerDelegate {
    
    var activityIndicator: UIActivityIndicatorView!
    var termsview: termsView? // 利用規約のビュー
    var locationManager: CLLocationManager!
    
    var json: JSON!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        view.backgroundColor = UIColor.white
        self.showIndicator()
        
        notificationSound()
        
        locationManager = CLLocationManager()
        locationManager?.delegate = self
        guard let data = try? getJSONData() else { return }
        let gisdata = JSON(data: data)
        
        GisList.sharedGis.getListFromJson(json: gisdata)
        if(GisList.sharedGis.list.count > 0){
            saveGisDatatoFile(json: GisList.sharedGis.list[1].glStyle)
        }
        
        
    }
    
    override func viewWillDisappear(_ animated: Bool) {
        for view  in self.view.subviews{
            view.removeConstraints(view.constraints)
            view.removeFromSuperview()
        }
    }
    
    func saveGisDatatoFile(json:JSON){
        
        let dataS = json.description;
        if let dir = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask).first {
            
            let fileURL = dir.appendingPathComponent(fileName)
            
            do {
                try dataS.write(to: fileURL, atomically: false, encoding: .utf8)
            } catch {
                print(error)
            }
            
        }
        
    }

    /*
     * 位置情報のアクセス許可の状況が変わったときの処理
     */
    
    func locationManager(_ manager: CLLocationManager, didChangeAuthorization status: CLAuthorizationStatus) {
        switch status {
        case .notDetermined: // 位置情報の取得の可否がわからないとき
            locationManager?.requestWhenInUseAuthorization() // 位置情報取得の可否についてのダイアログを出す
            
        case .authorizedWhenInUse, .authorizedAlways: // 位置情報の取得が許可されているとき
            // ネットワークに接続されている時
            if CheckReachability(hostname: "www") {
                
                // jsonを読み込んでから利用規約を表示する
                let fileName = "data.geojson"
                
                if let dir: NSString = NSSearchPathForDirectoriesInDomains(FileManager.SearchPathDirectory.documentDirectory, FileManager.SearchPathDomainMask.allDomainsMask, true).first as NSString? {
                    
                    let pathFileName = dir.appendingPathComponent(fileName)
                    print(pathFileName)
                    guard (try? Data(contentsOf: URL(fileURLWithPath: pathFileName))) != nil else {
                        
                        // ローカルにdata.json(geojson)が存在しない場合，サーバーからデータを取得する．
                        jsondata(callback: { _ in
                            // サーバーにもないとき
                            if self.json == nil {
                                let alert: UIAlertController = UIAlertController(title: "ERROR!!", message: "GeoJSONファイルが見つかりませんでした", preferredStyle:  UIAlertController.Style.alert)
                                
                                let defaultAction: UIAlertAction = UIAlertAction(title: "OK", style: UIAlertAction.Style.default, handler: {
                                    (action: UIAlertAction!) -> Void in
                                    print("OK")
                                })
                                
                                alert.addAction(defaultAction)
                                self.present(alert, animated: true, completion: nil)
                                self.showTermsView()
                                // サーバーにあったとき
                            } else {
                                jsonDataManager.sharedInstance.storeData(json: self.json, callback: { _ in
                                    self.showTermsView()
                                })
                            }
                        })
                        return
                    }
                    
                    let jsonData = try? Data(contentsOf: URL(fileURLWithPath: pathFileName))
                    json = JSON(data:jsonData!)
                    jsonDataManager.sharedInstance.storeData(json: json, callback: { _ in
                        showTermsView()
                    })
                }
            } else { // 接続されていないとき
                let fileName = "data.geojson"
                
                if let dir: NSString = NSSearchPathForDirectoriesInDomains(FileManager.SearchPathDirectory.documentDirectory, FileManager.SearchPathDomainMask.allDomainsMask, true).first as NSString? {
                    
                    let pathFileName = dir.appendingPathComponent(fileName)
                    print(pathFileName)
                    guard (try? Data(contentsOf: URL(fileURLWithPath: pathFileName))) == nil else {
                        let jsonData = try? Data(contentsOf: URL(fileURLWithPath: pathFileName))
                        json = JSON(data:jsonData!)
                        jsonDataManager.sharedInstance.storeData(json: json, callback: { _ in
                            showTermsView()
                        })
                        return
                    }
                }
                // jsonは読み込まず、利用規約を表示する
                showTermsView()
            }
        default: // 位置情報取得が拒否されているとき
            // jsonは読み込まず、利用規約を表示する

            showTermsView()
        }
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
    
    /* ネットワークに接続されているか確認する */
    func CheckReachability(hostname: String) -> Bool {
        let reachability = SCNetworkReachabilityCreateWithName(nil, hostname)!
        var flags = SCNetworkReachabilityFlags.connectionAutomatic
        if !SCNetworkReachabilityGetFlags(reachability, &flags) {
            return false
        }
        let isReachable = (flags.rawValue & UInt32(kSCNetworkFlagsReachable)) != 0
        let needsConnection = (flags.rawValue & UInt32(kSCNetworkFlagsConnectionRequired)) != 0
        return (isReachable && !needsConnection)
    }
    
    func showIndicator() {
        //Indicatorを作成
        activityIndicator = UIActivityIndicatorView()
        activityIndicator.frame = CGRect(x: 0, y: 0, width: screenWidth, height: screenHeight)
        activityIndicator.backgroundColor = UIColor(red: 0/255, green: 0/255, blue: 0/255, alpha: 0.7)
//      activityIndicator.layer.cornerRadius = 8
        activityIndicator.center = self.view.center
        
        //Indicatorの状態を管理
        activityIndicator.hidesWhenStopped = false
        activityIndicator.style = .medium
        
        //クルクルを開始
        activityIndicator.startAnimating()
        
        //Viewに追加
        self.view.addSubview(activityIndicator)
    }
    
    /*
     * 侵入・付近の通知音の設定
     */
    func notificationSound() {
        do {
            let filePath = Bundle.main.path(forResource: "sound_intrusion", ofType: "mp3")
            let audioPath = URL(fileURLWithPath: filePath!)
            audioPlayerIntr = try AVAudioPlayer(contentsOf: audioPath)
            audioPlayerIntr.prepareToPlay()
        } catch {
            print("Error")
        }
        
        do {
            let filePath = Bundle.main.path(forResource: "sound_near", ofType: "mp3")
            let audioPath = URL(fileURLWithPath: filePath!)
            audioPlayerNear = try AVAudioPlayer(contentsOf: audioPath)
            audioPlayerNear.prepareToPlay()
        } catch {
            print("Error")
        }
    }
    
    /*
     * サーバーからJSONファイルを探す
     */
    func jsondata(callback: @escaping (String) -> Void) -> Void {
        
        let url = URL(string: loadDisasterLink())

        let req = URLRequest(url: url!, timeoutInterval: 5.0)
        
        let configuration = URLSessionConfiguration.default
        configuration.requestCachePolicy = NSURLRequest.CachePolicy.reloadIgnoringLocalCacheData
        let session = URLSession(configuration: configuration, delegate:nil, delegateQueue:OperationQueue.main)
        let task = session.dataTask(with: req, completionHandler: {
            (data, response, error) -> Void in
            // urlが見つからない、またはタイムアウトしたとき
            if error != nil {
                callback("finished")
                // 成功したとき
            } else {
                self.json = JSON(data: data!)
                callback("finished")
            }
        })
        task.resume()
    }
    
    func loadDisasterLink() -> String {
        // JSON ファイルのパス
        let filePath = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask).first?.appendingPathComponent("disaster.json")
        
        // disasterLink を使用して JSON を生成
        let jsonData = """
        {
            "disaster_link": "\(disasterLink)"
        }
        """.data(using: .utf8)
        
        // ファイルの存在を確認
        if FileManager.default.fileExists(atPath: filePath?.path ?? "") {
            // ファイルが存在する場合、内容を読み取り、disaster_link を表示
            do {
                let existingData = try Data(contentsOf: filePath!)
                if let jsonObject = try JSONSerialization.jsonObject(with: existingData, options: []) as? [String: Any],
                   let disasterLinkJson = jsonObject["disaster_link"] as? String {
                    print("災害リンク: \(disasterLinkJson)")
                    return disasterLinkJson
                }
            } catch {
                print("既存の JSON ファイルを読み込めませんでした: \(error)")
            }
        } else {
            // ファイルが存在しない場合、新しいファイルを作成し、JSON の内容を保存
            do {
                try jsonData?.write(to: filePath!)
                print("JSON ファイルが作成され、保存されました。")
            } catch {
                print("JSON ファイルを保存できませんでした: \(error)")
            }
        }
        return disasterLink
    }
   
    
    func showTermsView() {
//        termsview = termsView(frame: CGRect(x: 0, y: 0, width: screenWidth, height: screenHeight))
//        termsview!.delegate = self
//        self.view.addSubview(termsview!)

        let updateView = UIStoryboard(name: "TermsView", bundle: .main)
        if let vc = updateView.instantiateInitialViewController() as? TermsViewController {
//            let navigationController = UINavigationController(rootViewController: vc)
            let appDelegate = UIApplication.shared.delegate as! AppDelegate
////            appDelegate.window?.rootViewController = UINavigationController()
            let window = appDelegate.window
            if let window = window {
              window.rootViewController = vc
              window.makeKeyAndVisible()
            }
//            let appDelegate = UIApplication.shared.delegate as! AppDelegate
//            appDelegate.window?.rootViewController = UINavigationController()
//            navigationController?.pushViewController(vc, animated: true)
//            self.navigationController?.pushViewController(vc, animated: true)
        }
    }
    
    // MARK:- detailViewDelegate
    func termsViewfinish() {
        termsview?.delegate = nil
        self.dismiss(animated: false, completion: nil)
//        let osmView = UIStoryboard(name: "OSMView", bundle: .main)
//        if let vc = osmView.instantiateInitialViewController() as? osmViewController {
//            let appDelegate = UIApplication.shared.delegate as! AppDelegate
//            appDelegate.window?.rootViewController = vc
//        }
        let osmVC = osmViewController()
        let appDelegate = UIApplication.shared.delegate as! AppDelegate
        appDelegate.window?.rootViewController = osmVC
    }
    func getJSONData() throws -> Data? {
        let fileName = "gis_data.json"
        
        if let dir: NSString = NSSearchPathForDirectoriesInDomains(FileManager.SearchPathDirectory.documentDirectory, FileManager.SearchPathDomainMask.allDomainsMask, true).first as NSString? {
            
            let pathFileName = dir.appendingPathComponent(fileName)
            guard (try? Data(contentsOf: URL(fileURLWithPath: pathFileName))) != nil else {
                guard let path = Bundle.main.path(forResource: "gis_data", ofType: "json") else { return nil }
                let url = URL(fileURLWithPath: path)
                
                return try Data(contentsOf: url)
            }
            return try? Data(contentsOf: URL(fileURLWithPath: pathFileName))
        }
        return nil
    }
    
}
