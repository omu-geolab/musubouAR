//
//  loadViewController.swift
//  CerdAR
//
//  Copyright (c) 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
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
        
    }
    
    
    /*
     * 位置情報のアクセス許可の状況が変わったときの処理
     */
    func locationManager(_ manager: CLLocationManager, didChangeAuthorization status: CLAuthorizationStatus) {
        switch CLLocationManager.authorizationStatus() {
        case .notDetermined: // 位置情報の取得の可否がわからないとき
            locationManager?.requestWhenInUseAuthorization() // 位置情報取得の可否についてのダイアログを出す
            
        case .authorizedWhenInUse, .authorizedAlways: // 位置情報の取得が許可されているとき
            // ネットワークに接続されている時
            if CheckReachability(hostname: "www") {
                
                // jsonを読み込んでから利用規約を表示する
                let fileName = "data.geojson"
                
                if let dir: NSString = NSSearchPathForDirectoriesInDomains(FileManager.SearchPathDirectory.documentDirectory, FileManager.SearchPathDomainMask.allDomainsMask, true).first as NSString? {
                    
                    let pathFileName = dir.appendingPathComponent(fileName)
                    guard (try? Data(contentsOf: URL(fileURLWithPath: pathFileName))) != nil else {
                        
                        // ローカルにdata.json(geojson)が存在しない場合，サーバーからデータを取得する．
                        jsondata(callback: { _ in
                            
                            // サーバーにもないとき
                            if self.json == nil {
                                
                                let alert: UIAlertController = UIAlertController(title: "ERROR!!", message: "GeoJSONファイルが見つかりませんでした", preferredStyle:  UIAlertControllerStyle.alert)
                                
                                let defaultAction: UIAlertAction = UIAlertAction(title: "OK", style: UIAlertActionStyle.default, handler: {
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
                }
                
                
                jsonDataManager.sharedInstance.storeData(json: json, callback: { _ in
                    showTermsView()
                })
                
            } else { // 接続されていないとき
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
        activityIndicator.backgroundColor = UIColor(red: 0/2555, green: 0/255, blue: 0/255, alpha: 0.7)
        activityIndicator.layer.cornerRadius = 8
        activityIndicator.center = self.view.center
        
        //Indicatorの状態を管理
        activityIndicator.hidesWhenStopped = false
        activityIndicator.activityIndicatorViewStyle = UIActivityIndicatorViewStyle.white
        
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
            let audioPath = NSURL(fileURLWithPath: filePath!)
            audioPlayerIntr = try AVAudioPlayer(contentsOf: audioPath as URL)
            audioPlayerIntr.prepareToPlay()
        } catch {
            print("Error")
        }
        
        do {
            let filePath = Bundle.main.path(forResource: "sound_near", ofType: "mp3")
            let audioPath = NSURL(fileURLWithPath: filePath!)
            audioPlayerNear = try AVAudioPlayer(contentsOf: audioPath as URL)
            audioPlayerNear.prepareToPlay()
        } catch {
            print("Error")
        }
    }
    
    
    /*
     * サーバーからJSONファイルを探す
     */
    func jsondata(callback: @escaping (String) -> Void) -> Void {
        
        let url = URL(string: "https://www.cerd.osaka-cu.ac.jp/cerdar_pics/Sugimoto/data.geojson")
        let req = URLRequest(url: url!, cachePolicy: NSURLRequest(url: url!).cachePolicy, timeoutInterval: 5.0)
        
        let configuration = URLSessionConfiguration.default
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
    
    
    func showTermsView() {
        termsview = termsView(frame: CGRect(x: 0, y: 0, width: screenWidth, height: screenHeight))
        termsview!.delegate = self
        self.view.addSubview(termsview!)
    }
    
    
    
    
    // MARK: detailViewDelegate
    func termsViewfinish() {
        termsview?.delegate = nil
        self.dismiss(animated: false, completion: nil)
        self.present(mapViewController(), animated: true, completion: nil)
        //self.present(osmViewController(), animated: true, completion: nil)
    }
    
    
    
}
