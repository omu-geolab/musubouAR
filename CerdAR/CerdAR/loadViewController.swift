//
//  loadViewController.swift
//  CerdAR
//
//  Copyright (c) 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
//

import UIKit
import CoreLocation
import SystemConfiguration


class loadViewController: UIViewController, termsViewDelegate, CLLocationManagerDelegate {
    
    var activityIndicator: UIActivityIndicatorView!
    var termsview: termsView? // 利用規約のビュー
    var locationManager: CLLocationManager!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        view.backgroundColor = UIColor.white
        self.showIndicator()
        

        
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
                let fileName = "data.json"
                var json: JSON!
                
                //        let path = Bundle.main.path(forResource: "data", ofType: "json")!
                //        let jsonData = NSData(contentsOfFile: path)!
                //        json = JSON(data:jsonData as Data)
                
                if let dir: NSString = NSSearchPathForDirectoriesInDomains(FileManager.SearchPathDirectory.documentDirectory, FileManager.SearchPathDomainMask.allDomainsMask, true).first as NSString? {
                    
                    let pathFileName = dir.appendingPathComponent(fileName)
                    guard (try? Data(contentsOf: URL(fileURLWithPath: pathFileName))) != nil else {
                        let alert = UIAlertController(title: "ERROR!!", message: "JSONファイルが見つかりませんでした。", preferredStyle: UIAlertControllerStyle.alert)
                        alert.addAction(UIAlertAction(title: "OK", style: UIAlertActionStyle.default) { action -> Void in })
                        present(alert, animated: true, completion: nil)
                        
                        showTermsView()
                        
                        return
                    }
                    
                    let documentsPath = NSSearchPathForDirectoriesInDomains(.documentDirectory, .userDomainMask, true)[0]
                    print(documentsPath)
                    
                    
                    let jsonData = try? Data(contentsOf: URL(fileURLWithPath: pathFileName))
                    
                    json = JSON(data:jsonData!)
                }
                
                // jsonの構造の記述ミス・jsonファイルが空のとき
                // 地図・ARカメラは使用できるがタグは表示されない
                if json == nil {
                    showTermsView()
                    return
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
    
    //    //Indicatorを止めるときは、こちらを呼び出してあげます。
    //    func hideIndicator() {
    //        activityIndicator.stopAnimating()
    //    }
    
    
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
    }
    
    
    
}
