//
//  mapViewController.swift
//  CerdAR
//
//  Copyright (c) 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
//

import UIKit
import MapKit
import CoreLocation
import CoreImage
import SystemConfiguration


/* UIImageに変換する */
extension UIView {
    
    func getImage() -> UIImage {
        
        // ビットマップ画像のcontextを作成.
        UIGraphicsBeginImageContextWithOptions(self.bounds.size, false, 0.0)
        let context: CGContext = UIGraphicsGetCurrentContext()!
        
        // 対象のview内の描画をcontextに複写する.
        self.layer.render(in: context)
        
        // 現在のcontextのビットマップをUIImageとして取得.
        let capturedImage: UIImage = UIGraphicsGetImageFromCurrentImageContext()!
        
        // contextを閉じる.
        UIGraphicsEndImageContext()
        
        return capturedImage
    }
}


class mapViewController: UIViewController, CLLocationManagerDelegate, MKMapViewDelegate, detailViewDelegate, ConfigViewDelegate {
    
    var detailview: detailView? // 詳細画面のビュー
    var configview: ConfigView? // 設定画面のビュー
    var mapView: MKMapView? // AppleMaps
    
    var locationManager: CLLocationManager! // 現在地の取得
    
    var infoPinView = [MKAnnotationView]() // ピン画像を表示する(情報)
    var warnPinView = [MKAnnotationView]() // ピン画像を表示する(警告)
    
    var pinViewData: MKAnnotationView! // タップされたタグの情報を保持
    
    var warningView: UIView! // 災害範囲内に侵入した時に画面の色を変える
    var warnNums: [Int] = [] // 災害番号
    var msgCount = 0 // 警告メッセージを表示する災害の配列番号を管理する
    var msgSafeCount = 0 // ユーザーは現在安全圏にいるかを確認するための変数
    var viewCount = 0 // 警告モードを表示する災害の配列番号を管理する
    var viewSafeCount = 0 // ユーザーは現在付近または安全圏にいるかを確認するための変数
    var messageTimer: Timer! // 警告メッセージを表示するためのタイマー
    var viewTimer: Timer! // 警告モードを表示するためのタイマー
    var box: [Int] = [] // 現在発生している災害の番号を管理する配列
    
    var updateTimer: Timer! // update()を一定時間ごとに発火させる
    
    var circle = [MKCircle]() // 災害範囲の円
    
    var warnState = warningState.safe.rawValue // 現在ユーザーは災害からどの位置にいるか(安全・付近・侵入)
    
    //MARK:警告メッセージの表示位置（高さ）をいじる場合はy:の値を変更する
    let warningMessage = UILabel(frame: CGRect(x: screenWidth - 55.0 - butSize - screenWidth * 0.38, y: screenHeight * 0.8, width: screenWidth * 0.37, height: screenHeight * 0.13)) // 警告メッセージ
    
    class appleMapsAnnotation: MKPointAnnotation {
        var tagData: TagData!
    }
    
    var appleMapsInfoBox = [appleMapsAnnotation]() // ピンの情報を持つ(情報)
    var appleMapsWarnBox = [appleMapsAnnotation]() // ピンの情報を持つ(警告)
    
    var beforeZoomLv = 0.0
    
    let vibration = Vibration()
    
    // MARK:- ライフサイクル
    override func viewDidLoad() {
        
        super.viewDidLoad()
        
        /* 警告ビューの設定 */
        /* 警告モードで全画面色を変えるために使用 */
        warningView = UIView(frame: CGRect(x: 0.0, y: 0.0, width: CGFloat(screenWidth), height: CGFloat(screenHeight)))
        warningView.backgroundColor = UIColor.clear
        view.addSubview(warningView) // viewに追加
        
        /* マップビューの設定 */
        mapView = MKMapView(frame: self.view.frame)
        mapView!.mapType = MKMapType.standard  // 地図の種類
        mapView!.showsUserLocation = true      // 現在地の表示を許可する
        mapView!.showsScale = true // スケールバーを表示する
        mapView!.isPitchEnabled = false  // ジェスチャでの視点変更を許可しない
        view.addSubview(mapView!)
        
        locationManager = CLLocationManager()
        
        /* 画面遷移するためのボタンを生成 */
        let toCam_button = UIButton()
        let buttonImage: UIImage = UIImage(named: "icon_camera.png")!
        toCam_button.frame = CGRect(x: 0.0, y: 0.0, width: butSize, height: butSize)
        toCam_button.setImage(buttonImage, for: UIControlState())
        toCam_button.layer.position = CGPoint(x: 55.0, y: self.view.bounds.height - 55.0)
        mapView!.addSubview(toCam_button)
        toCam_button.addTarget(self, action: #selector(mapViewController.onClick_AR(_:)), for: .touchUpInside)
        
        /* 設定画面へ遷移するためのボタン生成 */
        let toCon_button = UIButton()
        let conButImage: UIImage = UIImage(named: "icon_menu.png")!
        toCon_button.frame = CGRect(x: 0.0, y: 0.0, width: butSize, height: butSize)
        toCon_button.setImage(conButImage, for: UIControlState())
        toCon_button.layer.position = CGPoint(x: self.view.bounds.width - 55.0, y: self.view.bounds.height - 55.0)
        mapView!.addSubview(toCon_button)
        toCon_button.addTarget(self, action: #selector(mapViewController.onClick_config(_:)), for: .touchUpInside)
        
        /* 画面の中心を現在地にするためのボタン生成 */
        let nowLoc_button = UIButton()
        let locButImage: UIImage = UIImage(named: "icon_locate.png")!
        nowLoc_button.frame = CGRect.init(x: 0, y: 0, width: butSize, height: butSize)
        nowLoc_button.setImage(locButImage, for: UIControlState())
        nowLoc_button.layer.position = CGPoint(x: 55.0, y: 90.0)
        mapView!.addSubview(nowLoc_button)
        
        nowLoc_button.addTarget(self, action: #selector(mapViewController.onClick_nowLocate(_:)), for: .touchUpInside)
        
        /* 警告タグメッセージの設定 */
        warningMessage.textColor = UIColor.black // 文字色(黒)
        warningMessage.backgroundColor = UIColor.white.withAlphaComponent(CGFloat(kMsgAlpha)) // 背景色(白)
        warningMessage.textAlignment = NSTextAlignment.center // 中央揃え
        warningMessage.font = UIFont.systemFont(ofSize: 20.0) // 初期文字サイズ
        warningMessage.numberOfLines = 3 // ラベル内の行数
//        warningMessage.layer.borderColor = UIColor.black.cgColor // 枠線の色(黒)
//        warningMessage.layer.borderWidth = 5.0 // 枠線の太さ
        warningMessage.layer.cornerRadius = 20.0 // 枠線を角丸にする
        warningMessage.clipsToBounds = true // 角を取る
        warningMessage.adjustsFontSizeToFitWidth = true // 文字の多さによってフォントサイズを調節する
        mapView!.addSubview(warningMessage)
        warningMessage.isHidden = true
        
        for i in 0 ..< jsonDataManager.sharedInstance.infoBox.count {
            appleMapsInfoBox.append(appleMapsAnnotation())
            appleMapsInfoBox[i].tagData = jsonDataManager.sharedInstance.infoBox[i]
            appleMapsInfoBox[i].coordinate = CLLocationCoordinate2DMake(appleMapsInfoBox[i].tagData.lat, appleMapsInfoBox[i].tagData.lon)
        }
        
        for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
            appleMapsWarnBox.append(appleMapsAnnotation())
            appleMapsWarnBox[i].tagData = jsonDataManager.sharedInstance.warnBox[i]
            appleMapsWarnBox[i].coordinate = CLLocationCoordinate2DMake(appleMapsWarnBox[i].tagData.lat, appleMapsWarnBox[i].tagData.lon)
        }
    }
    
    
    /* 画面が表示される直前 */
    override func viewWillAppear(_ animated: Bool) {
        
        super.viewWillAppear(animated)
        
        mapView?.delegate = self

        
        /* 現在地の取得を開始 */
        if CheckReachability(hostname: "www") {
            if CLLocationManager.authorizationStatus() == .authorizedAlways || CLLocationManager.authorizationStatus() == .authorizedWhenInUse {
                locationManager.delegate = self
                locationManager.startUpdatingLocation() // GPSの使用を開始する
                locationManager.desiredAccuracy = kCLLocationAccuracyBest // 精度を最高精度にする
            }
        }
        
        changeMapBut.addTarget(self, action: #selector(mapViewController.onClick_changeMap(_:)), for: .touchUpInside)
        displayMode = mode.applemap.rawValue // 現在開いている画面は地図画面であると設定する
        
        // ピンに画像を設定する
        for i in 0 ..< jsonDataManager.sharedInstance.infoBox.count {
            infoPinView.append(MKAnnotationView())
            updatePin(appleMapsInfoBox[i])
        }
        
        for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
            warnPinView.append(MKAnnotationView())
            circle.append(MKCircle())
            
            // 災害発生中のとき
            if jsonDataManager.sharedInstance.warnBox[i].stop.compare(Date()) == ComparisonResult.orderedDescending && Date().compare(jsonDataManager.sharedInstance.warnBox[i].start) == ComparisonResult.orderedDescending {
                
                updatePin(appleMapsWarnBox[i])
            }
        }
        
        
        // 現在地を中心に画面を表示する(起動してすぐにユーザーの現在地を取ることはできないため、1.5秒待つ)
        if CheckReachability(hostname: "www") {
            if CLLocationManager.authorizationStatus() == .authorizedAlways || CLLocationManager.authorizationStatus() == .authorizedWhenInUse {
                
                runAfterDelay(1.5) {
                    let coordinateRegion = MKCoordinateRegionMakeWithDistance((self.locationManager.location?.coordinate)!, 800, 800)
                    self.mapView!.setRegion(coordinateRegion, animated:true)
                }
            }
        }
        
        update() // 災害情報を更新する
        // kUpdateWarn秒に1回update()を発火させる
        updateTimer = Timer.scheduledTimer(timeInterval: kUpdateWarn, target: self, selector: #selector(mapViewController.update), userInfo: nil, repeats: true)
        
        
    }
    
    
    override func viewWillDisappear(_ animated: Bool) {
        
        super.viewWillDisappear(animated)
        
        for annotation in self.mapView!.annotations {
            self.mapView!.removeAnnotation(annotation)
        }
        
        changeMapBut.removeTarget(self, action: #selector(mapViewController.onClick_changeMap(_:)), for: .touchUpInside)
        vibration.vibStop()
        
    }
    
    /* 別の画面に遷移した直後(破棄) */
    override func viewDidDisappear(_ animated: Bool) {
        
        super.viewDidDisappear(animated)
        
        mapView!.delegate = nil
        locationManager.delegate = nil // デリゲートを止める
        locationManager.stopUpdatingLocation() // GPS取得を止める
        if messageTimer != nil {
            messageTimer.invalidate()
        }
        if viewTimer != nil {
            viewTimer.invalidate()
        }
        updateTimer.invalidate() // update()を発火させていたAppleMapsのタイマーを止める
    }
    
    
    // MARK:- デリゲート-MKMapViewDelegate
    
    /*
     * 地図を触った後
     * 拡大縮小に合わせて画像を張り替える
     */
    func mapView(_ mapView: MKMapView, regionDidChangeAnimated animated: Bool) {
        // キューを生成してサブスレッドで実行
        DispatchQueue(label: "scalingimage").async {
            self.scalingImage()
        }
    }
    
    /*
     * addAnnotationされたとき
     * ピンにタグ画像を貼る
     */
    func mapView(_ mapView: MKMapView, viewFor annotation: MKAnnotation) -> MKAnnotationView? {
        
        if let pin = annotation as? appleMapsAnnotation {
            
            if annotation === mapView.userLocation { // 現在地を示すアノテーションの場合はデフォルトのまま
                return nil
            } else {
                
                if let annotationView = mapView.dequeueReusableAnnotationView(withIdentifier: pin.tagData.inforType + String(pin.tagData.pinNum)) { // 再利用できる場合はそのまま返す
                    
                    // 情報タグのとき
                    if pin.tagData.inforType == kInfo {
                        infoPinView[pin.tagData.pinNum].image = pin.tagData.pinImage // ピンの画像設定
                        
                        // 警告タグのとき(災害発生中)
                    } else if pin.tagData.stop.compare(Date()) == ComparisonResult.orderedDescending && Date().compare(pin.tagData.start) == ComparisonResult.orderedDescending {
                        warnPinView[pin.tagData.pinNum].image = pin.tagData.pinImage // ピンの画像設定
                        
                    }
                    return annotationView
                    
                } else { // 再利用できるアノテーションが無い場合（初回など）は生成する
                    
                    if pin.tagData.pinImage != nil {
                        
                        let pN = pin.tagData.pinNum //ピン番号をつける
                        
                        if pin.tagData.inforType == kInfo {
                            infoPinView[pN!] = MKAnnotationView(annotation: annotation, reuseIdentifier: pin.tagData.inforType + String(pin.tagData.pinNum))
                            return getPinView(annotation, pinView: infoPinView[pN!], pinImage: pin.tagData.pinImage)
                            
                            // 警告タグのとき(災害発生中)
                        } else if pin.tagData.stop.compare(Date()) == ComparisonResult.orderedDescending && Date().compare(pin.tagData.start) == ComparisonResult.orderedDescending {
                            warnPinView[pN!] = MKAnnotationView(annotation: annotation, reuseIdentifier: pin.tagData.inforType + String(pin.tagData.pinNum))
                            return getPinView(annotation, pinView: warnPinView[pN!], pinImage: pin.tagData.pinImage)
                        }
                    }
                }
            }
        }
        
        mapView.userLocation.title = ""
        
        // ユーザーロケーションのとき
        return nil
    }
    
    
    
    /*
     * タグ画像がタップされたとき、
     * タップされた画像は拡大され、詳細画面が表示される
     */
    func mapView(_ mapView: MKMapView, didSelect view: MKAnnotationView) {
        
        if mapView.userLocation.coordinate.latitude == view.annotation!.coordinate.latitude && mapView.userLocation.coordinate.latitude == view.annotation!.coordinate.latitude {
            
        } else {
            
            // 情報タグのとき
            for i in 0 ..< jsonDataManager.sharedInstance.infoBox.count {
                if view.annotation!.coordinate.latitude == jsonDataManager.sharedInstance.infoBox[i].lat && view.annotation!.coordinate.longitude == jsonDataManager.sharedInstance.infoBox[i].lon {
                    pinData = jsonDataManager.sharedInstance.infoBox[i]
                    self.view.addSubview(cannotTouchView)
                    // kInfoAnimation秒で、情報タグを大きくする
                    UIView.animate(withDuration: kInfoAnimation, delay: 0.0, options: .curveEaseOut, animations: {
                        
                        // 拡大用(3.0倍)のアフィン行列を生成する.
                        view.transform = CGAffineTransform(scaleX: 3.0, y: 3.0)
                        mapView.deselectAnnotation(view.annotation!, animated: false)
                        
                        }, completion: nil)
                    break
                }
            }
            
            // 警告タグのとき
            for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
                if view.annotation!.coordinate.latitude == jsonDataManager.sharedInstance.warnBox[i].lat && view.annotation!.coordinate.longitude == jsonDataManager.sharedInstance.warnBox[i].lon {
                    pinData = jsonDataManager.sharedInstance.warnBox[i]
                    self.view.addSubview(cannotTouchView)
                    let scaleZoom = mapView.region.span.latitudeDelta
                    let tmpAnnotation: appleMapsAnnotation = appleMapsWarnBox[i] // 一旦他の場所にデータを保持させる
                    mapView.removeAnnotation(appleMapsWarnBox[i]) // 古い災害ピンを削除
                    appleMapsWarnBox[i] = tmpAnnotation
                    let newsize = screenWidth * CGFloat((circleRadius[i] * 2.0 * 0.7) / (scaleZoom * 111.0 * 1000.0))
                    appleMapsWarnBox[i].tagData.pinImage = makeTappedLabel(i, size: Double(newsize))
                    mapView.addAnnotation(appleMapsWarnBox[i])
                    break
                }
            }
            
            pinViewData = view // タップしたピンのデータを保持する
            
            // タグをタップしてからkShowDetail秒後に詳細画面を表示する
            runAfterDelay(kShowDetail) {
                if UIDevice.current.userInterfaceIdiom == .phone {
                    self.detailview = detailView(frame: CGRect(x: screenWidth * 0.1, y: screenWidth * 0.02, width: screenWidth * 0.8, height: screenHeight * 0.9))
                } else if UIDevice.current.userInterfaceIdiom == .pad {
                    self.detailview = detailView(frame: CGRect(x: screenWidth * 0.1, y: screenWidth * 0.1, width: screenWidth * 0.8, height: screenHeight * 0.8))
                }
                self.detailview!.delegate = self
                backgroundView = detailView.makebackgroungView()
                backgroundView.isUserInteractionEnabled = true
                backgroundView.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(mapViewController.onClick_detailBackground(_:))))
                
                self.view.addSubview(backgroundView)
                self.view.addSubview(self.detailview!)
            }
        }
    }
    
    /*
     * addOverlayされたとき、
     * マップに描く円の色などを設定する
     */
    func mapView(_ mapview: MKMapView, rendererFor overlay: MKOverlay) -> MKOverlayRenderer {
        
        let circle = MKCircleRenderer(overlay:overlay)
        var color = UIColor()
        
        for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
            // addOverLayされた円の緯度経度と、annotationBoxで登録されている緯度経度で同じものを探す
            if jsonDataManager.sharedInstance.warnBox[i].stop.compare(Date()) == ComparisonResult.orderedDescending && Date().compare(jsonDataManager.sharedInstance.warnBox[i].start) == ComparisonResult.orderedDescending {
                if jsonDataManager.sharedInstance.warnBox[i].lat == circle.circle.coordinate.latitude && jsonDataManager.sharedInstance.warnBox[i].lon == circle.circle.coordinate.longitude {
                    
                    // 災害カラーを設定する
                    switch jsonDataManager.sharedInstance.warnBox[i].riskType {
                        
                    case 0: // 火災：赤色
                        color = UIColor(red: 0.545, green: 0.020, blue: 0.220, alpha: 1.0)
                        
                    case 1, 7: // 浸水：青色
                        color = UIColor(red: 0.000, green: 0.400, blue: 1.000, alpha: 1.0)
                        
                    case 2: // 土砂崩れ：茶色
                        color = UIColor(red: 0.800, green: 0.400, blue: 0.000, alpha: 1.0)
                        
                    case 3, 4, 5, 6: // 道路閉塞：黄色
                        color = UIColor(red: 1.000, green: 0.945, blue: 0.024, alpha: 1.0)
                        
                    default: // その他の災害：緑色
                        color = UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: 1.0)
                        break
                    }
                    
                    circle.lineWidth = 10.0 // 円周の太さ
                    circle.fillColor = color.withAlphaComponent(0.6)
                    circle.strokeColor = color.withAlphaComponent(0.9)
                }
            }
        }
        
        return circle
    }
    
    // MARK:- デリゲート-CLLocationManagerDelegate
    func locationManager(_ manager: CLLocationManager, didFailWithError error: Error) {
        print("didFailWithError: \(error)")
    }
    
    
    /*
     * 位置情報のアクセス許可の状況が変わったときの処理
     */
    func locationManager(_ manager: CLLocationManager, didChangeAuthorization status: CLAuthorizationStatus) {
        
        switch status {
        // 設定によって制限されているとき、位置情報の取得を拒否しているとき
        case .restricted, .denied:
            manager.stopUpdatingLocation() // GPSの取得を停止する
            
        // 既に位置情報の取得が許可されているとき
        case .authorizedWhenInUse, .authorizedAlways:
            manager.startUpdatingLocation() // GPSの取得を開始する
            
        default: break
        }
    }
    
    /*
     * ユーザーの位置情報が更新されるたび
     * 目的地までの距離を計算し、新しくタグ画像を生成・貼り直しをする
     */
    func locationManager(_ manager: CLLocationManager, didUpdateLocations locations: [CLLocation]) {
        
        userLat = (locationManager.location?.coordinate.latitude)!
        userLon = (locationManager.location?.coordinate.longitude)!
        
    }
    
    /*
     * 警告メッセージを表示する
     */
    func updateMessage() {
        
        if msgCount == box.count {
            msgCount = 0
            msgSafeCount = 0
        }
        
        let num = box[msgCount]  // 現在発生している災害のインデックスを渡す
        
        // 現在地からその災害までの距離を求める
        jsonDataManager.sharedInstance.warnBox[num].distance = calcDistance(jsonDataManager.sharedInstance.warnBox[num].lat, lon: jsonDataManager.sharedInstance.warnBox[num].lon, uLat: userLat, uLon: userLon)
        
        // 0m以下・・・侵入
        if jsonDataManager.sharedInstance.warnBox[num].distance - Int(circleRadius[num]) < 0 {
            warningMessage.isHidden = false
            // 侵入していることを通知音で知らせる
            if audioPlayerIntr != nil {
                audioPlayerIntr.play()
                if vibration.isVibration == false {
                    vibration.vibIntrusionStart()
                }
            }
            warningMessage.text = jsonDataManager.sharedInstance.warnBox[num].message2 // 警告メッセージ
            msgCount += 1
            
            // 0m以上、kNearMsg(m)以下・・・付近
        } else if jsonDataManager.sharedInstance.warnBox[num].distance - Int(circleRadius[num]) < kNearMsg {
            warningMessage.isHidden = false
            // 付近にいることを通知音で知らせる
            if audioPlayerIntr.isPlaying == true {
                audioPlayerIntr.stop()
                vibration.vibStop()
            }
            if audioPlayerNear != nil {
                audioPlayerNear.play()
                if vibration.isVibration == false {
                    vibration.vibNearStart()
                }
            }
            warningMessage.text = jsonDataManager.sharedInstance.warnBox[num].message1 // 警告メッセージ
            msgCount += 1
            
            // それ以外・・・安全
        } else {
            if audioPlayerNear.isPlaying == true {
                audioPlayerNear.stop()
                vibration.vibStop()
            }
            msgSafeCount += 1
            if msgSafeCount == box.count {
                msgSafeCount = 0
                warningMessage.isHidden = true
                return
            }
            msgCount += 1
            messageTimer.invalidate()
            updateMessage()
        }
        
        if !messageTimer.isValid {
            messageTimer = Timer.scheduledTimer(timeInterval: kUpdateMM, target: self, selector: #selector(mapViewController.updateMessage), userInfo: nil, repeats: true)
        }
        
        
    }
    
    
    /*
     * 警告モードを表示する
     * ここで、警告モードの色や濃さ、表示幅を変更できる
     */
    func updateView() {
        
        if viewCount == box.count {
            viewCount = 0
            viewSafeCount = 0
        }
        
        let num = box[viewCount] // 現在発生している災害のインデックスを渡す
        
        // 現在地からその災害までの距離を求める
        jsonDataManager.sharedInstance.warnBox[num].distance = calcDistance(jsonDataManager.sharedInstance.warnBox[num].lat, lon: jsonDataManager.sharedInstance.warnBox[num].lon, uLat: userLat, uLon: userLon)
        
        // 0m以下・・・侵入
        if jsonDataManager.sharedInstance.warnBox[num].distance - Int(circleRadius[num]) < 0 {
            
            switch jsonDataManager.sharedInstance.warnBox[num].riskType {
                
            case 0: // 火災：赤色
                warningView.frame = CGRect(x: 0.0, y: 0.0, width: CGFloat(screenWidth), height: CGFloat(screenHeight))
                warningView.backgroundColor = UIColor(red: 1.000, green: 0.000, blue: 0.000, alpha: 1.0)
                
            case 1, 7: // 浸水：青色
                warningView.frame = CGRect(x: 0.0, y: CGFloat(screenHeight * 0.75), width: CGFloat(screenWidth), height: CGFloat(screenHeight / 4))
                warningView.backgroundColor = UIColor(red: 0.000, green: 0.000, blue: 0.600, alpha: 1.0)
                
            case 2: // 土砂崩れ：茶色
                warningView.frame = CGRect(x: 0.0, y: CGFloat(screenHeight * 0.75), width: CGFloat(screenWidth), height: CGFloat(screenHeight / 4))
                warningView.backgroundColor = UIColor(red: 0.800, green: 0.400, blue: 0.000, alpha: 1.0)
                
            case 3, 4, 5, 6: // 道路閉塞：黄色
                warningView.frame = CGRect(x: 0.0, y: CGFloat(screenHeight * 0.75), width: CGFloat(screenWidth), height: CGFloat(screenHeight / 4))
                //warningView.frame = CGRect(x: 0.0, y: 0.0, width: CGFloat(screenWidth), height: CGFloat(screenHeight))
                warningView.backgroundColor = UIColor(red: 1.000, green: 0.945, blue: 0.024, alpha: 1.0)
                
            default: // その他の災害：緑色
                warningView.frame = CGRect(x: 0.0, y: 0.0, width: CGFloat(screenWidth), height: CGFloat(screenHeight))
                warningView.backgroundColor = UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: 1.0)
                break
            }
            
            mapView!.alpha = CGFloat(kMapAlpha) // 画面の色の濃さを設定する((濃)0<-->1.0(薄))
            
            if configview != nil {
                self.view.bringSubview(toFront: configview!)
            }
            
            viewCount += 1
            
            // 0m以上・・・安全
        } else {
            viewSafeCount += 1
            if viewSafeCount == box.count {
                viewSafeCount = 0
                return
            }
            viewCount += 1
            mapView!.alpha = 1.0
            viewTimer.invalidate()
            updateView()
        }
        
        if !viewTimer.isValid {
            viewTimer = Timer.scheduledTimer(timeInterval: kUpdateMM, target: self, selector: #selector(mapViewController.updateView), userInfo: nil, repeats: true)
        }
    }
    
    
    // MARK:- detailViewDelegate
    func detailViewFinish() {
        transFromDetailToMap(pinViewData)
        detailview?.delegate = nil
        detailview?.removeFromSuperview()
        
    }
    
    // MARK:- configViewDelegate
    func configViewFinish() {
        transFromDetailToMap(pinViewData)
        configview?.delegate = nil
        configview?.removeFromSuperview()
    }
    
    
    
    /**
     * 拡大縮小や現在地の更新による新しいピン画像の設定
     */
    func scalingImage() {
        
        let scaleZoom = mapView!.region.span.latitudeDelta
        
        if scaleZoom - beforeZoomLv >= 0.00001 || scaleZoom - beforeZoomLv <= -0.00001 {
        
            for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
                
                if jsonDataManager.sharedInstance.warnBox[i].stop.compare(Date()) == ComparisonResult.orderedDescending && Date().compare(jsonDataManager.sharedInstance.warnBox[i].start) == ComparisonResult.orderedDescending {
                    
                    
                    // scaleZoom は表示範囲（縮尺度）で、SCALEZOOM = 1 で画面の縦横が1度ということになる
                    // 1度 = 約111km
                    //
                    //                     タグのサイズ (m)
                    //  画面の横幅 ×  ----------------------------
                    //                 縮尺度 × 111(km) × 1000    ← 画面が表示されている実際の範囲を m で計算している
                    //
                    // これで、画面の何%で表示すればいいかわかるので、それにscreenWidthをかけると、画面に表示する画像のサイズが決定する
                    //
                    // タグのサイズは、災害円の直径
                    
                    if jsonDataManager.sharedInstance.warnBox[i].expandImage != nil {
                        
                        let han: Double = circleRadius[i] * 2.0 + 0.1
                        let newsize: CGFloat = screenWidth * CGFloat((han * 0.7) / (scaleZoom * 111.0 * 1000.0))
                        
                        // メインスレッドで実行
                        DispatchQueue.main.async {
                            self.changeImage(&self.appleMapsWarnBox[i], newsize: newsize)
                        }
                    }
                }
            }
        }
        beforeZoomLv = scaleZoom
    }
    
    
    
    /**
     * ピンのタグ画像を新しいタグ画像に更新する
     *
     * @param annotation 更新するピン
     * @param newsize 新しいピン画像の縦幅
     */
    func changeImage(_ annotation: inout appleMapsAnnotation, newsize: CGFloat) {
        
        let newimage = getResizeImage(annotation.tagData.expandImage, newHeight: newsize) // 新しい画像
        let tmpAnnotation: appleMapsAnnotation = annotation // 一旦他の場所にデータを保持させる
        mapView!.removeAnnotation(annotation) // 古い災害ピンを削除
        annotation = tmpAnnotation
        annotation.tagData.pinImage = newimage
        
        mapView!.addAnnotation(annotation)
    }
    
    
    /**
     * ピンビューの設定
     *
     * @param annotation 設定対象のピン
     * @param pinView 設定対象のピンビュー
     * @param pinImage ピンに貼るタグ画像
     *
     * @return ピンビューを返す
     */
    func getPinView(_ annotation: MKAnnotation, pinView: MKAnnotationView, pinImage: UIImage) -> MKAnnotationView {
        
        pinView.annotation = annotation
        pinView.image = pinImage // ピンの画像設定
        pinView.canShowCallout = false // ピンをタップ時の吹き出しを非表示
        return pinView
    }
    
    
    /**
     * ピンのタグ画像を新しいタグ画像に更新する
     * (現在地更新によって距離が変わるときに使用する)
     * (画像サイズの変更はしない)
     *
     * @param annotation 更新するピン
     */
    func updatePin(_ annotation: appleMapsAnnotation) {
                
        self.mapView!.addAnnotation(annotation) // ピン情報の更新
    }
    
    
    /**
     * 災害円を描く
     *
     * @param index jsonDataManager.sharedInstance.warnBoxのインデックス
     * @param startNow 災害が発生してから現在までの経過時間(分)
     */
    func makeCircle(_ index: Int, startNow: Double) {
        
        // アプリを開いたら災害範囲がすでに最大になっていたとき、最大の半径で円を描く
        if CLLocationDistance(startNow) > CLLocationDistance(jsonDataManager.sharedInstance.warnBox[index].range) {
            circleRadius[index] = CLLocationDistance(jsonDataManager.sharedInstance.warnBox[index].range)
            
        } else { // 経過時間分だけの半径の円を描く
            circleRadius[index] = CLLocationDistance(startNow)
        }
        
        self.mapView!.remove(circle[index])
        circle[index] = MKCircle(center: CLLocationCoordinate2D(latitude: jsonDataManager.sharedInstance.warnBox[index].lat, longitude: jsonDataManager.sharedInstance.warnBox[index].lon), radius: circleRadius[index])
        self.mapView!.add(circle[index], level: MKOverlayLevel.aboveRoads)
        
    }
    
    /*
     * 詳細画面を閉じたとき
     * タップして拡大されていたタグを元の大きさに戻す
     */
    func transFromDetailToMap(_ view: MKAnnotationView) {
        
        // 警告タグのとき
        if pinData.inforType == kWarn {
            
            // kWarnAnimation秒後に警告タグを元に戻す
            runAfterDelay(kWarnAnimation) {
                let scaleZoom = self.mapView!.region.span.latitudeDelta
                let han: Double = circleRadius[pinData.pinNum] * 2.0
                let newsize = screenWidth * CGFloat((han * 0.7) / (scaleZoom * 111.0 * 1000.0))
                self.changeImage(&self.appleMapsWarnBox[pinData.pinNum], newsize: newsize)
            }
            
            // 情報タグのとき
        } else if pinData.inforType == kInfo {
            
            view.transform = CGAffineTransform(scaleX: 3.0, y: 3.0)
            
            // kInfoAnimation秒で情報タグを元の大きさに戻す
            UIView.animate(withDuration: kInfoAnimation, delay: 0.0, options: .curveEaseOut, animations: {
                
                // 縮小用(1/3倍)のアフィン行列を生成する.
                view.transform = CGAffineTransform(scaleX: 1.0, y: 1.0)
                
                }, completion: nil)
            
        }
        
        // kTouchView後に地図画面が触れるようになる
        runAfterDelay(kTouchView) {
            cannotTouchView.removeFromSuperview()
        }
    }
    
    
    /*
     * 画面左下のボタンをタップしたとき
     * ARカメラ画面に遷移する
     */
    func onClick_AR(_ sender: UIButton) {
        self.present(cameraViewController(), animated: true, completion: nil)
    }
    
    
    /*
     * 設定画面の背景をタップしたとき
     * 表示されているものが廃棄される
     */
    func onClick_configBackground(_ sender: UISwipeGestureRecognizer) {
        
        mapView?.isScrollEnabled = true // スクロールできるようにする
        mapView?.isZoomEnabled = true // 拡大縮小できるようにする
        
        var location: CGPoint = mapView!.center
        location.x = view.center.x
        self.warningView.backgroundColor = UIColor.clear
        
        UIView.animate(
            withDuration: 0.1,
            delay:0.0,
            options : UIViewAnimationOptions.curveEaseIn,
            animations : {
                self.warningView?.center = location
                self.mapView?.center = location
            },
            completion: {
                (value: Bool) in
                
                self.configview?.removeFromSuperview()
                ConfigView().deleteConfigDisplay()
            }
        )
        
    }
    
    /*
     * 詳細画面の背景をタップしたとき
     * 表示されているものが廃棄される
     */
    func onClick_detailBackground(_ sender: UITapGestureRecognizer) {
        transFromDetailToMap(pinViewData)
        detailview?.removeFromSuperview()
        detailView().deleteDetailView()
    }
    
    
    /*
     * 設定画面の「OpenStreetMap」を
     * タップしたときに，地図データを切り替える
     */
    internal func onClick_changeMap(_ sender: UIButton) {
        
        mapView?.isScrollEnabled = true // スクロールできるようにする
        mapView?.isZoomEnabled = true // 拡大縮小できるようにする
        
        var location: CGPoint = mapView!.center
        location.x = view.center.x
        self.warningView?.center = location
        self.mapView?.center = location
        
        displayMode = mode.osm.rawValue
        
        configview?.removeFromSuperview()
        ConfigView().deleteConfigDisplay()
        
        let osmVC = osmViewController()
        UIApplication.shared.keyWindow?.rootViewController = osmVC
    }
    
    
    /*
     * 画面左上のボタンをタップしたとき
     * 現在地を中心に画面表示する
     */
    internal func onClick_nowLocate(_ sender: UIButton) {
//        if mapView?.isUserLocationVisible == true {
            let coordinateRegion = MKCoordinateRegionMakeWithDistance(self.mapView!.userLocation.coordinate, 800, 800)
            self.mapView!.setRegion(coordinateRegion, animated:true)
//        }
    }
    
    
    /*
     * 現在時刻で災害が発生しているとき、
     * 災害円を描く
     */
    func update() {
        
        let nowTime = Date() // 現在時刻
        box.removeAll()
        
        // 警告メッセージのタイマーを止める
        if messageTimer != nil {
            messageTimer.invalidate()
        }
        
        // 警告モードのタイマーを止める
        if viewTimer != nil {
            viewTimer.invalidate()
        }
        
        // インデックスを初期化
        msgCount = 0
        viewCount = 0
        
        for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
            
            // 過去の災害
            if nowTime.compare(jsonDataManager.sharedInstance.warnBox[i].stop) == ComparisonResult.orderedDescending {
                // stopの時刻を過ぎたから、災害の円や文字を消す
                self.mapView!.remove(circle[i]) // 円を消す
                self.mapView!.alpha = 1.0
                self.warnPinView[i].removeFromSuperview() // 災害のピン情報を削除
                cameraViewController().warningView.backgroundColor = UIColor.clear
                if warnImageBox.count != 0 {
                    warnImageBox[i].removeFromSuperview()
                }
                
                // 現在災害発生中
            } else if jsonDataManager.sharedInstance.warnBox[i].stop.compare(nowTime) == ComparisonResult.orderedDescending && nowTime.compare(jsonDataManager.sharedInstance.warnBox[i].start) == ComparisonResult.orderedDescending {
                
                let Sn = Date().timeIntervalSince(jsonDataManager.sharedInstance.warnBox[i].start) / 60 * kUpdateWarn // 開始時刻(start)と現在時刻(now)の差
                makeCircle(i, startNow: Sn)
                
                updatePin(appleMapsWarnBox[i])
                
                
                // 警告タグの範囲を更新
                appleMapsWarnBox[i].tagData.expandImage = makeLabel(i, inforType: kWarn)
                let scaleZoom = mapView!.region
                let han: Double = circleRadius[i] * 2.0 + 0.1
                let newsize: CGFloat = screenWidth * CGFloat((han * 0.7) / (scaleZoom.span.latitudeDelta * 111.0 * 1000.0))
                changeImage(&appleMapsWarnBox[i], newsize: newsize)
                
                box.append(i)
                
            } else {
                
            }
        }
        
        // 災害発生していないとき
        if box.count == 0 {
            warningMessage.isHidden = true
        } else {
            
            // 警告メッセージのタイマーを開始させる
            if messageTimer == nil {
                messageTimer = Timer.scheduledTimer(timeInterval: kUpdateMM, target: self, selector: #selector(mapViewController.updateMessage), userInfo: nil, repeats: true)
            } else if !messageTimer.isValid {
                messageTimer = Timer.scheduledTimer(timeInterval: kUpdateMM, target: self, selector: #selector(mapViewController.updateMessage), userInfo: nil, repeats: true)
            }
            
            // 警告モードのタイマーを開始させる
            if viewTimer == nil {
                viewTimer = Timer.scheduledTimer(timeInterval: kUpdateMM, target: self, selector: #selector(mapViewController.updateView), userInfo: nil, repeats: true)
                
            } else if !viewTimer.isValid {
                viewTimer = Timer.scheduledTimer(timeInterval: kUpdateMM, target: self, selector: #selector(mapViewController.updateView), userInfo: nil, repeats: true)
            }
            
        }
    }
    
    /*
     * 設定画面を開く
     */
    internal func onClick_config(_ sender: UIButton) {
        
        mapView?.isScrollEnabled = false // スクロールできないようにする
        mapView?.isZoomEnabled = false // 拡大縮小できないようにする
        
        backgroundView = detailView.makebackgroungView()
        backgroundView.isUserInteractionEnabled = true
        backgroundView.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(mapViewController.onClick_configBackground(_:))))
        self.configview = ConfigView(frame: CGRect(x: screenWidth / 3 * 2, y: 0, width: screenWidth / 3, height: screenHeight))
        self.warningView.backgroundColor = UIColor.clear

        var location: CGPoint = mapView!.center
        location.x = view.center.x - screenWidth / 3
        
        UIView.animate(
            withDuration: 0.1,
            delay:0.0,
            options : UIViewAnimationOptions.curveEaseIn,
            animations : {
                self.warningView?.center = location
                self.mapView?.center = location
            },
            completion: {
                (value: Bool) in
                
                self.mapView?.addSubview(backgroundView)
                self.view.bringSubview(toFront: backgroundView)
                
                self.view.addSubview(self.configview!)
                self.view.sendSubview(toBack: self.configview!)
            }
        )
    }
    
    /*
     * ネットワークに接続されているか確認する
     */
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
}
