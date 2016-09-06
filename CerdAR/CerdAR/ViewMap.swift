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
    
    var distance: Int = 0     // 現在地から目的地までの距離
    
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
}


class ViewMap: UIViewController, CLLocationManagerDelegate, MKMapViewDelegate {
    
    @IBOutlet weak var mapView: MKMapView!
    
    var center: CLLocationCoordinate2D! // 中心
    
    let airtagImage = UIImage(named: "icon_airtag.png")! // 情報タグの画像
    
    let motionManager = CMMotionManager() // 加速度センサ
    
    var locationManager: CLLocationManager! // 現在地の取得
    var userLat: CLLocationDegrees = 0 // ユーザーの現在地の緯度
    var userLon: CLLocationDegrees = 0 // ユーザーの現在地の経度
    
    let screenWidth: Double = Double(UIScreen.mainScreen().bounds.size.width)   // 実機の画面の横の長さ
    let screenHeight: Double = Double(UIScreen.mainScreen().bounds.size.height) // 実機の画面の縦の長さ
    
    var annotationBox: [TagData] = [] // ピン(json)
    
    var labelImg: UIImage! // ラベル画像
    
    var pinView: [MKAnnotationView] = []
    
    var pinViewData: MKAnnotationView! // タップされたタグの情報を保持
    var retentionZoom: MKCoordinateRegion! // タグをタップしたときの表示範囲を保持
    var scaleZoom: MKCoordinateRegion! // タグをタップしたときの表示範囲を保持
    
    var warningView: UIView! // 災害範囲内に侵入した時に画面の色を変える
    var warningMessage: UILabel! // 災害範囲内・付近にいるときに表示するメッセージ
    var warningState: [Int] = [] // 0: 侵入、　1: 付近、　2：安全
    
    var circle: [MKCircle] = [] // 災害範囲の円
    var circleRadius: [CLLocationDistance] = [] // 災害範囲の円の半径
    
    
    // 定数
    let tagFontSize: CGFloat = 100 // タグに表示する文字のサイズ
    let zero: CGFloat = 0 // 初期値0
    let butSize: CGFloat = 100 // ボタンのサイズ(wid・hei)
    let camPos: CGFloat = 5 // カメラボタンの位置
    
    let warnMx: Double = 0.6 // 警告メッセージのx座標の倍率
    let warnMy: Double = 0.8 // 警告メッセージのy座標の倍率
    let warnMw: Double = 0.38 // 警告メッセージの横幅の倍率
    let warnMh: Double = 0.13 // 警告メッセージの縦幅の倍率
    let warnMfont: CGFloat = 20 // 警告メッセージのフォントサイズ
    let warnMline: Int = 2 // 警告メッセージの行数
    let warnMborder: CGFloat = 5 // 警告メッセージの枠線の太さ
    let warnMcorner: CGFloat = 20 // 警告メッセージの枠線の角丸
    
    let mapTransNormal: CGFloat = 1.0 // 地図の透明度
    let mapTransAbnormal: CGFloat = 0.8 // 地図の透明度
    
    let tagFont: CGFloat = 100 // タグのフォントサイズ
    let tagLine: Int = 3 // タグの行数
    
    let tagxy: CGFloat = 40 // タグのx,y座標
    let tagWid: CGFloat = 80 // タグの横幅
    let tagHei: CGFloat = 100 // タグの縦幅
    let tagSize: CGFloat = 500 // タグ画像のサイズ
    
    let zoomLevel: Double = 0.001 // タグをタップしたときにzoomLevelまでズームインする
    let zoomTime: Double = 1.3 // ズームする時間
    let zoomDelay: Double = 0.0 // 遅延時間
    let zoomOutDelay: Double = 0.1 // 遷移後からズームアウト開始までの時間
    
    let tagNewSize: Double = 100 // 新しいタグ画像のサイズ
    let kmPerDeg: Double = 111 // 111km/度
    let meter: Double = 1000 // kmからmに換算する
    let dia: Int = 2 // 直径
    let warnNewSize: Double = 0.7 // 新しい警告タグの画像のサイズ
    
    let circleLine: CGFloat = 10 // 災害円の円周の太さ
    
    let info: String = "info" // 種別(情報)
    let warn: String = "warn" // 種別(警告)
    
    let fill: CGFloat = 0.6   // 円内部の透明度
    let stroke: CGFloat = 0.9 // 円周の透明度
    
    
    
    
    //MARK:ライフサイクル
    // はじめにだけ呼ばれる
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.title = "map"
        
        mapView = MKMapView(frame: self.view.frame)
        mapView.center = self.view.center
        
        // 現在地の取得を開始
        if CLLocationManager.locationServicesEnabled() {
            locationManager = CLLocationManager()
            locationManager.delegate = self
            locationManager.startUpdatingLocation() // 位置情報の更新を開始
        }
        
        locationManager.requestAlwaysAuthorization()
        
        setWarningView()
        setWarningMessage()
        
        //TODO:UIViewで3/4画面くらいで作る
        //self.alert() //毎回呼ばれる・・・
        
        // annotationBoxへの代入処理を関数定義してその関数をここで呼び出す
        storeData()
        
        var labelImg: UIImage!
        for i in 0 ..< annotationBox.count {
            
            labelImg = makeLabel(annotationBox[i]) // UILabelをUIImageに変換する
            setPinImage(labelImg, annBox: annotationBox[i]) // ピン画像を設定する
        }
        
        
        // 災害円
        makeCircle(annotationBox[2], circle: &circle[2], radius: &circleRadius[2])
        makeCircle(annotationBox[3], circle: &circle[3], radius: &circleRadius[3])
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
        
        motionManager.magnetometerUpdateInterval = 0.1 // 加速度センサを取得する間隔
        
        
        // 画面遷移するためのボタンを生成
        let toCam_button = UIButton()
        toCam_button.frame = CGRect.init(x: zero, y: zero, width: butSize, height: butSize)
        let buttonImage: UIImage = UIImage(named: "icon_camera.jpg")!
        toCam_button.setImage(buttonImage, forState: .Normal)
        toCam_button.layer.position = CGPoint(x: camPos + butSize, y: self.view.bounds.height - camPos - butSize)
        self.view.addSubview(toCam_button)
        
        toCam_button.addTarget(self, action: #selector(ViewMap.clickAR(_:)), forControlEvents: .TouchUpInside)
        
        
        if pinViewData != nil {
            transFromDetailToMap(pinViewData) // ズームアウト
        }
    }
    
    
    /* 別の画面に遷移した直後(破棄) */
    override func viewDidDisappear(animated: Bool) {
        super.viewDidDisappear(animated)
        
        //pinView.removeAll() // ピン画像の破棄
        //annotationBox.removeAll() //ピンの破棄
        
    }
    
    
    //MARK:デリゲート-MKMapViewDelegate
    /* 地図を触った後 */
    func mapView(mapView: MKMapView, regionDidChangeAnimated animated: Bool) {
        scalingImage()
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
        retentionZoom = mapView.region // 詳細画面に遷移した時の地図画面の縮尺度を保持する
        
        // 1.3秒でズームインする
        UIView.animateWithDuration(zoomTime, delay: zoomDelay, options: .CurveEaseOut, animations: {
            
            let span = MKCoordinateSpanMake(self.zoomLevel, self.zoomLevel) //表示範囲
            let region = MKCoordinateRegionMake(view.annotation!.coordinate, span)  //中心座標と表示範囲をマップに登録する
            self.mapView.setRegion(region, animated:true)
            
            }, completion: nil)
        
        let detail = ViewDetail()
        
        runAfterDelay(zoomTime + 0.1) { // ズームしてから0.1秒後に遷移する
            self.navigationController?.pushViewController(detail, animated: true) // 遷移
        }
    }
    
    
    /* マップに描いた円をoverlayとして貼り付ける */
    func mapView(mapview: MKMapView, rendererForOverlay overlay: MKOverlay) -> MKOverlayRenderer {
        
        let circle = MKCircleRenderer(overlay:overlay)
        var color = UIColor()
        
        for i in 0 ..< annotationBox.count {
            // addOverLayされた円の緯度経度と、annotationBoxで登録されている緯度経度で同じものを探す
            if annotationBox[i].lat == circle.circle.coordinate.latitude && annotationBox[i].lon == circle.circle.coordinate.longitude {
                
                // 災害カラーを設定する
                switch annotationBox[i].riskType {
                    
                case 0: // 火災のとき：赤色
                    color = UIColor(CGColor: UIColor.redColor().CGColor)
                    
                case 1: // 浸水のとき：青色
                    color = UIColor(CGColor: UIColor.blueColor().CGColor)

                    
                case 2: // 落橋のとき：黄色
                    color = UIColor(CGColor: UIColor.yellowColor().CGColor)

                    
                case 3: // 土砂崩れのとき：茶色
                    color = UIColor(CGColor: UIColor.brownColor().CGColor)

                    
                default: // その他の災害のとき：緑色
                    color = UIColor(CGColor: UIColor.redColor().CGColor)

                }
                
                circle.lineWidth = circleLine // 円周の太さ
                circle.fillColor = color.colorWithAlphaComponent(fill)
                circle.strokeColor = color.colorWithAlphaComponent(stroke)
            }
        }
        

        return circle
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
    
    
    /* iPhone の位置情報が更新されるたびに、デリゲートが呼ばれる */
    func locationManager(manager: CLLocationManager, didUpdateToLocation newLocation: CLLocation, fromLocation oldLocation: CLLocation) {
        
        userLat = newLocation.coordinate.latitude   // 現在地の緯度
        userLon = newLocation.coordinate.longitude  // 現在地の経度
        
        // 位置情報が変わるたびに、タグを作り直している
        for i in 0 ..< annotationBox.count {
            
            annotationBox[i].distance = calcDistance(annotationBox[i]) // 距離を求める
            
            let labelImg: UIImage = makeLabel(annotationBox[i]) // UILabelをUIImageに変換する
            setPinImage(labelImg, annBox: annotationBox[i])
            if annotationBox[i].inforType == warn {
                intrusion(annotationBox[i], warnState: &warningState[i])
            }
        }
        
        scalingImage()
        
    }
    
    
    //MARK:プライベート関数
    
    /* ユーザの現在地と目的地間の距離を求める */
    func calcDistance(annBox: TagData) -> Int {
        
        let cLocation1 = CLLocationCoordinate2DMake(annBox.lat, annBox.lon)
        let point1 = MKMapPointForCoordinate(cLocation1)
        let cLocation2 = CLLocationCoordinate2DMake(userLat, userLon)
        let point2 = MKMapPointForCoordinate(cLocation2)
        
        return Int(MKMetersBetweenMapPoints(point1, point2))
    }
    
    
    /* 警告ビューの設定 */
    func setWarningView() {
        
        warningView = UIView(frame: CGRect.init(x: zero, y: zero, width: CGFloat(screenWidth), height: CGFloat(screenHeight)))
        view.addSubview(warningView) // viewに追加
    }
    
    /* 警告メッセージの設定 */
    func setWarningMessage() {
        
        warningMessage = UILabel(frame: CGRect.init(x: CGFloat(screenWidth * warnMx), y: CGFloat(screenHeight * warnMy), width: CGFloat(screenWidth * warnMw), height: CGFloat(screenHeight * warnMh))) //ラベルサイズ
        warningMessage.textColor = UIColor.blackColor() // 文字色(黒)
        warningMessage.backgroundColor = UIColor.whiteColor() // 背景色(白)
        warningMessage.textAlignment = NSTextAlignment.Center // 中央揃え
        warningMessage.font = UIFont.systemFontOfSize(warnMfont) // 初期文字サイズ
        warningMessage.numberOfLines = warnMline // ラベル内の行数
        warningMessage.layer.borderColor = UIColor.blackColor().CGColor // 枠線の色(黒)
        warningMessage.layer.borderWidth = warnMborder // 枠線の太さ
        warningMessage.layer.cornerRadius = warnMcorner // 枠線を角丸にする
    }
    

    
    
    /* データを格納する */
    func storeData() {
        
        let file_name = "sample3.json"
        var json: JSON!
        
        if let dir: NSString = NSSearchPathForDirectoriesInDomains(NSSearchPathDirectory.DocumentDirectory, NSSearchPathDomainMask.AllDomainsMask, true).first {
            
            let path_file_name = dir.stringByAppendingPathComponent(file_name)
            let alert = UIAlertController(title: "ERROR!!", message: "JSONファイルが見つかりませんでした。アプリを終了します。", preferredStyle: UIAlertControllerStyle.Alert)
            alert.addAction(UIAlertAction(title: "OK", style: UIAlertActionStyle.Default) { action -> Void in exit(0) })
            
            guard NSData(contentsOfFile: path_file_name) != nil else {
                presentViewController(alert, animated: true, completion: nil) // jsonファイルが見つからない時に、アラートを出してアプリを終了させる。
                return
            }
            
            let jsonData = NSData(contentsOfFile: path_file_name)!
            json = JSON(data:jsonData)
            
        }
        
        for i in 0 ..< json["features"].count {
            
            annotationBox.append(TagData())
            circle.append(MKCircle())
            warningState.append(2)
            circleRadius.append(0.0)
            
            
            /* 共通の内容 */
            annotationBox[i].pinNum = i //ピン番号
            annotationBox[i].id = json["features"][i]["properties"]["id"].string // id
            annotationBox[i].name = json["features"][i]["properties"]["Name"].string // タグの名前(施設名？)
            annotationBox[i].inforType = json["features"][i]["properties"]["infor_type"].string // タグの種類
            annotationBox[i].icon = json["features"][i]["properties"]["icon"].string // タグ画像
            annotationBox[i].descript = json["features"][i]["properties"]["description"].string // 内容の解説文
            annotationBox[i].lon = json["features"][i]["geometry"]["coordinates"][0].double // 経度
            annotationBox[i].lat = json["features"][i]["geometry"]["coordinates"][1].double // 緯度
            annotationBox[i].coordinate = CLLocationCoordinate2DMake(annotationBox[i].lat, annotationBox[i].lon) //ピンの緯度経度の設定
            annotationBox[i].distance = calcDistance(annotationBox[i]) // 距離
            
            /* 情報の独自タグ */
            if annotationBox[i].inforType == info {
                
                annotationBox[i].picType = json["features"][i]["properties"]["pic_type"].string // 写真か動画か
                if annotationBox[i].picType == "photo" {
                    annotationBox[i].photo = json["features"][i]["properties"]["photo"].string // 写真のURL
                    
                } else if annotationBox[i].picType == "movie" {
                    annotationBox[i].movie = json["features"][i]["properties"]["movie"].string // 動画のURL
                }
                
                
            /* 警告の独自タグ */
            } else if annotationBox[i].inforType == warn {
                
                annotationBox[i].range = json["features"][i]["properties"]["range"].int // 災害範囲
                annotationBox[i].start = json["features"][i]["properties"]["start"].string // 災害開始時刻
                annotationBox[i].stop = json["features"][i]["properties"]["stop"].string // 災害終了時刻
                annotationBox[i].message1 = json["features"][i]["properties"]["message1"].string // 警告範囲に近づいた時のメッセージ
                annotationBox[i].message2 = json["features"][i]["properties"]["message2"].string // 警告範囲に侵入した時のメッセージ
                annotationBox[i].riskType = json["features"][i]["properties"]["risk_type"].int // 災害の種類
                
                
            } else {
                print("infor_typeの設定を間違えています") /****後でこのときの対策を考える****/
            }
            
        }
    }
    
    
    /* delay秒後に行う処理 */
    func runAfterDelay(delay: NSTimeInterval, block: dispatch_block_t) {
        let time = dispatch_time(DISPATCH_TIME_NOW, Int64(delay*Double(NSEC_PER_SEC)))
        dispatch_after(time, dispatch_get_main_queue(), block)
    }
    
    
    /* 画像をリサイズする */
    func resizeImage(image: UIImage, newHeight: CGFloat) -> UIImage {
        
        let scale = newHeight / image.size.height // 縮尺度を決める
        let newWidth = image.size.width * scale // 新しい画像の幅
        UIGraphicsBeginImageContext(CGSize.init(width: newWidth, height: newHeight)) // 指定された画像の大きさのコンテキストを用意
        image.drawInRect(CGRect.init(x: zero, y: zero, width: newWidth, height: newHeight)) // コンテキストに画像を描画する
        let newImage = UIGraphicsGetImageFromCurrentImageContext() // コンテキストからUIImageを作る
        UIGraphicsEndImageContext() // コンテキストを閉じる
        
        return newImage
    }
    
    
    /* 警告モード(災害範囲に侵入したしていない) */
    func intrusion(annBox: TagData, inout warnState: Int) {
        let tmpLabel = warningMessage
        
        // 災害範囲内に侵入した時
        if annBox.distance - annBox.range <= 0 {
            
            if warnState != 0 {
                
                switch annBox.riskType {
                    
                case 0: // 火災のとき：赤色
                    warningView.backgroundColor = UIColor.redColor()
                    
                case 1: // 浸水のとき：青色
                    warningView.backgroundColor = UIColor.blueColor()
                    
                case 2: // 落橋のとき：黄色
                    warningView.backgroundColor = UIColor.yellowColor()
                    
                case 3: // 土砂崩れのとき：茶色
                    warningView.backgroundColor = UIColor.brownColor()
                    
                default: // その他の災害のとき：緑色
                    warningView.backgroundColor = UIColor.greenColor()
                }
                
                self.mapView.alpha = mapTransNormal // 地図を透明にする(下にあるwarningViewが透けて見えるようになる)
                
                if warningMessage != nil {
                    warningMessage.removeFromSuperview()
                }

                warningMessage = tmpLabel
                warningMessage.text = annBox.message2 // 警告メッセージ
                
                // 一定時間後に警告メッセージを消す
                runAfterDelay(5.0) {
                    self.warningMessage.removeFromSuperview()
                }
                
                view.addSubview(warningMessage)
                warnState = 0
                
            }
            
        // 災害範囲付近にいる時(範囲から500mとする)
        } else if annBox.distance - annBox.range <= 500 {
            
            if warnState != 1 {
                
                self.mapView.alpha = mapTransAbnormal
                if warningMessage != nil {
                    warningMessage.removeFromSuperview()
                }
                warningMessage = tmpLabel
                warningMessage.text = annBox.message1 // 警告メッセージ
                
                // 一定時間後に警告メッセージを消す
                runAfterDelay(5.0) {
                    self.warningMessage.removeFromSuperview()
                }
                
                view.addSubview(warningMessage)
                warnState = 1
            }
            
            // 安全圏にいる時
        } else {
            
            if warnState != 2 {
                self.mapView.alpha = mapTransAbnormal
                if warningMessage != nil {
                    warningMessage.removeFromSuperview()
                }
                warnState = 2
            }
        }
    }
    
    
    /* ラベルテキスト */
    func labelText(annBox: TagData) -> String {
        
        var text: String!
        
        // 情報タグ
        if annBox.inforType == info {
            text = annBox.name + "\n" + String(annBox.distance) + "m"
            
        // 警告タグ
        } else if annBox.inforType == warn {
            
            var distance = annBox.distance - annBox.range
            var riskName: String!
            
            // ユーザが災害範囲内に入ったら、災害までの距離を0mで表示する
            if distance <= 0 {
                distance = 0
            }
            
            switch annBox.riskType {
                
            case 0: riskName = "火災"
            case 1: riskName = "浸水"
            case 2: riskName = "落橋"
            case 3: riskName = "土砂崩れ"
            default: riskName = "その他の災害"
            }
            
            text = riskName + "\n" + String(distance) + "m" + "\n" + "範囲: " + String(annBox.range) + "m"
        }
        
        return text
    }
    
    
    /* ラベル画像を作る */
    func makeLabel(annBox: TagData) -> UIImage {
        
        var label: UILabel! // 情報タグの文字
        var labelImg: UIImage! // ラベル画像
        label = UILabel(frame: CGRect.init(x: zero, y: zero, width: airtagImage.size.width, height: airtagImage.size.height)) //ラベルサイズ
        label.text = labelText(annBox) // テキスト
        label.textColor = UIColor.blackColor() // 文字色
        label.textAlignment = NSTextAlignment.Center // 中央揃え
        label.layer.position = CGPoint.init(x: self.view.frame.width, y: self.view.frame.height)
        label.font = UIFont.systemFontOfSize(tagFont) // 初期文字サイズ
        label.adjustsFontSizeToFitWidth = true // 文字の多さによってフォントサイズを調節する
        label.numberOfLines = tagLine // ラベル内の行数
        
        labelImg = label.getImage() as UIImage // UILabelをUIImageに変換する
        
        return labelImg
    }
    
    
    
    /* ピン画像を設定する */
    func setPinImage(img: UIImage, annBox: TagData) {
        
        if annBox.inforType == info {
            
            let tagRect = CGRect.init(x: zero, y: zero, width: airtagImage.size.width, height: airtagImage.size.height) // タグ画像のサイズと位置
            UIGraphicsBeginImageContext(airtagImage.size)
            airtagImage.drawInRect(tagRect)
            
            let labelRect = CGRect.init(x: tagxy, y: tagxy, width: img.size.width - tagWid, height: img.size.height - tagHei) // ラベル画像のサイズと位置
            
            img.drawInRect(labelRect)
            
            // Context に描画された画像を新しく設定
            let newImage = UIGraphicsGetImageFromCurrentImageContext()
            
            // Context 終了
            UIGraphicsEndImageContext()
            
            annBox.pinImage = resizeImage(newImage, newHeight: tagSize) // ピン画像の設定
            annBox.expandImage = resizeImage(newImage, newHeight: tagSize) // ピン画像の設定
            
        } else if annBox.inforType == warn {
            
            annBox.pinImage = img
            annBox.expandImage = img
            
        }
        
        pinView.append(MKAnnotationView())
        self.mapView.addAnnotation(annBox) // ピンの追加
    }
    
    
    /* 拡大縮小や距離の更新による新しいピン画像の設定 */
    func scalingImage() {
        
        scaleZoom = mapView.region
        var newimage: UIImage!
        
        for i in 0 ..< annotationBox.count {
            
            var newsize: CGFloat!
            
            if annotationBox[i].inforType == info {
                newsize = CGFloat(screenWidth * (tagNewSize / (scaleZoom.span.latitudeDelta * kmPerDeg * meter)))
                
            } else if annotationBox[i].inforType == warn {
                let han: Double = Double(annotationBox[i].range * dia)
                newsize = CGFloat(screenWidth * ((han * warnNewSize) / (scaleZoom.span.latitudeDelta * kmPerDeg * meter)))
            }
            
            newimage = self.resizeImage(annotationBox[i].expandImage, newHeight: newsize) // 新しい画像
            
            
            /*** annotationBox[i].pinImage = newimage のみで入れ替え可能だが、動作が遅い ***/
            
            let tmpAnnotation: TagData = annotationBox[i] // 一旦他の場所にデータを保持させる
            self.mapView.removeAnnotation(self.annotationBox[i]) // 古い災害ピンを削除
            annotationBox[i] = tmpAnnotation
            annotationBox[i].pinImage = newimage
            
            self.mapView.addAnnotation(self.annotationBox[i])
        }
    }
    
    
    /* 災害円を描く(ここでのマジックナンバーはjsonのstartとstopで発火させるようにできるようになったら変える) */
    func makeCircle(annBox: TagData, inout circle: MKCircle, inout radius: CLLocationDistance) {
        
        radius = CLLocationDistance(annBox.range) // 円の半径
        
        // 円を描画する
        circle = MKCircle(centerCoordinate: annBox.coordinate, radius: radius)
        
        self.mapView.addOverlay(circle)
        
        // 時間経過による範囲の広がり(めも：startとstopを使った実装を後でする)
        for time in 5...100 {  // TODO: マジックナンバー

            runAfterDelay(Double(time)) {

                //時間に連れて円とボックスが大きくなる//
                radius += 10 // 災害範囲の半径の更新 // TODO: マジックナンバー
                annBox.range = Int(radius)
                self.mapView.removeOverlay(circle)
                circle = MKCircle(centerCoordinate: annBox.coordinate, radius: radius)
                self.mapView.addOverlay(circle, level: MKOverlayLevel.AboveRoads)
            }
        }
    }


    /* 詳細画面から地図画面に遷移したときの表示の設定 */
    func transFromDetailToMap(view: MKAnnotationView) {
        
        runAfterDelay(zoomOutDelay) {
            
            // zoomTime秒でズームアウトする
            UIView.animateWithDuration(self.zoomTime, delay: self.zoomDelay, options: .CurveEaseOut, animations: {
                
                let span = MKCoordinateSpanMake(self.retentionZoom.span.latitudeDelta, self.retentionZoom.span.latitudeDelta) //表示範囲
                let region = MKCoordinateRegionMake(view.annotation!.coordinate, span) //中心座標と表示範囲をマップに登録する
                self.mapView.setRegion(region, animated:true)
                
                }, completion: nil)
        }
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


    /* TODO:UIViewで3/4画面くらいで作る */
    /* アプリを開いた時に出る注意書き */
    func alert() {
        let alert = UIAlertController(title: "お願い", message: "操作する場合は、立ち止まって安全を確認してから操作してください", preferredStyle: UIAlertControllerStyle.Alert)
        alert.addAction(UIAlertAction(title: "OK", style: UIAlertActionStyle.Default) { action -> Void in print("OK!!!!") })
        presentViewController(alert, animated: true, completion: nil)
    }
    
    
}
