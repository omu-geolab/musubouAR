//
//  ViewController.swift
//  CerdAR
//
//  Copyright (c) 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
//

import UIKit
import MapKit
import CoreLocation
import CoreMotion
import CoreImage


class ViewMap: UIViewController, CLLocationManagerDelegate, MKMapViewDelegate, UIGestureRecognizerDelegate {

    @IBOutlet weak var mapView: MKMapView!

    var center: CLLocationCoordinate2D! // 中心

    let myInputImage = UIImage(named: "icon_airtag.png")!

    var camera = MKMapCamera() // 地図を見下ろすカメラの視点を設定
    let motionmanager = CMMotionManager() // 加速度センサ


    // 地図画面ではコンパスが不要なので、マジックナンバーの対応はしない(消します)
    let compass: UIImageView = UIImageView(frame: CGRect.init(x: 10, y: 50, width: 50, height: 50)) //コンパスの表示位置とサイズの設定


    var magneticX: Double = 0
    var magneticY: Double = 0

    let locationManager = CLLocationManager() // ユーザーの現在地を取得する

    let regionRadius: CLLocationDistance = 3000 // 上空 何mから見るか

    var userLat: CLLocationDegrees = 0 // ユーザーの現在地の緯度
    var userLon: CLLocationDegrees = 0 // ユーザーの現在地の経度

    var measuredheading: Float = 0.0 // コンパス機能不要のため、いずれ消します

    // 情報タグの構造体
    struct InfoTag {
        var iPlace: String    // 地名
        var iLat: Double      // 緯度
        var iLon: Double      // 経度
        var iDis: Int         // 距離
        var iDir: Double      // 方角
    }

    // 情報タグの構造体の配列
    var infoTags: [InfoTag] = []  // 空の配列

    // 警告タグの構造体
    struct WarnTag {
        var wPlace: String    // 地名
        var wLat: Double      // 緯度
        var wLon: Double      // 経度
        var wDis: Int         // 距離
        var wDir: Double      // 方角
        var wDisaster: String // 災害名
    }

    // 警告タグの構造体の配列
    var warnTags: [WarnTag] = []  // 空の配列

    // 情報タグ
    var infoLabelBox: [UILabel] = [] // 情報タグの文字
    var infoImageBox: [UIImage] = [] // 情報タグの画像

    // 警告タグ
    var warnLabelBox: [UILabel] = [] // 警告タグの文字
    var warnImageBox: [UIImageView] = [] // 警告タグの画像

    let screenWidth: Double = Double(UIScreen.mainScreen().bounds.size.width)   // 実機の画面の横の長さ
    let screenHeight: Double = Double(UIScreen.mainScreen().bounds.size.height) // 実機の画面の縦の長さ

    var num = 0

    var userCenter = true // ユーザーの中心位置


    var annotationBox: [MKPointAnnotation] = [] // ピン(保留)


    // 定数
    let textPosMag: CGFloat = 0.2 // タグに表示するテキストの位置(xとy)の倍率
    let textWidMag: CGFloat = 0.7 // タグに表示するテキストのタグのサイズに対する横幅の倍率
    let textHeiMag: CGFloat = 0.8 // タグに表示するテキストのタグのサイズに対する縦幅の倍率
    let tagFontSize: CGFloat = 14 // タグに表示する文字のサイズ
    let zero: CGFloat = 0 // 初期値0
    let imgMag: Double = 0.2 // 画像をリサイズするときの倍率
    let butSize: CGFloat = 100 // ボタンのサイズ(wid・hei)
    let camPos: CGFloat = 5 // カメラボタンの位置


    // はじめにだけ呼ばれる
    override func viewDidLoad() {
        super.viewDidLoad()

        self.title = "map"

        locationManager.delegate = self
        locationManager.startUpdatingLocation()

        //self.alert() //毎回呼ばれる・・・

    }


    // コンパス機能のため、不要(削除します)
    func showMagnetoData(magnetoData: CMMagnetometerData?, error: NSError?) {
        let data = magnetoData

        var x = data!.magneticField.x
        var y = data!.magneticField.y
        var z = data!.magneticField.z

        x = round(x*100)/100
        y = round(y*100)/100
        z = round(z*100)/100

        magneticX = x
        magneticY = y
        runAfterDelay(1.0) {
            self.motionmanager.stopMagnetometerUpdates()
        }
    }


    // コンパス機能のため、不要(削除します)
    // コンパスを1回タップしたとき、北に向く
    func singleTap(sender: UITapGestureRecognizer? = nil) {
        var northheading = 0.0

        if magneticY>0 {

            northheading = 90.0 - (atan(magneticX/magneticY))*180/M_PI
        }

        if magneticY<0 {
            northheading = 270.0 - (atan(magneticX/magneticY))*180/M_PI
        }

        if magneticY==0 && magneticX<0 {
            northheading = 180.0
        }

        if magneticY==0 && magneticX>0 {
            northheading = 0.0
        }

        print("magneticX: \(magneticX)")
        print("magneticY: \(magneticY)")
        print("northheading: \(northheading)")

        camera = mapView.camera

        camera.heading = northheading
        camera.pitch = 90
        camera.altitude = 10
        self.mapView.setCamera(camera, animated: true)

        print("Compass Single Tapped")
        compass.transform = CGAffineTransformMakeRotation(CGFloat(northheading))

    }



    // コンパス機能のため、不要(削除します)
    // コンパスを2回タップしたとき、ユーザが向いてる方向に向く
    func doubleTap(sender: UITapGestureRecognizer? = nil) {
        print ("Compass Double Tapped")

        camera = mapView.camera

        camera.heading = (CLLocationDirection(measuredheading))
        camera.pitch = 90
        camera.altitude = 10

        self.mapView.setCamera(camera, animated: true)


        print("Compass Double Tapped")


    }


    /* 画面が表示される直前 */
    override func viewWillAppear(animated: Bool) {

        locationManager.delegate = self
        locationManager.startUpdatingLocation()

        self.navigationController?.setNavigationBarHidden(true, animated: true)

        mapView = MKMapView(frame: self.view.frame)
        mapView.center = self.view.center

        // Delegateを設定
        mapView.delegate = self

        // viewにMapViewを追加.
        self.view.addSubview(mapView)


        self.mapView.delegate = self
        self.mapView.mapType = MKMapType.Standard  // 地図の種類
        self.mapView.showsUserLocation = true      // 現在地の表示を許可する

        mapView.showsCompass = false // AppleMapのコンパスを非表示にする

        locationManager.delegate = self
        locationManager.desiredAccuracy = kCLLocationAccuracyBest
        locationManager.startUpdatingLocation()
        locationManager.startUpdatingHeading()

        motionmanager.magnetometerUpdateInterval = 0.1

        let handler: CMMagnetometerHandler = {(magnetoData: CMMagnetometerData?, error: NSError?) -> Void in
            self.showMagnetoData(magnetoData, error: error)
        }

        motionmanager.startMagnetometerUpdatesToQueue(NSOperationQueue.mainQueue(), withHandler: handler)

        locationManager.requestAlwaysAuthorization()



        /* (jsonからデータを取ってくるようになったらここをいじる) */
        // 情報タグに入れる情報
        infoTags.append(InfoTag(iPlace: "淀屋橋駅", iLat: 34.69255, iLon: 135.501687, iDis: 0, iDir: 0.0))
        infoTags.append(InfoTag(iPlace: "堂島ビルヂング", iLat: 34.695591, iLon: 135.501699, iDis: 0, iDir: 0.0))
        infoTags.append(InfoTag(iPlace: "大阪ビジネスカレッジ専門学校", iLat: 34.695556, iLon: 135.500189, iDis: 0, iDir: 0.0))
        infoTags.append(InfoTag(iPlace: "大阪地方裁判所", iLat: 34.682803, iLon: 135.519230, iDis: 0, iDir: 0.0))
        infoTags.append(InfoTag(iPlace: "三国ヶ丘駅", iLat: 34.566147, iLon: 135.492787, iDis: 0, iDir: 0.0))
        infoTags.append(InfoTag(iPlace: "南海難波駅", iLat: 34.662720, iLon: 135.502574, iDis: 0, iDir: 0.0))

        // 警告タグに入れる情報
        warnTags.append(WarnTag(wPlace: "大江橋駅", wLat: 34.694161, wLon: 135.499976, wDis: 0, wDir: 0.0, wDisaster: "火災"))
        warnTags.append(WarnTag(wPlace: "大阪市役所", wLat: 34.693742, wLon: 135.502362, wDis: 0, wDir: 0.0, wDisaster: "津波"))


        self.renderView()
        self.initBox()

//        //for i in 0..<infoLen {
//
//            // ピンの設置
//            let coordinate = CLLocationCoordinate2DMake(infoTags[0].Lat, infoTags[0].Lon) // ピンの位置
//            let span = MKCoordinateSpanMake(0.03, 0.03) // 縮尺
//            let region = MKCoordinateRegionMake(coordinate, span)
//            mapView.setRegion(region, animated:true)
//
//            let annotation = MKPointAnnotation()
//            annotation.coordinate = coordinate
//            annotation.title = "title"
//            self.mapView.addAnnotation(annotation)
//            //print("i=",i)
//
//        // ピンの設置
//            let coordinate2 = CLLocationCoordinate2DMake(infoTags[1].Lat, infoTags[1].Lon) // ピンの位置
//            let span2 = MKCoordinateSpanMake(0.03, 0.03) // 縮尺
//            let region2 = MKCoordinateRegionMake(coordinate2, span2)
//            mapView.setRegion(region2, animated:true)
//
//            let annotation2 = MKPointAnnotation()
//            annotation2.coordinate = coordinate2
//            annotation2.title = "title2"
//            self.mapView.addAnnotation(annotation2)
//            //print("i=",i)
//
//        //}


        // ピンの設定
        while num<infoTags.count-1 {

            let coordinate = CLLocationCoordinate2DMake(infoTags[num].iLat, infoTags[num].iLon) // ピンの位置
            let span = MKCoordinateSpanMake(0.03, 0.03) // 縮尺
            let region = MKCoordinateRegionMake(coordinate, span)
            mapView.setRegion(region, animated:true)

            let annotation = MKPointAnnotation()
            annotation.coordinate = coordinate
            annotation.title = "title"
            self.mapView.addAnnotation(annotation)

            num = num + 1
            print("num = ", num)
        }
    }


    // タグに文字を書く
    func drawText(image: [UIImage], index: Int) -> UIImage {
        let text = infoTags[index].iPlace + "\n" + String(infoTags[index].iDis) + "m"

        let font = UIFont.boldSystemFontOfSize(tagFontSize) // タグに表示する文字のサイズ
        let imageRect = CGRect.init(x: zero, y: zero, width: image[index].size.width, height: image[index].size.height)

        UIGraphicsBeginImageContext(image[index].size)

        image[index].drawInRect(imageRect)

        // 文字表示のサイズ
        let textRect = CGRect.init(x: image[index].size.width*textPosMag, y: image[index].size.height*textPosMag, width: image[index].size.width*textWidMag, height: image[index].size.height*textHeiMag)

        let textStyle = NSMutableParagraphStyle.defaultParagraphStyle().mutableCopy() as? NSMutableParagraphStyle
        let textFontAttributes: [String: AnyObject] = [
            NSFontAttributeName: font,
            NSForegroundColorAttributeName: UIColor.blackColor(),
            NSParagraphStyleAttributeName: textStyle!
        ]

        text.drawInRect(textRect, withAttributes: textFontAttributes)

        let newImage = UIGraphicsGetImageFromCurrentImageContext()

        UIGraphicsEndImageContext()

        return newImage
    }


    // ピンの画像のリサイズ・設定
    // viewForAnnotationはmapViewに対するaddAnnotationを行った回数だけ呼び出される
    func mapView(mapView: MKMapView, viewForAnnotation annotation: MKAnnotation) -> MKAnnotationView? {

        // タグ画像のリサイズ
        let size = CGSize(width: screenHeight*imgMag, height: screenHeight*imgMag)
        UIGraphicsBeginImageContext(size)
        myInputImage.drawInRect(CGRect.init(x: zero, y: zero, width: size.width, height: size.height))
        infoImageBox[num] = UIGraphicsGetImageFromCurrentImageContext()
        UIGraphicsEndImageContext()


        if annotation is MKUserLocation {
            print("---user---")
            return nil
        }

        let identifier = "pin"
        let annotationView = MKAnnotationView(annotation: annotation, reuseIdentifier: identifier)
        UIGraphicsBeginImageContext(size)
        drawText(infoImageBox, index: num).drawInRect(CGRect.init(x: zero, y: zero, width: size.width, height: size.height))
        let resizeImage = UIGraphicsGetImageFromCurrentImageContext()
        UIGraphicsEndImageContext()

        annotationView.annotation = annotation

        annotationView.image = resizeImage

        print("num=", num)

//        if(num == infoLen - 1){
//            num = 0
//            print("リセット！")
//        }else{
//            num = num + 1
//        }

        return annotationView



//        // ピン画像の設定
//        if annotation is MKUserLocation {
//            return nil
//        }
//
//        let reuseId = "image"
//        var pinView = mapView.dequeueReusableAnnotationViewWithIdentifier(reuseId)
//
//            pinView = MKAnnotationView(annotation: annotation, reuseIdentifier: reuseId)
//            pinView?.canShowCallout = true
//            pinView?.image = drawText(infoImage_box, i: num)
//
//            let rightButton: AnyObject! = UIButton(type: UIButtonType.DetailDisclosure)
//            pinView?.rightCalloutAccessoryView = rightButton as? UIView
//
//
//        if(num == infoLen - 1){
//            num = 0
//            print("リセット！num:",num)
//        }else{
//            num = num + 1
//        }
//        print("infoLen:",infoLen)
//
//        return pinView

    }


    // 情報タグがタップされると、詳細画面に遷移する
    func mapView(mapView: MKMapView, didSelectAnnotationView view: MKAnnotationView) {
        let detail = ViewDetail()
        self.navigationController?.pushViewController(detail, animated: true)
    }


    // タグ初期化
    func initBox() {

        // 情報タグの初期化
        for _ in 0..<infoTags.count {
            infoImageBox.append(UIImage(named:"icon_airtag.png")!) // タグ画像の設定
            infoLabelBox.append(UILabel(frame: CGRect.init(x: zero, y: zero, width: zero, height: zero))) // 空のタグ
            //annotation_box.append(MKPinAnnotationView())
        }

        // 警告タグの初期化
        for _ in 0..<warnTags.count {
            warnImageBox.append(UIImageView(frame: CGRect.init(x: zero, y: zero, width: zero, height: zero))) // タグ画像の設定
            warnLabelBox.append(UILabel(frame: CGRect.init(x: zero, y: zero, width: zero, height: zero))) // 空のタグ
        }
    }



    // 地図画面を開いたときの現在地の取得
    func locationManager(manager: CLLocationManager, didUpdateLocations locations: [CLLocation]) {

        //if(userCenter == true){
            userLat = manager.location!.coordinate.latitude
            userLon = manager.location!.coordinate.longitude
            let initiallocation = CLLocation(latitude: userLat, longitude: userLon) //地図を開いたときの画面の中心の位置
            centerMapOnLocation(initiallocation) //画面の中心を現在地にする
            userCenter = false
        //}

        runAfterDelay(5.0) {
            self.locationManager.stopUpdatingLocation()
        }
    }



    func locationManager(manager: CLLocationManager, didFailWithError error: NSError) {
        print("didFailWithError: \(error)")
    }


    // GPSの使用許可
    func locationManager(manager: CLLocationManager, didChangeAuthorizationStatus status: CLAuthorizationStatus) {
        switch status {
        case .NotDetermined:
            if locationManager.respondsToSelector(#selector(CLLocationManager.requestWhenInUseAuthorization)) {
                locationManager.requestWhenInUseAuthorization()
            }
        case .Restricted, .Denied:
            self.alertLocationServicesDisabled()
        case .Authorized, .AuthorizedWhenInUse:
            break
        }
    }


    /* 画面の中心を現在地にする */
    func centerMapOnLocation(location: CLLocation) {
        let coordinateRegion = MKCoordinateRegionMakeWithDistance(location.coordinate, regionRadius, regionRadius)
        mapView.setRegion(coordinateRegion, animated: true)
    }



    /* アプリを開いた時に出る注意書き */
    func alert() {
        // UIAlertControllerを作成する.
        let myAlert: UIAlertController = UIAlertController(title: "", message: "操作する場合は、立ち止まって安全を確認してから操作してください", preferredStyle: .Alert)

        // OKのアクションを作成する.
        let myOkAction = UIAlertAction(title: "OK", style: .Default) { action in }

        // OKのActionを追加する.
        myAlert.addAction(myOkAction)

        // UIAlertを発動する.
        presentViewController(myAlert, animated: true, completion: nil)
    }


    /* 現在地情報の表示を許可する */
    func alertLocationServicesDisabled() {
        let title = "Location Services Disabled"
        let message = "You must enable Location Services to track your run."

        if NSClassFromString("UIAlertController") != nil {
            let alert = UIAlertController(title: title, message: message, preferredStyle: .Alert)

            alert.addAction(UIAlertAction(title: "Settings", style: .Default, handler: { action in
                let url = NSURL(string: UIApplicationOpenSettingsURLString)
                UIApplication.sharedApplication().openURL(url!)
            }))
            alert.addAction(UIAlertAction(title: "Close", style: .Cancel, handler: nil))

            presentViewController(alert, animated: true, completion: nil)
        } else {
            UIAlertController.self
        }
    }




    /* ボタンクリックしたときのイベント */
    internal func clickAR(sender: UIButton) {
        let ar = ViewARCamera()
        self.navigationController?.pushViewController(ar, animated: true)
    }


    func renderView() {
        // 画面遷移するためのボタンを生成
        let toCam_button = UIButton()
        toCam_button.frame = CGRect.init(x: zero, y: zero, width: butSize, height: butSize)
        let buttonImage: UIImage = UIImage(named: "icon_camera.jpg")!
        toCam_button.setImage(buttonImage, forState: .Normal)
        toCam_button.layer.position = CGPoint(x: camPos+butSize, y: self.view.bounds.height-camPos-butSize)
        self.view.addSubview(toCam_button)

        toCam_button.addTarget(self, action: #selector(ViewMap.clickAR(_:)), forControlEvents: .TouchUpInside)


        compass.image = UIImage(named: "icon_compass.png") // コンパスの画像の設定 // 不要
        compass.accessibilityLabel = "Compass" //? // 不要

        let singletap = UITapGestureRecognizer(target:self, action:#selector(ViewMap.singleTap(_:))) // 1回タップしたときに呼ばれるメソッドの設定 // 不要
        singletap.delegate=self // 不要
        compass.userInteractionEnabled=true // 不要
        singletap.numberOfTapsRequired = 1 // 不要
        compass.addGestureRecognizer(singletap) // コンパスを1回タップしたとき // 不要

        let doubletap = UITapGestureRecognizer(target: self, action: #selector(ViewMap.doubleTap(_:))) // 2回タップしたときに呼ばれるメソッドの設定 // 不要
        doubletap.delegate = self // 不要
        doubletap.numberOfTapsRequired = 2 // 不要
        compass.addGestureRecognizer(doubletap) // コンパスを2回タップしたとき // 不要

        self.mapView.addSubview(compass) // 不要

    }

    /* iPhone の位置情報が更新されるたびに、デリゲートが呼ばれる */
    func locationManager(manager: CLLocationManager, didUpdateToLocation newLocation: CLLocation, fromLocation oldLocation: CLLocation) {

        userLat = newLocation.coordinate.latitude   // 現在地の緯度
        userLon = newLocation.coordinate.longitude  // 現在地の経度

    }


    // コンパス機能のため、不要(削除します)
    func degreesToRadians(degrees: Float) -> Float {
        return degrees*Float(M_PI)/180
    }

    // コンパス機能のため、不要(削除します)
    func locationManager(manager: CLLocationManager, didUpdateHeading newHeading: CLHeading) {

        var heading: Float = Float(newHeading.trueHeading)
        if heading > 180 {
            heading = 360 - heading

        } else {
            heading = 0 - heading
        }

        measuredheading = heading

        compass.transform = CGAffineTransformMakeRotation(CGFloat(self.degreesToRadians(heading)))
    }



    /* 別の画面に遷移した直後(破棄) */
    override func viewDidDisappear(animated: Bool) {
        super.viewDidDisappear(animated)

        for i in 0..<infoTags.count {
            infoLabelBox[i].removeFromSuperview() // 情報タグの破棄
        }

        for i in 0..<warnTags.count {
            warnLabelBox[i].removeFromSuperview() // 警告タグの破棄
        }

        infoTags.removeAll()      // 情報タグ構造体配列の破棄
        warnTags.removeAll()      // 警告タグ構造体配列の破棄
        infoLabelBox.removeAll() // 情報タグのラベル配列の破棄
        infoImageBox.removeAll() // 情報タグの画像配列の破棄
        warnLabelBox.removeAll() // 警告タグのラベル配列の破棄
        warnImageBox.removeAll() // 警告タグの画像配列の破棄

        num = 0 // 情報タグの番号リセット
        print("破棄！num:", num)
    }



    /* タグをタップしたときのイベント(詳細画面に遷移する) */
    internal func imageTapped(sender: UIButton) {
        let detail = ViewDetail()
        self.navigationController?.pushViewController(detail, animated: true)
    }



    func runAfterDelay(delay: NSTimeInterval, block: dispatch_block_t) {
        let time = dispatch_time(DISPATCH_TIME_NOW, Int64(delay*Double(NSEC_PER_SEC)))
        dispatch_after(time, dispatch_get_main_queue(), block)
    }
}
