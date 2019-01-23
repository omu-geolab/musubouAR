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
    
    var osmInfoBox = [MGLTagData]() // OSM情報タグ用
    var osmWarnBox = [MGLTagData]() // OSM警告タグ用
    
    var infoPinView = [MGLAnnotationImage]() // ピン画像(情報タグ)
    var warnPinView = [MGLAnnotationImage]() // ピン画像(警告タグ)
    var polygons = [MGLPolygonFeature]() // 災害円
    var polyNum = 0 // 災害円のインデックス
    let kFill: CGFloat = 0.6   // 円内部の透明
    var testEnviroment:Int = 0 // 環境を取り替えり
    
    var scaleDefault = SCNVector3(0.5,0.5,0.5)
    
    var flag = false //
    var imageView : UIImage!
    
    var terrainNode: TerrainNode?
    
    
    //大阪市北区
    var minLat = 34.703712
    var minLon = 135.499320
    var maxLat = 34.708228
    var maxLon = 135.504813
    var altitude = 20.0
    
    override func viewDidLoad() {
        super.viewDidLoad()
        displayMode = mode.cam.rawValue
        
        cameraStateInfoLabel = UILabel(frame: CGRect(x: CGFloat(screenWidth)/2, y: 0, width: 250, height: 50))
        configureMapboxMapView()
        sceneView = ARSCNView(frame: self.view.frame)
        sceneView.delegate = self
        //sceneView.debugOptions = [ARSCNDebugOptions.showFeaturePoints, ARSCNDebugOptions.showWorldOrigin]
        
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
        self.view.addSubview(mapView)
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
        
        //環境を変える
        let toChangeEnvironment_Button = UIButton()
        let buttonChangeImage: UIImage = UIImage(named: "star.png")!
        if UIDevice.current.userInterfaceIdiom == .phone {
            toChangeEnvironment_Button.frame = CGRect(x: 0.0, y: 0.0, width: butSize - 10, height: butSize - 10)
        } else if UIDevice.current.userInterfaceIdiom == .pad{
            toChangeEnvironment_Button.frame = CGRect(x: 0.0, y: 0.0, width: butSize, height: butSize)
        }
        toChangeEnvironment_Button.setImage(buttonChangeImage, for: UIControlState())
        toChangeEnvironment_Button.layer.position = CGPoint(x: 55, y: 50)
        view.addSubview(toChangeEnvironment_Button)
        // backgroundView.addSubview(toMap_Button)
        toChangeEnvironment_Button.addTarget(self, action: #selector(ARViewController.changeEnvironment(_:)), for: .touchUpInside)
        
        // ARアノテーションマネージャを作成し、それにARセッションへの参照を与える
        annotationManager = MapboxARAnnotationManager(session: sceneView.session)
        // location service
        if (CLLocationManager.locationServicesEnabled())
        {
            locationManager = CLLocationManager()
            locationManager.delegate = self
            locationManager.distanceFilter = 2
            locationManager.desiredAccuracy = kCLLocationAccuracyBest
            locationManager.requestAlwaysAuthorization()
            locationManager.startUpdatingLocation()
        }
        
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        startSession()
        print(jsonDataManager.sharedInstance.infoBox.count)
    }
    
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        
        // Pause the view's session
        sceneView.session.pause()
    }
    
    //MARK: Action
    //地図を戻す
    @objc func onClick_map(_ sender: UIButton) {
        self.dismiss(animated: true, completion: nil)
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
        default: //
            //overlay = SKScene()
            //self.sceneView.overlaySKScene?.removeFromParent()
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
                print("mactch")
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
                    //backgroundView.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(osmViewController.onClick_detailBackground(_:))))
                    
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
        flag  = true
        let configuration = ARWorldTrackingConfiguration()
        
        if automaticallyFindTrueNorth {
            configuration.worldAlignment = .gravityAndHeading
            
        } else {
            configuration.worldAlignment = .gravity
        }
        
        // Run the view's session
        sceneView.session.run(configuration, options: [.resetTracking, .removeExistingAnchors])
    }
    
    func resetARSession() {
        startSession()
    }
    
    
    
    //マープを設定する
    private func configureMapboxMapView() {
        
        let d:CGFloat = CGFloat(screenWidth)/4
        mapView = MGLMapView(frame: CGRect(x: CGFloat(screenWidth)-d, y: CGFloat(screenHeight)-d, width: d, height: d))
        let styleStreet = MGLStyle.streetsStyleURL
        
        mapView.styleURL = styleStreet
        // mapView.allowsRotating = false
        // mapView.allowsZooming = false
        mapView.delegate = self
        //mapView.allowsScrolling = false
        mapView.userTrackingMode = .followWithHeading
        mapView.showsUserHeadingIndicator =  true
        // mapView.layer.cornerRadius = d/2
        
        for i in 0 ..< jsonDataManager.sharedInstance.infoBox.count {
            
            osmInfoBox.append(MGLTagData())
            infoPinView.append(MGLAnnotationImage())
            osmInfoBox[i].inforType = jsonDataManager.sharedInstance.infoBox[i].inforType // タグの種類
            osmInfoBox[i].pinNum = i //ピン番号
            osmInfoBox[i].coordinate = CLLocationCoordinate2D(latitude: jsonDataManager.sharedInstance.infoBox[i].lat, longitude: jsonDataManager.sharedInstance.infoBox[i].lon) // 位置
            mapView.addAnnotation(osmInfoBox[i])
            let add = "http://cyberjapandata2.gsi.go.jp/" +
                
                "general/dem/scripts/getelevation.php" +
                
            "?lon=\(osmInfoBox[i].coordinate.longitude)&lat=\(osmInfoBox[i].coordinate.latitude)&outtype=JSON"
            getJsonFromUrl(urlString: add, i: i, type: kInfo)
            
        }
        
        for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
            
            osmWarnBox.append(MGLTagData())
            warnPinView.append(MGLAnnotationImage())
            osmWarnBox[i].inforType = jsonDataManager.sharedInstance.warnBox[i].inforType // タグの種類
            osmWarnBox[i].pinNum = i //ピン番号
            osmWarnBox[i].coordinate = CLLocationCoordinate2D(latitude: jsonDataManager.sharedInstance.warnBox[i].lat, longitude: jsonDataManager.sharedInstance.warnBox[i].lon) // 位置
            mapView.addAnnotation(polygonCircleForCoordinate(coordinate: osmWarnBox[i].coordinate, withMeterRadius: jsonDataManager.sharedInstance.warnBox[i].range,pinNum: i))
            let add = "http://cyberjapandata2.gsi.go.jp/general/dem/scripts/getelevation.php" +
            "?lon=\(osmWarnBox[i].coordinate.longitude)&lat=\(osmWarnBox[i].coordinate.latitude)&outtype=JSON"
            getJsonFromUrl(urlString: add, i: i, type: kWarn)
            
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
        //let polygonFeature = MGLPolygonFeature(coordinates: &coordinates, count: UInt(coordinates.count))
        // polygonFeature.attributes  = ["name": "ssadasdasd"]
        // polygons.append(polygonFeature)
        //polygon.title = "ssss"
        polygonView.pinNum = pinNum
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
        let size = CGSize(width: 1000, height: 1000)
        let location = CLLocationCoordinate2D(latitude: userLat, longitude: userLon)
        let camera  = MGLMapCamera(lookingAtCenter: location, acrossDistance: 300, pitch: 0, heading: 0)
        let options = MGLMapSnapshotOptions(styleURL: mapView.styleURL, camera: camera, size: size)

        options.zoomLevel = 16
        
        // Add an activity indicator to show that the snapshot is loading.
        let indicator = UIActivityIndicatorView(frame: CGRect(x: self.view.center.x - 30, y: self.view.center.y - 30, width: 60, height: 60))
        view.addSubview(indicator)
        indicator.startAnimating()
        
        // Create the map snapshot.
        var snapshotter: MGLMapSnapshotter? = MGLMapSnapshotter(options: options)
        snapshotter?.start { (snapshot, error) in
            if error != nil {
                print("Unable to create a map snapshot.")
            } else if let snapshot = snapshot {
                // Add the map snapshot's image to the image view.
                indicator.stopAnimating()
                self.imageView = snapshot.image
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
                    
                    //printing the json in console
                    print(jsonObj!.value(forKey: "elevation")!)
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
    func queryDirections(currentLocation:CLLocation) {
        
        annotationManager.removeAllARAnchors()
        
        for i in 0 ..< jsonDataManager.sharedInstance.infoBox.count {
            let coordinate = CLLocation(latitude: jsonDataManager.sharedInstance.infoBox[i].lat, longitude: jsonDataManager.sharedInstance.infoBox[i].lon )
            // print(jsonDataManager.sharedInstance.infoBox[i].icon)
            jsonDataManager.sharedInstance.infoBox[i].distance = Int(coordinate.distance(from: currentLocation))
            annotationManager.addARAnnotation(startLocation: currentLocation, endLocation: coordinate, tagData:jsonDataManager.sharedInstance.infoBox[i] )
        }
        for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
            let coordinate = CLLocation(latitude: jsonDataManager.sharedInstance.warnBox[i].lat, longitude: jsonDataManager.sharedInstance.warnBox[i].lon )
            //  print(jsonDataManager.sharedInstance.warnBox[i].icon)
            jsonDataManager.sharedInstance.warnBox[i].distance = Int(coordinate.distance(from: currentLocation))
            annotationManager.addARAnnotation(startLocation: currentLocation, endLocation: coordinate, tagData:jsonDataManager.sharedInstance.warnBox[i])
        }
        annotationManager.addMapSurface()
        
        mapView.userTrackingMode = .followWithHeading
    }
    
    
}
extension ARViewController: CLLocationManagerDelegate{
    // 位置を変わるとARAnnotationを再表示する
    func locationManager(_ manager: CLLocationManager, didUpdateLocations locations: [CLLocation]) {
        if let location = locations.last{
            altitude = location.altitude
            let region = MKCoordinateRegionMakeWithDistance(location.coordinate, 1000, 1000)
            let northWestCorner = CLLocationCoordinate2D(latitude: region.center.latitude  - (region.span.latitudeDelta  / 2.0), longitude: region.center.longitude - (region.span.longitudeDelta / 2.0))
            let southEastCorner = CLLocationCoordinate2D(latitude: region.center.latitude  + (region.span.latitudeDelta  / 2.0), longitude: region.center.longitude + (region.span.longitudeDelta / 2.0))
            if (
                location.coordinate.latitude  >= northWestCorner.latitude &&
                    location.coordinate.latitude  <= southEastCorner.latitude &&
                    location.coordinate.longitude >= northWestCorner.longitude &&
                    location.coordinate.longitude <= southEastCorner.longitude
                )
            {
                minLat = region.center.latitude - 0.5 * region.span.latitudeDelta;
                maxLat = region.center.latitude + 0.5 * region.span.latitudeDelta;
                minLon = region.center.longitude - 0.5 * region.span.longitudeDelta;
                maxLon = region.center.longitude + 0.5 * region.span.longitudeDelta;
            }
            
            userLat = location.coordinate.latitude
            userLon = location.coordinate.longitude
            createSnapshot()
            
            if(flag){
                queryDirections(currentLocation: location)
            }
        }
    }
    
}
// MARK: - ARSCNViewDelegate

extension ARViewController: ARSCNViewDelegate {
    
    func renderer(_ renderer: SCNSceneRenderer, didAdd node: SCNNode, for anchor: ARAnchor) {
        
        if(anchor.name == "map_surface"){
            let box = SCNPlane(width: 1000, height: 1000)
            box.materials.last?.diffuse.contents = self.imageView
            let nodeBox = SCNNode(geometry: box)
            nodeBox.position = node.position
            nodeBox.position.y = nodeBox.position.y - 20*scaleDefaultAR - adjustHeightAR
            nodeBox.eulerAngles.x = -.pi / 2
            node.addChildNode(nodeBox)

            //    createTerrain(node: node) // 地形を作成する
        }else{
            let mapboxAnchor = anchor as! MapboxARAnchor
            
            if mapboxAnchor.tagData != nil {
                addARNode(to: node, for: anchor, with: mapboxAnchor.tagData!)
            }
        }
        
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
        guard let scene = SCNScene(named: name) else {
            print("Could not load scene!")
            return
        }
        let scale = SCNVector3(scaleDefaultAR,scaleDefaultAR,scaleDefaultAR)
        let childNodes = scene.rootNode.childNodes
        let elevation =  data.elevation ?? 0
        var adjustHeight = Float(altitude - elevation)
        adjustHeight = adjustHeightAR
        var scaleNumber = 0.01;
        for childNode in childNodes {
            
            scaleNumber = Double(scaleDefaultAR)
            childNode.scale = scale
            childNode.position.y = childNode.position.y - adjustHeight
            if(data.inforType == kInfo){
                childNode.addAnimation(node: childNode)
            }
            node.addChildNode(childNode)
            
        }
        let constraint = SCNBillboardConstraint()
        scene.rootNode.constraints = [constraint]
        let text = SCNText(string: String(data.distance) + " m", extrusionDepth: 0.1)
        let textNode = SCNNode(geometry: text)
        textNode.scale = SCNVector3(scaleNumber*0.7,scaleNumber*0.7,scaleNumber*0.7)
        textNode.position = node.position
        textNode.position.y = textNode.position.y + Float(20*scaleNumber) - adjustHeight
        textNode.position.x = textNode.position.x - Float(15*scaleNumber*0.5)
        node.addChildNode(textNode)
        
        if(data.inforType == kWarn){
            let textWarn = SCNText(string: "範囲 : "+String(data.range), extrusionDepth: 0.1)
            
            let textNodeWarn = SCNNode(geometry: textWarn)
            textNodeWarn.scale = SCNVector3(scale.x*0.5, scale.y*0.5, scale.z*0.5)
            
            textNodeWarn.position = node.position
            textNodeWarn.position.y = textNodeWarn.position.y - adjustHeight
            textNodeWarn.position.x = textNodeWarn.position.x - Float(12*scale.x)
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
            
            if(data.icon == "icon_warn0.png"){
                particleNode.position.y = particleNode.position.y - Float(15*scaleNumber) - adjustHeight
            }else if(data.icon == "icon_warn1.png"){
                particleNode.position.y = particleNode.position.y + Float(13*scaleNumber) - adjustHeight
                particleNode.position.x = particleNode.position.x + Float(8*scaleNumber)
            }else if(data.icon == "icon_warn2.png"){
                particleNode.position.y = particleNode.position.y + Float(15*scaleNumber) - adjustHeight
                particleNode.position.x = particleNode.position.x + Float(8*scaleNumber)
            }else{
                particleNode.position.y = particleNode.position.y - Float(15*scaleNumber) - adjustHeight
            }
            
            particleNode.addParticleSystem(particle)
            node.addChildNode(particleNode)
        }
        
        if(name == "SceneKit.scnassets/icon_infoTag.scn"){
            let text = SCNText(string: String(data.name), extrusionDepth: 0.1)
            let textNodeInfo = SCNNode(geometry: text)
            
            
            textNodeInfo.scale = SCNVector3(scale.x*0.5, scale.y*0.5, scale.z*0.5)
            //let(minT,_) = (node.boundingBox)
            
            textNodeInfo.position = node.position
            textNodeInfo.position.y = textNodeInfo.position.y - adjustHeight
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

extension UIImage{
    func mergeImage(with image:UIImage){
        
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
    
    func mapView(_ mapView: MGLMapView, annotationCanShowCallout annotation: MGLAnnotation) -> Bool {
        // Always allow callouts to popup when annotations are tapped.
        return false
    }
    
}

extension SCNNode {
    func addAnimation(node: SCNNode) {
        let rotateOne = SCNAction.rotateBy(x: 0, y: CGFloat(Float.pi), z: 0, duration: 3.0)
        let repeatForever = SCNAction.repeatForever(rotateOne)
        node.runAction(repeatForever)
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
