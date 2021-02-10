//
//  osmViewController.swift
//  CerdAR
//
//  Copyright (c) 2018 APPLIED TECHNOLOGY CO.,LTD., 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
//

import UIKit
import MapKit
import CoreLocation
import CoreMotion
import CoreImage
import Mapbox
import SystemConfiguration
import HealthKit
import HealthKitUI
import AVFoundation

let mapboxAccess = "pk.eyJ1Ijoic2FicmluYXp1cmFpbWkiLCJhIjoiY2lyaGFmbzFjMDE5cGc5bm42c2ozMnJlYSJ9.7W_kYbSqA3sEZUyS14s_Tw"

// OSMで持つデータ
class MGLTagData: MGLPointAnnotation {
    var inforType: String!    // 種別(info or warn)
    var pinNum: Int!          // ピン番号
}


class osmViewController: UIViewController, CLLocationManagerDelegate, MGLMapViewDelegate, detailViewDelegate, detailViewIphoneDelegate ,detailViewIpadDelegate {
    
    
    var detailview: detailView? // 詳細画面
    var detailCustomIphone: DetailViewIphone = DetailViewIphone()
    var detailCustomIpad: DetailViewIpad = DetailViewIpad()
    var configview: ConfigView? // 設定画面
    var mapView = MGLMapView() // 地図画面
    
    var rasterLayer: MGLRasterStyleLayer? //レイヤ追加
    var source : MGLRasterTileSource?//レイヤのソース追加
    var center: CLLocationCoordinate2D! // 中心
    
    let motionManager = CMMotionManager() // 加速度センサ
    var locationManager: CLLocationManager! // 現在地の取得
    
    var osmInfoBox = [MGLTagData]() // OSM情報タグ用
    var osmWarnBox = [MGLTagData]() // OSM警告タグ用
    
    var infoPinView = [MGLAnnotationImage]() // ピン画像(情報タグ)
    var warnPinView = [MGLAnnotationImage]() // ピン画像(警告タグ)
    
    var warningView: UIView! // 災害範囲内に侵入した時に画面の色を変える
    var warnNums: [Int] = [] // 災害番号
    var box: [Int] = [] // 現在発生している災害の番号を管理する配列

    var updateTimer: Timer! // 一定時間ごとにupdate()を発火させる
    
    var warnState = warningState.safe.rawValue // 現在ユーザーは災害からどの位置にいるか(安全・付近・侵入)
    
    var warningCount = 0
    var warningAllCount = 0
    var warningEnter:[TagData] = []
    var warningNear:[TagData] = []
    var warningSafeCount = 0
    var warningTimer: Timer! 
    
    var polygon = [MGLPolygon]() // 災害円
    var polyNum = 0 // 災害円のインデックス
    
    //MARK:警告メッセージの表示位置（高さ）をいじる場合はy:の値を変更する
    let warningMessage = UILabel(frame: CGRect(x: screenWidth - 55.0 - butSize - screenWidth * 0.38, y: screenHeight * 0.8, width: screenWidth * 0.37, height: screenHeight * 0.13)) // 警告メッセージ
    
    var beforeZoomLv = 0.0
    
    let vibration = Vibration()
    
    // 定数
    let kWarnFont: CGFloat = 20 // 警告メッセージのフォントサイズ
    let kWarnLine = 3 // 警告メッセージの行数
    let kWarnBorder: CGFloat = 5 // 警告メッセージの枠線の太さ
    let kWarnCorner: CGFloat = 20 // 警告メッセージの枠線の角丸
    let kMapNormalAlpha: CGFloat = 1.0 // 地図の透明度
    let kTagNewSize = 100.0 // 新しいタグ画像のサイズ
    let kDia = 2.0 // 直径
    let kWarnNewSize = 0.7 // 新しい警告タグの画像のサイズ
    let kFill: CGFloat = 0.6   // 円内部の透明度
    let kZero: CGFloat = 0 // 初期値0
    let kTagSize: CGFloat = 500 // タグ画像のサイズ
    let styleMapboxURL = URL(string: "mapbox://styles/th-nguyen/ckk29t1zw391617rrt2rwls2i")
    var audioPlayer: AVAudioPlayer!

//    @IBOutlet weak var mapView: MGLMapView!
//    @IBOutlet weak var nowLoc_button: UIButton!
//    @IBOutlet weak var toCam_button: UIButton!
//    @IBOutlet weak var toCon_button: UIButton!
    // MARK:- ライフサイクル
    override func viewDidLoad() {
        super.viewDidLoad()

        /* 警告ビューの設定 */
        warningView = UIView(frame: CGRect.init(x: kZero, y: kZero, width: CGFloat(screenWidth), height: CGFloat(screenHeight)))
        view.addSubview(warningView) // viewに追加
        let margins = view.layoutMarginsGuide
        warningView.translatesAutoresizingMaskIntoConstraints = false
        
        let constraintsView = [
            warningView.trailingAnchor.constraint(equalTo: view.trailingAnchor,constant: 0),
            warningView.leadingAnchor.constraint(equalTo: view.leadingAnchor,constant: 0),
            warningView.topAnchor.constraint(equalTo: view.topAnchor,constant: 0),
            warningView.bottomAnchor.constraint(equalTo: view.bottomAnchor,constant: 0),
        ]
        NSLayoutConstraint.activate(constraintsView)
        
        /* 背景地図の設定 */
        
        mapView = MGLMapView(frame: view.bounds, styleURL: styleMapboxURL)
        mapView.autoresizingMask = [.flexibleWidth, .flexibleHeight]
        //streetsStyleURL : 標準地図
        //lightStyleURL : シンプルな地図
        //satelliteStyleURL :　衛星画像
        //satelliteStreetsStyleURL : 衛星画像+標準地図
        //darkStyleURL : 黒ベースの地図
        //outdoorsStyleURL : 等高線付き地図
        
        /* マップビューの設定 */
        mapView.frame = self.view.frame

        mapView.camera = MGLMapCamera(lookingAtCenter: CLLocationCoordinate2D(latitude: 34.7, longitude: 135.5), altitude: 1200, pitch: 45, heading: 0)
        mapView.showsUserLocation = true // 現在地を表示する
        mapView.isPitchEnabled = false  // ジェスチャでの視点変更を許可しない
        mapView.showsScale = true
        mapView.scaleBarPosition = .topRight
        mapView.scaleBarMargins = CGPoint(x: 50, y: 0)
        mapView.delegate = self
        view.addSubview(mapView)
        mapView.translatesAutoresizingMaskIntoConstraints = false
        let constraints = [
            mapView.trailingAnchor.constraint(equalTo: view.trailingAnchor,constant: 0),
            mapView.leadingAnchor.constraint(equalTo: view.leadingAnchor,constant: 0),
            mapView.topAnchor.constraint(equalTo: view.topAnchor,constant: 0),
            mapView.bottomAnchor.constraint(equalTo: view.bottomAnchor,constant: 0),
        ]
        NSLayoutConstraint.activate(constraints)
        
        locationManager = CLLocationManager()
        var  sizeButton =  butSize*1.5
        if UIDevice.current.userInterfaceIdiom == .pad{
            sizeButton =  butSize*2.0
        }
        // 画面遷移するためのボタンを生成
        let toCam_button = UIButton()
        let buttonImage: UIImage = UIImage(named: "ar2-icon")!
        toCam_button.setImage(buttonImage, for: UIControl.State())
        toCam_button.layer.shadowColor = UIColor.black.cgColor
        toCam_button.layer.shadowRadius = 5
        toCam_button.layer.shadowOffset = CGSize(width: 10, height: 10)
        toCam_button.layer.shadowOpacity = 0.6

        mapView.addSubview(toCam_button)
        toCam_button.translatesAutoresizingMaskIntoConstraints = false
        let constraintsCamera = [
            toCam_button.leadingAnchor.constraint(equalTo: mapView.leadingAnchor,constant: 15),
            toCam_button.bottomAnchor.constraint(equalTo: mapView.bottomAnchor,constant: 0),
            toCam_button.heightAnchor.constraint(equalToConstant: sizeButton),
            toCam_button.widthAnchor.constraint(equalToConstant: sizeButton)
        ]
        NSLayoutConstraint.activate(constraintsCamera)
        toCam_button.addTarget(self, action: #selector(osmViewController.onclick_AR(_:)), for: .touchUpInside)
        
        // 設定画面へ遷移するためのボタン生成
        let toCon_button = UIButton()
        let conButImage: UIImage = UIImage(named: "setting-icon")!
        toCon_button.setImage(conButImage, for: UIControl.State())
        toCon_button.layer.shadowColor = UIColor.black.cgColor
        toCon_button.layer.shadowRadius = 5
        toCon_button.layer.shadowOffset = CGSize(width: 10, height: 10)
        toCon_button.layer.shadowOpacity = 0.6
        
        mapView.addSubview(toCon_button)
        toCon_button.translatesAutoresizingMaskIntoConstraints = false
        let constraintsSetting = [
            toCon_button.trailingAnchor.constraint(equalTo: mapView.trailingAnchor,constant: -10),
            toCon_button.bottomAnchor.constraint(equalTo: mapView.bottomAnchor,constant: 0),
            toCon_button.heightAnchor.constraint(equalToConstant: sizeButton),
            toCon_button.widthAnchor.constraint(equalToConstant: sizeButton)
        ]
        NSLayoutConstraint.activate(constraintsSetting)
        toCon_button.addTarget(self, action: #selector(osmViewController.onClick_config(_:)), for: .touchUpInside)
        
        // 画面の中心を現在地にするためのボタン生成
        let nowLoc_button = UIButton()
        let locButImage: UIImage = UIImage(named: "map-icon")!
        nowLoc_button.setImage(locButImage, for: UIControl.State())
        nowLoc_button.layer.shadowColor = UIColor.black.cgColor
        nowLoc_button.layer.shadowRadius = 5
        nowLoc_button.layer.shadowOffset = CGSize(width: 10, height: 10)
        nowLoc_button.layer.shadowOpacity = 0.6

        mapView.addSubview(nowLoc_button)
        nowLoc_button.translatesAutoresizingMaskIntoConstraints = false
        let constraintsLocation = [
            nowLoc_button.leadingAnchor.constraint(equalTo: view.leadingAnchor,constant: 10),
            nowLoc_button.topAnchor.constraint(equalTo: margins.topAnchor,constant: 0),
            nowLoc_button.heightAnchor.constraint(equalToConstant: sizeButton),
            nowLoc_button.widthAnchor.constraint(equalToConstant: sizeButton)
        ]
        NSLayoutConstraint.activate(constraintsLocation)
        nowLoc_button.addTarget(self, action: #selector(self.nowLocate(_:)), for: .touchUpInside)
        
        /* 警告メッセージの設定 */
        warningMessage.textColor = UIColor.black // 文字色(黒)
        warningMessage.backgroundColor = UIColor.white.withAlphaComponent(CGFloat(kMsgAlpha)) // 背景色(白)
        warningMessage.textAlignment = NSTextAlignment.center // 中央揃え
        warningMessage.font = UIFont.systemFont(ofSize: kWarnFont) // 初期文字サイズ
        warningMessage.numberOfLines = kWarnLine // ラベル内の行数
        //warningMessage.layer.borderColor = UIColor.black.cgColor // 枠線の色(黒)
        //warningMessage.layer.borderWidth = kWarnBorder // 枠線の太さ
        warningMessage.layer.cornerRadius = kWarnCorner // 枠線を角丸にする
        warningMessage.clipsToBounds = true // 角を取る
        warningMessage.adjustsFontSizeToFitWidth = true // 文字の多さによってフォントサイズを調節する
        mapView.addSubview(warningMessage)
        warningMessage.isHidden = true
        
        /* ピンの設定 */
        for i in 0 ..< jsonDataManager.sharedInstance.infoBox.count {
            osmInfoBox.append(MGLTagData())
            infoPinView.append(MGLAnnotationImage())
            osmInfoBox[i].inforType = jsonDataManager.sharedInstance.infoBox[i].inforType // タグの種類
            osmInfoBox[i].pinNum = i //ピン番号
            osmInfoBox[i].coordinate = CLLocationCoordinate2D(latitude: jsonDataManager.sharedInstance.infoBox[i].lat, longitude: jsonDataManager.sharedInstance.infoBox[i].lon) // 位置
            //mapView.addAnnotation(osmInfoBox[i])
        }
        
        for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
            
            osmWarnBox.append(MGLTagData())
            warnPinView.append(MGLAnnotationImage())
            polygon.append(MGLPolygon())
            osmWarnBox[i].inforType = jsonDataManager.sharedInstance.warnBox[i].inforType // タグの種類
            osmWarnBox[i].pinNum = i //ピン番号
            osmWarnBox[i].coordinate = CLLocationCoordinate2D(latitude: jsonDataManager.sharedInstance.warnBox[i].lat, longitude: jsonDataManager.sharedInstance.warnBox[i].lon) // 位置
        }
        
        // 現在地の取得を開始
        if CLLocationManager.locationServicesEnabled() {
            locationManager = CLLocationManager()
        }
        authorizeHealthKit()
        testSampleQuery()
    }
    func testSampleQuery() {
        let healthStore = HKHealthStore()
        let sampleType = HKSampleType.quantityType(forIdentifier: HKQuantityTypeIdentifier.stepCount)
        let today = Date()
        let startDate = Calendar.current.date(byAdding: .hour, value: -5, to: today)
        let endDate = Calendar.current.date(byAdding: .hour, value: -3, to: today)
          
          let predicate = HKQuery.predicateForSamples(withStart: startDate, end: endDate, options: HKQueryOptions.strictEndDate)
        let query = HKSampleQuery.init(sampleType: sampleType!,
                                       predicate: predicate,
                                       limit: HKObjectQueryNoLimit,
                                       sortDescriptors: nil) { (query, results, error) in
            print(results)
        }
        
        healthStore.execute(query)
    }
    private func authorizeHealthKit() {
      
      HealthKitSetupAssistant.authorizeHealthKit { (authorized, error) in
        
        guard authorized else {
          
          let baseMessage = "HealthKit Authorization Failed"
          
          if let error = error {
            print("\(baseMessage). Reason: \(error.localizedDescription)")
          } else {
            print(baseMessage)
          }
          
          return
        }
        
        print("HealthKit Successfully Authorized.")
      }
      
    }
    
    /* 画面が表示される直前 */
    override func viewWillAppear(_ animated: Bool) {
        
        super.viewWillAppear(animated)
        
        for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
            if(jsonDataManager.sharedInstance.warnBox[i].lat == nil){
                continue
            }
            osmWarnBox.append(MGLTagData())
            warnPinView.append(MGLAnnotationImage())
            polygon.append(MGLPolygon())
            osmWarnBox[i].inforType = jsonDataManager.sharedInstance.warnBox[i].inforType // タグの種類
            osmWarnBox[i].pinNum = i //ピン番号
            osmWarnBox[i].coordinate = CLLocationCoordinate2D(latitude: jsonDataManager.sharedInstance.warnBox[i].lat, longitude: jsonDataManager.sharedInstance.warnBox[i].lon) // 位置
        }
        
        displayMode = mode.osm.rawValue
        
        mapView.delegate = self
        
        /* 現在地の取得を開始 */
        if CheckReachability(hostname: "www") {
            if CLLocationManager.authorizationStatus() == .authorizedAlways || CLLocationManager.authorizationStatus() == .authorizedWhenInUse {
                locationManager.delegate = self
                locationManager.startUpdatingLocation() // GPSの使用を開始する
                locationManager.desiredAccuracy = kCLLocationAccuracyBest // 精度を最高精度にする
            }
        }
        
        changeMapBut2.addTarget(self, action: #selector(self.changeMB(_:)), for: .touchUpInside)
        gisInfoBut.addTarget(self, action: #selector(self.fetchGISInfo(_:)), for: .touchUpInside)
        
        motionManager.magnetometerUpdateInterval = 0.1 // 加速度センサを取得する間隔
        
        // 画面の中心をユーザーの現在地にする
        if CheckReachability(hostname: "www") {
            if CLLocationManager.authorizationStatus() == .authorizedAlways || CLLocationManager.authorizationStatus() == .authorizedWhenInUse {
                runAfterDelay(1.5) {
                    self.mapView.setCenter((self.locationManager.location?.coordinate)!, zoomLevel: 16.5, animated: true)
                }
            }
        }
        
        for i in 0 ..< jsonDataManager.sharedInstance.infoBox.count {
            if(i >= infoPinView.count){
                continue
            }
            infoPinView[i].image = jsonDataManager.sharedInstance.infoBox[i].pinImage
            mapView.addAnnotation(osmInfoBox[i])
        }
        
        update() // 災害情報を更新する
        // kUpdateWarn秒に1回update()を発火させる
        if updateTimer == nil {
//            DispatchQueue.global(qos: .back).async {
                self.updateTimer = Timer.scheduledTimer(timeInterval: kUpdateWarn, target: self, selector: #selector(osmViewController.update), userInfo: nil, repeats: true)
//                RunLoop.current.run()
//            }
        }
    }
    
    /* 別の画面に遷移した直後(破棄) */
    override func viewDidDisappear(_ animated: Bool) {
        super.viewDidDisappear(animated)
        mapView.delegate = nil
        locationManager.delegate = nil
        locationManager.stopUpdatingLocation() // GPSの更新を停止する
        if warningTimer != nil {
            warningTimer.invalidate()
        }
        if updateTimer != nil {
            updateTimer.invalidate()
        }
    }
    
    
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        
        if mapView.annotations?.count != nil {
            for annotation in self.mapView.annotations! {
                self.mapView.removeAnnotation(annotation)
            }
        }
       
        changeMapBut2.removeTarget(self, action: #selector(self.changeMB(_:)), for: .touchUpInside)
        gisInfoBut.removeTarget(self, action: #selector(self.fetchGISInfo(_:)), for: .touchUpInside)
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
    // MARK:- デリゲート-MKMapViewDelegate
    
    /*
     * 地図を触った後
     * 拡大縮小に合わせて画像を張り替える
     */
    func mapView(_ mapView: MGLMapView, regionDidChangeAnimated animated: Bool) {
        //userLat = self.mapView.centerCoordinate.latitude
         //userLon = self.mapView.centerCoordinate.longitude
//        DispatchQueue(label: "scalingImage").async {
            self.scalingImage()
//        }
        
    }
    func mapView(_ mapView: MGLMapView, viewFor annotation: MGLAnnotation) -> MGLAnnotationView? {
        if let pin  =  annotation as? MGLTagData {
            if annotation === mapView.userLocation {
                return nil
            }else{
                if pin.inforType == kInfo{
                    let reuseIdentifier = pin.inforType + String(pin.pinNum)
                    
                    // For better performance, always try to reuse existing annotations.
                    var annotationView = mapView.dequeueReusableAnnotationView(withIdentifier: reuseIdentifier)
                    
                    // If there’s no reusable annotation view available, initialize a new one.
                    if annotationView == nil {
                        annotationView = MGLAnnotationView(annotation: pin, reuseIdentifier: reuseIdentifier)
                        let image = jsonDataManager.sharedInstance.infoBox[pin.pinNum].pinImage
                        let imageView = UIImageView(image: image)
                        annotationView?.frame = CGRect(x: 0, y: 0, width: image!.size.width, height: image!.size.height)
                        annotationView?.addSubview(imageView)
                        annotationView?.centerOffset = CGVector(dx: 0, dy: -image!.size.height / 2.0)
                    }
                    
                    return annotationView
                }
            }
        }
        return nil
    }
    
    /*
     * ピン画像の設定をする
     */
    func mapView(_ mapView: MGLMapView, imageFor annotation: MGLAnnotation) -> MGLAnnotationImage? {
        
        if let pin = annotation as? MGLTagData {
            
            if annotation === mapView.userLocation { // 現在地を示すアノテーションの場合はデフォルトのまま
                return nil
            } else {
                if pin.inforType == kWarn {
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
    
    ///レイヤを表示する
    ///
    /// - Parameters:
    ///   - mapView: mapView
    ///   - style: style
//    func mapView(_ mapView: MGLMapView, didFinishLoading style: MGLStyle) {
//        // Add a new raster source and layer.
////        let source = MGLRasterTileSource(identifier: "darkmatter", tileURLTemplates: [GisList.sharedGis.list[0].server], options: [ .tileSize: 128 ])
////        print(GisList.sharedGis.list[0].name)
////        let rasterLayer = MGLRasterStyleLayer(identifier: "darkmatter", source: source)
////
////        rasterLayer.rasterOpacity = NSExpression(forConstantValue: 0.8)
////        mapView.style?.addSource(source)
////        if let layer = mapView.style?.layer(withIdentifier: "darkmatter") {
////            mapView.style?.insertLayer(rasterLayer, above: layer)
////            self.rasterLayer = rasterLayer
////        }else{
////            mapView.style?.insertLayer(rasterLayer, at: 10)
////        }
////        if(gisDisplayMode != gisMode.gis) {
////            mapView.style?.layer(withIdentifier: "darkmatter")?.isVisible = false
////        }
//
//    }
    var light: MGLLight!
    func mapView(_ mapView: MGLMapView, didFinishLoading style: MGLStyle) {
     
    // Add a MGLFillExtrusionStyleLayer.
//    addFillExtrusionLayer(style: style)
     
    // Create an MGLLight object.
    light = MGLLight()
     
    // Create an MGLSphericalPosition and set the radial, azimuthal, and polar values.
    // Radial : Distance from the center of the base of an object to its light. Takes a CGFloat.
    // Azimuthal : Position of the light relative to its anchor. Takes a CLLocationDirection.
    // Polar : The height of the light. Takes a CLLocationDirection.
    let position = MGLSphericalPositionMake(5, 180, 80)
    light.position = NSExpression(forConstantValue: NSValue(mglSphericalPosition: position))
     
    // Set the light anchor to the map and add the light object to the map view's style. The light anchor can be the viewport (or rotates with the viewport) or the map (rotates with the map). To make the viewport the anchor, replace `map` with `viewport`.
    light.anchor = NSExpression(forConstantValue: "map")
    style.light = light
    }
     
    func addFillExtrusionLayer(style: MGLStyle) {
        // Access the Mapbox Streets source and use it to create a `MGLFillExtrusionStyleLayer`. The source identifier is `composite`. Use the `sources` property on a style to verify source identifiers.
        let source = style.source(withIdentifier: "composite")!
        let layer = MGLFillExtrusionStyleLayer(identifier: "extrusion-layer", source: source)
        layer.sourceLayerIdentifier = "building"
        layer.fillExtrusionBase = NSExpression(forKeyPath: "min_height")
        layer.fillExtrusionHeight = NSExpression(forKeyPath: "height")
        layer.fillExtrusionOpacity = NSExpression(forConstantValue: 0.75)
        layer.fillExtrusionColor = NSExpression(forConstantValue: UIColor.white)
        
        // Access the map's layer with the identifier "poi-scalerank3" and insert the fill extrusion layer below it.
        let symbolLayer = style.layer(withIdentifier: "poi-scalerank3")!
        style.insertLayer(layer, below: symbolLayer)
    }
    
    
    /*
     * タグ画像がタップされたとき、
     * タップされた画像は赤くなり、詳細画面が表示される
     */
    func mapView(_ mapView: MGLMapView, didSelect annotation: MGLAnnotation) {
        self.view.addSubview(cannotTouchView) // 画面をさわれないようにする
        pinData = nil
        if mapView.userLocation!.coordinate.latitude == annotation.coordinate.latitude && mapView.userLocation!.coordinate.longitude == annotation.coordinate.longitude {
            // 現在地を示すアノテーションの場合はデフォルトのまま
            
        } else { // タップしたタグを赤くする
            
            // 情報タグのとき
            for i in 0 ..< jsonDataManager.sharedInstance.infoBox.count {
                if annotation.coordinate.latitude == jsonDataManager.sharedInstance.infoBox[i].lat && annotation.coordinate.longitude == jsonDataManager.sharedInstance.infoBox[i].lon {
                    pinData = jsonDataManager.sharedInstance.infoBox[i]
                    if jsonDataManager.sharedInstance.infoBox[i].icon == "icon_infoTag.png" {
                        self.makeRedTag(i, img: UIImage(named: "icon_infoTag_red.png")!)
                        break
                    }
                }
            }
            
            // 警告タグのとき
            for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
                if annotation.coordinate.latitude == jsonDataManager.sharedInstance.warnBox[i].lat && annotation.coordinate.longitude == jsonDataManager.sharedInstance.warnBox[i].lon {
                    
                    pinData = jsonDataManager.sharedInstance.warnBox[i]
                    
                    let beki: Int = Int(27 - self.mapView.zoomLevel)
                    let zoomlv: CGFloat = pow(2, CGFloat(beki))
                    let han: Double = circleRadius[i] * self.kDia + 0.1
                    var newsize: Double = Double(screenWidth) * han / Double(zoomlv)
                    if newsize > Double(screenWidth) / 2 {
                        newsize = Double(screenWidth) / 2
                    }
                    warnPinView[i].image = makeTappedLabel(i, size: Double(newsize))
                    let newImage = makeTappedLabel(i, size: Double(newsize))
                    
                    jsonDataManager.sharedInstance.warnBox[i].pinImage = getResizeImage(newImage, newHeight: kTagSize)
                    jsonDataManager.sharedInstance.warnBox[i].expandImage = getResizeImage(newImage, newHeight: kTagSize)
                    changeImage(jsonDataManager.sharedInstance.warnBox[i], MGLtag: osmWarnBox[i], newsize: CGFloat(newsize))
                    
                    break
                }
            }
        }
        
        if(pinData == nil){
            cannotTouchView.removeFromSuperview()
            return
        }
//        if UIDevice.current.userInterfaceIdiom == .phone {
//            self.detailview = detailView(frame: CGRect(x: screenWidth * 0.1, y: screenWidth * 0.02, width: screenWidth * 0.8, height: screenHeight * 0.9))
//        } else if UIDevice.current.userInterfaceIdiom == .pad {
//            self.detailview = detailView(frame: CGRect(x: screenWidth * 0.1, y: screenWidth * 0.1, width: screenWidth * 0.8, height: screenHeight * 0.8))
//        }
        var widthView = [screenWidth,screenHeight].min()! - 10
        var heightView = widthView/1.3
        if UIDevice.current.userInterfaceIdiom == .pad {
            widthView = [screenWidth,screenHeight].min()!*0.8
            heightView = widthView/1.5
        }
        self.detailCustomIphone = DetailViewIphone(frame: CGRect(x: 0, y: 0, width: widthView, height: heightView))
  
        detailCustomIphone.translatesAutoresizingMaskIntoConstraints = false
        detailCustomIphone.setView()
        self.detailCustomIphone.delegate = self
        let background = UIImageView(frame: self.view.frame)
        background.alpha = 0.5
        background.backgroundColor = UIColor.gray
        backgroundView = background
        backgroundView.isUserInteractionEnabled = true

        
        self.detailCustomIphone.deleteButton.addTarget(self, action: #selector(osmViewController.onClick_detailBackground(_:)), for: .touchUpInside)
        backgroundView.isUserInteractionEnabled = true
        backgroundView.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(osmViewController.onClick_detailBackground(_:))))
        runAfterDelay(kShowDetail) { // タグをタップしてからkShowDetail秒後に詳細画面を表示する
            self.view.addSubview(backgroundView)
            backgroundView.translatesAutoresizingMaskIntoConstraints = false
            let constraints = [
                backgroundView.trailingAnchor.constraint(equalTo: self.view.trailingAnchor,constant: 0),
                backgroundView.leadingAnchor.constraint(equalTo: self.view.leadingAnchor,constant: 0),
                backgroundView.topAnchor.constraint(equalTo: self.view.topAnchor,constant: 0),
                backgroundView.bottomAnchor.constraint(equalTo: self.view.bottomAnchor,constant: 0),
            ]
            NSLayoutConstraint.activate(constraints)
            self.view.addSubview(self.detailCustomIphone)
            self.detailCustomIphone.translatesAutoresizingMaskIntoConstraints = false
            let constraintsView = [
                self.detailCustomIphone.centerXAnchor.constraint(equalTo: self.view.centerXAnchor,constant: 0),
                self.detailCustomIphone.centerYAnchor.constraint(equalTo: self.view.centerYAnchor,constant: 0),
                self.detailCustomIphone.heightAnchor.constraint(equalToConstant: heightView),
                self.detailCustomIphone.widthAnchor.constraint(equalToConstant: widthView),
            ]
            NSLayoutConstraint.activate(constraintsView)
            
            
        }
    }
    
    
    /*
     * 災害円が追加されると呼ばれる
     * 追加された円の色を設定する
     */
    func mapView(_ mapView: MGLMapView, fillColorForPolygonAnnotation annotation: MGLPolygon) -> UIColor {
        
        switch jsonDataManager.sharedInstance.warnBox[polyNum].riskType {
            
        case 0: // 火災のとき：赤色
            return UIColor(red: 0.545, green: 0.020, blue: 0.220, alpha: kFill)
            
        case 1: // 浸水のとき：青色
            return UIColor(red: 0.000, green: 0.400, blue: 1.000, alpha: kFill)
            
        case 2: // 土砂崩れのとき：茶色
            return UIColor(red: 0.800, green: 0.400, blue: 0.000, alpha: kFill)
            
        case 3, 4, 5, 6: // 道路閉塞のとき：黄色
            return UIColor(red: 1.000, green: 0.945, blue: 0.024, alpha: kFill)
            
        default: // その他の災害のとき：緑色
            return UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: kFill)
        }
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
    
    
    // MARK:- detailViewDelegate
    
    func detailViewFinish() {
        updatePinText()
        detailview?.delegate = nil
        detailview?.removeFromSuperview()
        
    }
    
    
    
    // MARK:- configViewDelegate
    
    func configViewFinish() {
        configview?.delegate = nil
        configview?.removeFromSuperview()
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
        
        changeImage(jsonDataManager.sharedInstance.infoBox[index], MGLtag: osmInfoBox[index], newsize: CGFloat(kTagNewSize))
    }
    
    /**
     * 拡大縮小や現在地の更新による新しいピン画像の設定
     */
    func scalingImage() {
        if self.mapView.zoomLevel != beforeZoomLv {
            let beki: Int = Int(27 - self.mapView.zoomLevel)
            let zoomlv: CGFloat = pow(2, CGFloat(beki))
            
            for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
                if(jsonDataManager.sharedInstance.warnBox[i].stop == nil){
                    continue
                }
                
                if jsonDataManager.sharedInstance.warnBox[i].stop.compare(Date()) == ComparisonResult.orderedDescending && Date().compare(jsonDataManager.sharedInstance.warnBox[i].start) == ComparisonResult.orderedDescending {
                    
                    // 1度 = 約111km
                    //
                    //                     タグのサイズ (m)
                    //  画面の横幅 ×  ----------------------------
                    //                 縮尺度 × 111(km) × 1000    ← 画面が表示されている実際の範囲を m で計算している
                    //
                    // これで、画面の何%で表示すればいいかわかるので、それにscreenWidthをかけると、画面に表示する画像のサイズが決定する
                    // タグのサイズは、災害円の直径
                    
                    if jsonDataManager.sharedInstance.warnBox[i].expandImage != nil {
                        let han: Double = circleRadius[i] * self.kDia + 0.1
                        var newsize: Double = Double(screenWidth) * han / Double(zoomlv)
                        if newsize > Double(screenWidth) / 2 {
                            newsize = Double(screenWidth) / 2
                        }
//                        DispatchQueue.main.async {
                            self.changeImage(jsonDataManager.sharedInstance.warnBox[i], MGLtag: self.osmWarnBox[i], newsize: CGFloat(newsize))
//                        1}
                    }
                }
            }
        }
        
        
        beforeZoomLv = self.mapView.zoomLevel
    }
    
    
    /**
     * ピンのタグ画像を新しいタグ画像に更新する
     *
     * @param tag 更新するピン
     * @param MGLtag 更新するピン
     * @param newsize 新しいピン画像の縦幅
     */
    func changeImage(_ tag: TagData, MGLtag: MGLTagData, newsize: CGFloat) {
        
        let newimage = getResizeImage(tag.expandImage, newHeight: newsize) // 新しい画像
        mapView.removeAnnotation(MGLtag) // 古い災害ピンを削除
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
        
        let beki: Int = Int(27 - self.mapView.zoomLevel)
        let zoomlv: CGFloat = pow(2, CGFloat(beki))
        let han: Double = circleRadius[index] * self.kDia + 0.1
        var newsize: Double = Double(screenWidth) * han / Double(zoomlv)
        if newsize > Double(screenWidth) / 2 {
            newsize = Double(screenWidth) / 2
        }
        
        self.changeImage(jsonDataManager.sharedInstance.warnBox[index], MGLtag: self.osmWarnBox[index], newsize: CGFloat(newsize))
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
    @objc internal func onclick_AR(_ sender: UIButton) {
        playButtonSound()
        let vc = ARViewController()
        vc.modalPresentationStyle = .fullScreen
        self.present(vc, animated: true, completion: nil)
    }
    
    
    /*
     * 設定画面を開く
     */
    @objc internal func onClick_config(_ sender: UIButton) {
        playButtonSound()
        mapView.allowsScrolling = false // スクロールできないようにする
        mapView.allowsZooming = false // 拡大縮小できないようにする
        var location: CGPoint = mapView.center
        location.x = view.center.x - screenWidth / 3
        let background = UIImageView(frame: self.view.frame)
        background.alpha = 0.5
        background.backgroundColor = UIColor.gray
        backgroundView = background
        backgroundView.isUserInteractionEnabled = true
        backgroundView.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(osmViewController.onClick_configBackground(_:))))
        self.configview = ConfigView(frame: CGRect(x:0, y: 0, width: 300, height: 300))
        self.configview?.layer.cornerRadius = 20
        self.configview?.clipsToBounds = true
        self.warningView.backgroundColor = UIColor.clear
      
//        self.mapView.sendSubviewToBack(self.configview!)
        self.mapView.addSubview(backgroundView)
        backgroundView.translatesAutoresizingMaskIntoConstraints = false
        let constraints = [
            backgroundView.trailingAnchor.constraint(equalTo: view.trailingAnchor,constant: 0),
            backgroundView.leadingAnchor.constraint(equalTo: view.leadingAnchor,constant: 0),
            backgroundView.topAnchor.constraint(equalTo: view.topAnchor,constant: 0),
            backgroundView.bottomAnchor.constraint(equalTo: view.bottomAnchor,constant: 0),
        ]
        NSLayoutConstraint.activate(constraints)
//        self.view.bringSubviewToFront(backgroundView)
        self.mapView.addSubview(self.configview!)
        self.configview?.translatesAutoresizingMaskIntoConstraints = false
        let constraintsMap = [
            self.configview!.bottomAnchor.constraint(equalTo: self.view.bottomAnchor,constant: -20),
            self.configview!.centerXAnchor.constraint(equalTo: self.view.centerXAnchor,constant: 0),
            self.configview!.heightAnchor.constraint(equalToConstant: 300),
            self.configview!.widthAnchor.constraint(equalToConstant: 300)
        ]
        NSLayoutConstraint.activate(constraintsMap)
//        UIView.animate(
//            withDuration: 0.1,
//            delay:0.0,
//            options : UIView.AnimationOptions.curveEaseIn,
//            animations : {
//                self.warningView?.center = location
//                self.mapView.center = location
//        },
//            completion: {
//                (value: Bool) in
//
//
//        }
//        )
    }
    
    /*
     * 設定画面の「衛星画像/標準地図」を
     * タップした際に，地図データを切り替える
     */
    @objc internal func changeMB(_ sender: UIButton) {
        mapView.allowsScrolling = true // スクロールできるにする
        mapView.allowsZooming = true // 拡大縮小できるようにする
        var location: CGPoint = mapView.center
        location.x = view.center.x
        self.warningView?.center = location
        self.mapView.center = location
        
        self.warningView.backgroundColor = UIColor.clear
        self.configview?.removeFromSuperview()
        ConfigView().deleteConfigDisplay()
        
        mapView.frame = self.view.frame
        mapView.showsUserLocation = true // 現在地を表示する
        mapView.isPitchEnabled = false  // ジェスチャでの視点変更を許可しない
        
        let mapStyle = mapView.styleURL.absoluteString
        print(mapStyle)
        if mapStyle == styleMapboxURL!.absoluteString {
            displayMode = mode.osmsat.rawValue
            mapView.styleURL = MGLStyle.satelliteStyleURL
            mbStyle = mapView.styleURL.absoluteString
        }else if (mapStyle == MGLStyle.satelliteStyleURL.absoluteString)  {
            displayMode = mode.osm.rawValue
            mapView.styleURL = styleMapboxURL
            mbStyle = mapView.styleURL.absoluteString
        }else{
            print("currentDisplayMap :  その他のマップデータが使われています！")
        }
    }
    
    /*
     * 設定画面の「GIS情報」をタップした際に
     *　GIS情報を取得する
     */
    @objc internal func fetchGISInfo(_ sender: UIButton) {
        closeConfigBackground()
        // UIAlertController
        let alertController:UIAlertController =
            UIAlertController(title:"GISデータ表示",
                              message: "GISデータを選択してかください。",
                              preferredStyle: .alert)
        
        for i in 0 ..< GisList.sharedGis.list.count {
            let item = GisList.sharedGis.list[i]
            let action = UIAlertAction(title: item.name, style: .default){
                action in
                self.changeLayer(server: item.server)
                self.saveGisDatatoFile(json : item.glStyle)
                serverName = item.server
            }
            alertController.addAction(action)
        }
        let cancel = UIAlertAction(title: "表示なし", style: .default){
            action in
            if let layermap = self.mapView.style?.layer(withIdentifier: self.rasterLayer?.identifier ?? "") {
                self.mapView.style?.removeLayer(layermap)
            }
            
            if let sourcemap = self.mapView.style?.source(withIdentifier: self.source?.identifier ?? ""){
                self.mapView.style?.removeSource(sourcemap)
            }
            gisDisplayMode = gisMode.none
        }
        alertController.addAction(cancel)
        

        
        // UIAlertControllerの起動
        present(alertController, animated: true, completion: nil)
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
    //var rasterLayer : MGLRasterStyleLayer
    func changeLayer(server:String){
        if let layermap = mapView.style?.layer(withIdentifier: rasterLayer?.identifier ?? "") {
             mapView.style?.removeLayer(layermap)
        }
        
        if let sourcemap = mapView.style?.source(withIdentifier: source?.identifier ?? ""){
            mapView.style?.removeSource(sourcemap)
        }
        source = MGLRasterTileSource(identifier: "darkmatter", tileURLTemplates: [server], options: [ .tileSize: 256 ])
        if(source == nil){return}
        let layerStyle = MGLRasterStyleLayer(identifier: "darkmatter", source: source!)
        
        layerStyle.rasterOpacity = NSExpression(forConstantValue: 0.8)
        self.mapView.style?.addSource(source!)
        if let layer = mapView.style?.layer(withIdentifier: "darkmatter") {
            mapView.style?.insertLayer(layerStyle, above: layer)
            
        }else{
            self.mapView.style?.insertLayer(layerStyle, at: 10)
            
        }
        self.rasterLayer = layerStyle
        gisDisplayMode = gisMode.gis
        
    }
    /// 設定画面を閉じる
    func closeConfigBackground() {
        mapView.allowsScrolling = true
        mapView.allowsZooming = true
        var location: CGPoint = mapView.center
        location.x = view.center.x
        self.warningView.backgroundColor = UIColor.clear
        
        UIView.animate(
            withDuration: 0.1,
            delay:0.0,
            options : UIView.AnimationOptions.curveEaseIn,
            animations : {
                self.warningView?.center = location
                self.mapView.center = location
        },
            completion: {
                (value: Bool) in
                self.configview?.removeFromSuperview()
                ConfigView().deleteConfigDisplay()
        }
        )
    }
    
    
    /*
     * 設定画面の背景をタップしたとき
     * 表示されているものが廃棄される
     */
    @objc func onClick_configBackground(_ sender: UITapGestureRecognizer) {
        closeConfigBackground()
    }
    
    /*
     * 詳細画面の背景をタップしたとき
     * 表示されているものが廃棄される
     */
    @objc func onClick_detailBackground(_ sender: UITapGestureRecognizer) {
        updatePinText()
        detailview?.removeFromSuperview()
        detailView().deleteDetailView()
        detailCustomIphone.removeFromSuperview()
        detailCustomIphone.deleteDetailView()
        detailCustomIpad.removeFromSuperview()
        detailCustomIpad.deleteDetailView()

    }
    
    func detailViewIphoneFinish() {
        updatePinText()
        detailCustomIphone.delegate = nil
        detailCustomIphone.translatesAutoresizingMaskIntoConstraints = false
        detailCustomIphone.removeFromSuperview()
        detailCustomIphone.deleteDetailView()

    }
    func detailViewIpadFinish() {
        updatePinText()
        detailCustomIpad.delegate = nil
        detailCustomIpad.translatesAutoresizingMaskIntoConstraints = false
        detailCustomIpad.removeFromSuperview()
        detailCustomIpad.deleteDetailView()

    }
    
    func updatePinText(){
        runAfterDelay(kTouchView) {
            if pinData.inforType == kWarn {
                let beki: Int = Int(27 - self.mapView.zoomLevel)
                let zoomlv: CGFloat = pow(2, CGFloat(beki))
                let han: Double = circleRadius[pinData.pinNum] * self.kDia + 0.1
                var newsize: Double = Double(screenWidth) * han / Double(zoomlv)
                if newsize > Double(screenWidth) / 2 {
                    newsize = Double(screenWidth) / 2
                }
                
                jsonDataManager.sharedInstance.warnBox[pinData.pinNum].pinImage = getResizeImage(makeLabel(pinData.pinNum, inforType: kWarn), newHeight: CGFloat(newsize))
                jsonDataManager.sharedInstance.warnBox[pinData.pinNum].expandImage = getResizeImage(makeLabel(pinData.pinNum, inforType: kWarn), newHeight: CGFloat(newsize))
                self.changeImage(jsonDataManager.sharedInstance.warnBox[pinData.pinNum], MGLtag: self.osmWarnBox[pinData.pinNum], newsize: CGFloat(newsize))
                
            } else if pinData.inforType == kInfo {
                if pinData.icon == "icon_infoTag.png" {
                    self.makeRedTag(pinData.pinNum, img: UIImage(named: "icon_infoTag.png")!)
                }
            }
            cannotTouchView.removeFromSuperview()
        }
    }
    
    /*
     * 画面左上のボタンをタップした時
     * 画面が現在地を中心に表示する
     */
    @objc internal func nowLocate(_ sender: UIButton) {
        playButtonSound()
        self.mapView.setCenter(CLLocationCoordinate2D(latitude: self.mapView.userLocation!.coordinate.latitude, longitude: self.mapView.userLocation!.coordinate.longitude), zoomLevel: 16.5, animated: true)
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
        let centerLatRadians: Double = coordinate.latitude * Double.pi / 180
        let centerLonRadians: Double = coordinate.longitude * Double.pi / 180
        var coordinates = [CLLocationCoordinate2D]()
        
        for index in 0 ..< Int(numberOfPoints) {
            let degrees: Double = Double(index) * Double(degreesBetweenPoints)
            let degreeRadians: Double = degrees * Double.pi / 180
            let pointLatRadians: Double = asin(sin(centerLatRadians) * cos(distRadians) + cos(centerLatRadians) * sin(distRadians) * cos(degreeRadians))
            let pointLonRadians: Double = centerLonRadians + atan2(sin(degreeRadians) * sin(distRadians) * cos(centerLatRadians), cos(distRadians) - sin(centerLatRadians) * sin(pointLatRadians))
            let pointLat: Double = pointLatRadians * 180 / Double.pi
            let pointLon: Double = pointLonRadians * 180 / Double.pi
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
    @objc func update() {
        let nowTime = Date() // 現在時刻
        
        // 警告メッセージのタイマーを止める
        if warningTimer != nil {
            warningTimer.invalidate()
        }
        box.removeAll()
        warningEnter.removeAll()
        warningNear.removeAll()
        
        for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
            if(jsonDataManager.sharedInstance.warnBox[i].stop == nil){
                continue
            }
            // 過去の災害
            if nowTime.compare(jsonDataManager.sharedInstance.warnBox[i].stop) == ComparisonResult.orderedDescending {

                //stopの時刻を過ぎたから、災害の円や文字を消す
                self.mapView.removeAnnotation(self.polygon[i]) // 円を消す
                self.mapView.alpha = kMapNormalAlpha
                self.mapView.removeAnnotation(osmWarnBox[i]) // 災害のピン情報を削除
                // cameraViewController().warningView.backgroundColor = UIColor.clear // AR画面の警告モードをやめる
                
                // 現在災害発生中
            } else if jsonDataManager.sharedInstance.warnBox[i].stop.compare(nowTime) == ComparisonResult.orderedDescending && nowTime.compare(jsonDataManager.sharedInstance.warnBox[i].start) == ComparisonResult.orderedDescending {
                
                updatePin(i)
                
                let Sn = Date().timeIntervalSince(jsonDataManager.sharedInstance.warnBox[i].start) / 60 * kUpdateWarn // 開始時刻(start)と現在時刻(now)の差
                makeCircle(i, startNow: Sn)
                
                // 警告タグの範囲を更新
                let beki: Int = Int(27 - self.mapView.zoomLevel)
                let zoomlv: CGFloat = pow(2, CGFloat(beki))
                let han: Double = circleRadius[i] * self.kDia + 0.1
                var newsize: Double = Double(screenWidth) * han / Double(zoomlv)
                if newsize > Double(screenWidth) / 2 {
                    newsize = Double(screenWidth) / 2
                }
                
                box.append(i)
                jsonDataManager.sharedInstance.warnBox[i].distance = calcDistance(jsonDataManager.sharedInstance.warnBox[i].lat, lon: jsonDataManager.sharedInstance.warnBox[i].lon, uLat: userLat, uLon: userLon)
                if jsonDataManager.sharedInstance.warnBox[i].distance - Int(circleRadius[i]) < 0 {
                    let tagdata = jsonDataManager.sharedInstance.warnBox[i]
                    warningEnter.append(tagdata)
                }else if jsonDataManager.sharedInstance.warnBox[i].distance - Int(circleRadius[i]) < kNearMsg {
                    let tagdata = jsonDataManager.sharedInstance.warnBox[i]
                    warningNear.append(tagdata)
                }
            }
        }
        
        // 災害発生していないとき
        warningAllCount = warningEnter.count + warningNear.count
        if(warningEnter.count == 0){
            warningView.isHidden = true
            if audioPlayerIntr.isPlaying == true {
                audioPlayerIntr.stop()
            }
        }
        if(warningNear.count == 0){
            if audioPlayerNear.isPlaying == true {
                audioPlayerNear.stop()
            }
        }
        if warningAllCount == 0 {
            vibration.vibStop()
            warningMessage.isHidden = true
            // 災害が発生しているとき
        } else {
            updateWarningView()
            // 警告メッセージのタイマーを開始させる
             warningTimer = Timer.scheduledTimer(timeInterval: kUpdateMM, target: self, selector: #selector(osmViewController.updateWarningView), userInfo: nil, repeats: true)
        }
    }

    /*
     * 警告メッセージと警告モードを表示する
     */
    
    @objc func updateWarningView(){
        if(warningCount >= warningAllCount){
            warningCount = 0
        }
        let waringNearCount = warningCount - warningEnter.count
        if warningEnter.count > 0 && warningEnter.count > warningCount{
            
            if audioPlayerNear.isPlaying == true {
                audioPlayerNear.stop()
            }
            if audioPlayerIntr != nil {
                audioPlayerIntr.play()
                if vibration.isVibration == false {
                    vibration.vibIntrusionStart()
                }
            }
            warningView.isHidden = false
            warningMessage.isHidden = false
            warningMessage.text = warningEnter[warningCount].message2 // 警告メッセージ
            Notification.showNotification(tilte: "警告", message: warningEnter[warningCount].message2)
            
            switch warningEnter[warningCount].riskType {
            case 0: // 火災：赤色
                warningView.frame = CGRect(x: 0.0, y: 0.0, width: CGFloat(screenWidth), height: CGFloat(screenHeight))
                warningView.backgroundColor = UIColor(red: 1.000, green: 0.000, blue: 0.000, alpha: 1.0)
                
            case 1: // 浸水：青色
                warningView.frame = CGRect(x: 0.0, y: CGFloat(screenHeight * 0.75), width: CGFloat(screenWidth), height: CGFloat(screenHeight / 4))
                warningView.backgroundColor = UIColor(red: 0.000, green: 0.000, blue: 0.900, alpha: 1.0)
    
            case 2: // 土砂崩れ：茶色
                warningView.frame = CGRect(x: 0.0, y: CGFloat(screenHeight * 0.75), width: CGFloat(screenWidth), height: CGFloat(screenHeight / 4))
                warningView.backgroundColor = UIColor(red: 0.800, green: 0.400, blue: 0.000, alpha: 1.0)
                
            case 3, 4, 5, 6: // 道路閉塞：黄色
                warningView.frame = CGRect(x: 0.0, y: CGFloat(screenHeight * 0.75), width: CGFloat(screenWidth), height: CGFloat(screenHeight / 4))
                warningView.backgroundColor = UIColor(red: 1.000, green: 0.945, blue: 0.024, alpha: 1.0)
            default: // その他の災害：緑色
                warningView.frame = CGRect(x: 0.0, y: 0.0, width: CGFloat(screenWidth), height: CGFloat(screenHeight))
                warningView.backgroundColor = UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: 1.0)
                break
            }
            mapView.alpha = CGFloat(kMapAlpha) // 画面の色の濃さを設定する((濃)0<-->1.0(薄))
            
            if configview != nil {
                self.view.bringSubviewToFront(configview!)
            }
            warningCount += 1
        }
        
        if(warningNear.count > 0 && waringNearCount >= 0 &&  waringNearCount < warningNear.count){
            if audioPlayerIntr.isPlaying == false {
                if audioPlayerNear != nil {
                    audioPlayerNear.play()
                    if vibration.isVibration == false {
                        vibration.vibNearStart()
                    }
                }
            }
            warningMessage.isHidden = false
            warningMessage.text = warningNear[waringNearCount].message1
            warningCount += 1
        }
        
        if(warningCount >= warningAllCount){
            warningCount = 0
        }
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
    
    func playButtonSound(){

        if let soundURL = Bundle.main.url(forResource: "click", withExtension: "wav") {
            
            do {
                audioPlayer = try AVAudioPlayer(contentsOf: soundURL)
            }
            catch {
                print(error)
            }
            
            audioPlayer.play()
        }else{
            print("Unable to locate audio file")
        }
    }
    
}
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
