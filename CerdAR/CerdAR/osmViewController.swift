//
//  osmViewController.swift
//  CerdAR
//
//  Copyright (c) 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
//

import UIKit
import MapKit
import CoreLocation
import CoreMotion
import CoreImage
import Mapbox
import SystemConfiguration


let mapboxAccess = "pk.eyJ1Ijoic2FicmluYXp1cmFpbWkiLCJhIjoiY2lyaGFmbzFjMDE5cGc5bm42c2ozMnJlYSJ9.7W_kYbSqA3sEZUyS14s_Tw"


// OSMで持つデータ
class MGLTagData: MGLPointAnnotation {
    
    var inforType: String!    // 種別(info or warn)
    var pinNum: Int!          // ピン番号
}

class osmViewController: UIViewController, CLLocationManagerDelegate, MGLMapViewDelegate, detailViewDelegate {
    
    var detailview: detailView?
    var configview: ConfigView?
    var mapView = MGLMapView()
    
    var center: CLLocationCoordinate2D! // 中心
    
    let motionManager = CMMotionManager() // 加速度センサ
    
    var locationManager: CLLocationManager! // 現在地の取得
    
    var infoPinView = [MGLAnnotationImage]()
    var warnPinView = [MGLAnnotationImage]()
    
    var scaleZoom: MKCoordinateRegion! // タグをタップしたときの表示範囲を保持
    
    var warningView: UIView! // 災害範囲内に侵入した時に画面の色を変える
    var warnNums: [Int] = [] // 災害番号
    var msgCount = 0
    var msgSafeCount = 0
    var viewCount = 0
    var viewSafeCount = 0
    var messageTimer: Timer!
    var viewTimer: Timer!
    var box: [Int] = []
    
    var circle = [MKCircle]() // 災害範囲の円
    
    var updateTimer: Timer! // 一定時間ごとにupdate()を発火させる
    
    var warnState = warningState.safe.rawValue // 現在ユーザーは災害からどの位置にいるか(安全・付近・侵入)
    
    var polygon = [MGLPolygon]()
    var polyNum = 0
    
    var tapped = false // 情報タグをタップしたか
    
    let warningMessage = UILabel(frame: CGRect(x: screenWidth - 55.0 - butSize - screenWidth * 0.38, y: screenHeight - 125.0, width: screenWidth * 0.38, height: screenHeight * 0.13))
    
    
    // 定数
    let kWarnX = 0.6 // 警告メッセージのx座標の倍率
    let kWarnY = 0.8 // 警告メッセージのy座標の倍率
    let kWarnW = 0.38 // 警告メッセージの横幅の倍率
    let kWarnH = 0.13 // 警告メッセージの縦幅の倍率
    let kWarnFont: CGFloat = 20 // 警告メッセージのフォントサイズ
    let kWarnLine = 2 // 警告メッセージの行数
    let kWarnBorder: CGFloat = 5 // 警告メッセージの枠線の太さ
    let kWarnCorner: CGFloat = 20 // 警告メッセージの枠線の角丸
    
    let kMapNormal: CGFloat = 1.0 // 地図の透明度
    let kMapAbnormal: CGFloat = 0.8 // 地図の透明度
    
    let kTagNewSize = 100.0 // 新しいタグ画像のサイズ
    let kMPerDeg = 111.0 // 111km/度
    let kMeter = 1000.0 // kmからmに換算する
    let kDia = 2.0 // 直径
    let kWarnNewSize = 0.7 // 新しい警告タグの画像のサイズ
    
    let kCircleLine: CGFloat = 10 // 災害円の円周の太さ
    
    let kFill: CGFloat = 0.6   // 円内部の透明度
    let kStroke: CGFloat = 0.9 // 円周の透明度
    
    let calendar = Calendar(identifier: Calendar.Identifier.gregorian)
    
    let kZero: CGFloat = 0 // 初期値0
    let kTagFont: CGFloat = 100 // タグのフォントサイズ
    let kTagLine = 3 // タグの行数
    let kTagXY: CGFloat = 40 // タグのx,y座標
    let kTagW: CGFloat = 80 // タグの横幅
    let kTagH: CGFloat = 100 // タグの縦幅
    let kTagSize: CGFloat = 500 // タグ画像のサイズ
    let kZoomLevel = 0.001 // タグをタップしたときにzoomLevelまでズームインする
    let kZoomTime = 1.0 // ズームする時間
    let kZoomDelay = 0.0 // 遅延時間
    let kZoomOutDelay = 1.0 // 遷移後からズームアウト開始までの時間
    
    
    
    // MARK: ライフサイクル
    override func viewDidLoad() {
        super.viewDidLoad()
        print("osm:viewdidload")
        self.title = "map"
        
        /* 警告ビューの設定 */
        warningView = UIView(frame: CGRect.init(x: kZero, y: kZero, width: CGFloat(screenWidth), height: CGFloat(screenHeight)))
        view.addSubview(warningView) // viewに追加
        
        /* マップビューの設定 */
        mapView.frame = self.view.frame
        mapView.showsUserLocation = true // 現在地を表示する
        // スケールバーを表示する
        mapView.delegate = self
        view.addSubview(mapView)
        
        locationManager = CLLocationManager()
        
        // 画面遷移するためのボタンを生成
        let toCam_button = UIButton()
        let buttonImage: UIImage = UIImage(named: "icon_camera.png")!
        toCam_button.frame = CGRect(x: 0.0, y: 0.0, width: butSize, height: butSize)
        toCam_button.setImage(buttonImage, for: UIControlState())
        toCam_button.layer.position = CGPoint(x: 55.0, y: self.view.bounds.height - 55.0)
        mapView.addSubview(toCam_button)
        toCam_button.addTarget(self, action: #selector(osmViewController.onclick_AR(_:)), for: .touchUpInside)
        
        // 設定画面へ遷移するためのボタン生成
        let toCon_button = UIButton()
        let conButImage: UIImage = UIImage(named: "icon_menu.png")!
        toCon_button.frame = CGRect(x: 0.0, y: 0.0, width: butSize, height: butSize)
        toCon_button.setImage(conButImage, for: UIControlState())
        toCon_button.layer.position = CGPoint(x: self.view.bounds.width - 55.0, y: self.view.bounds.height - 55.0)
        mapView.addSubview(toCon_button)
        toCon_button.addTarget(self, action: #selector(osmViewController.onClick_config(_:)), for: .touchUpInside)
        
        
        // 画面の中心を現在地にするためのボタン生成
        let nowLoc_button = UIButton()
        let locButImage: UIImage = UIImage(named: "icon_locate.png")!
        nowLoc_button.frame = CGRect.init(x: 0, y: 0, width: butSize, height: butSize)
        nowLoc_button.setImage(locButImage, for: UIControlState())
        nowLoc_button.layer.position = CGPoint(x: 55.0, y: 55.0)
        mapView.addSubview(nowLoc_button)
        
        nowLoc_button.addTarget(self, action: #selector(osmViewController.nowLocate(_:)), for: .touchUpInside)
        
        /* 警告メッセージの設定 */
        warningMessage.textColor = UIColor.black // 文字色(黒)
        warningMessage.backgroundColor = UIColor.white // 背景色(白)
        warningMessage.textAlignment = NSTextAlignment.center // 中央揃え
        warningMessage.font = UIFont.systemFont(ofSize: kWarnFont) // 初期文字サイズ
        warningMessage.numberOfLines = kWarnLine // ラベル内の行数
        warningMessage.layer.borderColor = UIColor.black.cgColor // 枠線の色(黒)
        warningMessage.layer.borderWidth = kWarnBorder // 枠線の太さ
        warningMessage.layer.cornerRadius = kWarnCorner // 枠線を角丸にする
        warningMessage.clipsToBounds = true
        mapView.addSubview(warningMessage)
        
        /* ピンの設定 */
        for i in 0 ..< jsonDataManager.sharedInstance.infoBox.count {
            infoPinView.append(MGLAnnotationImage())
            osmInfoBox[i].coordinate = CLLocationCoordinate2D(latitude: jsonDataManager.sharedInstance.infoBox[i].lat, longitude: jsonDataManager.sharedInstance.infoBox[i].lon)
            mapView.addAnnotation(osmInfoBox[i])
        }
        
        for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
            warnPinView.append(MGLAnnotationImage())
            polygon.append(MGLPolygon())
            osmWarnBox[i].coordinate = CLLocationCoordinate2D(latitude: jsonDataManager.sharedInstance.warnBox[i].lat, longitude: jsonDataManager.sharedInstance.warnBox[i].lon)
            mapView.addAnnotation(osmWarnBox[i])
        }
        
        
        
        // 画面の中心をユーザーの現在地にし、ズームレベル15で表示する
        if CheckReachability(hostname: "www") {
            if CLLocationManager.authorizationStatus() == .authorizedAlways || CLLocationManager.authorizationStatus() == .authorizedWhenInUse {
                runAfterDelay(1.5) {
                    self.mapView.setCenter((self.locationManager.location?.coordinate)!, zoomLevel: 15.0, animated: true)
                }
            }
        }
    }
    
    
    
    
    /* 画面が表示される直前 */
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        print("osm:viewWillAppear")
        
        displayMode = mode.osm.rawValue
        
        update() // 災害円を描く
        // 60秒に1回update()を発火させる
        if updateTimer == nil {
            updateTimer = Timer.scheduledTimer(timeInterval: 60, target: self, selector: #selector(osmViewController.update), userInfo: nil, repeats: true)
        }
        
        self.navigationController?.setNavigationBarHidden(true, animated: true)
        
        mapView.delegate = self
        
        /* 現在地の取得を開始 */
        if CheckReachability(hostname: "www") {
            if CLLocationManager.authorizationStatus() == .authorizedAlways || CLLocationManager.authorizationStatus() == .authorizedWhenInUse {
                locationManager.delegate = self
                locationManager.startUpdatingLocation() // GPSの使用を開始する
                locationManager.desiredAccuracy = kCLLocationAccuracyBest // 精度を最高精度にする
            }
        }
        
        changeMapBut.addTarget(self, action: #selector(osmViewController.changeMap(_:)), for: .touchUpInside)
        
        motionManager.magnetometerUpdateInterval = 0.1 // 加速度センサを取得する間隔
        for i in 0 ..< jsonDataManager.sharedInstance.infoBox.count {
            infoPinView[i].image = jsonDataManager.sharedInstance.infoBox[i].pinImage
            mapView.addAnnotation(osmInfoBox[i])
        }
    }
    
    
    /* 別の画面に遷移した直後(破棄) */
    override func viewDidDisappear(_ animated: Bool) {
        super.viewDidDisappear(animated)
        print("osm:viewDidDisappear")
        mapView.delegate = nil
        locationManager.delegate = nil
        locationManager.stopUpdatingLocation() // GPSの更新を停止する
        if messageTimer != nil {
            messageTimer.invalidate()
        }
        if viewTimer != nil {
            viewTimer.invalidate()
        }
        updateTimer.invalidate()
    }
    
    
    override func viewWillDisappear(_ animated: Bool) {
        print("osm:viewWillDisappear")
        if mapView.annotations?.count != nil {
            print(mapView.annotations?.count)
            for annotation in self.mapView.annotations! {
                self.mapView.removeAnnotation(annotation)
            }
        }
    }
    
    
    // MARK: デリゲート-MKMapViewDelegate
    
    /*
     * 地図を触った後
     * 拡大縮小に合わせて画像を張り替える
     */
    func mapView(_ mapView: MGLMapView, regionDidChangeAnimated animated: Bool) {
        if tapped == false {
            scalingImage()
        }
    }
    
    
    /*
     * ピン画像の設定をする
     */
    func mapView(_ mapView: MGLMapView, imageFor annotation: MGLAnnotation) -> MGLAnnotationImage? {
        
        if let pin = annotation as? MGLTagData {
            
            if annotation === mapView.userLocation { // 現在地を示すアノテーションの場合はデフォルトのまま
                return nil
                
            } else {
                if pin.inforType == kInfo {
                    if infoPinView[pin.pinNum] == mapView.dequeueReusableAnnotationImage(withIdentifier: pin.inforType + String(pin.pinNum)) {
                        infoPinView[pin.pinNum].image = jsonDataManager.sharedInstance.infoBox[pin.pinNum].pinImage
                        return infoPinView[pin.pinNum]
                        
                    } else { // 再利用できるアノテーションが無い場合（初回など）は生成する
                        infoPinView[pin.pinNum] = MGLAnnotationImage(image: jsonDataManager.sharedInstance.infoBox[pin.pinNum].pinImage, reuseIdentifier: pin.inforType + String(pin.pinNum))
                        return infoPinView[pin.pinNum]
                    }
                    
                } else if pin.inforType == kWarn {
                    if jsonDataManager.sharedInstance.warnBox[pin.pinNum].stop.compare(Date()) == ComparisonResult.orderedDescending && Date().compare(jsonDataManager.sharedInstance.warnBox[pin.pinNum].start) == ComparisonResult.orderedDescending {
                        
                        if warnPinView[pin.pinNum] == mapView.dequeueReusableAnnotationImage(withIdentifier: pin.inforType + String(pin.pinNum)) {
                            warnPinView[pin.pinNum].image = jsonDataManager.sharedInstance.warnBox[pin.pinNum].pinImage
                            return warnPinView[pin.pinNum]
                            
                        } else { // 再利用できるアノテーションが無い場合（初回など）は生成する
                            warnPinView[pin.pinNum] = MGLAnnotationImage(image: jsonDataManager.sharedInstance.warnBox[pin.pinNum].pinImage, reuseIdentifier: pin.inforType + String(pin.pinNum))
                            return warnPinView[pin.pinNum]
                        }
                    }
                }
                
            }
        }
        
        mapView.userLocation!.title = ""
        
        // ユーザーロケーションのとき
        return nil
    }
    
    
    
    /*
     * タグ画像がタップされたとき、
     * タップされた画像は赤くなり、詳細画面が表示される
     */
    func mapView(_ mapView: MGLMapView, didSelect annotation: MGLAnnotation) {
        self.view.addSubview(cannotTouchView) // 画面をさわれないようにする
        
        viewMode = viewmode.detail.rawValue
        tapped = true
        
        if mapView.userLocation!.coordinate.latitude == annotation.coordinate.latitude && mapView.userLocation!.coordinate.longitude == annotation.coordinate.longitude {
            // 現在地を示すアノテーションの場合はデフォルトのまま
            
        } else { // タップしたタグを赤くする
            
            for i in 0 ..< jsonDataManager.sharedInstance.infoBox.count {
                if annotation.coordinate.latitude == jsonDataManager.sharedInstance.infoBox[i].lat && annotation.coordinate.longitude == jsonDataManager.sharedInstance.infoBox[i].lon {
                    pinData = jsonDataManager.sharedInstance.infoBox[i]
                    if jsonDataManager.sharedInstance.infoBox[i].picType != nil {
                        self.makeRedTag(i, img: UIImage(named: "icon_infoTag_red.png")!)
                        break
                    }
                }
            }
            
            for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
                if annotation.coordinate.latitude == jsonDataManager.sharedInstance.warnBox[i].lat && annotation.coordinate.longitude == jsonDataManager.sharedInstance.warnBox[i].lon {
                    
                    pinData = jsonDataManager.sharedInstance.warnBox[i]
                    
                    let newsize: CGFloat = CGFloat(Double(screenWidth) * ((circleRadius[i] * kDia * kWarnNewSize) / (300 * (21 - mapView.zoomLevel))))
                    warnPinView[i].image = makeTappedLabel(i, size: Double(newsize))
                    let newImage = makeTappedLabel(i, size: Double(newsize))
                    
                    jsonDataManager.sharedInstance.warnBox[i].pinImage = getResizeImage(newImage, newHeight: kTagSize)
                    jsonDataManager.sharedInstance.warnBox[i].expandImage = getResizeImage(newImage, newHeight: kTagSize)
                    changeImage(&jsonDataManager.sharedInstance.warnBox[i], MGLtag: osmWarnBox[i], newsize: newsize)
                    
                    break
                }
            }
        }
        
        
        self.detailview = detailView(frame: CGRect(x: screenWidth * 0.1, y: screenWidth * 0.1, width: screenWidth * 0.8, height: screenHeight * 0.8))
        self.detailview!.delegate = self
        backgroundView = detailView.makebackgroungView()
        backgroundView.isUserInteractionEnabled = true
        backgroundView.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(osmViewController.onClick_detailBackground(_:))))
        
        runAfterDelay(1.5) { // タップしてから1.5秒後に遷移する
            self.view.addSubview(backgroundView)
            self.view.addSubview(self.detailview!)
        }
    }
    
    
    /*
     * 災害円が追加されると呼ばれる
     * 追加された円の色を設定する
     */
    func mapView(_ mapView: MGLMapView, fillColorForPolygonAnnotation annotation: MGLPolygon) -> UIColor {
        
        switch jsonDataManager.sharedInstance.warnBox[polyNum].riskType {
            
        case 0: // 火災のとき：赤色
            return UIColor(red: 0.545, green: 0.020, blue: 0.220, alpha: 0.6)
            
        case 1: // 浸水のとき：青色
            return UIColor(red: 0.000, green: 0.400, blue: 1.000, alpha: 0.6)
            
        case 2: // 土砂崩れのとき：茶色
            return UIColor(red: 0.800, green: 0.400, blue: 0.000, alpha: 0.6)
            
        case 3, 4, 5, 6: // 道路閉塞のとき：黄色
            return UIColor(red: 1.000, green: 0.945, blue: 0.024, alpha: 0.6)
            
        default: // その他の災害のとき：緑色
            return UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: 0.6)
        }
    }
    
    
    // MARK: デリゲート-CLLocationManagerDelegate
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
    
    
    // MARK: detailViewDelegate
    
    func detailViewFinish() {
        
        if pinData.inforType == kWarn {
            let newsize: CGFloat = CGFloat(Double(screenWidth) * ((circleRadius[pinData.pinNum] * self.kDia * self.kWarnNewSize) / (300 * (21 - self.mapView.zoomLevel))))
            
            jsonDataManager.sharedInstance.warnBox[pinData.pinNum].pinImage = getResizeImage(makeLabel(pinData.pinNum, inforType: kWarn), newHeight: newsize)
            jsonDataManager.sharedInstance.warnBox[pinData.pinNum].expandImage = getResizeImage(makeLabel(pinData.pinNum, inforType: kWarn), newHeight: newsize)
            self.changeImage(&jsonDataManager.sharedInstance.warnBox[pinData.pinNum], MGLtag: osmWarnBox[pinData.pinNum], newsize: newsize)
            
            
            
        } else if pinData.inforType == kInfo {
            if pinData.picType != nil {
                self.makeRedTag(pinData.pinNum, img: UIImage(named: "icon_infoTag.png")!)
            }
        }
        
        runAfterDelay(1.5) {
            cannotTouchView.removeFromSuperview()
        }
        detailview?.delegate = nil
        detailview?.removeFromSuperview()
        
        tapped = false
        
    }
    
    
    // MARK: configViewDelegate
    
    func configViewFinish() {
        configview?.delegate = nil
        configview?.removeFromSuperview()
    }
    
    
    
    
    // MARK: プライベート関数
    
    
    /* 警告メッセージを表示する */
    func updateMessage() {
        
        if msgCount == box.count {
            msgCount = 0
            msgSafeCount = 0
        }
        
        let num = box[msgCount]
        
        jsonDataManager.sharedInstance.warnBox[num].distance = calcDistance(jsonDataManager.sharedInstance.warnBox[num].lat, lon: jsonDataManager.sharedInstance.warnBox[num].lon, uLat: userLat, uLon: userLon) // 距離を求める
        
        if jsonDataManager.sharedInstance.warnBox[num].distance - Int(circleRadius[num]) < 0 { // 侵入
            warningMessage.text = jsonDataManager.sharedInstance.warnBox[num].message2 // 警告メッセージ
            msgCount += 1
            
        } else if jsonDataManager.sharedInstance.warnBox[num].distance - Int(circleRadius[num]) < 500 { // 付近
            warningMessage.text = jsonDataManager.sharedInstance.warnBox[num].message1 // 警告メッセージ
            msgCount += 1
            
        } else { // 安全
            msgSafeCount += 1
            if msgSafeCount == box.count {
                msgSafeCount = 0
                warningMessage.text = "あんぜん！"
                return
            }
            msgCount += 1
            messageTimer.invalidate()
            updateMessage()
        }
        
        if !messageTimer.isValid {
            messageTimer = Timer.scheduledTimer(timeInterval: 2, target: self, selector: #selector(osmViewController.updateMessage), userInfo: nil, repeats: true)
        }
    }
    
    
    /*
     * 警告モードを表示する
     */
    func updateView() {
        
        if viewCount == box.count {
            viewCount = 0
            viewSafeCount = 0
        }
        
        let num = box[viewCount]
        
        jsonDataManager.sharedInstance.warnBox[num].distance = calcDistance(jsonDataManager.sharedInstance.warnBox[num].lat, lon: jsonDataManager.sharedInstance.warnBox[num].lon, uLat: userLat, uLon: userLon) // 距離を求める
        
        if jsonDataManager.sharedInstance.warnBox[num].distance - Int(circleRadius[num]) < 0 { // 侵入
            
            switch jsonDataManager.sharedInstance.warnBox[num].riskType {
                
            case 0: // 火災：赤色
                warningView.backgroundColor = UIColor(red: 1.000, green: 0.000, blue: 0.000, alpha: 0.7)
                
            case 1: // 浸水：青色
                warningView.backgroundColor = UIColor(red: 0.000, green: 0.400, blue: 1.000, alpha: 0.7)
                
            case 2: // 土砂崩れ：茶色
                warningView.backgroundColor = UIColor(red: 0.800, green: 0.400, blue: 0.000, alpha: 0.5)
                
            case 3, 4, 5, 6: // 道路閉塞：黄色
                warningView.backgroundColor = UIColor(red: 1.000, green: 0.945, blue: 0.024, alpha: 0.7)
                
            default: // その他の災害：緑色
                warningView.backgroundColor = UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: 0.7)
                break
            }
            mapView.alpha = 0.8
            viewCount += 1
            
        } else { // 安全
            viewSafeCount += 1
            if viewSafeCount == box.count {
                viewSafeCount = 0
                return
            }
            viewCount += 1
            mapView.alpha = 1.0
            viewTimer.invalidate()
            updateView()
        }
        
        if !viewTimer.isValid {
            viewTimer = Timer.scheduledTimer(timeInterval: 2, target: self, selector: #selector(osmViewController.updateView), userInfo: nil, repeats: true)
        }
    }
    
    /*
     * タップされたタグを赤色にする
     *
     * @param index タップされたタグが格納される配列のインデックス
     * @param img タグ画像
     */
    func makeRedTag(_ index: Int, img: UIImage) {
        
        let labelImg = makeLabel(index, inforType: jsonDataManager.sharedInstance.infoBox[index].inforType) // UILabelをUIImageに変換する
        let tagRect = CGRect.init(x: kZero, y: kZero, width: img.size.width, height: img.size.height) // タグ画像のサイズと位置
        UIGraphicsBeginImageContext(img.size)
        img.draw(in: tagRect)
        
        let labelRect = CGRect.init(x: kTagXY, y: kTagXY, width: labelImg.size.width - kTagW, height: labelImg.size.height - kTagH) // ラベル画像のサイズと位置
        labelImg.draw(in: labelRect)
        
        // Context に描画された画像を新しく設定
        let newImage = UIGraphicsGetImageFromCurrentImageContext()
        
        // Context 終了
        UIGraphicsEndImageContext()
        
        jsonDataManager.sharedInstance.infoBox[index].pinImage = getResizeImage(newImage!, newHeight: kTagSize)
        jsonDataManager.sharedInstance.infoBox[index].expandImage = getResizeImage(newImage!, newHeight: kTagSize)
        
        changeImage(&jsonDataManager.sharedInstance.infoBox[index], MGLtag: osmInfoBox[index], newsize: 100)
    }
    
    
    /**
     * 拡大縮小や現在地の更新による新しいピン画像の設定
     */
    func scalingImage() {
        
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
                // タグのサイズは、災害円の直径
                
                let han: Double = circleRadius[i] * kDia + 0.1
                let newsize: CGFloat = CGFloat(Double(screenWidth) * ((han * kWarnNewSize) / (300 * (21 - mapView.zoomLevel))))
                
                changeImage(&jsonDataManager.sharedInstance.warnBox[i], MGLtag: osmWarnBox[i], newsize: newsize)
            }
        }
    }
    
    
    /**
     * ピンのタグ画像を新しいタグ画像に更新する
     *
     * @param tag 更新するピン
     * @param MGLtag 更新するピン
     * @param newsize 新しいピン画像の縦幅
     */
    func changeImage(_ tag: inout TagData, MGLtag: MGLTagData, newsize: CGFloat) {
        
        let newimage = getResizeImage(tag.expandImage, newHeight: newsize) // 新しい画像
        let tmpAnnotation: TagData = tag // 一旦他の場所にデータを保持させる
        mapView.removeAnnotation(MGLtag) // 古い災害ピンを削除
        tag = tmpAnnotation
        tag.pinImage = newimage
        
        mapView.addAnnotation(MGLtag)
    }
    
    /**
     * ピンのタグ画像を新しいタグ画像に更新する
     * (現在地更新によって距離が変わるときに使用する)
     * (画像サイズの変更はしない)
     *
     * @param tag 更新するピン
     */
    func updatePin(_ index: Int) {
        
        let labelImg = makeLabel(index, inforType: kWarn) // UILabelをUIImageに変換する
        jsonDataManager.sharedInstance.warnBox[index].pinImage = getPinImage(labelImg, inforType: kWarn)
        jsonDataManager.sharedInstance.warnBox[index].expandImage = getPinImage(labelImg, inforType: kWarn)
    }
    
    /**
     * 災害円を描く
     *
     * @param index warnboxのインデックス
     * @param startNow 災害が発生してから現在までの経過時間(分)
     */
    func makeCircle(_ index: Int, startNow: Double) {
        
        // アプリを開いたら災害範囲がすでに最大になっていたとき、最大の半径で円を描く
        if CLLocationDistance(startNow) > CLLocationDistance(jsonDataManager.sharedInstance.warnBox[index].range) {
            circleRadius[index] = CLLocationDistance(jsonDataManager.sharedInstance.warnBox[index].range)
            
        } else { // 経過時間分だけの半径の円を描く
            circleRadius[index] = CLLocationDistance(startNow)
        }
        
        mapView.removeAnnotation(polygon[index])
        polygonCircleForCoordinate(CLLocationCoordinate2D(latitude: jsonDataManager.sharedInstance.warnBox[index].lat, longitude: jsonDataManager.sharedInstance.warnBox[index].lon), withMeterRadius: circleRadius[index], index: index)
        
    }
    
    /*
     * 画面左下のボタンをタップしたとき
     * ARカメラ画面に遷移する
     */
    internal func onclick_AR(_ sender: UIButton) {
        self.present(cameraViewController(), animated: true, completion: nil)
    }
    
    
    // 設定画面を開く
    internal func onClick_config(_ sender: UIButton) {
        
        mapView.allowsScrolling = false // スクロールできないようにする
        mapView.allowsZooming = false // 拡大縮小できないようにする
        var location: CGPoint = mapView.center
        location.x = view.center.x - screenWidth / 3
        
        UIView.animate(
            withDuration: 0.2,
            delay:0.5,
            options : UIViewAnimationOptions.curveEaseIn,
            animations : {
                self.mapView.center = location
                self.warningView?.center = location
            },
            completion: {
                (value: Bool) in
                
                backgroundView = detailView.makebackgroungView()
                backgroundView.isUserInteractionEnabled = true
                backgroundView.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(osmViewController.onClick_configBackground(_:))))
                self.mapView.addSubview(backgroundView)
                self.view.bringSubview(toFront: backgroundView)
                
                self.configview = ConfigView(frame: CGRect(x: screenWidth / 3 * 2, y: 0, width: screenWidth / 3, height: screenHeight))
                self.view.addSubview(self.configview!)
                self.view.sendSubview(toBack: self.configview!)
            }
        )
    }
    
    
    /*
     * 設定画面の「いれかえ」をタップしたとき
     * AppleMapsに切り替える
     */
    internal func changeMap(_ sender: UIButton) {
        mapView.allowsScrolling = true // スクロールできるにする
        mapView.allowsZooming = true // 拡大縮小できるようにする
        var location: CGPoint = mapView.center
        location.x = view.center.x
        self.mapView.center = location
        self.warningView?.center = location
        
        configview?.removeFromSuperview()
        ConfigView().deleteConfigDisplay()
        self.dismiss(animated: true, completion: nil)
        //self.present(appleMaps, animated: true, completion: nil)
        
        updateTimer.invalidate() // update()を発火させていたOpenStreetMapsのタイマーを止める
    }
    
    /*
     * 設定画面の背景をタップしたとき
     * 表示されているものが廃棄される
     */
    func onClick_configBackground(_ sender: UITapGestureRecognizer) {
        
        mapView.allowsScrolling = true // スクロールできるようにする
        mapView.allowsZooming = true // 拡大縮小できるようにする
        var location: CGPoint = mapView.center
        location.x = view.center.x
        
        UIView.animate(
            withDuration: 0.2,
            delay:0.5,
            options : UIViewAnimationOptions.curveEaseIn,
            animations : {
                self.mapView.center = location
                self.warningView?.center = location
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
        tapped = false
        runAfterDelay(1.5) {
            if pinData.inforType == kWarn {
                let newsize: CGFloat = CGFloat(Double(screenWidth) * ((circleRadius[pinData.pinNum] * self.kDia * self.kWarnNewSize) / (300 * (21 - self.mapView.zoomLevel))))
                self.warnPinView[pinData.pinNum].image = getResizeImage(makeLabel(pinData.pinNum, inforType: kWarn), newHeight: newsize)
            } else if pinData.inforType == kInfo {
                if pinData.picType != nil {
                    self.makeRedTag(pinData.pinNum, img: UIImage(named: "icon_infoTag.png")!)
                }
            }
            cannotTouchView.removeFromSuperview()
        }
        detailview?.removeFromSuperview()
        detailView().deleteDetailView()
    }
    
    /*
     * 画面左上のボタンをタップした時
     * 画面が現在地を中心に表示する
     */
    internal func nowLocate(_ sender: UIButton) {
        self.mapView.setCenter(CLLocationCoordinate2D(latitude: self.mapView.userLocation!.coordinate.latitude, longitude: self.mapView.userLocation!.coordinate.longitude), zoomLevel: 15.0, animated: true)
    }
    
    /*
     * 災害円を描く
     * @param coordinate 被災地の緯度経度
     * @param withMeterRadius 円の半径(m)
     */
    func polygonCircleForCoordinate(_ coordinate: CLLocationCoordinate2D, withMeterRadius: Double, index: Int) {
        let degreesBetweenPoints = 8.0
        let numberOfPoints = floor(360.0 / degreesBetweenPoints)
        let distRadians: Double = withMeterRadius / 6371000.0
        let centerLatRadians: Double = coordinate.latitude * M_PI / 180
        let centerLonRadians: Double = coordinate.longitude * M_PI / 180
        var coordinates = [CLLocationCoordinate2D]()
        
        for index in 0 ..< Int(numberOfPoints) {
            let degrees: Double = Double(index) * Double(degreesBetweenPoints)
            let degreeRadians: Double = degrees * M_PI / 180
            let pointLatRadians: Double = asin(sin(centerLatRadians) * cos(distRadians) + cos(centerLatRadians) * sin(distRadians) * cos(degreeRadians))
            let pointLonRadians: Double = centerLonRadians + atan2(sin(degreeRadians) * sin(distRadians) * cos(centerLatRadians), cos(distRadians) - sin(centerLatRadians) * sin(pointLatRadians))
            let pointLat: Double = pointLatRadians * 180 / M_PI
            let pointLon: Double = pointLonRadians * 180 / M_PI
            let point: CLLocationCoordinate2D = CLLocationCoordinate2DMake(pointLat, pointLon)
            coordinates.append(point)
        }
        
        polygon[index] = MGLPolygon(coordinates: &coordinates, count: UInt(coordinates.count))
        polyNum = index
        mapView.addAnnotation(polygon[index])
    }
    
    
    
    /*
     * 現在時刻で災害が発生しているとき、
     * 災害円を描く
     */
    func update() {
        let nowTime = Date() // 現在時刻
        
        box.removeAll()
        
        if messageTimer != nil {
            messageTimer.invalidate()
        }
        
        if viewTimer != nil {
            viewTimer.invalidate()
        }
        
        msgCount = 0
        viewCount = 0
        
        for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
            
            // 過去の災害
            if nowTime.compare(jsonDataManager.sharedInstance.warnBox[i].stop) == ComparisonResult.orderedDescending {
                
                //stopの時刻を過ぎたから、災害の円や文字を消す
                self.mapView.removeAnnotation(self.polygon[i]) // 円を消す
                self.mapView.alpha = 1.0
                self.mapView.removeAnnotation(osmWarnBox[i]) // 災害のピン情報を削除
                cameraViewController().warningView.backgroundColor = UIColor.clear // AR画面の警告モードをやめる
                
                // 現在災害発生中
            } else if jsonDataManager.sharedInstance.warnBox[i].stop.compare(nowTime) == ComparisonResult.orderedDescending && nowTime.compare(jsonDataManager.sharedInstance.warnBox[i].start) == ComparisonResult.orderedDescending {
                
                let Sn = Date().timeIntervalSince(jsonDataManager.sharedInstance.warnBox[i].start) / 60 // 開始時刻(start)と現在時刻(now)の差
                makeCircle(i, startNow: Sn)
                
                updatePin(i)
                
                // 警告タグの範囲を更新
                let han: Double = circleRadius[i] * kDia + 0.1
                let newsize: CGFloat = CGFloat(Double(screenWidth) * ((han * kWarnNewSize) / (300 * (21 - mapView.zoomLevel))))
                changeImage(&jsonDataManager.sharedInstance.warnBox[i], MGLtag: osmWarnBox[i], newsize: newsize)
                
                box.append(i)
                
                
            } else {
                
            }
        }
        
        // 災害発生していないとき
        if box.count == 0 {
            warningMessage.text = "安全1"
        } else {
            if messageTimer == nil {
                messageTimer = Timer.scheduledTimer(timeInterval: 2, target: self, selector: #selector(osmViewController.updateMessage), userInfo: nil, repeats: true)
            } else if !messageTimer.isValid {
                messageTimer = Timer.scheduledTimer(timeInterval: 2, target: self, selector: #selector(osmViewController.updateMessage), userInfo: nil, repeats: true)
            }
            
            if viewTimer == nil {
                viewTimer = Timer.scheduledTimer(timeInterval: 2, target: self, selector: #selector(osmViewController.updateView), userInfo: nil, repeats: true)
                
            } else if !viewTimer.isValid {
                viewTimer = Timer.scheduledTimer(timeInterval: 2, target: self, selector: #selector(osmViewController.updateView), userInfo: nil, repeats: true)
            }
        }
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
    
}
