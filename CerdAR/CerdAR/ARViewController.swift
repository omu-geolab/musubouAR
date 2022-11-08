//
//  ARViewController.swift
//  CerdAR
//
//  Copyright (c) 2018 APPLIED TECHNOLOGY CO.,LTD., CERD (Osaka City University)
//

import UIKit
import ARKit
import SceneKit
import SpriteKit
import CoreLocation
import Mapbox
import MapKit
import AVFoundation

class ARViewController: UIViewController,detailViewDelegate {
    
    var automaticallyFindTrueNorth = true //真北を設定する
    var cameraStateInfoLabel: UILabel! //カメラの状態
    var mapView: MGLMapView!
    var sceneView: ARSCNView!
    var controlsContainerView: UIView!
//    var locationManager: CLLocationManager!
    var detailview: detailView? // 詳細画面
    var detailCustomIphone: DetailViewIphone = DetailViewIphone()
    // ARAnnotion管理
    var annotationManager: MapboxARAnnotationManager!
    let startUpdate = false
    var json: JSON!
    var rasterLayer: MGLRasterStyleLayer? //layer add
    
    var osmInfoBox = [MGLTagData]() // OSM情報タグ用
    var osmWarnBox = [MGLTagData]() // OSM警告タグ用
    
    var infoPinView = [MGLAnnotationImage]() // ピン画像(情報タグ)
    var warnPinView = [MGLAnnotationImage]() // ピン画像(警告タグ)
    var polygons = [PolygonView]() // 災害円
    var polyNum = 0 // 災害円のインデックス
    var testEnviroment:Int = 0 // 環境を取り替えり
  
    var flag = false //
    var imageView : UIImage?
    
//    var terrainNode: TerrainNode?
    //大阪市北区
    var minLat = 34.703712
    var minLon = 135.499320
    var maxLat = 34.708228
    var maxLon = 135.504813
    var altitude = 20.0
    
    //MARK:警告メッセージの表示位置（高さ）をいじる場合はy:の値を変更する
    var warningMessage = UILabel(frame: CGRect(x: screenWidth*0.45 - 55.0 - butSize, y: screenHeight * 0.8, width: screenWidth * 0.37, height: screenHeight * 0.13)) // 警告メッセージ
    
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
    
    var warningView: UIView! // 災害範囲内に侵入した時に画面の色を変える
    var warnNums: [Int] = [] // 災害番号
    var box: [Int] = [] // 現在発生している災害の番号を管理する配列
    var updateTimer: Timer! // 一定時間ごとにupdate()を発火させる
    var timerUpdateFace: Timer!//AR平面図更新
    var warnCount:Int = 0 //災害を侵入する番号
    
    var warningCount = 0 //災害を侵入する番号
    var warningAllCount = 0
    var warningEnter:[TagData] = []
    var warningNear:[TagData] = []
    var warningSafeCount = 0
    var warningTimer: Timer!
    
    var warnState = warningState.safe.rawValue // 現在ユーザーは災害からどの位置にいるか(安全・付近・侵入)
    var warnIndex = -1 //災害を侵入すると災害種別のインデクス
    var textStepper:UITextView!
    var label:UILabel!
    var resetKalmanFilter: Bool = false
    var audioPlayer: AVAudioPlayer!
    var levelZoomMap:Double = 1.0
    var isOrientation = false
    let scene = SCNScene()
    let slider = SectionedSlider(
        frame: CGRect(x: 20, y: 300, width: 70, height: 178), // Choose a 15.6 / 40 ration for width/height
        selectedSection: 3, // Initial selected section
        sections: 20, // Number of sections. Choose between 2 and 20
        palette: Palette(
            viewBackgroundColor: UIColor(red: 0, green: 0, blue: 0, alpha: 0),
            sliderBackgroundColor: .yellow,
            sliderColor: .systemYellow
        )
    )
    override func viewDidLoad() {
        super.viewDidLoad()
        slider.frame = CGRect(x: 20, y: self.view.bounds.height/2, width: 70, height: 178)
        displayMode = mode.cam.rawValue
        
        cameraStateInfoLabel = UILabel(frame: CGRect(x: CGFloat(screenWidth)/2, y: 0, width: 250, height: 50))
        
        sceneView = ARSCNView(frame: self.view.frame)
        sceneView.delegate = self
        //sceneView.debugOptions = [ARSCNDebugOptions.showFeaturePoints, ARSCNDebugOptions.showWorldOrigin]
        /* 警告ビューの設定 */
        warningView = UIView(frame: CGRect.init(x: kZero, y: kZero, width: CGFloat(screenWidth), height: CGFloat(screenHeight)))
        view.addSubview(warningView) // viewに追加
        //環境を設定する
        sceneView.scene = scene
        
        //カメラを設定する
        let cameraNode = SCNNode()
        cameraNode.camera = SCNCamera()
        cameraNode.position = SCNVector3(x: 0, y: 0, z: 5)
        scene.rootNode.addChildNode(cameraNode)
        
        //ライトを設定する
        let lightNode = SCNNode()
        let light = SCNLight()
        light.type = .ambient
        light.intensity = 600
        lightNode.light = light
        scene.rootNode.addChildNode(lightNode)
        
        let lightNode1 = SCNNode()
        let light1 = SCNLight()
        light1.type = .directional
        light1.intensity = 600
        lightNode1.light = light1
        scene.rootNode.addChildNode(lightNode1)
        
        let lightNode2 = SCNNode()
        let light2 = SCNLight()
        light2.type = .omni
        light2.intensity = 500
        lightNode2.light = light2
        scene.rootNode.addChildNode(lightNode2)
        
        //ARアノテーションのタッチイベント
        let tapGesture = UITapGestureRecognizer(target: self, action:#selector(handleTap(_:)))
        sceneView.addGestureRecognizer(tapGesture)
      
       
        self.view.addSubview(sceneView)
        sceneView.translatesAutoresizingMaskIntoConstraints = false
        let constraints = [
            sceneView.leadingAnchor.constraint(equalTo: view.leadingAnchor,constant: 0),
            sceneView.trailingAnchor.constraint(equalTo: view.trailingAnchor,constant: 0),
            sceneView.topAnchor.constraint(equalTo: view.topAnchor,constant: 0),
            sceneView.bottomAnchor.constraint(equalTo: view.bottomAnchor,constant: 0),
        ]

        NSLayoutConstraint.activate(constraints)
       
        self.view.addSubview(cameraStateInfoLabel)
        var sizeButton =  butSize * 1.0
        let margins = view.layoutMarginsGuide
        // 地図切替ボタン
        let toMap_Button = UIButton()
        let buttonImage: UIImage = UIImage(named: "home-icon")!
        if UIDevice.current.userInterfaceIdiom == .pad{
            sizeButton =  butSize * 1.2
        }
        toMap_Button.setImage(buttonImage, for: UIControl.State())
        toMap_Button.layer.shadowColor = UIColor.black.cgColor
        toMap_Button.layer.shadowRadius = 5
        toMap_Button.layer.shadowOffset = CGSize(width: 5, height: 5)
        toMap_Button.layer.shadowOpacity = 0.6
        view.addSubview(toMap_Button)
        
        toMap_Button.translatesAutoresizingMaskIntoConstraints = false
        let constraintsMap = [
            toMap_Button.leadingAnchor.constraint(equalTo: view.leadingAnchor,constant: 10),
            toMap_Button.topAnchor.constraint(equalTo: margins.topAnchor, constant: 10),
            toMap_Button.heightAnchor.constraint(equalToConstant: sizeButton),
            toMap_Button.widthAnchor.constraint(equalToConstant: sizeButton)
        ]
        NSLayoutConstraint.activate(constraintsMap)
        toMap_Button.addTarget(self, action: #selector(ARViewController.onClick_map(_:)), for: .touchUpInside)
        
        // AR更新
        let changeAR_Button = UIButton()
        let arChangeImage: UIImage = UIImage(named: "refresh-ar-icon")!
        changeAR_Button.setImage(arChangeImage, for: UIControl.State())
        changeAR_Button.layer.shadowColor = UIColor.black.cgColor
        changeAR_Button.layer.shadowRadius = 5
        changeAR_Button.layer.shadowOffset = CGSize(width: 5, height: 5)
        changeAR_Button.layer.shadowOpacity = 0.6
        
        view.addSubview(changeAR_Button)
        
        changeAR_Button.translatesAutoresizingMaskIntoConstraints = false
        let constraintsAR = [
            changeAR_Button.rightAnchor.constraint(equalTo: view.rightAnchor,constant: -10),
            changeAR_Button.topAnchor.constraint(equalTo: margins.topAnchor, constant: 10),
            changeAR_Button.heightAnchor.constraint(equalToConstant: sizeButton),
            changeAR_Button.widthAnchor.constraint(equalToConstant: sizeButton)
        ]
        NSLayoutConstraint.activate(constraintsAR)
        changeAR_Button.addTarget(self, action: #selector(ARViewController.changeAR(_:)), for: .touchUpInside)
        changeAR_Button.startAnimatingPressActions()
        toMap_Button.startAnimatingPressActions()
        //AR高度変更
        slider.layer.shadowColor = UIColor.black.cgColor
        slider.layer.shadowRadius = 5
        slider.layer.shadowOffset = CGSize(width: 5, height: 5)
        slider.layer.shadowOpacity = 0.6
        slider.isHidden = true
       

        label = UILabel(frame: CGRect(x: 20, y: self.view.bounds.height/2 - 120, width: 70, height: 50))
        label.textAlignment = .center
        label.font = label.font.withSize(25)
        label.textColor = .black
        label.backgroundColor = UIColor(red: 255, green: 255, blue: 255, alpha: 0.9)
        label.layer.cornerRadius = 15
        label.clipsToBounds = true
        label.layer.shadowColor = UIColor.black.cgColor
        label.layer.shadowRadius = 5
        label.layer.shadowOffset = CGSize(width: 5, height: 5)
        label.layer.shadowOpacity = 0.6
        label.isHidden = true
        slider.delegate = self
        view.addSubview(slider)
        if(gisDisplayMode == gisMode.gis){
            slider.isHidden = false
            label.isHidden = false
        }
        slider.translatesAutoresizingMaskIntoConstraints = false
        let constraintsSlider = [
            slider.trailingAnchor.constraint(equalTo: view.trailingAnchor,constant: -10),
            slider.centerYAnchor.constraint(equalTo: view.centerYAnchor,constant: 35),
            slider.heightAnchor.constraint(equalToConstant: 178),
            slider.widthAnchor.constraint(equalToConstant: 70)
        ]
        NSLayoutConstraint.activate(constraintsSlider)
        view.addSubview(label)
        label.translatesAutoresizingMaskIntoConstraints = false
        let constraintsLabel = [
            label.trailingAnchor.constraint(equalTo: view.trailingAnchor,constant: -10),
            label.centerYAnchor.constraint(equalTo: view.centerYAnchor,constant: -90),
            label.heightAnchor.constraint(equalToConstant: 50),
            label.widthAnchor.constraint(equalToConstant: 70)
        ]
        NSLayoutConstraint.activate(constraintsLabel)

        // ARアノテーションマネージャを作成し、それにARセッションへの参照を与える
        annotationManager = MapboxARAnnotationManager(session: sceneView.session)
        // location service
//        if (CLLocationManager.locationServicesEnabled())
//        {
//            locationManager = CLLocationManager()
//            //locationManager.requestLocation()
//            locationManager.requestWhenInUseAuthorization()
//            locationManager.requestAlwaysAuthorization()
//            locationManager.desiredAccuracy = kCLLocationAccuracyBest
//            locationManager.delegate = self
//            locationManager.allowsBackgroundLocationUpdates = true
//            locationManager.startUpdatingLocation()
//
//        }
        /* 警告メッセージの設定 */
        warningMessage = UILabel()
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
        view.addSubview(warningMessage)
        warningMessage.isHidden = true
        warningMessage.translatesAutoresizingMaskIntoConstraints = false
        var widthtWaring  = realWidth! - 100
        var heightWaring = realHeight!
        if UIDevice.current.userInterfaceIdiom == .pad{
            widthtWaring =  widthtWaring*1.1
            heightWaring = widthtWaring/8
        } else {
            heightWaring = widthtWaring/3
        }
        
        let constraintsWarning = [
            warningMessage.bottomAnchor.constraint(equalTo: view.bottomAnchor,constant: -190),
            warningMessage.centerXAnchor.constraint(equalTo: margins.centerXAnchor,constant: 0),
            warningMessage.heightAnchor.constraint(equalToConstant: heightWaring),
            warningMessage.widthAnchor.constraint(equalToConstant: widthtWaring)
        ]
        NSLayoutConstraint.activate(constraintsWarning)

        startSession()
        configureMapboxMapView()
     
        NotificationCenter.default.addObserver(
                    self,
                    selector: #selector(orientationChanged),
                    name: UIDevice.orientationDidChangeNotification,
                    object: nil)
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
       
        timerUpdateFace = Timer.scheduledTimer(timeInterval: kUpdateFace, target: self, selector: #selector(ARViewController.updateFace), userInfo: nil, repeats: true)
    
//        update() // 災害情報を更新する
        // kUpdateWarn秒に1回update()を発火させる
        if updateTimer == nil {
            updateTimer = Timer.scheduledTimer(timeInterval: kUpdateWarn, target: self, selector: #selector(ARViewController.update), userInfo: nil, repeats: true)
        }
    }
    
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        
        // Pause the view's session
        sceneView.session.pause()
        if warningTimer != nil {
            warningTimer.invalidate()
        }
        if updateTimer != nil {
            updateTimer.invalidate()
        }
        if timerUpdateFace != nil {
            timerUpdateFace.invalidate()
        }
        vibration.vibStop()
        if audioPlayerNear.isPlaying == true {
            audioPlayerNear.stop()
        }
        if audioPlayerIntr.isPlaying == true {
            audioPlayerIntr.stop()
        }
//        locationManager.stopUpdatingLocation()

        sceneView.delegate = nil
        sceneView.scene.rootNode.cleanup()
        sceneView.removeFromSuperview()
        sceneView = nil
        osmInfoBox.removeAll()
        osmWarnBox.removeAll()
        infoPinView.removeAll()
        warnPinView.removeAll()
        polygons.removeAll()
        NotificationCenter.default.removeObserver(self)
        slider.delegate = nil
        mapView.delegate = nil
        for view  in self.view.subviews{
            view.removeConstraints(view.constraints)
            view.removeFromSuperview()
        }
       
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
    
    @objc func orientationChanged() {
      isOrientation =  true
    }
    
    //MARK: Action
    //地図を戻す
    @objc func onClick_map(_ sender: UIButton) {
        playButtonSound()
        self.dismiss(animated: true, completion: nil)
        let vc = osmViewController()
        let appDelegate = UIApplication.shared.delegate as! AppDelegate
        appDelegate.window?.rootViewController = vc
    }
    @objc func changeAR(_ sender: UIButton) {
        playButtonSound()
        startSession()
        self.updateFace()
    }
    
    @objc func sliderDidChangeValue(_ sender: UISlider) { // @IBActionでも可
        print(sender.value) // 0.0
    }
    
    //環境を取り替えり
    @objc func changeEnvironment(_ sender: UIButton) {
        
        let size = self.sceneView.bounds.size
        let overlay = OverlayScene(size: size)
        let positionTop = CGPoint(x: 0, y: size.height*0.5)
        let positionBot = CGPoint(x: 0, y: -size.height*0.5)
        let positionRight = CGPoint(x: size.width*0.4, y: size.height*0.5)
        let range = size.width
        switch testEnviroment%5 {
            
        case 0: // 火災のとき
            overlay.addEnvironment(filedNamed: "SceneKit.scnassets/fire1.sks", position: positionBot, range: range)
        case 1: // 浸水のとき
            overlay.addEnvironment(filedNamed: "SceneKit.scnassets/rain.sks", position: positionTop, range: range)
            overlay.addEnvironment(filedNamed: "SceneKit.scnassets/flood.sks", position: positionBot, range: range)
        case 2: // 土砂崩れのとき
            overlay.addEnvironment(filedNamed: "SceneKit.scnassets/rock.sks", position: positionRight, range: 350)
            
        case 3: // 道路閉塞のとき
            overlay.addEnvironment(filedNamed: "SceneKit.scnassets/smoke.sks", position: positionTop, range: range)
        default:
            print("default")
        }
        
        runAfterDelay(0.1) {
            self.sceneView.overlaySKScene = overlay
            
        }
        testEnviroment = testEnviroment + 1
    }
    
    //ARAnnotationWを押すとARの情報を表示する
    @objc func handleTap(_ gestureRecognize: UIGestureRecognizer) {
        
        let p = gestureRecognize.location(in: sceneView)
        let hitResults = sceneView.hitTest(p, options: [:])
        
        if hitResults.count > 0 {
            // retrieved the first clicked object
            let result: AnyObject = hitResults[0]
            if let anchor = sceneView.anchor(for: result.node) {
                if(anchor.name == "map_surface"){
                    
                    return
                }
                let mapboxAnchor = anchor as! MapboxARAnchor
                let info = mapboxAnchor.name?.split(separator: "_")
                if(info!.count > 1){
                    self.view.addSubview(cannotTouchView) // 画面をさわれないようにする
                    
                    // タップしたタグを赤くする
                    if(info![0] == kInfo){
                        pinData = jsonDataManager.sharedInstance.infoBox[Int(info![1])!]
                    }else if (info![0] == kWarn){
                        pinData = jsonDataManager.sharedInstance.warnBox[Int(info![1])!]
                    }else {
                        return
                    }
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
        }
    }
    
    // MARK: - Utility methods
    
    private func startSession() {
        // Create a session configuration
        let configuration = ARWorldTrackingConfiguration()
        
        if automaticallyFindTrueNorth {
            configuration.worldAlignment = .gravityAndHeading
            
        } else {
            configuration.worldAlignment = .gravity
        }
        
        // Run the view's session
        sceneView.session.run(configuration,options: [
                                .resetTracking,
                                .removeExistingAnchors])
        flag  = true
    }
    
    func resetARSession() {
        startSession()
    }

    //マープを設定する
    private func configureMapboxMapView() {
        //createSnapshot()//AR平面図作成
        let d:CGFloat = 375
        mapView = MGLMapView(frame: CGRect(x: 0, y: 0, width: d, height: d))
        mapView.autoresizingMask = [.flexibleWidth, .flexibleHeight]
        mapView.camera = MGLMapCamera(lookingAtCenter: CLLocationCoordinate2D(latitude: 34.7, longitude: 135.5), altitude: 1200, pitch: 45, heading: 0)
        var styleStreet = MGLStyle.streetsStyleURL(withVersion: 9)
        if(gisDisplayMode == gisMode.gis){
            styleStreet = URL(string: "mapbox://styles/th-nguyen/ckt40rmik0ez517lp7b2lormn") ??  MGLStyle.streetsStyleURL(withVersion: 9)
        }
        mapView.layer.cornerRadius = mapView.frame.height/2
        
        mapView.styleURL = styleStreet
        mapView.setCenter(CLLocationCoordinate2D(latitude: userLat, longitude: userLon), zoomLevel: 18, animated: false)
        mapView.setUserTrackingMode(.followWithHeading, animated: true, completionHandler: nil)
        mapView.delegate = self
        mapView.allowsTilting = false
        mapView.allowsRotating = false
        mapView.allowsZooming = false
        mapView.allowsScrolling = false
        #if DEBUG
        mapView.allowsTilting = true
        mapView.allowsRotating = true
        mapView.allowsZooming = true
        mapView.allowsScrolling = true
        #endif
        if isTestMode {
            mapView.allowsTilting = true
            mapView.allowsRotating = true
            mapView.allowsZooming = true
            mapView.allowsScrolling = true
        }
        mapView.showsUserHeadingIndicator =  true
        mapView.layer.shadowColor = UIColor.black.cgColor
        mapView.layer.shadowRadius = 5
        mapView.layer.shadowOffset = CGSize(width: 5, height: 5)
        mapView.layer.shadowOpacity = 0.6
        self.view.addSubview(mapView)
        
        let margins = view.layoutMarginsGuide
        mapView.translatesAutoresizingMaskIntoConstraints = false
        let constraintsMapbox = [
            mapView.bottomAnchor.constraint(equalTo: view.bottomAnchor,constant: d/2),
            mapView.centerXAnchor.constraint(equalTo: margins.centerXAnchor,constant: 0),
//            mapView.centerXAnchor.constraint(equalToSystemSpacingBelow: view.centerXAnchor, multiplier: 1),
            mapView.heightAnchor.constraint(equalToConstant: d),
            mapView.widthAnchor.constraint(equalToConstant: d)
        ]
        NSLayoutConstraint.activate(constraintsMapbox)
        
        for i in 0 ..< jsonDataManager.sharedInstance.infoBox.count {
            if(jsonDataManager.sharedInstance.infoBox[i].lat == nil ){
                continue
            }
            osmInfoBox.append(MGLTagData())
            infoPinView.append(MGLAnnotationImage())
            osmInfoBox[i].inforType = jsonDataManager.sharedInstance.infoBox[i].inforType // タグの種類
            osmInfoBox[i].pinNum = i //ピン番号
            osmInfoBox[i].coordinate = CLLocationCoordinate2D(latitude: jsonDataManager.sharedInstance.infoBox[i].lat, longitude: jsonDataManager.sharedInstance.infoBox[i].lon) // 位置
            mapView.addAnnotation(osmInfoBox[i])
            
        }
        
        for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
            if(jsonDataManager.sharedInstance.warnBox[i].lat == nil ){
                continue
            }
            osmWarnBox.append(MGLTagData())
            warnPinView.append(MGLAnnotationImage())
            osmWarnBox[i].inforType = jsonDataManager.sharedInstance.warnBox[i].inforType // タグの種類
            osmWarnBox[i].pinNum = i //ピン番号
            osmWarnBox[i].coordinate = CLLocationCoordinate2D(latitude: jsonDataManager.sharedInstance.warnBox[i].lat, longitude: jsonDataManager.sharedInstance.warnBox[i].lon) // 位置

            mapView.addAnnotation(polygonCircleForCoordinate(coordinate: osmWarnBox[i].coordinate, withMeterRadius: jsonDataManager.sharedInstance.warnBox[i].range,pinNum: i))
            mapView.addAnnotation(osmWarnBox[i])

        }
    }
    
    /// 円を描く
    ///
    /// - Parameters:
    ///   - coordinate: coordinate description
    ///   - withMeterRadius: withMeterRadius description
    ///   - pinNum: pinNum description
    /// - Returns: return value description
    func polygonCircleForCoordinate(coordinate: CLLocationCoordinate2D, withMeterRadius: Int,pinNum: Int) -> PolygonView{
        let degreesBetweenPoints = 8.0
        //45 sides
        let numberOfPoints = floor(360.0 / degreesBetweenPoints)
        let distRadians: Double = Double(withMeterRadius) / 6371000.0
        // earth radius in meters
        let centerLatRadians: Double = coordinate.latitude * Double.pi / 180
        let centerLonRadians: Double = coordinate.longitude * Double.pi / 180
        var coordinates = [CLLocationCoordinate2D]()
        //array to hold all the points
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
        let polygonView = PolygonView(coordinates: &coordinates, count: UInt(coordinates.count))

        polygonView.pinNum = pinNum
        polygons.append(polygonView)
        return polygonView
        //self.mapView.addAnnotation(polygon)
    }
    
    func loadGeoJson() {
        DispatchQueue.global().async {
            let fileName = "LinePolygon.geojson"
            if let dir: NSString = NSSearchPathForDirectoriesInDomains(FileManager.SearchPathDirectory.documentDirectory, FileManager.SearchPathDomainMask.allDomainsMask, true).first as NSString? {
                let pathFileName = dir.appendingPathComponent(fileName)
                guard let data = try? Data(contentsOf: URL(fileURLWithPath: pathFileName)) else {
                    if let path = Bundle.main.path(forResource: "LinePolygon", ofType: "geojson"){
                        let url = URL(fileURLWithPath: path)
                        guard let jsonData = try? Data(contentsOf: url) else {
                            preconditionFailure("Failed to parse GeoJSON file")
                        }
                        DispatchQueue.main.async {
                            self.drawPolyline(geoJson: jsonData)
                        }
                    }
                    return
                }
                DispatchQueue.main.async {
                    self.drawPolyline(geoJson: data)
                }
            }
        }
    }
    
    func drawPolyline(geoJson: Data) {
        // Add our GeoJSON data to the map as an MGLGeoJSONSource.
        // We can then reference this data from an MGLStyleLayer.
        
        // MGLMapView.style is optional, so you must guard against it not being set.
        guard let style = self.mapView.style else { return }
        
        guard let shapeFromGeoJSON = try? MGLShape(data: geoJson, encoding: String.Encoding.utf8.rawValue) else {
            fatalError("Could not generate MGLShape")
        }
        
        let source = MGLShapeSource(identifier: "polyline", shape: shapeFromGeoJSON, options: nil)
        style.addSource(source)
        
        // Create new layer for the line.
        let layer = MGLLineStyleLayer(identifier: "polyline", source: source)
        
        // Set the line join and cap to a rounded end.
        layer.lineJoin = NSExpression(forConstantValue: "round")
        layer.lineCap = NSExpression(forConstantValue: "round")
        
        // Set the line color to a constant blue color.
        layer.lineColor = NSExpression(forConstantValue: UIColor(red: 59/255, green: 178/255, blue: 208/255, alpha: 1))
        
        // Use `NSExpression` to smoothly adjust the line width from 2pt to 20pt between zoom levels 14 and 18. The `interpolationBase` parameter allows the values to interpolate along an exponential curve.
        layer.lineWidth = NSExpression(format: "mgl_interpolate:withCurveType:parameters:stops:($zoomLevel, 'linear', nil, %@)",
                                       [14: 2, 18: 20])
        
        // We can also add a second layer that will draw a stroke around the original line.
        let casingLayer = MGLLineStyleLayer(identifier: "polyline-case", source: source)
        // Copy these attributes from the main line layer.
        casingLayer.lineJoin = layer.lineJoin
        casingLayer.lineCap = layer.lineCap
        // Line gap width represents the space before the outline begins, so should match the main line’s line width exactly.
        casingLayer.lineGapWidth = layer.lineWidth
        // Stroke color slightly darker than the line color.
        casingLayer.lineColor = NSExpression(forConstantValue: UIColor(red: 41/255, green: 145/255, blue: 171/255, alpha: 1))
        // Use `NSExpression` to gradually increase the stroke width between zoom levels 14 and 18.
        casingLayer.lineWidth = NSExpression(format: "mgl_interpolate:withCurveType:parameters:stops:($zoomLevel, 'linear', nil, %@)", [14: 1, 18: 4])
        
        // Just for fun, let’s add another copy of the line with a dash pattern.
        let dashedLayer = MGLLineStyleLayer(identifier: "polyline-dash", source: source)
        dashedLayer.lineJoin = layer.lineJoin
        dashedLayer.lineCap = layer.lineCap
        dashedLayer.lineColor = NSExpression(forConstantValue: UIColor.white)
        dashedLayer.lineOpacity = NSExpression(forConstantValue: 0.5)
        dashedLayer.lineWidth = layer.lineWidth
        // Dash pattern in the format [dash, gap, dash, gap, ...]. You’ll want to adjust these values based on the line cap style.
        dashedLayer.lineDashPattern = NSExpression(forConstantValue: [0, 1.5])
        
        style.addLayer(layer)
        style.addLayer(dashedLayer)
        style.insertLayer(casingLayer, below: layer)
    }
    
    // reset
    func detailViewFinish() {
        
        runAfterDelay(kTouchView) {
            cannotTouchView.removeFromSuperview()
        }
        detailview?.delegate = nil
        detailview?.removeFromSuperview()
    }
    
    
    func restartSessionWithoutDelete() {
        // Restart session with a different worldAlignment - prevents bug from crashing app
        self.sceneView.session.pause()
        startSession()
    }
    
    @objc func createSnapshot() {
        // Use the map's style, camera, size, and zoom level to set the snapshot's options.
        let size = CGSize(width: widthMapAR, height: heightMapAR)
        let location = CLLocationCoordinate2D(latitude: userLat, longitude: userLon)
        let camera  = MGLMapCamera(lookingAtCenter: location, acrossDistance: 0, pitch: 0, heading: 0)
       
        var customStyleURL = Bundle.main.url(forResource: "third_party_vector_style", withExtension: "json")!
        if let dir = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask).first {
            customStyleURL = dir.appendingPathComponent(fileName)
        }
        if(gisDisplayMode != gisMode.gis){
            customStyleURL = MGLStyle.streetsStyleURL(withVersion: 9)
            if(self.flag){
                self.updateEnvorimentAR(currentLocation: CLLocation(latitude: userLat, longitude: userLon))
            }
            return
        }
        
        let options = MGLMapSnapshotOptions(styleURL: customStyleURL, camera: camera, size: size)
        let mapWidth = (cos(userLat * Double.pi/180) * 2 * Double.pi * 6378137)/2
         
        let level = log2(mapWidth / 256)
        options.zoomLevel = level
        var snapshotter: MGLMapSnapshotter? = MGLMapSnapshotter(options: options)
        
        //snapshotter.
        snapshotter?.start { (snapshot, error) in
            if error != nil {
                print("Unable to create a map snapshot.")
               // self.updateFace()
                
            } else if let snapshot = snapshot {
                self.imageView = snapshot.image
                DispatchQueue.main.async {
                    self.annotationManager.removeFaceARAnchor()
                    if(adjustHeightAR > 0.4 ){
                        self.annotationManager.addMapSurface()
                        if(self.flag){
                            self.updateEnvorimentAR(currentLocation: CLLocation(latitude: userLat, longitude: userLon))
                        }
                    }
                }
                //self.mapView.setUserTrackingMode(.followWithHeading, animated: true, completionHandler: nil)
            }
            snapshotter = nil
        }
    }
    //
    func getJsonFromUrl(urlString:String,i:Int,type:String){
        
        let url = URL(string: urlString)
        let req = URLRequest(url: url!, timeoutInterval: 3.0)
        
        let configuration = URLSessionConfiguration.default
        configuration.requestCachePolicy = NSURLRequest.CachePolicy.reloadIgnoringLocalCacheData
        let session = URLSession(configuration: configuration, delegate:nil, delegateQueue:OperationQueue.main)
        
        let task = session.dataTask(with: req, completionHandler: {
            (data, response, error) -> Void in
            
            // urlが見つからない、またはタイムアウトしたとき
            if error != nil {
                // 成功したとき
            } else {
                if let jsonObj = try? JSONSerialization.jsonObject(with: data!, options: .mutableContainers) as? NSDictionary {
                    
                    let alt = jsonObj.value(forKey: "elevation")!
                    if(type == kWarn){
                        jsonDataManager.sharedInstance.warnBox[i].elevation = alt as? Double
                    }else if (type == kInfo){
                        jsonDataManager.sharedInstance.infoBox[i].elevation = alt as? Double
                    }
                    
                }
            }
        })
        task.resume()
    }
    
    /// ARAnnotaionを追加する
    ///
    /// - Parameter currentLocation: 現在の位置
    func updateEnvorimentAR(currentLocation:CLLocation) {
        
        annotationManager.removeAllARAnchors()
        for i in 0 ..< jsonDataManager.sharedInstance.infoBox.count {
            if(jsonDataManager.sharedInstance.infoBox[i].lat == nil){
                continue
            }
            let coordinate = CLLocation(latitude: jsonDataManager.sharedInstance.infoBox[i].lat, longitude: jsonDataManager.sharedInstance.infoBox[i].lon )
            // print(jsonDataManager.sharedInstance.infoBox[i].icon)
            jsonDataManager.sharedInstance.infoBox[i].distance = Int(coordinate.distance(from: currentLocation))
            annotationManager.addARAnnotation(startLocation: currentLocation, endLocation: coordinate, tagData:jsonDataManager.sharedInstance.infoBox[i] )
        }
        let nowTime = Date()
        for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
            if(jsonDataManager.sharedInstance.warnBox[i].lat == nil){
                continue
            }
            let coordinate = CLLocation(latitude: jsonDataManager.sharedInstance.warnBox[i].lat, longitude: jsonDataManager.sharedInstance.warnBox[i].lon )
            //print(jsonDataManager.sharedInstance.warnBox[i].icon)
            jsonDataManager.sharedInstance.warnBox[i].distance = Int(coordinate.distance(from: currentLocation))
            if jsonDataManager.sharedInstance.warnBox[i].stop.compare(nowTime) == ComparisonResult.orderedDescending && nowTime.compare(jsonDataManager.sharedInstance.warnBox[i].start) == ComparisonResult.orderedDescending {
                annotationManager.addARAnnotation(startLocation: currentLocation, endLocation: coordinate, tagData:jsonDataManager.sharedInstance.warnBox[i])
            }
        }
        //mapView.userTrackingMode = .followWithHeading
    }
    
    @objc func updateFace(){
//        startSession()
        createSnapshot()
    }
    
    @objc func update() {
        let nowTime = Date() // 現在時刻
        
        box.removeAll()
        
        if isSound {
            audioPlayerNear.volume = 1
            audioPlayerIntr.volume = 1
        }else {
            audioPlayerNear.volume = 0
            audioPlayerIntr.volume = 0
        }
        
        // 警告メッセージのタイマーを止める
        if warningTimer != nil {
            warningTimer.invalidate()
        }
        
        warningEnter.removeAll()
        warningNear.removeAll()
        
        for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
            if(jsonDataManager.sharedInstance.warnBox[i].stop == nil){
                continue;
            }
            if jsonDataManager.sharedInstance.warnBox[i].stop.compare(nowTime) == ComparisonResult.orderedDescending && nowTime.compare(jsonDataManager.sharedInstance.warnBox[i].start) == ComparisonResult.orderedDescending {
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
            warningTimer = Timer.scheduledTimer(timeInterval: kUpdateMM, target: self, selector: #selector(ARViewController.updateWarningView), userInfo: nil, repeats: true)
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
//            Notification.showNotification(tilte: "警告", message: NSString(format: "%.2f", CGFloat.random(in: 1...1000)) as String)
            WorkoutService.shared.send(key: "notification", message: warningMessage.text ?? "")
            switch warningEnter[warningCount].riskType {
            case 0: // 火災：赤色
                warningView.frame = CGRect(x: 0.0, y: 0.0, width: CGFloat(screenWidth), height: CGFloat(screenHeight))
                warningView.backgroundColor = UIColor(red: 1.000, green: 0.000, blue: 0.000, alpha: 1.0)
                
            case 1, 7: // 浸水・津波：青色
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
}

// MARK: - CLLocationManagerDelegate

extension ARViewController: CLLocationManagerDelegate{
    // 位置を変わるとARAnnotationを再表示する
    func locationManager(_ manager: CLLocationManager, didUpdateLocations locations: [CLLocation]) {
//        if let location = locations.last{
//            altitude = location.altitude
////            userLat = location.coordinate.latitude
////            userLon = location.coordinate.longitude
//            updateAllDistances()
//            updateStatus()
//        }
    }
    func filterAndAddLocation(_ location: CLLocation) -> Bool{
        let age = -location.timestamp.timeIntervalSinceNow
        
        if age > 10{
            print("Locaiton is old.")
            return false
        }
        
        if location.horizontalAccuracy < 0{
            print("Latitidue and longitude values are invalid.")
            return false
        }
        
        if location.horizontalAccuracy > 100{
            print("Accuracy is too low.")
            return false
        }
        
        print("Location quality is good enough.")
        userLon = location.coordinate.longitude
        userLat = location.coordinate.latitude
        
        return true
        
    }
    func updateAllDistances(){
        if let anchors = sceneView.session.currentFrame?.anchors {
            //print(anchors.count)
            for anchor in anchors {
                if let arAnchor = anchor as? MapboxARAnchor {
                    if let anchorNode = sceneView.node(for: arAnchor) {
                        for node in anchorNode.childNodes{
                            
                            if node is NodeText {
                                let nodeItem = node as! NodeText
                                let location = CLLocation(latitude: nodeItem.data!.lat, longitude: nodeItem.data!.lon)
                                let myLocation = CLLocation(latitude: userLat, longitude: userLon)
                                var distance = myLocation.distance(from: location)
                                
                                if(nodeItem.data?.inforType == kWarn){
                                    distance = distance - Double(nodeItem.data?.range ?? 0)
                                    if(distance < 1){
                                        distance = 0
                                    }
                                }
                                
                                let floodDis = Int(distance)
                                
                                let text = SCNText(string: String(floodDis) + " m", extrusionDepth: 0.1)
                                node.geometry = text
                                if(floodDis  < 1){
                                    anchorNode.isHidden = true
                                    anchorNode.isPaused =  true
                                }else{
                                    anchorNode.isHidden = false
                                    anchorNode.isPaused = false
                                }
                                
                            }
                        }
                    }
                }

            }
        } else {
            debugPrint("Anchors not found")
        }
    }
    func updateStatus(){
        let nowTime = Date() // 現在時刻

        warnCount = 0
        
        for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
            // 過去の災害
            if(jsonDataManager.sharedInstance.warnBox[i].stop == nil){
                continue;
            }
            if jsonDataManager.sharedInstance.warnBox[i].stop.compare(nowTime) == ComparisonResult.orderedDescending && nowTime.compare(jsonDataManager.sharedInstance.warnBox[i].start) == ComparisonResult.orderedDescending {
                jsonDataManager.sharedInstance.warnBox[i].distance = calcDistance(jsonDataManager.sharedInstance.warnBox[i].lat, lon: jsonDataManager.sharedInstance.warnBox[i].lon, uLat: userLat, uLon: userLon)
                
                if jsonDataManager.sharedInstance.warnBox[i].distance - Int(circleRadius[i]) < 0 {
                    updateOverlay(risk: jsonDataManager.sharedInstance.warnBox[i].riskType)
                    warnCount += 1
                    
                    
                }
                
            }else{
                //stopの時刻を過ぎたから、災害の円や文字を消す
                if(self.polygons.count > i){
                    self.mapView.removeAnnotation(self.polygons[i]) // 円を消す
                    self.mapView.alpha = kMapNormalAlpha
                    self.mapView.removeAnnotation(osmWarnBox[i]) // 災害のピン情報を削除
                }
               
            }
        }
        
        // 災害発生していないとき
        if warnCount == 0  {
            self.sceneView.overlaySKScene = OverlayScene(size: self.sceneView.bounds.size)
            vibration.vibStop()
            
            warnIndex = -1
            DispatchQueue.main.async {
                self.mapView.isHidden = false
            }
        }else {
            DispatchQueue.main.async {
                self.mapView.isHidden = true
            }
        }
        #if DEBUG
        DispatchQueue.main.async {
            self.mapView.isHidden = false
        }
        #endif
        if isTestMode {
            self.mapView.isHidden = false
        }
    }
    func updateOverlay( risk:Int){
        let size = self.sceneView.bounds.size
        let overlay = OverlayScene(size: size)
        
        let positionTop = CGPoint(x: 0, y: size.height*0.5)
        let positionBot1 = CGPoint(x: 0, y: -size.height*0.5)
        let positionBot2 = CGPoint(x: 0, y: -size.height*0.3)
        let positionBot3 = CGPoint(x: 0, y: -size.height*0.45)
        let positionRight = CGPoint(x: size.width*0.4, y: size.height*0.5)
        let positionCenter = CGPoint(x: 0, y: size.height*0.5)
        let range = size.width
        let index = warnIndex
        switch risk {
        case 0: // 火災：赤色
            overlay.addEnvironment(filedNamed: "SceneKit.scnassets/firesmoke.sks", position: positionTop, range: range)
            overlay.addEnvironment(filedNamed: "SceneKit.scnassets/fire1.sks", position: positionBot1, range: range)
            warnIndex = 0
            break
        case 1,7: // 1 浸水・7 津波：青色
            overlay.addEnvironment(filedNamed: "SceneKit.scnassets/rain.sks", position: positionTop, range: range)
            overlay.addEnvironment(filedNamed: "SceneKit.scnassets/flooding.sks", position: positionBot2, range: range)
            warnIndex = 1
            break
        case 2: // 土砂崩れ：茶色
            overlay.addEnvironment(filedNamed: "SceneKit.scnassets/rock.sks", position: positionRight, range: 350)
            warnIndex = 2
            break
        case 3, 6: // 道路閉塞：黄色
            overlay.addEnvironment(filedNamed: "SceneKit.scnassets/smoke.sks", position: positionTop, range: range)
            warnIndex = 3
            break
        case 4: // 家屋倒壊：黄色
            overlay.addEnvironment(filedNamed: "SceneKit.scnassets/rubble.sks", position: positionCenter, range: 350)
            warnIndex = 4
            break
        case 5: // ブロック塀：黄色
            overlay.addEnvironment(filedNamed: "SceneKit.scnassets/block.sks", position: positionCenter, range: 350)
            warnIndex = 5
            break
        case 8: // 液状化：黄色
            overlay.addEnvironment(filedNamed: "SceneKit.scnassets/liquefaction.sks", position: positionBot3, range: range)
            warnIndex = 6
            break
        default: // その他の災害：緑色
            break
        }
        if(index != self.warnIndex || isOrientation == true){
            isOrientation = false
            self.sceneView.overlaySKScene = overlay
        }else if (self.sceneView.overlaySKScene?.size.width != overlay.size.width ) {
            self.sceneView.overlaySKScene = overlay
        }
    }
    
    
}

// MARK: - ARSCNViewDelegate

extension ARViewController: ARSCNViewDelegate {
    
    func renderer(_ renderer: SCNSceneRenderer, didAdd node: SCNNode, for anchor: ARAnchor) {
        
        if(anchor.name == "map_surface"){
            let box = SCNPlane(width: CGFloat(widthMapAR) , height: CGFloat(heightMapAR))
            box.cornerRadius = CGFloat(widthMapAR/2)
            box.materials.last?.diffuse.contents = self.imageView
            //box.firstMaterial?.transparency = 0.5
            box.materials.last?.transparency = CGFloat(kMapARAlpha)
            let nodeBox = SCNNode(geometry: box)
            nodeBox.position = node.position
            nodeBox.position.y = nodeBox.position.y - adjustHeightAR
            nodeBox.eulerAngles.x = -.pi / 2
            node.addChildNode(nodeBox)
            //    createTerrain(node: node) // 地形を作成する
        }else{
            let mapboxAnchor = anchor as! MapboxARAnchor
            
            if mapboxAnchor.tagData != nil {
                self.addARNode(to: node, for: anchor, with: mapboxAnchor.tagData!)
            }
        }
        
        
    }
    func session(_ session: ARSession, didUpdate anchors: [ARAnchor]){
        print("session update")
    }
    func session(_ session: ARSession, cameraDidChangeTrackingState camera: ARCamera) {
        print("camera did change tracking state: \(camera.trackingState)")
        
//        switch camera.trackingState {
//        case .normal:
//            cameraStateInfoLabel.text = "Ready!"
//            UIView.animate(withDuration: 1, delay: 1, options: [], animations: {
//                self.cameraStateInfoLabel.alpha = 0
//            }, completion: nil)
//        default:
//            cameraStateInfoLabel.alpha = 1
//            cameraStateInfoLabel.text = "Move the camera"
//        }
    }
    
    func session(_ session: ARSession, didFailWithError error: Error) {
        // Present an error message to the user
        print("Session failed. Changing worldAlignment property.")
        print(error.localizedDescription)
        
        if let arError = error as? ARError {
            switch arError.errorCode {
                
            case 102:
                //configuration.worldAlignment = .gravityAndHeading
                restartSessionWithoutDelete()
            default:
                //configuration.worldAlignment = .gravityAndHeading
                restartSessionWithoutDelete()
            }
        }
    }
    
    // MARK: - Utility methods for ARSCNViewDelegate
    
    func addARNode(to node: SCNNode, for anchor: ARAnchor, with tagData: TagData) {
        if(tagData.icon == nil){
            tagData.icon = "icon_notfound"
        }
        var iconstr: String!
        
        //アイコンを増やした場合、コードを書き換えなくてもいいように修正
        iconstr = tagData.icon
        if(iconstr == "icon_warn4.png" || iconstr == "icon_warn5.png" || iconstr == "icon_warn6.png" ){
            iconstr = "icon_warn3.png"
        }
        iconstr = (iconstr as NSString).substring(to: iconstr.count - 4)
        iconstr = "SceneKit.scnassets/"+iconstr + ".scn"
        loadScene(name: iconstr ,node: node,with: tagData)
        
    }
    
    
    /// load 3d ARAnnotation - warn icon
    ///
    /// - Parameters:
    ///   - name: <#name description#>
    ///   - node: <#node description#>
    ///   - data: <#data description#>
    private func loadScene(name : String ,node: SCNNode, with data: TagData) {
        
        if(data.distance == 0) {
            node.isHidden = true
        }else{
            node.isHidden = false
        }
        guard let scene = SCNScene(named: name) else {
            print("Could not load scene!")
            print(name)
            return
        }
//        let adjustHeightMap = adjustHeightAR < 1 ? 1.0 : (1.0 + adjustHeightAR*0.07)
        let adjustHeightObject = Float(data.distance < 5 ? 1.0 :  (1.0 + Float(data.distance) * 0.07))
        let scaleDefaultAR = scaleAR * adjustHeightObject
//        let scaleDefaultAR = scaleAR*3
        let scale = SCNVector3(scaleDefaultAR,scaleDefaultAR,scaleDefaultAR)
        let childNodes = scene.rootNode.childNodes
        let scaleNumber = scaleDefaultAR;
        for childNode in childNodes {
            childNode.scale = scale
            childNode.position.y = childNode.position.y - adjustHeightAR + scaleDefaultAR*heightARModel/2
            if(data.inforType == kInfo){
//                childNode.addAnimation(node: childNode)
            }
            node.addChildNode(childNode)
        }
        let box = SCNTube(innerRadius: 0.2, outerRadius: 0.22, height: 0.001)
        box.materials.last?.diffuse.contents = UIColor.white
        //box.firstMaterial?.transparency = 0.5
        box.materials.last?.transparency = CGFloat(kMapARAlpha)
        let nodeBox = SCNNode(geometry: box)
        nodeBox.position = node.position
        nodeBox.position.y = node.position.y - adjustHeightAR
        nodeBox.addAnimationScale(node: nodeBox)
        node.addChildNode(nodeBox)
        let constraint = SCNBillboardConstraint()
        scene.rootNode.constraints = [constraint]
        
        let text = SCNText(string: String(data.distance) + " m", extrusionDepth: 0.2)
       
        let textNode = NodeText(geometry: text)
        textNode.data = data

        textNode.scale = SCNVector3(scaleNumber*0.7,scaleNumber*0.7,scaleNumber*0.7)
        let (minVec, maxVec) = textNode.boundingBox
        textNode.pivot = SCNMatrix4MakeTranslation((maxVec.x - minVec.x) / 2 + minVec.x, (maxVec.y - minVec.y) / 2 + minVec.y, 0)
        textNode.position = node.position
        textNode.position.y = textNode.position.y -  adjustHeightAR + scaleDefaultAR*heightARModel + (maxVec.y - minVec.y) * scaleNumber / 2
//        textNode.position.x = textNode.position.x - 10 * scaleNumber
        node.addChildNode(textNode)
        
        if(data.inforType == kWarn){
            let textWarn = SCNText(string: "範囲 : "+String(data.range), extrusionDepth: 0.1)
            
            let textNodeWarn = SCNNode(geometry: textWarn)
            textNodeWarn.scale = SCNVector3(scale.x*0.5, scale.y*0.5, scale.z*0.5)
            
            textNodeWarn.position = node.position
            textNodeWarn.position.y = textNodeWarn.position.y - adjustHeightAR + scaleDefaultAR*heightARModel/2
            textNodeWarn.position.x = textNodeWarn.position.x - 10 * scaleNumber
            node.addChildNode(textNodeWarn)
            var particle: SCNParticleSystem
            
            if(data.icon == "icon_warn0.png"){
                particle = particleFire!
            }else if(data.icon == "icon_warn1.png"){
                particle = particleRain!
            }else if(data.icon == "icon_warn2.png"){
                particle = particleRock!
            }else{
                particle = particleSmoke!
            }
            
            let gemetry  = particle.emitterShape
            
            gemetry?.firstMaterial?.diffuse.contents = UIColor.clear
            let particleNode = SCNNode(geometry: gemetry)
            particleNode.position = node.position
            particleNode.scale = scale
            if(data.icon == "icon_warn0.png"){
                particleNode.position.y = particleNode.position.y - adjustHeightAR
                
            }else if(data.icon == "icon_warn1.png"){
                particleNode.position.y = particleNode.position.y - adjustHeightAR + scaleDefaultAR*heightARModel
                particleNode.position.x = particleNode.position.x + 5
            }else if(data.icon == "icon_warn2.png"){
                particleNode.position.y = particleNode.position.y - adjustHeightAR + scaleDefaultAR*heightARModel
                particleNode.position.x = particleNode.position.x + 5
            }else{
                particleNode.position.y = particleNode.position.y - adjustHeightAR
            }
            
            particleNode.addParticleSystem(particle)
            
            //node.addChildNode(particleNode)
        }
        
        if(name == "SceneKit.scnassets/icon_infoTag.scn"){
            let text = SCNText(string: String(data.name), extrusionDepth: 0.1)
            let textNodeInfo = SCNNode(geometry: text)
        
            textNodeInfo.scale = SCNVector3(scale.x*0.5, scale.y*0.5, scale.z*0.5)
            //let(minT,_) = (node.boundingBox)
            
            textNodeInfo.position = node.position
            textNodeInfo.position.y = textNodeInfo.position.y - adjustHeightAR + scaleDefaultAR*heightARModel/2
            textNodeInfo.position.x = textNodeInfo.position.x - Float(15*scale.x)
            node.addChildNode(textNodeInfo)
        }
    }
    private func defaultMaterials() -> [SCNMaterial] {
        let groundImage = SCNMaterial()
        groundImage.diffuse.contents = UIColor.darkGray
        groundImage.name = "Ground texture"
        
        let sideMaterial = SCNMaterial()
        sideMaterial.diffuse.contents = UIColor.darkGray
        //TODO: Some kind of bug with the normals for sides where not having them double-sided has them not show up
        sideMaterial.isDoubleSided = true
        sideMaterial.name = "Side"
        
        let bottomMaterial = SCNMaterial()
        bottomMaterial.diffuse.contents = UIColor.black
        bottomMaterial.name = "Bottom"
        
        return [sideMaterial, sideMaterial, sideMaterial, sideMaterial, groundImage, bottomMaterial]
    }
    func createTerrain(node:SCNNode) {
//        let scaleDefaultAR = adjustHeightAR * scaleAR
//        terrainNode = TerrainNode(minLat: minLat, maxLat: maxLat,
//                                  minLon: minLon, maxLon: maxLon)
//        let scale = 1
//        let terrainNodeScale = SCNVector3( scale, scale, scale) // Scale down map (otherwise it's far too big)
//        if let terrainNode = terrainNode {
//            terrainNode.scale = terrainNodeScale // Scale down map
//            terrainNode.position = SCNVector3(0.0,-(  20*scaleDefaultAR + Float(altitude) + 15.0), 0.0) // Place map slightly below clouds
//            terrainNode.geometry?.materials = defaultMaterials() // Add default materials
//            node.addChildNode(terrainNode)
//            terrainNode.fetchTerrainAndTexture(minWallHeight: 0, enableDynamicShadows: true, textureStyle: "mapbox/streets-v9", heightProgress: { progress, total in
//            }, heightCompletion: { fetchError in
//                if let fetchError = fetchError {
//                    NSLog("Texture load failed: \(fetchError.localizedDescription)")
//                } else {
//                    NSLog("Terrain load complete")
//                }
//            }, textureProgress: { progress, total in
//                
//            }) { image, fetchError in
//                if let fetchError = fetchError {
//                    NSLog("Texture load failed: \(fetchError.localizedDescription)")
//                }
//                if image != nil {
//                    NSLog("Texture load complete")
//                    terrainNode.geometry?.materials[4].diffuse.contents = image
//                    self.imageView = image
//                }else if(self.imageView != nil){
//                    terrainNode.geometry?.materials[4].diffuse.contents = self.imageView
//                }
//            }
//        }
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

extension UIView{
    func snapshot() -> UIImage {

        UIGraphicsBeginImageContextWithOptions(bounds.size, false, 0)
        self.drawHierarchy(in:bounds, afterScreenUpdates: true)
        let snapshot = UIGraphicsGetImageFromCurrentImageContext()
        UIGraphicsEndImageContext()
        return snapshot!
    
    }
}

// MARK: - MGLMapViewDelegate

extension ARViewController: MGLMapViewDelegate {
    
    /*
     * 災害円が追加されると呼ばれる
     * 追加された円の色を設定する
     */
    func mapView(_ mapView: MGLMapView, fillColorForPolygonAnnotation annotation: MGLPolygon) -> UIColor {
        if  annotation is PolygonView {
            let polygonView = annotation as!PolygonView
            switch jsonDataManager.sharedInstance.warnBox[polygonView.pinNum].riskType {
                
            case 0: // 火災のとき：赤色
                return UIColor(red: 0.545, green: 0.020, blue: 0.220, alpha: kFill)
                
            case 1, 7: // 浸水・津波：青色
                return UIColor(red: 0.000, green: 0.400, blue: 1.000, alpha: kFill)
                
            case 2: // 土砂崩れのとき：茶色
                return UIColor(red: 0.800, green: 0.400, blue: 0.000, alpha: kFill)
                
            case 3, 4, 5, 6: // 道路閉塞のとき：黄色
                return UIColor(red: 1.000, green: 0.945, blue: 0.024, alpha: kFill)
                
            default: // その他の災害のとき：緑色
                return UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: kFill)
            }
        }else{
            return UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: kFill)
        }
        
    }
    // MARK: - Utility methods for MGLMapViewDelegate
    
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
        //if let pin = annotation as? MGLTagData {
        return nil
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
    func mapView(_ mapView: MGLMapView, didFinishLoading style: MGLStyle) {
        // Add a new raster source and layer.
        let source = MGLRasterTileSource(identifier: "darkmatter", tileURLTemplates: [serverName], options: [ .tileSize: 256 ])
        let rasterLayer = MGLRasterStyleLayer(identifier: "darkmatter", source: source)
        
        rasterLayer.rasterOpacity = NSExpression(forConstantValue: 0.5)
        mapView.style?.addSource(source)
        if let layer = mapView.style?.layer(withIdentifier: "darkmatter") {
            mapView.style?.insertLayer(rasterLayer, above: layer)
            self.rasterLayer = rasterLayer
        }else{
            mapView.style?.insertLayer(rasterLayer, at: 10)
        }
        
        if(gisDisplayMode != gisMode.gis){
            if let layer = self.mapView.style?.layer(withIdentifier: "darkmatter"){
                layer.isVisible = false
            }
        }
        self.updateFace()
        loadGeoJson()
  
    }
    func mapView(_ mapView: MGLMapView, annotationCanShowCallout annotation: MGLAnnotation) -> Bool {
        // Always allow callouts to popup when annotations are tapped.
        return false
    }
    func mapView(_ mapView: MGLMapView, regionDidChangeAnimated animated: Bool) {
        if isTestMode {
            userLat = self.mapView.centerCoordinate.latitude
            userLon = self.mapView.centerCoordinate.longitude
            updateAllDistances()
            updateStatus()
        }
//                userLat = self.mapView.centerCoordinate.latitude
//                userLon = self.mapView.centerCoordinate.longitude
        if mapView.zoomLevel >  levelZoomMap + 0.5 || mapView.zoomLevel <  levelZoomMap - 0.5 {
            levelZoomMap = mapView.zoomLevel
            DispatchQueue.main.async {
                 self.scalingImage()
            }
        }
    }
    
    func mapView(_ mapView: MGLMapView, didUpdate userLocation: MGLUserLocation?) {
        if let location = userLocation?.location {
            altitude = location.altitude
            if !isTestMode {
                userLat = location.coordinate.latitude
                userLon = location.coordinate.longitude
                updateAllDistances()
                updateStatus()
            }
        }
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
                    continue;
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
                        
                        DispatchQueue.main.async {
                            self.changeImage(jsonDataManager.sharedInstance.warnBox[i], MGLtag: self.osmWarnBox[i], newsize: CGFloat(newsize))
                        }
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
}

extension SCNNode {
    func addAnimation(node: SCNNode) {
        let rotateOne = SCNAction.rotateBy(x: 0, y: CGFloat(Float.pi), z: 0, duration: 3.0)
        let repeatForever = SCNAction.repeatForever(rotateOne)
        node.runAction(repeatForever)
    }
    func addAnimationScale(node: SCNNode) {
//        let rotateOne = SCNAction.rotateBy(x: 0, y: CGFloat(Float.pi), z: 0, duration: 3.0)
        
        
        let scale = SCNAction.scale(to: 20, duration: 2.0)
        let scale1 = SCNAction.scale(to: 1, duration: 1.5)
       
        let sequence = SCNAction.sequence([scale, scale1])
        let repeatForever = SCNAction.repeatForever(sequence)
        node.runAction(repeatForever)
    }
    
}
extension SCNTube {
    func addAnimationScale(node: SCNNode) {
//        let rotateOne = SCNAction.rotateBy(x: 0, y: CGFloat(Float.pi), z: 0, duration: 3.0)
        
        
        let scale = SCNAction.scale(to: 2.5, duration: 1)
        let repeatForever = SCNAction.repeatForever(scale)
        
        node.runAction(repeatForever)
    }
}
extension ARViewController: SectionedSliderDelegate {
    
    func sectionChanged(slider: SectionedSlider, selected: Int) {
        label?.text = String(Float(selected)/2) + "m"
        let adjusted = Float(selected)/2 - adjustHeightAR
        adjustHeightAR = Float(selected)/2
        
        //print(adjustHeightAR)
        if(adjustHeightAR < 0.5){
            if let anchors = sceneView.session.currentFrame?.anchors {
                for anchor in anchors {
                    if let anchorNode = sceneView.node(for: anchor) {
                        if(!anchorNode.isPaused){
                            anchorNode.isHidden = true
                        }
                        
                    }
                }
            }
            else {
                debugPrint("Anchors not found")
            }
        }else{
            if let anchors = sceneView.session.currentFrame?.anchors {
                for anchor in anchors {
                    if let anchorNode = sceneView.node(for: anchor) {
                        if(!anchorNode.isPaused){
                            anchorNode.isHidden = false
                        }
                        for node in anchorNode.childNodes{
                            node.position.y = node.position.y - adjusted
                        }
                    }
                }
            }
            else {
                debugPrint("Anchors not found")
            }
        }
    }

}

class PolygonView: MGLPolygon {
    var pinNum: Int!          // ピン番号
}
class OverlayScene: SKScene {
    override public init(size: CGSize){
        super.init(size: size)
        
        self.anchorPoint = CGPoint(x: 0.5, y: 0.5)
        self.scaleMode = SKSceneScaleMode.resizeFill
    }
    
    func addEnvironment(filedNamed: String,position: CGPoint,range: CGFloat){
        guard let emitter = SKEmitterNode(fileNamed: filedNamed) else {
            return
        }
        emitter.position = position
        emitter.targetNode = scene
        emitter.particlePositionRange = CGVector(dx: range, dy: emitter.particlePositionRange.dy)
        if UIDevice.current.userInterfaceIdiom == .pad {
            emitter.particleLifetime = emitter.particleLifetime * 2
            emitter.numParticlesToEmit = emitter.numParticlesToEmit * 2
            emitter.particleScale = emitter.particleScale * 2
            emitter.particleSpeed = emitter.particleSpeed * 2
        }
        self.addChild(emitter)
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
}
extension ARViewController:detailViewIphoneDelegate {
    func detailViewIphoneFinish() {
        cannotTouchView.removeFromSuperview()
        detailCustomIphone.delegate = nil
        detailCustomIphone.translatesAutoresizingMaskIntoConstraints = false
        detailCustomIphone.removeFromSuperview()
        detailCustomIphone.deleteDetailView()

    }
}
extension SCNNode {
    func cleanup() {
        
        for child in childNodes {
            child.cleanup()
        }
        geometry = nil
        removeFromParentNode()
    }
}
