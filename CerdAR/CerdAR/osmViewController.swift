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


let mapboxAccess = "pk.eyJ1Ijoic2FicmluYXp1cmFpbWkiLCJhIjoiY2lyaGFmbzFjMDE5cGc5bm42c2ozMnJlYSJ9.7W_kYbSqA3sEZUyS14s_Tw"


// OSMで持つデータ
class MGLTagData: MGLPointAnnotation {
    
    var inforType: String!    // 種別(info or warn)
    var pinNum: Int!          // ピン番号
}

class osmViewController: UIViewController, CLLocationManagerDelegate, MGLMapViewDelegate, detailViewDelegate {
    
    var detailview: detailView?
    var configview: ViewConfig?
    var mapView = MGLMapView()
    
    var center: CLLocationCoordinate2D! // 中心
        
    let motionManager = CMMotionManager() // 加速度センサ
    
    var locationManager: CLLocationManager! // 現在地の取得
    
    var infoPinView = [MGLAnnotationImage]()
    var warnPinView = [MGLAnnotationImage]()
    
    var pinViewData: MKAnnotationView! // タップされたタグの情報を保持
    var retentionZoom: MKCoordinateRegion! // タグをタップしたときの表示範囲を保持
    var scaleZoom: MKCoordinateRegion! // タグをタップしたときの表示範囲を保持
    
    var warningView: UIView! // 災害範囲内に侵入した時に画面の色を変える
    
    var circle = [MKCircle]() // 災害範囲の円
    
    var updateTimer: NSTimer! // 一定時間ごとにupdate()を発火させる
    
    var warnState = warningState.safe.rawValue // 現在ユーザーは災害からどの位置にいるか(安全・付近・侵入)
    
    var polygon = [MGLPolygon]()
    var polyNum = 0
    
    var tapped = false // 情報タグをタップしたか

    
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
    
    let calendar = NSCalendar(identifier: NSCalendarIdentifierGregorian)!
    
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
    
    
    
    //MARK:ライフサイクル
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.title = "map"
        
        // 画面の中心をユーザーの現在地にし、ズームレベル15で表示する
        runAfterDelay(0.5) {
            self.mapView.setCenterCoordinate(CLLocationCoordinate2D(latitude: self.mapView.userLocation!.coordinate.latitude, longitude: self.mapView.userLocation!.coordinate.longitude), zoomLevel: 15.0, animated: true)
        }
        
        /* 警告ビューの設定 */
        warningView = UIView(frame: CGRect.init(x: kZero, y: kZero, width: CGFloat(screenWidth), height: CGFloat(screenHeight)))
        view.addSubview(warningView) // viewに追加
        
        /* マップビューの設定 */
        mapView.frame = self.view.frame
        mapView.showsUserLocation = true // 現在地の表示を許可する
        mapView.delegate = self
        view.addSubview(mapView)
        
        // 現在地の取得を開始
        if CLLocationManager.locationServicesEnabled() {
            locationManager = CLLocationManager()
            locationManager.delegate = self
            locationManager.startUpdatingLocation() // 位置情報の更新を開始
        }
        
        locationManager.requestAlwaysAuthorization()
        
        
        /* 警告メッセージの設定 */
        warningMessage = UILabel(frame: CGRect.init(x: CGFloat(Double(screenWidth) * kWarnX), y: CGFloat(Double(screenHeight) * kWarnY), width: CGFloat(Double(screenWidth) * kWarnW), height: CGFloat(Double(screenHeight) * kWarnH))) //ラベルサイズ
        warningMessage.textColor = UIColor.blackColor() // 文字色(黒)
        warningMessage.backgroundColor = UIColor.whiteColor() // 背景色(白)
        warningMessage.textAlignment = NSTextAlignment.Center // 中央揃え
        warningMessage.font = UIFont.systemFontOfSize(kWarnFont) // 初期文字サイズ
        warningMessage.numberOfLines = kWarnLine // ラベル内の行数
        warningMessage.layer.borderColor = UIColor.blackColor().CGColor // 枠線の色(黒)
        warningMessage.layer.borderWidth = kWarnBorder // 枠線の太さ
        warningMessage.layer.cornerRadius = kWarnCorner // 枠線を角丸にする
        
        
        /* ピンの設定 */
        for i in 0 ..< infoBox.count {
            infoPinView.append(MGLAnnotationImage())
            osmInfoBox[i].coordinate = CLLocationCoordinate2D(latitude: infoBox[i].lat, longitude: infoBox[i].lon)
            mapView.addAnnotation(osmInfoBox[i])
        }
        
        for i in 0 ..< warnBox.count {
            warnPinView.append(MGLAnnotationImage())
            polygon.append(MGLPolygon())
            osmWarnBox[i].coordinate = CLLocationCoordinate2D(latitude: warnBox[i].lat, longitude: warnBox[i].lon)
            mapView.addAnnotation(osmWarnBox[i])
        }

    }
    
    
    
    
    /* 画面が表示される直前 */
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)

        displayMode = mode.map.rawValue
        
        
        update() // 災害円を描く
        // 10秒に1回update()を発火させる
        updateTimer = NSTimer.scheduledTimerWithTimeInterval(2, target: self, selector: #selector(osmViewController.update), userInfo: nil, repeats: true)
        
        self.navigationController?.setNavigationBarHidden(true, animated: true)
        
        mapView.delegate = self
        
        locationManager.delegate = self
        locationManager.desiredAccuracy = kCLLocationAccuracyBest
        locationManager.startUpdatingLocation()
        locationManager.startUpdatingHeading()
        
        motionManager.magnetometerUpdateInterval = 0.1 // 加速度センサを取得する間隔
        
        // 画面遷移するためのボタンを生成
        let toCam_button = UIButton()
        let buttonImage: UIImage = UIImage(named: "icon_camera.png")!
        toCam_button.frame = CGRect(x: 0.0, y: 0.0, width: buttonImage.size.width / 4, height: buttonImage.size.height / 4)
        toCam_button.setImage(buttonImage, forState: .Normal)
        toCam_button.layer.position = CGPoint(x: 55.0, y: self.view.bounds.height - 55.0)
        view.addSubview(toCam_button)
        toCam_button.addTarget(self, action: #selector(osmViewController.onclick_AR(_:)), forControlEvents: .TouchUpInside)
        
        // 設定画面へ遷移するためのボタン生成
        let toCon_button = UIButton()
        let conButImage: UIImage = UIImage(named: "icon_menu.png")!
        toCon_button.frame = CGRect(x: 0.0, y: 0.0, width: conButImage.size.width / 4, height: conButImage.size.height / 4)
        toCon_button.setImage(conButImage, forState: .Normal)
        toCon_button.layer.position = CGPoint(x: self.view.bounds.width - 55.0, y: 55.0)
        view.addSubview(toCon_button)
        toCon_button.addTarget(self, action: #selector(osmViewController.onClick_config(_:)), forControlEvents: .TouchUpInside)
        
        
        // 画面の中心を現在地にするためのボタン生成
        let nowLoc_button = UIButton()
        let locButImage: UIImage = UIImage(named: "icon_locate.jpg")!
        nowLoc_button.frame = CGRect.init(x: 0, y: 0, width: locButImage.size.width / 4, height: locButImage.size.height / 4)
        nowLoc_button.setImage(locButImage, forState: .Normal)
        nowLoc_button.layer.position = CGPoint(x: 55.0, y: 55.0)
        mapView.addSubview(nowLoc_button)
        
        nowLoc_button.addTarget(self, action: #selector(osmViewController.nowLocate(_:)), forControlEvents: .TouchUpInside)
        
        changeMapBut.addTarget(self, action: #selector(osmViewController.changeMap(_:)), forControlEvents: .TouchUpInside)
    }
    
    
    /* 別の画面に遷移した直後(破棄) */
    override func viewDidDisappear(animated: Bool) {
        super.viewDidDisappear(animated)
        
        mapView.delegate = nil
        locationManager.delegate = nil
        
    }
    
    
    override func viewWillDisappear(animated: Bool) {
        
        for annotation in self.mapView.annotations! {
            self.mapView.removeAnnotation(annotation)
        }
        updateTimer.invalidate() // update()を止める
    }
    
    
    //MARK:デリゲート-MKMapViewDelegate

    /*
     * 地図を触った後
     * 拡大縮小に合わせて画像を張り替える
     */
    func mapView(mapView: MGLMapView, regionDidChangeAnimated animated: Bool) {
        if tapped == false {
            scalingImage()
        }
    }
    
    
    /*
     * ピン画像の設定をする
     */
    func mapView(mapView: MGLMapView, imageForAnnotation annotation: MGLAnnotation) -> MGLAnnotationImage? {
        
        if let pin = annotation as? MGLTagData {
            
            if annotation === mapView.userLocation { // 現在地を示すアノテーションの場合はデフォルトのまま
                return nil
                
            } else {
                
                if pin.inforType == kInfo {

                    if infoPinView[pin.pinNum] == mapView.dequeueReusableAnnotationImageWithIdentifier(pin.inforType + String(pin.pinNum)) {
                        infoPinView[pin.pinNum].image = infoBox[pin.pinNum].pinImage
                        
                        return infoPinView[pin.pinNum]
                        
                    } else { // 再利用できるアノテーションが無い場合（初回など）は生成する
                        infoPinView[pin.pinNum] = MGLAnnotationImage(image: infoBox[pin.pinNum].pinImage, reuseIdentifier: pin.inforType + String(pin.pinNum))

                        return infoPinView[pin.pinNum]
                    }
                    
                } else if dateFromString(warnBox[pin.pinNum].stop, format: "yyyy/MM/dd HH:mm").compare(NSDate()) == NSComparisonResult.OrderedDescending && NSDate().compare(dateFromString(warnBox[pin.pinNum].start, format: "yyyy/MM/dd HH:mm")) == NSComparisonResult.OrderedDescending {
                    
                    if warnPinView[pin.pinNum] == mapView.dequeueReusableAnnotationImageWithIdentifier(pin.inforType + String(pin.pinNum)) {
                        warnPinView[pin.pinNum].image = warnBox[pin.pinNum].pinImage
                        return warnPinView[pin.pinNum]
                        
                    } else { // 再利用できるアノテーションが無い場合（初回など）は生成する
                        warnPinView[pin.pinNum] = MGLAnnotationImage(image: warnBox[pin.pinNum].pinImage, reuseIdentifier: pin.inforType + String(pin.pinNum))
                        return warnPinView[pin.pinNum]
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
    func mapView(mapView: MGLMapView, didDeselectAnnotation annotation: MGLAnnotation) {
//        self.view.addSubview(cannotTouchView) // 画面をさわれないようにする
        
        viewMode = viewmode.detail.rawValue
        tapped = true
        
        if mapView.userLocation!.coordinate.latitude == annotation.coordinate.latitude && mapView.userLocation!.coordinate.longitude == annotation.coordinate.longitude {
            // 現在地を示すアノテーションの場合はデフォルトのまま
            
        } else { // タップしたタグを赤くする
            
            for i in 0 ..< infoBox.count {
                
                if annotation.coordinate.latitude == infoBox[i].lat && annotation.coordinate.longitude == infoBox[i].lon {
                    
                    pinData = infoBox[i]
                    
                    self.makeRedTag(i, img: UIImage(named: "icon_airtag_red.png")!)
                    break
                }
            }
            
            for i in 0 ..< warnBox.count {
                
                if annotation.coordinate.latitude == warnBox[i].lat && annotation.coordinate.longitude == warnBox[i].lon {
                    pinData = warnBox[i]
                    break
                }
            }
        }
        
        self.detailview = detailView(frame: CGRect(x: screenWidth * 0.1, y: screenWidth * 0.1, width: screenWidth * 0.8, height: screenHeight * 0.8))
        self.detailview!.delegate = self
        backgroundView = detailView.makebackgroungView()
        backgroundView.userInteractionEnabled = true
        backgroundView.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(osmViewController.onClick_detailBackground(_:))))
        
        runAfterDelay(2.0) { // タップしてから2.0秒後に遷移する
            self.view.addSubview(backgroundView)
            self.view.addSubview(self.detailview!)
        }
    }
    
    
    /*
     * 災害円が追加されると呼ばれる
     * 追加された円の色を設定する
     */
    func mapView(mapView: MGLMapView, fillColorForPolygonAnnotation annotation: MGLPolygon) -> UIColor {
        
        switch warnBox[polyNum].riskType {
            
        case 0: // 火災のとき：赤色
            return UIColor(red: 0.545, green: 0.020, blue: 0.220, alpha: 0.6)
            
        case 1: // 浸水のとき：青色
            return UIColor(red: 0.000, green: 0.400, blue: 1.000, alpha: 0.6)
            
        case 2: // 落橋のとき：黄色
            return UIColor(red: 1.000, green: 0.945, blue: 0.024, alpha: 0.6)
            
        case 3: // 土砂崩れのとき：茶色
            return UIColor(red: 0.800, green: 0.400, blue: 0.000, alpha: 0.6)
            
        default: // その他の災害のとき：緑色
            return UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: 0.6)
        }
    }
    
    
    //MARK:デリゲート-CLLocationManagerDelegate
    func locationManager(manager: CLLocationManager, didFailWithError error: NSError) {
        print("didFailWithError: \(error)")
    }
    
    
    /* 位置情報のアクセス許可の状況が変わったときの処理 */
    func locationManager(manager: CLLocationManager, didChangeAuthorizationStatus status: CLAuthorizationStatus) {
        
        switch status {
        // 設定によって制限されているとき
        case .Restricted:
            print("Error: It is restricted by settings.")
            
        // 位置情報取得を拒否しているとき
        case .Denied:
            print("Error: It is denied Location Service.")
            manager.stopUpdatingLocation()
            
        // 既に位置情報の取得が許可されているとき
        case .AuthorizedWhenInUse, .AuthorizedAlways:
            manager.startUpdatingLocation()
            
        // 位置情報を取得の可否が決まっていないとき
        case .NotDetermined:
            self.locationManager.requestAlwaysAuthorization()
        }
    }
    
    
    /*
     * ユーザーの位置情報が更新されるたび
     * 目的地までの距離を計算し、新しくタグ画像を生成・貼り直しをする
     */
    func locationManager(manager: CLLocationManager, didUpdateToLocation newLocation: CLLocation, fromLocation oldLocation: CLLocation) {

        if tapped == false {
            
            var min = 1001  // 現在地から一番近い災害までの距離
            var idx = -1 // その災害を格納している配列のインデックス
            
            // 位置情報が変わるたびに、タグを作り直している
            for i in 0 ..< infoBox.count {
                infoBox[i].distance = calcDistance(infoBox[i].lat, lon: infoBox[i].lon, uLat: newLocation.coordinate.latitude, uLon: newLocation.coordinate.longitude) // 距離を求める
                updatePin(&infoBox[i])
            }
            
            for i in 0 ..< warnBox.count {
                
                if dateFromString(warnBox[i].stop, format: "yyyy/MM/dd HH:mm").compare(NSDate()) == NSComparisonResult.OrderedDescending && NSDate().compare(dateFromString(warnBox[i].start, format: "yyyy/MM/dd HH:mm")) == NSComparisonResult.OrderedDescending {
                    
                    warnBox[i].distance = calcDistance(warnBox[i].lat, lon: warnBox[i].lon, uLat: newLocation.coordinate.latitude, uLon: newLocation.coordinate.longitude) // 距離を求める
                    updatePin(&warnBox[i])
                    
                    if min > warnBox[i].distance {
                        min = warnBox[i].distance
                        idx = i
                    }
                }
            }
            
            // 警告モードにしたり、警告メッセージを表示したりする
            if idx != -1 {
                intrusion(warnBox[idx].riskType, distance: warnBox[idx].distance, range: Int(circleRadius[idx]), warnState: &warnState, message1: warnBox[idx].message1, message2: warnBox[idx].message2)
            }
            
            scalingImage()
        }
    }
    
    
    // MARK: detailViewDelegate
    
    func detailViewFinish() {
        
        runAfterDelay(1.0) {
            self.makeRedTag(pinData.pinNum, img: UIImage(named: "icon_airtag.png")!)
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
    
    
    
    
    //MARK:プライベート関数
    
    /**
     * 災害範囲に近づいたり侵入したりすると、
     * 警告メッセージを出したり、警告モードにしたりする
     *
     * @param riskType 災害の種類
     * @param distance ユーザーの現在地から災害の中心点までの距離(m)
     * @param range 災害の範囲(半径(m))
     * @param warnState ユーザーが安全圏にいるか、被災地に近づいているか、侵入しているか
     * @param message1 ユーザーが災害範囲付近にいるときに出る警告メッセージ
     * @param message2 ユーザーが災害範囲内に侵入したときに出る警告メッセージ
     */
    func intrusion(riskType: Int, distance: Int, range: Int, inout warnState: String, message1: String, message2: String) {
        
        // 災害範囲内に侵入した時
        if distance - range <= 0 {
            
            if warnState != warningState.inst.rawValue {
                switch riskType {
                    
                case 0: // 火災のとき：赤色
                    warningView.backgroundColor = UIColor(red: 0.545, green: 0.020, blue: 0.220, alpha: 1.0)
                    
                case 1: // 浸水のとき：青色
                    warningView.backgroundColor = UIColor(red: 0.000, green: 0.400, blue: 1.000, alpha: 1.0)
                    
                case 2: // 落橋のとき：黄色
                    warningView.backgroundColor = UIColor(red: 1.000, green: 0.945, blue: 0.024, alpha: 1.0)
                    
                case 3: // 土砂崩れのとき：茶色
                    warningView.backgroundColor = UIColor(red: 0.800, green: 0.400, blue: 0.000, alpha: 1.0)
                    
                default: // その他の災害のとき：緑色
                    warningView.backgroundColor = UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: 1.0)
                    break
                }
                
                mapView.alpha = kMapAbnormal
                warningMessage.text = message2 // 警告メッセージ
                
                // 一定時間後に警告メッセージを消す
                runAfterDelay(10.0) {
                    warningMessage.removeFromSuperview()
                }
                
                mapView.addSubview(warningMessage)
                warnState = warningState.inst.rawValue
                
            }
            
            // 災害範囲付近にいる時(範囲から500mとする)
        } else if distance - range > 0 && distance - range <= 500 {
            
            if warnState != warningState.near.rawValue {
                
                self.mapView.alpha = kMapNormal
                warningMessage.text = message1 // 警告メッセージ
                
                // 一定時間後に警告メッセージを消す
                runAfterDelay(10.0) {
                    warningMessage.removeFromSuperview()
                }
                
                mapView.addSubview(warningMessage)
                warnState = warningState.near.rawValue
            }
            
            // 安全圏にいる時
        } else {
            
            if warnState != warningState.safe.rawValue {
                self.mapView.alpha = kMapNormal
                warningMessage.removeFromSuperview()
                warnState = warningState.safe.rawValue
            }
        }
    }
    
    
    /*
     * タップされたタグを赤色にする
     * 
     * @param index タップされたタグが格納される配列のインデックス
     * @param img タグ画像
     */
    func makeRedTag(index: Int, img: UIImage) {
        
        let labelImg = makeLabel(index, inforType: infoBox[index].inforType) // UILabelをUIImageに変換する
        let tagRect = CGRect.init(x: kZero, y: kZero, width: img.size.width, height: img.size.height) // タグ画像のサイズと位置
        UIGraphicsBeginImageContext(img.size)
        img.drawInRect(tagRect)
        
        let labelRect = CGRect.init(x: kTagXY, y: kTagXY, width: labelImg.size.width - kTagW, height: labelImg.size.height - kTagH) // ラベル画像のサイズと位置
        labelImg.drawInRect(labelRect)
        
        // Context に描画された画像を新しく設定
        let newImage = UIGraphicsGetImageFromCurrentImageContext()
        
        // Context 終了
        UIGraphicsEndImageContext()
        
        infoBox[index].pinImage = getResizeImage(newImage, newHeight: kTagSize)
        infoBox[index].expandImage = getResizeImage(newImage, newHeight: kTagSize)
        
        changeImage(&infoBox[index], MGLtag: osmInfoBox[index], newsize: 100)
    }
    
    
    /**
     * 拡大縮小や現在地の更新による新しいピン画像の設定
     */
    func scalingImage() {
        
        var newsize: CGFloat!
        
        for i in 0 ..< infoBox.count {
            
            // scaleZoom は表示範囲（縮尺度）で、SCALEZOOM = 1 で画面の縦横が1度ということになる
            // 1度 = 約111km
            //
            //                     タグのサイズ (m)
            //  画面の横幅 ×  ----------------------------
            //                 縮尺度 × 111(km) × 1000    ← 画面が表示されている実際の範囲を m で計算している
            //
            // これで、画面の何%で表示すればいいかわかるので、それにscreenWidthをかけると、画面に表示する画像のサイズが決定する
            
            //newsize = CGFloat(screenWidth * (kTagNewSize / (scaleZoom.span.latitudeDelta * kMPerDeg * kMeter)))
            //changeImage(&infoBox[i], newsize: newsize)
            changeImage(&infoBox[i], MGLtag: osmInfoBox[i], newsize: 100)
            
        }
        
        for i in 0 ..< warnBox.count {
            
            if dateFromString(warnBox[i].stop, format: "yyyy/MM/dd HH:mm").compare(NSDate()) == NSComparisonResult.OrderedDescending && NSDate().compare(dateFromString(warnBox[i].start, format: "yyyy/MM/dd HH:mm")) == NSComparisonResult.OrderedDescending {
                
                // 情報タグと同じ計算方法
                // タグのサイズは、災害円の直径
                
                let han: Double = circleRadius[i] * kDia
                newsize = CGFloat(Double(screenWidth) * ((han * kWarnNewSize) / (500 * (21 - mapView.zoomLevel))))
                
                changeImage(&warnBox[i], MGLtag: osmWarnBox[i], newsize: newsize)
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
    func changeImage(inout tag: TagData, MGLtag: MGLTagData, newsize: CGFloat) {
        
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
    func updatePin(inout tag: TagData) {
        
        let labelImg = makeLabel(tag.pinNum, inforType: tag.inforType) // UILabelをUIImageに変換する
        tag.pinImage = getPinImage(labelImg, inforType: tag.inforType)
        tag.expandImage = getPinImage(labelImg, inforType: tag.inforType)
        
    }
    
    
    /**
     * 災害円を描く
     *
     * @param index warnboxのインデックス
     * @param startNow 災害が発生してから現在までの経過時間(分)
     */
    func makeCircle(index: Int, startNow: Double) {
        
        // アプリを開いたら災害範囲がすでに最大になっていたとき、最大の半径で円を描く
        if CLLocationDistance(startNow) > CLLocationDistance(warnBox[index].range) {
            circleRadius[index] = CLLocationDistance(warnBox[index].range)
            
        } else { // 経過時間分だけの半径の円を描く
            circleRadius[index] = CLLocationDistance(startNow)
        }
        
        mapView.removeAnnotation(polygon[index])
        polygonCircleForCoordinate(CLLocationCoordinate2D(latitude: warnBox[index].lat, longitude: warnBox[index].lon), withMeterRadius: circleRadius[index], index: index)
        
    }
    
    
    /*
     * 画面左下のボタンをタップしたとき
     * ARカメラ画面に遷移する
     */
    internal func onclick_AR(sender: UIButton) {
        self.presentViewController(cameraViewController(), animated: true, completion: nil)

    }
    

    /*
     * 設定ボタンが押されたとき
     * 設定画面を表示する
     */
    func onClick_config(recognizer: UIGestureRecognizer) {
        configview = ViewConfig(frame: CGRect.init(x: screenWidth * 0.1, y: screenWidth * 0.1, width: screenWidth * 0.8, height: screenHeight * 0.8))
        viewMode = viewmode.config.rawValue
        backgroundView = detailView.makebackgroungView()
        backgroundView.userInteractionEnabled = true
        backgroundView.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(osmViewController.onClick_configBackground(_:))))

        view.addSubview(backgroundView)
        view.addSubview(configview!)
    }
    
    
    /*
     * 設定画面の「いれかえ」をタップしたとき
     * AppleMapsに切り替える
     */
    internal func changeMap(sender: UIButton) {
        self.dismissViewControllerAnimated(true, completion: nil)
    }
    
    /*
     * 設定画面の背景をタップしたとき
     * 表示されているものが廃棄される
     */
    func onClick_configBackground(sender: UITapGestureRecognizer) {
        configview?.removeFromSuperview()
        ViewConfig().deleteConfigDisplay()
    }
    
    /*
     * 詳細画面の背景をタップしたとき
     * 表示されているものが廃棄される
     */
    func onClick_detailBackground(sender: UITapGestureRecognizer) {
        tapped = false
        detailview?.removeFromSuperview()
        detailView().deleteDetailView()
    }
    
    /*
     * 画面左上のボタンをタップした時
     * 画面が現在地を中心に表示する
     */
    internal func nowLocate(sender: UIButton) {
        self.mapView.setCenterCoordinate(CLLocationCoordinate2D(latitude: self.mapView.userLocation!.coordinate.latitude, longitude: self.mapView.userLocation!.coordinate.longitude), zoomLevel: 15.0, animated: true)
    }
    
    /*
     * 災害円を描く
     * @param coordinate 被災地の緯度経度
     * @param withMeterRadius 円の半径(m)
     */
    func polygonCircleForCoordinate(coordinate: CLLocationCoordinate2D, withMeterRadius: Double, index: Int) {
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
        
        let nowTime = NSDate() // 現在時刻
        
        for i in 0 ..< warnBox.count {
            
            let start = dateFromString(warnBox[i].start, format: "yyyy/MM/dd HH:mm") // 災害開始時間
            let stop = dateFromString(warnBox[i].stop, format: "yyyy/MM/dd HH:mm") // 災害終了時間
            
            // 過去の災害
            if start.compare(nowTime) == NSComparisonResult.OrderedDescending {
                
                //stopの時刻を過ぎたから、災害の円や文字を消す
                self.mapView.removeAnnotation(self.polygon[i]) // 円を消す
                self.mapView.alpha = 1.0
                //warnBox[i].inforType = kDidWarn // inforTypeを"warn"から"didWarn"に変更
                self.mapView.removeAnnotation(osmWarnBox[i]) // 災害のピン情報を削除
                cameraViewController().warningView.backgroundColor = UIColor.clearColor() // AR画面の警告モードをやめる
                
                
            // 現在災害発生中
            } else if stop.compare(nowTime) == NSComparisonResult.OrderedDescending && nowTime.compare(start) == NSComparisonResult.OrderedDescending {
                
                let Sn = NSDate().timeIntervalSinceDate(start) / 60 // 開始時刻(start)と現在時刻(now)の差
                makeCircle(i, startNow: Sn)
                
//                /* 確認用 */
//                runAfterDelay(10.0) {
//                    //stopの時刻を過ぎたから、災害の円や文字を消す
//                    self.mapView.removeAnnotation(self.polygon[i]) // 円を消す
//                    self.mapView.alpha = 1.0
//                    //warnBox[i].inforType = kDidWarn // inforTypeを"warn"から"didWarn"に変更
//                    self.mapView.removeAnnotation(osmWarnBox[i]) // 災害のピン情報を削除
//                    cameraViewController().warningView.backgroundColor = UIColor.clearColor() // AR画面の警告モードをやめる
//                    
//                }
                
                
            // 今後発生する災害
            } else {
                //warnBox[i].inforType = kWillWarn
            }
        }
    }
    
}
