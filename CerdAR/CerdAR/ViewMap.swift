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



/* UIImageに変換する */
extension UIView {
    
    func getImage() -> UIImage {

        // ビットマップ画像のcontextを作成.
        UIGraphicsBeginImageContextWithOptions(self.bounds.size, false, 0.0)
        let context: CGContextRef = UIGraphicsGetCurrentContext()!

        // 対象のview内の描画をcontextに複写する.
        self.layer.renderInContext(context)

        // 現在のcontextのビットマップをUIImageとして取得.
        let capturedImage: UIImage = UIGraphicsGetImageFromCurrentImageContext()

        // contextを閉じる.
        UIGraphicsEndImageContext()

        return capturedImage
    }
}


/* カスタムピンに持たせるデータ群 */
class CustomAnnotation: MKPointAnnotation {
    var pinImage: UIImage!
    var pinNum: Int!
}

class ViewMap: UIViewController, CLLocationManagerDelegate, MKMapViewDelegate, UIGestureRecognizerDelegate {

    @IBOutlet weak var mapView: MKMapView!

    var center: CLLocationCoordinate2D! // 中心

    let airtagImage = UIImage(named: "icon_airtag.png")! // 情報タグの画像
    let warnImage = UIImage(named: "icon_warn.png")! // 警告タグの画像

    let motionmanager = CMMotionManager() // 加速度センサ

    let locationManager = CLLocationManager() // ユーザーの現在地を取得する

    var userLat: CLLocationDegrees = 0 // ユーザーの現在地の緯度
    var userLon: CLLocationDegrees = 0 // ユーザーの現在地の経度

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

    // 警告タグ
    var warnLabelBox: [UILabel] = [] // 警告タグの文字
    var warnImageBox: [UIImageView] = [] // 警告タグの画像

    let screenWidth: Double = Double(UIScreen.mainScreen().bounds.size.width)   // 実機の画面の横の長さ
    let screenHeight: Double = Double(UIScreen.mainScreen().bounds.size.height) // 実機の画面の縦の長さ

    var annotationBox: [CustomAnnotation] = [] // ピン(保留)

    // 定数
    let textPosMag: CGFloat = 0.2 // タグに表示するテキストの位置(xとy)の倍率
    let textWidMag: CGFloat = 0.6 // タグに表示するテキストのタグのサイズに対する横幅の倍率
    let textHeiMag: CGFloat = 0.8 // タグに表示するテキストのタグのサイズに対する縦幅の倍率
    let tagFontSize: CGFloat = 100 // タグに表示する文字のサイズ
    let zero: CGFloat = 0 // 初期値0
    let imgMag: Double = 0.2 // 画像をリサイズするときの倍率
    let butSize: CGFloat = 100 // ボタンのサイズ(wid・hei)
    let camPos: CGFloat = 5 // カメラボタンの位置

    var pinView: [MKAnnotationView] = []

    var pinViewData: MKAnnotationView! // タップされたタグの情報を保持
    var zoom: MKCoordinateRegion! // タグをタップしたときの表示範囲を保持

    // はじめにだけ呼ばれる
    override func viewDidLoad() {
        super.viewDidLoad()

        self.title = "map"

        locationManager.delegate = self
        locationManager.startUpdatingLocation()
        
        mapView = MKMapView(frame: self.view.frame)
        mapView.center = self.view.center

        //self.alert() //毎回呼ばれる・・・

    }


    /* 画面が表示される直前 */
    override func viewWillAppear(animated: Bool) {

        self.navigationController?.setNavigationBarHidden(true, animated: true)

        // Delegateを設定
        mapView.delegate = self

        // viewにMapViewを追加.
        self.view.addSubview(mapView)

        self.mapView.delegate = self
        self.mapView.mapType = MKMapType.Standard  // 地図の種類
        self.mapView.showsUserLocation = true      // 現在地の表示を許可する

        locationManager.delegate = self
        locationManager.desiredAccuracy = kCLLocationAccuracyBest
        locationManager.startUpdatingLocation()
        locationManager.startUpdatingHeading()

        motionmanager.magnetometerUpdateInterval = 0.1 // 加速度センサを取得する間隔

        locationManager.requestAlwaysAuthorization() // 常に現在地取得のリクエストメソッド

        /* (jsonからデータを取ってくるようになったらここをいじる) */
        // 情報タグに入れる情報
        infoTags.append(InfoTag(iPlace: "淀屋橋", iLat: 34.69255, iLon: 135.501687, iDis: 0, iDir: 0.0))
        infoTags.append(InfoTag(iPlace: "堂島ビルヂング", iLat: 34.695591, iLon: 135.501699, iDis: 1, iDir: 0.0))
        infoTags.append(InfoTag(iPlace: "おおさかびじねすかれっじせんもんがっこう", iLat: 34.695556, iLon: 135.500189, iDis: 2, iDir: 0.0))
        infoTags.append(InfoTag(iPlace: "大阪地方裁判所", iLat: 34.682803, iLon: 135.519230, iDis: 3, iDir: 0.0))
        infoTags.append(InfoTag(iPlace: "三国ヶ丘駅", iLat: 34.566147, iLon: 135.492787, iDis: 4, iDir: 0.0))
        infoTags.append(InfoTag(iPlace: "南海難波駅", iLat: 34.662720, iLon: 135.502574, iDis: 5, iDir: 0.0))

        // 警告タグに入れる情報
        warnTags.append(WarnTag(wPlace: "大江橋駅", wLat: 34.694161, wLon: 135.499976, wDis: 0, wDir: 0.0, wDisaster: "火災"))
        warnTags.append(WarnTag(wPlace: "大阪市役所", wLat: 34.693742, wLon: 135.502362, wDis: 0, wDir: 0.0, wDisaster: "津波"))

        self.renderView()
        self.initBox()

        // 情報タグの生成
        for i in 0 ..< infoTags.count {
            let text = infoTags[i].iPlace + "\n" + String(infoTags[i].iDis) + "m" // 情報タグの内容

            var label: UILabel! // 情報タグの文字
            var labelImg: UIImage! // ラベル画像

            label = UILabel(frame: CGRect.init(x: zero, y: zero, width: airtagImage.size.width, height: airtagImage.size.height)) //ラベルサイズ
            label.text = text // 文字
            label.textColor = UIColor.redColor() // 文字色
            label.textAlignment = NSTextAlignment.Center // 中央揃え
            label.layer.position = CGPoint.init(x: self.view.frame.width, y: self.view.frame.height)
            label.font = UIFont.systemFontOfSize(100); // 初期文字サイズ // マジックナンバーは後ほど対応
            label.adjustsFontSizeToFitWidth = true // 文字の多さによってフォントサイズを調節する
            label.numberOfLines = 3 // ラベル内の行数 // マジックナンバーは後ほど対応

            labelImg = label.getImage() as UIImage // UILabelをUIImageに変換する

            let tagRect = CGRect.init(x: zero, y: zero, width: airtagImage.size.width, height: airtagImage.size.height) // タグ画像のサイズと位置
            UIGraphicsBeginImageContext(airtagImage.size)
            airtagImage.drawInRect(tagRect)

            let labelRect = CGRect.init(x: 40, y: 40, width: labelImg.size.width-80, height: labelImg.size.height-100) // ラベル画像のサイズと位置// マジックナンバーは後ほど対応

            labelImg.drawInRect(labelRect)

            // Context に描画された画像を新しく設定
            let newImage = UIGraphicsGetImageFromCurrentImageContext()

            // Context 終了
            UIGraphicsEndImageContext()

            annotationBox.append(CustomAnnotation()) // 初期化
            annotationBox[i].coordinate = CLLocationCoordinate2DMake(infoTags[i].iLat, infoTags[i].iLon) //ピンの緯度経度の設定
            annotationBox[i].pinImage = newImage // ピン画像の設定
            annotationBox[i].pinNum = i //ピン番号

            pinView.append(MKAnnotationView())

            self.mapView.addAnnotation(annotationBox[i]) // ピンの追加
        }

        
        if pinViewData != nil {
            transFromDetailToMap(pinViewData)
        }

    }


    /* 詳細画面から地図画面に遷移したときの表示の設定 */
    func transFromDetailToMap(view: MKAnnotationView) {
        
        var span = MKCoordinateSpanMake(0.0001, 0.0001) //表示範囲  // マジックナンバーは後ほど対応
        var region = MKCoordinateRegionMake(view.annotation!.coordinate, span) //中心座標と表示範囲をマップに登録する
        self.mapView.setRegion(region, animated:true)
        
        runAfterDelay(0.1) { // マジックナンバーは後ほど対応

            // 1.3秒でズームアウトする
            UIView.animateWithDuration(1.3, delay: 0.0, options: .CurveEaseOut, animations: { // マジックナンバーは後ほど対応

                span = MKCoordinateSpanMake(self.zoom.span.latitudeDelta, self.zoom.span.latitudeDelta) //表示範囲
                region = MKCoordinateRegionMake(view.annotation!.coordinate, span) //中心座標と表示範囲をマップに登録する。

                self.mapView.setRegion(region, animated:true)
            
            }, completion: nil)
        }
    }


    /* ピン画像の設定 */
    func mapView(mapView: MKMapView, viewForAnnotation annotation: MKAnnotation) -> MKAnnotationView? {

        if let pin = annotation as? CustomAnnotation {

            // 情報タグのとき
            if pin.pinImage != nil {
                let pN = pin.pinNum //ピン番号をつける
                //画像が設定されている場合
                pinView[pN].annotation = annotation
                pinView[pN].image = pin.pinImage // ピンの画像設定
                pinView[pN].canShowCallout = false // ピンをタップ時の吹き出しを非表示

                return pinView[pN]
            }
        }

        // ユーザーロケーションのとき
        return nil
    }


    /* 情報タグがタップされると、詳細画面に遷移する */
    func mapView(mapView: MKMapView, didSelectAnnotationView view: MKAnnotationView) {
        
        pinViewData = view // タップしたピンのデータを保持する

        zoom = mapView.region
        
        // 1.3秒でズームインする
        UIView.animateWithDuration(1.3, delay: 0.0, options: .CurveEaseOut, animations: {  // マジックナンバーは後ほど対応
            
            //表示範囲
            let span = MKCoordinateSpanMake(0.0001, 0.0001) // マジックナンバーは後ほど対応

            //中心座標と表示範囲をマップに登録する。
            let region = MKCoordinateRegionMake(view.annotation!.coordinate, span)
            
            self.mapView.setRegion(region, animated:true)
            
        }, completion: nil)
        
        let detail = ViewDetail()

        runAfterDelay(1.5) {
            self.navigationController?.pushViewController(detail, animated: true) // 遷移
        }
    }

 



    /* タグ初期化 */
    func initBox() {

        // 警告タグの初期化
        for _ in 0 ..< warnTags.count {
            warnImageBox.append(UIImageView(frame: CGRect.init(x: zero, y: zero, width: zero, height: zero))) // タグ画像の設定
            warnLabelBox.append(UILabel(frame: CGRect.init(x: zero, y: zero, width: zero, height: zero))) // 空のタグ
        }
    }



    /* 地図画面を開いたときの現在地の取得 */
    func locationManager(manager: CLLocationManager, didUpdateLocations locations: [CLLocation]) {

        userLat = manager.location!.coordinate.latitude
        userLon = manager.location!.coordinate.longitude

        runAfterDelay(5.0) {
            self.locationManager.stopUpdatingLocation()
        }
    }



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




    /* ボタンクリックしたときのイベント(AR画面に遷移する) */
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
    }



    /* iPhone の位置情報が更新されるたびに、デリゲートが呼ばれる */
    func locationManager(manager: CLLocationManager, didUpdateToLocation newLocation: CLLocation, fromLocation oldLocation: CLLocation) {
        userLat = newLocation.coordinate.latitude   // 現在地の緯度
        userLon = newLocation.coordinate.longitude  // 現在地の経度
    }



    /* 別の画面に遷移した直後(破棄) */
    override func viewDidDisappear(animated: Bool) {
        super.viewDidDisappear(animated)

        for i in 0 ..< warnTags.count {
            warnLabelBox[i].removeFromSuperview() // 警告タグの破棄
        }

        infoTags.removeAll()      // 情報タグ構造体配列の破棄
        warnTags.removeAll()      // 警告タグ構造体配列の破棄
        warnLabelBox.removeAll() // 警告タグのラベル配列の破棄
        warnImageBox.removeAll() // 警告タグの画像配列の破棄
        annotationBox.removeAll() //ピン情報の破棄
        pinView.removeAll() // ピン画像の破棄

    }


    func runAfterDelay(delay: NSTimeInterval, block: dispatch_block_t) {
        let time = dispatch_time(DISPATCH_TIME_NOW, Int64(delay*Double(NSEC_PER_SEC)))
        dispatch_after(time, dispatch_get_main_queue(), block)
    }
}
