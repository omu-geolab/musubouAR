//
//  ViewMap.swift
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


class ViewMap: UIViewController, CLLocationManagerDelegate, MKMapViewDelegate {
    
    @IBOutlet weak var mapView: MKMapView!
    
    var center: CLLocationCoordinate2D! // 中心
    
    let airtagImage = UIImage(named: "icon_airtag.png")! // 情報タグの画像
    
    let motionManager = CMMotionManager() // 加速度センサ
    
    var locationManager: CLLocationManager! // 現在地の取得
    
    var pinView = [MKAnnotationView]()
    
    var pinViewData: MKAnnotationView! // タップされたタグの情報を保持
    var retentionZoom: MKCoordinateRegion! // タグをタップしたときの表示範囲を保持
    var scaleZoom: MKCoordinateRegion! // タグをタップしたときの表示範囲を保持
    
    var warningView: UIView! // 災害範囲内に侵入した時に画面の色を変える
    var warningMessage: UILabel! // 災害範囲内・付近にいるときに表示するメッセージ
    var warningState = [Int]() // 0: 侵入、　1: 付近、　2：安全
    
    var circle = [MKCircle]() // 災害範囲の円
    var circleRadius = [CLLocationDistance]() // 災害範囲の円の半径
    
    
    // 定数
    let kButSize: CGFloat = 100 // ボタンのサイズ(wid・hei)
    let kCamPos: CGFloat = 5 // カメラボタンの位置
    
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
    
    let kZoomLevel = 0.001 // タグをタップしたときにzoomLevelまでズームインする
    let kZoomTime = 1.3 // ズームする時間
    let kZoomDelay = 0.0 // 遅延時間
    let kZoomOutDelay = 0.1 // 遷移後からズームアウト開始までの時間
    
    let kTagNewSize = 100.0 // 新しいタグ画像のサイズ
    let kMPerDeg = 111.0 // 111km/度
    let kMeter = 1000.0 // kmからmに換算する
    let kDia = 2 // 直径
    let kWarnNewSize = 0.7 // 新しい警告タグの画像のサイズ
    
    let kCircleLine: CGFloat = 10 // 災害円の円周の太さ
    
    let kPhoto = "photo" // 写真
    let kMovie = "movie" // 動画
    
    let kFill: CGFloat = 0.6   // 円内部の透明度
    let kStroke: CGFloat = 0.9 // 円周の透明度
    
    
    
    //MARK:ライフサイクル
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.title = "map"
        
        /* 警告ビューの設定 */
        warningView = UIView(frame: CGRect.init(x: kZero, y: kZero, width: CGFloat(screenWidth), height: CGFloat(screenHeight)))
        view.addSubview(warningView) // viewに追加
        
        /* マップビューの設定 */
        mapView = MKMapView(frame: self.view.frame)
        mapView.center = self.view.center
        view.addSubview(mapView)
        
        // 現在地の取得を開始
        if CLLocationManager.locationServicesEnabled() {
            locationManager = CLLocationManager()
            locationManager.delegate = self
            locationManager.startUpdatingLocation() // 位置情報の更新を開始
        }
        
        locationManager.requestAlwaysAuthorization()
        
        
        /* 警告メッセージの設定 */
        warningMessage = UILabel(frame: CGRect.init(x: CGFloat(screenWidth * kWarnX), y: CGFloat(screenHeight * kWarnY), width: CGFloat(screenWidth * kWarnW), height: CGFloat(screenHeight * kWarnH))) //ラベルサイズ
        warningMessage.textColor = UIColor.blackColor() // 文字色(黒)
        warningMessage.backgroundColor = UIColor.whiteColor() // 背景色(白)
        warningMessage.textAlignment = NSTextAlignment.Center // 中央揃え
        warningMessage.font = UIFont.systemFontOfSize(kWarnFont) // 初期文字サイズ
        warningMessage.numberOfLines = kWarnLine // ラベル内の行数
        warningMessage.layer.borderColor = UIColor.blackColor().CGColor // 枠線の色(黒)
        warningMessage.layer.borderWidth = kWarnBorder // 枠線の太さ
        warningMessage.layer.cornerRadius = kWarnCorner // 枠線を角丸にする
        
        termsOfService(self.view) //毎回呼ばれる・・・
        
        
        storeData()
        
        
        var labelImg: UIImage!
        for i in 0 ..< annotationBox.count {
            
            labelImg = makeLabel(annotationBox[i].pinNum) // UILabelをUIImageに変換する
            
            annotationBox[i].pinImage = getPinImage(labelImg, inforType: annotationBox[i].inforType)
            annotationBox[i].expandImage = getPinImage(labelImg, inforType: annotationBox[i].inforType)

            pinView.append(MKAnnotationView())
            self.mapView.addAnnotation(annotationBox[i]) // ピンの追加

        }
        
        // 災害円
        makeCircle(annotationBox[2], circle: &circle[2], radius: &circleRadius[2])
        makeCircle(annotationBox[3], circle: &circle[3], radius: &circleRadius[3])
    }
    
    
    /* 画面が表示される直前 */
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
        
        self.navigationController?.setNavigationBarHidden(true, animated: true)
        
        //TODO:viewWillAppear()で生成されるべきクラスなどを見直す

        // Delegateを設定
        mapView.delegate = self
        
        mapView.delegate = self
        mapView.mapType = MKMapType.Standard  // 地図の種類
        mapView.showsUserLocation = true      // 現在地の表示を許可する
        
        locationManager.delegate = self
        locationManager.desiredAccuracy = kCLLocationAccuracyBest
        locationManager.startUpdatingLocation()
        locationManager.startUpdatingHeading()
        
        motionManager.magnetometerUpdateInterval = 0.1 // 加速度センサを取得する間隔
        
        
        // 画面遷移するためのボタンを生成
        let toCam_button = UIButton()
        toCam_button.frame = CGRect.init(x: kZero, y: kZero, width: kButSize, height: kButSize)
        let buttonImage: UIImage = UIImage(named: "icon_camera.png")!
        toCam_button.setImage(buttonImage, forState: .Normal)
        toCam_button.layer.position = CGPoint(x: kCamPos + kButSize, y: self.view.bounds.height - kCamPos - kButSize)
        mapView.addSubview(toCam_button)
        
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
                
                //TODO:ここのif文内の処理が謎。pin.pinNumだけを配列に入れて利用するところでannotationBox[]から取り出せばいいのでは？
                // pinViewを配列から変数に変更したら、表示は問題なくできたが、タップして遷移して地図画面に戻る時にアプリが落ちてしまう問題点がある
                
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
        
        // zoomTime秒でズームインする
        UIView.animateWithDuration(kZoomTime, delay: kZoomDelay, options: .CurveEaseOut, animations: {
            
            let span = MKCoordinateSpanMake(self.kZoomLevel, self.kZoomLevel) //表示範囲
            let region = MKCoordinateRegionMake(view.annotation!.coordinate, span)  //中心座標と表示範囲をマップに登録する
            self.mapView.setRegion(region, animated:true)
            
            }, completion: nil)
        
        let detail = ViewDetail()
        
        runAfterDelay(kZoomTime + 0.1) { // ズームしてから0.1秒後に遷移する
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
                    color = UIColor(CGColor: UIColor.greenColor().CGColor)
                }
                
                circle.lineWidth = kCircleLine // 円周の太さ
                circle.fillColor = color.colorWithAlphaComponent(kFill)
                circle.strokeColor = color.colorWithAlphaComponent(kStroke)
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
        
        var labelImg: UIImage!
        
        // 位置情報が変わるたびに、タグを作り直している
        for i in 0 ..< annotationBox.count {
            
            annotationBox[i].distance = calcDistance(annotationBox[i].lat, lon: annotationBox[i].lon, uLat: newLocation.coordinate.latitude, uLon: newLocation.coordinate.longitude) // 距離を求める
            
            labelImg = makeLabel(annotationBox[i].pinNum) // UILabelをUIImageに変換する
            
            annotationBox[i].pinImage = getPinImage(labelImg, inforType: annotationBox[i].inforType)
            annotationBox[i].expandImage = getPinImage(labelImg, inforType: annotationBox[i].inforType)
            
            pinView.append(MKAnnotationView())
            self.mapView.addAnnotation(annotationBox[i]) // ピンの追加
            
            
            if annotationBox[i].inforType == kWarn {
                intrusion(annotationBox[i].riskType, distance: annotationBox[i].distance, range: annotationBox[i].range, warnState: &warningState[i], message1: annotationBox[i].message1, message2: annotationBox[i].message2)

            }
        }
        
        scalingImage()
    }
    
    
    //MARK:プライベート関数

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
            //TODO:coordinateメンバいらんので削除する。使用する箇所でCLLocationCoordinate2DMake(annotationBox[i].lat, annotationBox[i].lon)をすればいい。
            // ピンを立てる上で必要なコードなので削除できないです
            annotationBox[i].coordinate = CLLocationCoordinate2DMake(annotationBox[i].lat, annotationBox[i].lon) //ピンの緯度経度の設定

            //質問:ここでcalcDistance()を呼ばないとどうなる？
            // ロケーションのデリゲートで距離が算出され、ここで消しても影響がないので消します
            
            /* 情報の独自タグ */
            if annotationBox[i].inforType == kInfo {
                // 詳細画面に遷移した際に必要な情報だと思ったので保持しています
                annotationBox[i].picType = json["features"][i]["properties"]["pic_type"].string // 写真か動画か

                if annotationBox[i].picType == kPhoto {
                    annotationBox[i].photo = json["features"][i]["properties"]["photo"].string // 写真のURL
                } else if annotationBox[i].picType == kMovie {
                    annotationBox[i].movie = json["features"][i]["properties"]["movie"].string // 動画のURL
                }
                
                
            /* 警告の独自タグ */
            } else if annotationBox[i].inforType == kWarn {
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
    
    
    /* 警告モード(災害範囲に侵入したしていない) */
    func intrusion(riskType: Int, distance: Int, range: Int, inout warnState: Int, message1: String, message2: String) {
        
        // 災害範囲内に侵入した時
        if distance - range <= 0 {
            
            if warnState != 0 {
                
                switch riskType {
                    
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
                
                self.mapView.alpha = kMapAbnormal // 地図を透明にする(下にあるwarningViewが透けて見えるようになる)
                
                warningMessage.text = message2 // 警告メッセージ
                
                // 一定時間後に警告メッセージを消す
                runAfterDelay(10.0) {
                    self.warningMessage.removeFromSuperview()
                }
                
                mapView.addSubview(warningMessage)
                warnState = 0
                
            }
            
        // 災害範囲付近にいる時(範囲から500mとする)
        } else if distance - range > 0 && distance - range <= 500 {
            
            if warnState != 1 {
                
                self.mapView.alpha = kMapNormal
                warningMessage.text = message1 // 警告メッセージ
                
                // 一定時間後に警告メッセージを消す
                runAfterDelay(10.0) {
                    self.warningMessage.removeFromSuperview()
                }
                
                mapView.addSubview(warningMessage)
                warnState = 1
            }
            
            // 安全圏にいる時
        } else {
            
            if warnState != 2 {
                self.mapView.alpha = kMapNormal
                warningMessage.removeFromSuperview()
                warnState = 2
            }
        }
    }


    
    
    
    /* 拡大縮小や距離の更新による新しいピン画像の設定 */
    func scalingImage() {
        
        scaleZoom = mapView.region
        var newimage: UIImage!
        var newsize: CGFloat!
        
        for i in 0 ..< annotationBox.count {
            
            if annotationBox[i].inforType == kInfo {
                
                // scaleZoom は表示範囲（縮尺度）で、SCALEZOOM = 1 で画面の縦横が1度ということになる
                // 1度 = 約111km
                //
                //                     タグのサイズ (m)
                //  画面の横幅 ×  ----------------------------
                //                 縮尺度 × 111(km) × 1000    ← 画面が表示されている実際の範囲を m で計算している
                //
                // これで、画面の何%で表示すればいいかわかるので、それにscreenWidthをかけると、画面に表示する画像のサイズが決定する
                
                newsize = CGFloat(screenWidth * (kTagNewSize / (scaleZoom.span.latitudeDelta * kMPerDeg * kMeter)))
                
            } else if annotationBox[i].inforType == kWarn {
                
                // 情報タグと同じ計算方法
                // タグのサイズは、災害円の直径
                
                let han: Double = Double(annotationBox[i].range * kDia)
                newsize = CGFloat(screenWidth * ((han * kWarnNewSize) / (scaleZoom.span.latitudeDelta * kMPerDeg * kMeter)))
            }
            
            newimage = getResizeImage(annotationBox[i].expandImage, newHeight: newsize) // 新しい画像
            
            
            
            /*** annotationBox[i].pinImage = newimage のみで入れ替え可能だが、動作が遅い ***/
            
            let tmpAnnotation: TagData = annotationBox[i] // 一旦他の場所にデータを保持させる
            mapView.removeAnnotation(annotationBox[i]) // 古い災害ピンを削除
            annotationBox[i] = tmpAnnotation
            annotationBox[i].pinImage = newimage
            
            mapView.addAnnotation(annotationBox[i])
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
        
        runAfterDelay(kZoomOutDelay) {
            
            // zoomTime秒でズームアウトする
            UIView.animateWithDuration(self.kZoomTime, delay: self.kZoomDelay, options: .CurveEaseOut, animations: {
                
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


    /* (利用規約)OKボタンをクリックした時 */
    internal func onClickOkButton(sender: UIButton) {
        clearView.removeFromSuperview() // clearviewを消すことでアラートが消える
    }
    
    /* (利用規約)キャンセルボタンをクリックした時 */
    internal func onClickCancelButton(sender: UIButton) {
        exit(0) // アプリを終了する
    }
    
    
}
