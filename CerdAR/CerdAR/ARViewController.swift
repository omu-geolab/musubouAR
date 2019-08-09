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
import MapboxSceneKit

class ARViewController: UIViewController,detailViewDelegate {
    
    var automaticallyFindTrueNorth = true //真北を設定する
    var cameraStateInfoLabel: UILabel! //カメラの状態
    var mapView: MGLMapView!
    var sceneView: ARSCNView!
    var controlsContainerView: UIView!
    var locationManager: CLLocationManager!
    var detailview: detailView? // 詳細画面
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
    
    var terrainNode: TerrainNode?
    //大阪市北区
    var minLat = 34.703712
    var minLon = 135.499320
    var maxLat = 34.708228
    var maxLon = 135.504813
    var altitude = 20.0
    
    //MARK:警告メッセージの表示位置（高さ）をいじる場合はy:の値を変更する
    let warningMessage = UILabel(frame: CGRect(x: screenWidth*0.45 - 55.0 - butSize, y: screenHeight * 0.8, width: screenWidth * 0.37, height: screenHeight * 0.13)) // 警告メッセージ
    
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
    var msgCount = 0 // 警告メッセージを表示する災害の配列番号を管理する
    var msgSafeCount = 0 // ユーザーは現在安全圏にいるかを確認するための変数
    var viewCount = 0 // 警告モードを表示する災害の配列番号を管理する
    var viewSafeCount = 0 // ユーザーは現在付近または安全圏にいるかを確認するための変数
    var messageTimer: Timer! // 警告メッセージを表示するためのタイマー
    var viewTimer: Timer! // 警告モードを表示するためのタイマー
    var updateTimer: Timer! // 一定時間ごとにupdate()を発火させる
    var timerUpdateFace = Timer()//AR平面図更新
    var warnCount:Int = 0 //災害を侵入する番号
    
    var warnState = warningState.safe.rawValue // 現在ユーザーは災害からどの位置にいるか(安全・付近・侵入)
    var warnIndex = -1 //災害を侵入すると災害種別のインデクス
    var textStepper:UITextView!
    var label:UILabel!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        displayMode = mode.cam.rawValue
        
        cameraStateInfoLabel = UILabel(frame: CGRect(x: CGFloat(screenWidth)/2, y: 0, width: 250, height: 50))
        
        sceneView = ARSCNView(frame: self.view.frame)
        sceneView.delegate = self
        //sceneView.debugOptions = [ARSCNDebugOptions.showFeaturePoints, ARSCNDebugOptions.showWorldOrigin]
        /* 警告ビューの設定 */
        warningView = UIView(frame: CGRect.init(x: kZero, y: kZero, width: CGFloat(screenWidth), height: CGFloat(screenHeight)))
        view.addSubview(warningView) // viewに追加
        //環境を設定する
        let scene = SCNScene()
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
        light1.intensity = 300
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
       
        self.view.addSubview(cameraStateInfoLabel)
        
        // 地図切替ボタン
        let toMap_Button = UIButton()
        let buttonImage: UIImage = UIImage(named: "icon_map.png")!
        
        if UIDevice.current.userInterfaceIdiom == .phone {
            toMap_Button.frame = CGRect(x: 0.0, y: 0.0, width: butSize - 10, height: butSize - 10)
        } else if UIDevice.current.userInterfaceIdiom == .pad{
            toMap_Button.frame = CGRect(x: 0.0, y: 0.0, width: butSize, height: butSize)
        }
        toMap_Button.setImage(buttonImage, for: UIControlState())
        toMap_Button.layer.position = CGPoint(x: 55, y: self.view.bounds.height - 45)
        view.addSubview(toMap_Button)
        toMap_Button.addTarget(self, action: #selector(ARViewController.onClick_map(_:)), for: .touchUpInside)
        
        // AR更新
        let changeAR_Button = UIButton()
        let arChangeImage: UIImage = UIImage(named: "rotation.png")!
        
        if UIDevice.current.userInterfaceIdiom == .phone {
            changeAR_Button.frame = CGRect(x: 0.0, y: 0.0, width: butSize - 10, height: butSize - 10)
        } else if UIDevice.current.userInterfaceIdiom == .pad{
            changeAR_Button.frame = CGRect(x: 0.0, y: 0.0, width: butSize, height: butSize)
        }
        changeAR_Button.setImage(arChangeImage, for: UIControlState())
        changeAR_Button.layer.position = CGPoint(x: self.view.bounds.width - 45, y: 60)
        view.addSubview(changeAR_Button)
        changeAR_Button.addTarget(self, action: #selector(ARViewController.changeAR(_:)), for: .touchUpInside)
        
        //AR高度変更

        let slider = SectionedSlider(
            frame: CGRect(x: self.view.bounds.width - 80, y: self.view.bounds.height/2 - 178, width: 70, height: 178), // Choose a 15.6 / 40 ration for width/height
            selectedSection: 1, // Initial selected section
            sections: 20, // Number of sections. Choose between 2 and 20
            palette: Palette(
                viewBackgroundColor: UIColor(red: 0, green: 0, blue: 0, alpha: 0),
                sliderBackgroundColor: .darkGray,
                sliderColor: .white
            )
        )
        label = UILabel(frame: CGRect(x: self.view.bounds.width - 80, y: self.view.bounds.height/2 - 210, width: 70, height: 30))
        label.textAlignment = .center
        label.font = label.font.withSize(20)
        slider.delegate = self
        view.addSubview(slider)
        view.addSubview(label)

        // ARアノテーションマネージャを作成し、それにARセッションへの参照を与える
        annotationManager = MapboxARAnnotationManager(session: sceneView.session)
        // location service
        if (CLLocationManager.locationServicesEnabled())
        {
            locationManager = CLLocationManager()
            locationManager.delegate = self
            locationManager.desiredAccuracy = kCLLocationAccuracyBest
            locationManager.distanceFilter = 5
            locationManager.requestAlwaysAuthorization()
            locationManager.startUpdatingLocation()
        }
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
        view.addSubview(warningMessage)
        warningMessage.isHidden = true
        startSession()
        configureMapboxMapView()
        self.view.addSubview(mapView)
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
       
        timerUpdateFace = Timer.scheduledTimer(timeInterval: kUpdateFace, target: self, selector: #selector(ARViewController.updateFace), userInfo: nil, repeats: true)
    
        update() // 災害情報を更新する
        // kUpdateWarn秒に1回update()を発火させる
        if updateTimer == nil {
            updateTimer = Timer.scheduledTimer(timeInterval: kUpdateWarn, target: self, selector: #selector(ARViewController.update), userInfo: nil, repeats: true)
        }
    }
    
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        
        // Pause the view's session
        sceneView.session.pause()
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
    
    //MARK: Action
    //地図を戻す
    @objc func onClick_map(_ sender: UIButton) {
        self.dismiss(animated: true, completion: nil)
    }
    @objc func changeAR(_ sender: UIButton) {
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
                    
                    if UIDevice.current.userInterfaceIdiom == .phone {
                        self.detailview = detailView(frame: CGRect(x: screenWidth * 0.1, y: screenWidth * 0.02, width: screenWidth * 0.8, height: screenHeight * 0.9))
                    } else if UIDevice.current.userInterfaceIdiom == .pad {
                        self.detailview = detailView(frame: CGRect(x: screenWidth * 0.1, y: screenWidth * 0.1, width: screenWidth * 0.8, height: screenHeight * 0.8))
                    }
                    self.detailview!.delegate = self
                    backgroundView = detailView.makebackgroungView()
                    backgroundView.isUserInteractionEnabled = true
                    runAfterDelay(kShowDetail) { // タグをタップしてからkShowDetail秒後に詳細画面を表示する
                        self.view.addSubview(backgroundView)
                        self.view.addSubview(self.detailview!)
                    }
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
        sceneView.session.run(configuration, options: [.resetTracking, .removeExistingAnchors])
        flag  = true
    }
    
    func resetARSession() {
        startSession()
    }

    //マープを設定する
    private func configureMapboxMapView() {
        //createSnapshot()//AR平面図作成
        let d:CGFloat = CGFloat(screenWidth)/4
        mapView = MGLMapView(frame: CGRect(x: CGFloat(screenWidth)-d, y: CGFloat(screenHeight)-d, width: d, height: d))
        let styleStreet = MGLStyle.streetsStyleURL
        
        mapView.styleURL = styleStreet
        mapView.setCenter(CLLocationCoordinate2D(latitude: userLat, longitude: userLon), zoomLevel: 18, animated: false)
        mapView.setUserTrackingMode(.followWithHeading, animated: false, completionHandler: nil)
        mapView.delegate = self
        mapView.allowsTilting = false
        mapView.allowsRotating = false
        mapView.showsUserHeadingIndicator =  true
        
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
            //let add = "http://cyberjapandata2.gsi.go.jp/" +
                
            //    "general/dem/scripts/getelevation.php" +
                
            //"?lon=\(osmInfoBox[i].coordinate.longitude)&lat=\(osmInfoBox[i].coordinate.latitude)&outtype=JSON"
            //getJsonFromUrl(urlString: add, i: i, type: kInfo)
            
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
            //let add = "http://cyberjapandata2.gsi.go.jp/general/dem/scripts/getelevation.php" +
            //"?lon=\(osmWarnBox[i].coordinate.longitude)&lat=\(osmWarnBox[i].coordinate.latitude)&outtype=JSON"
            //getJsonFromUrl(urlString: add, i: i, type: kWarn)
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
        //        self.sceneView.session.run(configuration, options: [
        //            .resetTracking,
        //            .removeExistingAnchors])
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
            customStyleURL = MGLStyle.streetsStyleURL
        }
        
        let options = MGLMapSnapshotOptions(styleURL: customStyleURL, camera: camera, size: size)
        let mapWidth = (cos(userLat * Double.pi/180) * 2 * Double.pi * 6378137)/2
        
        let level = log2(mapWidth / 256)
        //print(level)
        options.zoomLevel = level
        var snapshotter: MGLMapSnapshotter? = MGLMapSnapshotter(options: options)
        
        //snapshotter.
        snapshotter?.start { (snapshot, error) in
            if error != nil {
                print("Unable to create a map snapshot.")
               // self.updateFace()
                
            } else if let snapshot = snapshot {
                self.imageView = snapshot.image
                self.annotationManager.removeFaceARAnchor()
                if(adjustHeightAR > 0.4 ){
                    self.annotationManager.addMapSurface()
                    if(self.flag){
                        self.updateEnvorimentAR(currentLocation: CLLocation(latitude: userLat, longitude: userLon))
                    }
                }
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
                    
                    let alt = jsonObj!.value(forKey: "elevation")!
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
        createSnapshot()
    }
    
    /*
     * 警告メッセージを表示する
     */
    @objc func updateMessage() {
        if messageTimer == nil {
            messageTimer = Timer.scheduledTimer(timeInterval: kUpdateMM, target: self, selector: #selector(ARViewController.updateMessage), userInfo: nil, repeats: true)
        }
        if msgCount == box.count {
            msgCount = 0
            msgSafeCount = 0
        }
        //print(box.count)
        //print(msgCount)
        let num = box[msgCount]  // 現在発生している災害のインデックスを渡す
        
        // 現在地からその災害までの距離を求める
        jsonDataManager.sharedInstance.warnBox[num].distance = calcDistance(jsonDataManager.sharedInstance.warnBox[num].lat, lon: jsonDataManager.sharedInstance.warnBox[num].lon, uLat: userLat, uLon: userLon) // 距離を求める
        
        // 0m以下・・・侵入
        if jsonDataManager.sharedInstance.warnBox[num].distance - jsonDataManager.sharedInstance.warnBox[num].range < 0 {
            // 侵入していることを通知音で知らせる
            if audioPlayerIntr != nil {
                audioPlayerIntr.play()
                if vibration.isVibration == false {
                    vibration.vibIntrusionStart()
                }
            }
            warningMessage.isHidden = false
            warningMessage.text = jsonDataManager.sharedInstance.warnBox[num].message2 // 警告メッセージ
            msgCount += 1
            
            // 0m以上、kNearMsg(m)以下・・・付近
        } else if jsonDataManager.sharedInstance.warnBox[num].distance - jsonDataManager.sharedInstance.warnBox[num].range < kNearMsg {
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
            warningMessage.isHidden = false
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
            messageTimer = Timer.scheduledTimer(timeInterval: kUpdateMM, target: self, selector: #selector(ARViewController.updateMessage), userInfo: nil, repeats: true)
        }
    }
    
    @objc func update() {
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
        
        // インデックスを初期化,
        msgCount = 0
        viewCount = 0
        
        for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
            if(jsonDataManager.sharedInstance.warnBox[i].stop == nil){
                continue;
            }
            if jsonDataManager.sharedInstance.warnBox[i].stop.compare(nowTime) == ComparisonResult.orderedDescending && nowTime.compare(jsonDataManager.sharedInstance.warnBox[i].start) == ComparisonResult.orderedDescending {
                box.append(i)
            }
        }
        
        // 災害発生していないとき
        if box.count == 0 {
            warningMessage.isHidden = true // 警告メッセージを隠す
            // 災害が発生しているとき
        } else {

            // 警告メッセージのタイマーを開始させる
            if messageTimer == nil {
                messageTimer = Timer.scheduledTimer(timeInterval: kUpdateMM, target: self, selector: #selector(ARViewController.updateMessage), userInfo: nil, repeats: true)
            } else if !messageTimer.isValid {
                messageTimer = Timer.scheduledTimer(timeInterval: kUpdateMM, target: self, selector: #selector(ARViewController.updateMessage), userInfo: nil, repeats: true)
            }

        }
    }

    
    
}

// MARK: - CLLocationManagerDelegate

extension ARViewController: CLLocationManagerDelegate{
    // 位置を変わるとARAnnotationを再表示する
    func locationManager(_ manager: CLLocationManager, didUpdateLocations locations: [CLLocation]) {
        if let location = locations.last{
            altitude = location.altitude
//            let region = MKCoordinateRegionMakeWithDistance(location.coordinate, 1000, 1000)
//            let northWestCorner = CLLocationCoordinate2D(latitude: region.center.latitude  - (region.span.latitudeDelta  / 2.0), longitude: region.center.longitude - (region.span.longitudeDelta / 2.0))
//            let southEastCorner = CLLocationCoordinate2D(latitude: region.center.latitude  + (region.span.latitudeDelta  / 2.0), longitude: region.center.longitude + (region.span.longitudeDelta / 2.0))
//            if (
//                location.coordinate.latitude  >= northWestCorner.latitude &&
//                    location.coordinate.latitude  <= southEastCorner.latitude &&
//                    location.coordinate.longitude >= northWestCorner.longitude &&
//                    location.coordinate.longitude <= southEastCorner.longitude
//                )
//            {
//                minLat = region.center.latitude - 0.5 * region.span.latitudeDelta;
//                maxLat = region.center.latitude + 0.5 * region.span.latitudeDelta;
//                minLon = region.center.longitude - 0.5 * region.span.longitudeDelta;
//                maxLon = region.center.longitude + 0.5 * region.span.longitudeDelta;
//            }
            userLat = location.coordinate.latitude
            userLon = location.coordinate.longitude
            updateAllDistances()
            updateStatus()
           
        }
    }
    
    func updateAllDistances(){
        if let anchors = sceneView.session.currentFrame?.anchors {
            //print(anchors.count)
            for anchor in anchors {
                if let anchorNode = sceneView.node(for: anchor) {
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
        } else {
            debugPrint("Anchors not found")
        }
    }
    func updateStatus(){
        let nowTime = Date() // 現在時刻
        // インデックスを初期化,
        msgCount = 0
        viewCount = 0
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
                self.mapView.removeAnnotation(self.polygons[i]) // 円を消す
                self.mapView.alpha = kMapNormalAlpha
                self.mapView.removeAnnotation(osmWarnBox[i]) // 災害のピン情報を削除
            }
        }
        
        // 災害発生していないとき
        if warnCount == 0 {
            self.sceneView.overlaySKScene = OverlayScene(size: self.sceneView.bounds.size)
            vibration.vibStop()
            
            warnIndex = -1
        }
    }
    func updateOverlay( risk:Int){
        let size = self.sceneView.bounds.size
        let overlay = OverlayScene(size: size)
        
        let positionTop = CGPoint(x: 0, y: size.height*0.5)
        let positionBot = CGPoint(x: 0, y: -size.height*0.5)
        let positionRight = CGPoint(x: size.width*0.4, y: size.height*0.5)
        let range = size.width
        let index = warnIndex
        switch risk {
            
        case 0: // 火災：赤色
            overlay.addEnvironment(filedNamed: "SceneKit.scnassets/fire1.sks", position: positionBot, range: range)
            warnIndex = 0
            break
        case 1,7: // 浸水：青色
            overlay.addEnvironment(filedNamed: "SceneKit.scnassets/rain.sks", position: positionTop, range: range)
            overlay.addEnvironment(filedNamed: "SceneKit.scnassets/flood.sks", position: positionBot, range: range)
            warnIndex = 1
            break
        case 2: // 土砂崩れ：茶色
            overlay.addEnvironment(filedNamed: "SceneKit.scnassets/rock.sks", position: positionRight, range: 350)
            warnIndex = 2
            break
        case 3, 4, 5, 6: // 道路閉塞：黄色
            overlay.addEnvironment(filedNamed: "SceneKit.scnassets/smoke.sks", position: positionTop, range: range)
            warnIndex = 3
            break
        default: // その他の災害：緑色
            break
        }
        if(index != self.warnIndex){
            self.sceneView.overlaySKScene = overlay
        }
    }
    
    
}

// MARK: - ARSCNViewDelegate

extension ARViewController: ARSCNViewDelegate {
    
    func renderer(_ renderer: SCNSceneRenderer, didAdd node: SCNNode, for anchor: ARAnchor) {
        
        if(anchor.name == "map_surface"){
            let box = SCNPlane(width: CGFloat(widthMapAR) , height: CGFloat(heightMapAR))
            
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
    func updateARnode(to node: SCNNode,for anchor: ARAnchor, with tagData: TagData){
        print(tagData.inforType)
    }
    func session(_ session: ARSession, cameraDidChangeTrackingState camera: ARCamera) {
        print("camera did change tracking state: \(camera.trackingState)")
        
        switch camera.trackingState {
        case .normal:
            cameraStateInfoLabel.text = "Ready!"
            UIView.animate(withDuration: 1, delay: 1, options: [], animations: {
                self.cameraStateInfoLabel.alpha = 0
            }, completion: nil)
        default:
            cameraStateInfoLabel.alpha = 1
            cameraStateInfoLabel.text = "Move the camera"
        }
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
//        if(data.inforType == kWarn){
//            if(data.distance > data.range){
//                let box = SCNCylinder(radius: CGFloat(data.range), height: 0.2)
//                var color = UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: 1)
//                switch data.riskType {
//
//                case 0: // 火災のとき：赤色
//                    color =  UIColor(red: 0.545, green: 0.020, blue: 0.220, alpha: 1)
//
//                case 1: // 浸水のとき：青色
//                    color =   UIColor(red: 0.000, green: 0.400, blue: 1.000, alpha: 1)
//
//                case 2: // 土砂崩れのとき：茶色
//                    color =   UIColor(red: 0.800, green: 0.400, blue: 0.000, alpha: 1)
//
//                case 3, 4, 5, 6: // 道路閉塞のとき：黄色
//                    color =   UIColor(red: 1.000, green: 0.945, blue: 0.024, alpha: 1)
//
//                default: // その他の災害のとき：緑色
//                    color =   UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: 1)
//                }
//                box.materials.last?.diffuse.contents = color
//                //box.firstMaterial?.transparency = 0.5
//                box.materials.last?.transparency = 0.8
//                let nodeBox = SCNNode(geometry: box)
//                nodeBox.position = node.position
//                nodeBox.position.y = nodeBox.position.y - adjustHeightAR - 1.0
//                //nodeBox.eulerAngles.x = -.pi / 2
//                node.addChildNode(nodeBox)
//                // return
//            }else{
//                return
//            }
//
//        }
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
        //let adjustHeightMap = adjustHeightAR < 1 ? 1.0 : (1.0 + adjustHeightAR*0.07)
        let adjustHeightObject = Float(data.distance < 5 ? 1.0 :  (1.0 + Float(data.distance) * 0.07))
        let scaleDefaultAR = scaleAR * adjustHeightObject
        let scale = SCNVector3(scaleDefaultAR,scaleDefaultAR,scaleDefaultAR)
        let childNodes = scene.rootNode.childNodes
        let scaleNumber = scaleDefaultAR;
        for childNode in childNodes {
            childNode.scale = scale
            childNode.position.y = childNode.position.y - adjustHeightAR + scaleDefaultAR*heightARModel/2
            if(data.inforType == kInfo){
                childNode.addAnimation(node: childNode)
            }
            node.addChildNode(childNode)
        }
        let constraint = SCNBillboardConstraint()
        scene.rootNode.constraints = [constraint]
        
        let text = SCNText(string: String(data.distance) + " m", extrusionDepth: 0.1)
       
        let textNode = NodeText(geometry: text)
        textNode.data = data
        
        
        textNode.scale = SCNVector3(scaleNumber*0.5,scaleNumber*0.5,scaleNumber*0.5)
        textNode.position = node.position
        textNode.position.y = textNode.position.y -  adjustHeightAR + scaleDefaultAR*heightARModel
        textNode.position.x = textNode.position.x - 10 * scaleNumber
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
        let scaleDefaultAR = adjustHeightAR * scaleAR
        terrainNode = TerrainNode(minLat: minLat, maxLat: maxLat,
                                  minLon: minLon, maxLon: maxLon)
        let scale = 1
        let terrainNodeScale = SCNVector3( scale, scale, scale) // Scale down map (otherwise it's far too big)
        if let terrainNode = terrainNode {
            terrainNode.scale = terrainNodeScale // Scale down map
            terrainNode.position = SCNVector3(0.0,-(  20*scaleDefaultAR + Float(altitude) + 15.0), 0.0) // Place map slightly below clouds
            terrainNode.geometry?.materials = defaultMaterials() // Add default materials
            node.addChildNode(terrainNode)
            terrainNode.fetchTerrainAndTexture(minWallHeight: 0, enableDynamicShadows: true, textureStyle: "mapbox/streets-v9", heightProgress: { progress, total in
            }, heightCompletion: { fetchError in
                if let fetchError = fetchError {
                    NSLog("Texture load failed: \(fetchError.localizedDescription)")
                } else {
                    NSLog("Terrain load complete")
                }
            }, textureProgress: { progress, total in
                
            }) { image, fetchError in
                if let fetchError = fetchError {
                    NSLog("Texture load failed: \(fetchError.localizedDescription)")
                }
                if image != nil {
                    NSLog("Texture load complete")
                    terrainNode.geometry?.materials[4].diffuse.contents = image
                    self.imageView = image
                }else if(self.imageView != nil){
                    terrainNode.geometry?.materials[4].diffuse.contents = self.imageView
                }
            }
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
                
            case 1: // 浸水のとき：青色
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
        return MGLAnnotationImage()
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
  
    }
    func mapView(_ mapView: MGLMapView, annotationCanShowCallout annotation: MGLAnnotation) -> Bool {
        // Always allow callouts to popup when annotations are tapped.
        return false
    }
    func mapView(_ mapView: MGLMapView, regionDidChangeAnimated animated: Bool) {
                    //userLat = self.mapView.centerCoordinate.latitude
                    //userLon = self.mapView.centerCoordinate.longitude
        updateStatus()
        DispatchQueue(label: "scalingImage").async {
            self.scalingImage()
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
