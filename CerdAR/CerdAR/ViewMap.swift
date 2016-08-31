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



/* タグに持たせるデータ群 */
class TagData: MKPointAnnotation {

    // 共通タグ
    var id: String!           // 共通ID(必要なのか？)
    var name: String!         // タグの名前
    var inforType: String!    // 種別(info or warn)
    var icon: String!         // 使用する画像
    var descript: String!     // 内容の解説文
    var lat: Double!          // 緯度
    var lon: Double!          // 経度
    
    var pinNum: Int!          // ピン番号
    var pinImage: UIImage!    // タグ画像
    var expandImage: UIImage! // サイズ調節用画像
    
    var distance: Int = 0         // 現在地から目的地までの距離


    // 情報の独自タグ
    var picType: String!      // 写真か動画か
    var photo: String!        // 写真のURL
    var movie: String!        // 動画のURL

    // 災害の独自タグ
    var range: Int!           // 災害の範囲
    var start: String!        // 災害の開始時間
    var stop: String!         // 災害の終了時間
    var message1: String!     // 警告範囲に近づいてきた時のメッセージ
    var message2: String!     // 警告範囲に侵入した時のメッセージ
    var riskType: Int!        // 災害の種類(1:火災,2:浸水,3:落橋,4:土砂崩れ)
    var color: UIColor!       // 災害ごとの色(保留)
    var riskName: String!     // 災害名
}




class ViewMap: UIViewController, CLLocationManagerDelegate, MKMapViewDelegate, UIGestureRecognizerDelegate {

    @IBOutlet weak var mapView: MKMapView!

    var center: CLLocationCoordinate2D! // 中心

    let airtagImage = UIImage(named: "icon_airtag.png")! // 情報タグの画像

    let motionmanager = CMMotionManager() // 加速度センサ

    //let locationManager = CLLocationManager() // ユーザーの現在地を取得する
    var locationManager: CLLocationManager! // 現在地の取得
    var userLat: CLLocationDegrees = 0 // ユーザーの現在地の緯度
    var userLon: CLLocationDegrees = 0 // ユーザーの現在地の経度

    let screenWidth: Double = Double(UIScreen.mainScreen().bounds.size.width)   // 実機の画面の横の長さ
    let screenHeight: Double = Double(UIScreen.mainScreen().bounds.size.height) // 実機の画面の縦の長さ
    
    var annotationBox2: [TagData] = [] // ピン(json)
    
    var labelImg: UIImage! // ラベル画像
    
    var pinView: [MKAnnotationView] = []
    
    var pinViewData: MKAnnotationView! // タップされたタグの情報を保持
    var zoom: MKCoordinateRegion! // タグをタップしたときの表示範囲を保持
    var zoom2: MKCoordinateRegion! // タグをタップしたときの表示範囲を保持
    
    
    
    // 定数
    let textPosMag: CGFloat = 0.2 // タグに表示するテキストの位置(xとy)の倍率
    let textWidMag: CGFloat = 0.6 // タグに表示するテキストのタグのサイズに対する横幅の倍率
    let textHeiMag: CGFloat = 0.8 // タグに表示するテキストのタグのサイズに対する縦幅の倍率
    let tagFontSize: CGFloat = 100 // タグに表示する文字のサイズ
    let zero: CGFloat = 0 // 初期値0
    let imgMag: Double = 0.2 // 画像をリサイズするときの倍率
    let butSize: CGFloat = 100 // ボタンのサイズ(wid・hei)
    let camPos: CGFloat = 5 // カメラボタンの位置
    


    
    // はじめにだけ呼ばれる
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.title = "map"
 
        //self.alert() //毎回呼ばれる・・・
    }
    
    
    /* 画面が表示される直前 */
    override func viewWillAppear(animated: Bool) {

        self.navigationController?.setNavigationBarHidden(true, animated: true)
        
        
        // 現在地の取得を開始
        if CLLocationManager.locationServicesEnabled() {
            locationManager = CLLocationManager()
            locationManager.delegate = self
            locationManager.startUpdatingLocation() // 位置情報の更新を開始
        }

        locationManager.requestAlwaysAuthorization()
        
        mapView = MKMapView(frame: self.view.frame)
        mapView.center = self.view.center


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

        self.renderView()
        self.initBox()


        let file_name = "sample.json"
        var json: JSON!

        if let dir: NSString = NSSearchPathForDirectoriesInDomains(NSSearchPathDirectory.DocumentDirectory, NSSearchPathDomainMask.AllDomainsMask, true).first {

            let path_file_name = dir.stringByAppendingPathComponent(file_name)
            
            do {
                let jsonData = NSData(contentsOfFile: path_file_name)!
                json = JSON(data:jsonData)
                
            } catch {
                print("error")
            }
        }

        
        for i in 0 ..< json["features"].count {
            
            annotationBox2.append(TagData()) // 初期化
            
            /* 共通の内容 */
            annotationBox2[i].pinNum = i //ピン番号
            annotationBox2[i].id = json["features"][i]["properties"]["id"].string // id
            annotationBox2[i].name = json["features"][i]["properties"]["Name"].string // タグの名前(施設名？)
            annotationBox2[i].inforType = json["features"][i]["properties"]["infor_type"].string // タグの種類
            annotationBox2[i].icon = json["features"][i]["properties"]["icon"].string // タグ画像
            annotationBox2[i].descript = json["features"][i]["properties"]["description"].string // 内容の解説文
            annotationBox2[i].lon = json["features"][i]["geometry"]["coordinates"][0].double // 経度
            annotationBox2[i].lat = json["features"][i]["geometry"]["coordinates"][1].double // 緯度
            annotationBox2[i].coordinate = CLLocationCoordinate2DMake(annotationBox2[i].lat, annotationBox2[i].lon) //ピンの緯度経度の設定

            
            /* 情報の独自タグ */
            if annotationBox2[i].inforType == "infor" {
                
                annotationBox2[i].picType = json["features"][i]["properties"]["pic_type"].string // 写真か動画か
                if annotationBox2[i].picType == "photo" {
                    annotationBox2[i].photo = json["features"][i]["properties"]["photo"].string // 写真のURL
                    
                } else if annotationBox2[i].picType == "movie" {
                    annotationBox2[i].movie = json["features"][i]["properties"]["movie"].string // 動画のURL
                }
                
                /* 2点間の距離はこれで求めれる！ */
                let circlelocation1 = CLLocationCoordinate2DMake(annotationBox2[i].lat, annotationBox2[i].lon)
                let point1 = MKMapPointForCoordinate(circlelocation1)
                let circlelocation2 = CLLocationCoordinate2DMake(userLat, userLon)
                let point2 = MKMapPointForCoordinate(circlelocation2)
                annotationBox2[i].distance = Int(MKMetersBetweenMapPoints(point1, point2))
                print(annotationBox2[i].distance)

                
                let text = annotationBox2[i].name + "\n" + String(annotationBox2[i].distance) + "m" // 情報タグの内容
                
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
                
                annotationBox2[i].pinImage = resizeImage(newImage, newHeight: 500) // ピン画像の設定
                annotationBox2[i].expandImage = resizeImage(newImage, newHeight: 500) // ピン画像の設定


                /* 警告の独自タグ */
            } else if annotationBox2[i].inforType == "warn" {
                annotationBox2[i].range = json["features"][i]["properties"]["range"].int // 災害範囲
                annotationBox2[i].start = json["features"][i]["properties"]["start"].string // 災害開始時刻
                annotationBox2[i].stop = json["features"][i]["properties"]["stop"].string // 災害終了時刻
                annotationBox2[i].message1 = json["features"][i]["properties"]["message1"].string // 警告範囲に近づいた時のメッセージ
                annotationBox2[i].message2 = json["features"][i]["properties"]["message2"].string // 警告範囲に侵入した時のメッセージ
                annotationBox2[i].riskType = json["features"][i]["properties"]["risk_type"].int // 災害の種類

                // 災害カラーを設定する
                switch annotationBox2[i].riskType {

                case 0: // 火災のとき：赤色
                    annotationBox2[i].color = UIColor.redColor()
                    annotationBox2[i].riskName = "火災"
                    break

                case 1: // 浸水のとき：青色
                    annotationBox2[i].color = UIColor.blueColor()
                    annotationBox2[i].riskName = "浸水"
                    break

                case 2: // 落橋のとき：黄色
                    annotationBox2[i].color = UIColor.yellowColor()
                    annotationBox2[i].riskName = "落橋"
                    break

                case 3: // 土砂崩れのとき：茶色
                    annotationBox2[i].color = UIColor.brownColor()
                    annotationBox2[i].riskName = "土砂崩れ"
                    break

                default: // その他の災害のとき：緑色
                    annotationBox2[i].color = UIColor.greenColor()
                    annotationBox2[i].riskName = "その他の災害"
                    break

                }
                
                
                /* 2点間の距離はこれで求めれる！ */
                let circlelocation1 = CLLocationCoordinate2DMake(annotationBox2[i].lat, annotationBox2[i].lon)
                let point1 = MKMapPointForCoordinate(circlelocation1)
                let circlelocation2 = CLLocationCoordinate2DMake(userLat, userLon)
                let point2 = MKMapPointForCoordinate(circlelocation2)
                annotationBox2[i].distance = Int(MKMetersBetweenMapPoints(point1, point2))
                
                
                let text = annotationBox2[i].riskName + "\n" + String(annotationBox2[i].distance) + "m" + "\n" + "範囲: " + String(annotationBox2[i].range) + "m" // 警告タグの内容 // めも：災害の種類にわける、距離をだす
                var label: UILabel! // 警告タグの文字

                label = UILabel(frame: CGRect.init(x: self.zero, y: self.zero, width: self.airtagImage.size.width, height: self.airtagImage.size.height)) //ラベルサイズ
                label.text = text // 文字
                label.textColor = UIColor.blackColor() // 文字色
                label.textAlignment = NSTextAlignment.Center // 中央揃え
                label.layer.position = CGPoint.init(x: self.view.frame.width, y: self.view.frame.height)
                label.font = UIFont.systemFontOfSize(30); // 初期文字サイズ // マジックナンバーは後ほど対応
                label.numberOfLines = 3 // ラベル内の行数 // マジックナンバーは後ほど対応

                labelImg = label.getImage() as UIImage // UILabelをUIImageに変換する

                annotationBox2[i].pinImage = labelImg


                let circlelocation = CLLocation(latitude: annotationBox2[i].lat, longitude: annotationBox2[i].lon) // 災害場所の緯度経度
                var circleradius = CLLocationDistance(annotationBox2[i].range) // 災害範囲の円の半径


                // 円を描画する
                let circle: MKCircle = MKCircle(centerCoordinate: circlelocation.coordinate, radius: circleradius)
                self.mapView.addOverlay(circle, level: MKOverlayLevel.AboveRoads)  // 災害範囲の円をマップに追加


                // 時間経過による範囲の広がり(めも：startとstopを使った実装を後でする)
                for time in 5...20 {

                    runAfterDelay(Double(time)) {

                        //時間に連れて円とボックスが大きくなる//
                        circleradius = 1.1 * circleradius // 災害範囲の半径の更新
                        self.annotationBox2[i].range = Int(circleradius)
                        self.mapView.removeOverlays(self.mapView.overlays)
                        self.updatecircle(circlelocation, radius: circleradius) // 災害範囲の円を更新する
                    }
                }

            } else {
                print("infor_typeの設定を間違えています") /****後でこのときの対策を考える****/
            }

            pinView.append(MKAnnotationView())

            self.mapView.addAnnotation(annotationBox2[i]) // ピンの追加
        }

        if pinViewData != nil {
            transFromDetailToMap(pinViewData)
        }

    }


    /* 地図を触った後 */
    func mapView(mapView: MKMapView, regionDidChangeAnimated animated: Bool) {
        
        zoom2 = mapView.region
        //print("半径：\(annotationBox2[2].range)m")
        //print("表示範囲：\(Int(zoom2.span.latitudeDelta * 111 * 1000))m")

        var newimage: UIImage!

        for i in 0 ..< 3/*json["features"].count*/ {
            if annotationBox2[i].inforType == "warn" {
                let han: Double = Double(annotationBox2[2].range * 2)
                let newsize = CGFloat(screenWidth * (han / (zoom2.span.latitudeDelta * 111 * 1000)))
                newimage = self.resizeImage(labelImg, newHeight: newsize) // 新しい画像

            } else if annotationBox2[i].inforType == "infor" {
                let newsize = CGFloat(screenWidth * (100 / (zoom2.span.latitudeDelta * 111 * 1000)))
                newimage = self.resizeImage(annotationBox2[i].expandImage, newHeight: newsize) // 新しい画像

            }
            
            let tmpAnnotation: TagData = annotationBox2[i] // 一旦他の場所にデータを保持させる
            
            self.mapView.removeAnnotation(self.annotationBox2[i]) // 古い災害ピンを削除
            annotationBox2[i] = tmpAnnotation
            annotationBox2[i].pinImage = newimage
            
            self.mapView.addAnnotation(self.annotationBox2[i])
            
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
                
                region = MKCoordinateRegionMake(view.annotation!.coordinate, span) //中心座標と表示範囲をマップに登録する
                
                self.mapView.setRegion(region, animated:true)
                
            }, completion: nil)
        }
    }
    
    
    /* ピン画像の設定 */
    func mapView(mapView: MKMapView, viewForAnnotation annotation: MKAnnotation) -> MKAnnotationView? {
        
        if let pin = annotation as? TagData {
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
        /* 一応残しておく */
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
        
        // 位置情報が変わるたびに、タグを作り直している
        for i in 0 ..< annotationBox2.count {

            /* 情報の独自タグ */
            if annotationBox2[i].inforType == "infor" {

                /* 2点間の距離はこれで求めれる！ */
                let circlelocation1 = CLLocationCoordinate2DMake(annotationBox2[i].lat, annotationBox2[i].lon)
                let point1 = MKMapPointForCoordinate(circlelocation1)
                let circlelocation2 = CLLocationCoordinate2DMake(userLat, userLon)
                let point2 = MKMapPointForCoordinate(circlelocation2)
                annotationBox2[i].distance = Int(MKMetersBetweenMapPoints(point1, point2))
                
                let text = annotationBox2[i].name + "\n" + String(annotationBox2[i].distance) + "m" // 情報タグの内容
                
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
                
                annotationBox2[i].pinImage = resizeImage(newImage, newHeight: 500) // ピン画像の設定
                annotationBox2[i].expandImage = resizeImage(newImage, newHeight: 500) // ピン画像の設定
                
                
            /* 警告の独自タグ */
            } else if annotationBox2[i].inforType == "warn" {
                
                /* 2点間の距離はこれで求めれる！ */
                let circlelocation1 = CLLocationCoordinate2DMake(annotationBox2[i].lat, annotationBox2[i].lon)
                let point1 = MKMapPointForCoordinate(circlelocation1)
                let circlelocation2 = CLLocationCoordinate2DMake(userLat, userLon)
                let point2 = MKMapPointForCoordinate(circlelocation2)
                annotationBox2[i].distance = Int(MKMetersBetweenMapPoints(point1, point2))
                
                
                let text = annotationBox2[i].riskName + "\n" + String(annotationBox2[i].distance) + "m" + "\n" + "範囲: " + String(annotationBox2[i].range) + "m" // 警告タグの内容 // めも：災害の種類にわける、距離をだす
                var label: UILabel! // 警告タグの文字
                
                label = UILabel(frame: CGRect.init(x: self.zero, y: self.zero, width: self.airtagImage.size.width, height: self.airtagImage.size.height)) //ラベルサイズ
                label.text = text // 文字
                label.textColor = UIColor.blackColor() // 文字色
                label.textAlignment = NSTextAlignment.Center // 中央揃え
                label.layer.position = CGPoint.init(x: self.view.frame.width, y: self.view.frame.height)
                label.font = UIFont.systemFontOfSize(30); // 初期文字サイズ // マジックナンバーは後ほど対応
                label.numberOfLines = 3 // ラベル内の行数 // マジックナンバーは後ほど対応
                
                labelImg = label.getImage() as UIImage // UILabelをUIImageに変換する
                
                annotationBox2[i].pinImage = labelImg

            } else {
                print("infor_typeの設定を間違えています") /****後でこのときの対策を考える****/
            }
        }


        zoom2 = mapView.region
        //print("半径：\(annotationBox2[2].range)m")
        //print("表示範囲：\(Int(zoom2.span.latitudeDelta * 111 * 1000))m")
        
        var newimage: UIImage!
        
        for i in 0 ..< 3/*json["features"].count*/ {
            if annotationBox2[i].inforType == "warn" {
                let han: Double = Double(annotationBox2[2].range * 2)
                let newsize = CGFloat(screenWidth * (han / (zoom2.span.latitudeDelta * 111 * 1000)))
                newimage = self.resizeImage(labelImg, newHeight: newsize) // 新しい画像
                
            } else if annotationBox2[i].inforType == "infor" {
                let newsize = CGFloat(screenWidth * (100 / (zoom2.span.latitudeDelta * 111 * 1000)))
                newimage = self.resizeImage(annotationBox2[i].expandImage, newHeight: newsize) // 新しい画像
                
            }
            
            let tmpAnnotation: TagData = annotationBox2[i] // 一旦他の場所にデータを保持させる
            
            self.mapView.removeAnnotation(self.annotationBox2[i]) // 古い災害ピンを削除
            annotationBox2[i] = tmpAnnotation
            annotationBox2[i].pinImage = newimage
            
            self.mapView.addAnnotation(self.annotationBox2[i])
            
        }
    }
    
    
    /* 別の画面に遷移した直後(破棄) */
    override func viewDidDisappear(animated: Bool) {
        super.viewDidDisappear(animated)

        //pinView.removeAll() // ピン画像の破棄
        //annotationBox2.removeAll() //ピンの破棄

    }

    /* delay秒後に行う処理 */
    func runAfterDelay(delay: NSTimeInterval, block: dispatch_block_t) {
        let time = dispatch_time(DISPATCH_TIME_NOW, Int64(delay*Double(NSEC_PER_SEC)))
        dispatch_after(time, dispatch_get_main_queue(), block)
    }


    /* 時間経過によって災害範囲を広くするための関数 */
    func updatecircle(location: CLLocation, radius: CLLocationDistance) {
        let circle = MKCircle(centerCoordinate: location.coordinate, radius: radius)
        self.mapView.addOverlay(circle, level: MKOverlayLevel.AboveRoads)

    }


    /* 画像をリサイズする */
    func resizeImage(image: UIImage, newHeight: CGFloat) -> UIImage {

        let scale = newHeight / image.size.height
        let newWidth = image.size.width * scale
        UIGraphicsBeginImageContext(CGSize.init(width: newWidth, height: newHeight))
        image.drawInRect(CGRect.init(x: zero, y: zero, width: newWidth, height: newHeight))
        let newImage = UIGraphicsGetImageFromCurrentImageContext()
        UIGraphicsEndImageContext()

        return newImage
    }


    /* マップに描いた円をoverlayとして貼り付ける */
    func mapView(mapview: MKMapView, rendererForOverlay overlay: MKOverlay) -> MKOverlayRenderer {
        let circle = MKCircleRenderer(overlay:overlay)

        for i in 0 ..< annotationBox2.count {
            if annotationBox2[i].inforType == "warn" {
                circle.fillColor = annotationBox2[i].color.colorWithAlphaComponent(0.6) // 円内部の色と透明度
                circle.strokeColor = annotationBox2[i].color.colorWithAlphaComponent(0.9) // 円周の色と透明度
                circle.lineWidth = 10 // 円周の太さ
            }
        }
        return circle
    }


}
