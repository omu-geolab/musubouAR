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
    
    var infoPinView = [MKAnnotationView]()
    var warnPinView = [MKAnnotationView]()
    
    
    var pinViewData: MKAnnotationView! // タップされたタグの情報を保持
    var retentionZoom: MKCoordinateRegion! // タグをタップしたときの表示範囲を保持
    var scaleZoom: MKCoordinateRegion! // タグをタップしたときの表示範囲を保持
    
    var warningView: UIView! // 災害範囲内に侵入した時に画面の色を変える

    var circle = [MKCircle]() // 災害範囲の円
    
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
    
    let kZoomLevel = 0.001 // タグをタップしたときにzoomLevelまでズームインする
    let kZoomTime = 1.3 // ズームする時間
    let kZoomDelay = 0.0 // 遅延時間
    let kZoomOutDelay = 0.1 // 遷移後からズームアウト開始までの時間
    
    let kTagNewSize = 100.0 // 新しいタグ画像のサイズ
    let kMPerDeg = 111.0 // 111km/度
    let kMeter = 1000.0 // kmからmに換算する
    let kDia = 2.0 // 直径
    let kWarnNewSize = 0.7 // 新しい警告タグの画像のサイズ
    
    let kCircleLine: CGFloat = 10 // 災害円の円周の太さ
    
    let kPhoto = "photo" // 写真
    let kMovie = "movie" // 動画
    
    let kFill: CGFloat = 0.6   // 円内部の透明度
    let kStroke: CGFloat = 0.9 // 円周の透明度
    
    let calendar = NSCalendar(identifier: NSCalendarIdentifierGregorian)!
    
    
    
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
        
        // 時間管理してくれる
        termsOfService(view) //毎回呼ばれる・・・
        
        storeData()
        update()
        
        _ = NSTimer.scheduledTimerWithTimeInterval(10, target: self, selector: #selector(ViewMap.update), userInfo: nil, repeats: true)
        
        for i in 0 ..< infoBox.count {
            infoPinView.append(MKAnnotationView())
            updatePin(infoBox[i])
        }
        
        for i in 0 ..< warnBox.count {
            warnPinView.append(MKAnnotationView())
            if warnBox[i].inforType == kWarn {
                updatePin(warnBox[i])
            }
        }
    }
    
    
    /* 画面が表示される直前 */
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
        
        self.navigationController?.setNavigationBarHidden(true, animated: true)
        
        //TODO:viewWillAppear()で生成されるべきクラスなどを見直す
        
        // Delegateを設定
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
        toCam_button.layer.position = CGPoint(x: kButPos + kButSize, y: self.view.bounds.height - kButPos - kButSize)
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
                
                if pin.inforType == kInfo {
                    return getPinView(annotation, pinView: infoPinView[pN], pin: pin)
                    
                } else if pin.inforType == kWarn {
                    return getPinView(annotation, pinView: warnPinView[pN], pin: pin)
                    
                }
                return infoPinView[0]
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
        
        for i in 0 ..< warnBox.count {
            // addOverLayされた円の緯度経度と、annotationBoxで登録されている緯度経度で同じものを探す
            if warnBox[i].inforType == kWarn {
                if warnBox[i].lat == circle.circle.coordinate.latitude && warnBox[i].lon == circle.circle.coordinate.longitude {
                    
                    // 災害カラーを設定する
                    switch warnBox[i].riskType {
                        
                    case 0: // 火災のとき：赤色
                        color = UIColor(red: 0.545, green: 0.020, blue: 0.220, alpha: kMapNormal)
                        
                    case 1: // 浸水のとき：青色
                        color = UIColor(red: 0.000, green: 0.400, blue: 1.000, alpha: kMapNormal)
                        
                    case 2: // 落橋のとき：黄色
                        color = UIColor(red: 1.000, green: 0.945, blue: 0.024, alpha: kMapNormal)
                        
                    case 3: // 土砂崩れのとき：茶色
                        color = UIColor(red: 0.800, green: 0.400, blue: 0.000, alpha: kMapNormal)
                        
                    default: // その他の災害のとき：緑色
                        color = UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: kMapNormal)
                        break
                    }

                    circle.lineWidth = kCircleLine // 円周の太さ
                    circle.fillColor = color.colorWithAlphaComponent(kFill)
                    circle.strokeColor = color.colorWithAlphaComponent(kStroke)
                }
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
        
        var min = 1001
        var idx = -1
        
        // 位置情報が変わるたびに、タグを作り直している
        for i in 0 ..< infoBox.count {
            infoBox[i].distance = calcDistance(infoBox[i].lat, lon: infoBox[i].lon, uLat: newLocation.coordinate.latitude, uLon: newLocation.coordinate.longitude) // 距離を求める
            updatePin(infoBox[i])
        }
        
        for i in 0 ..< warnBox.count {
            
            if warnBox[i].inforType == kWarn {
                
                warnBox[i].distance = calcDistance(warnBox[i].lat, lon: warnBox[i].lon, uLat: newLocation.coordinate.latitude, uLon: newLocation.coordinate.longitude) // 距離を求める
                updatePin(warnBox[i])
                
                if min > warnBox[i].distance {
                    min = warnBox[i].distance
                    idx = i
                }
            }
        }
        
        if idx != -1 {
            intrusion(warnBox[idx].riskType, distance: warnBox[idx].distance, range: Int(circleRadius[idx]), warnState: &warnState, message1: warnBox[idx].message1, message2: warnBox[idx].message2)
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
        
        var iN = 0 // 情報タグの番号
        var wN = 0 // 警告タグの番号
        
        for i in 0 ..< json["features"].count {
            
            // 情報タグ
            if json["features"][i]["properties"]["infor_type"].string == kInfo {
                infoBox.append(TagData())
                infoBox[iN].pinNum = iN //ピン番号
                infoBox[iN].id = json["features"][i]["properties"]["id"].string // id
                infoBox[iN].name = json["features"][i]["properties"]["Name"].string // タグの名前(施設名？)
                infoBox[iN].inforType = json["features"][i]["properties"]["infor_type"].string // タグの種類
                infoBox[iN].icon = json["features"][i]["properties"]["icon"].string // タグ画像
                infoBox[iN].descript = json["features"][i]["properties"]["description"].string // 内容の解説文
                infoBox[iN].lon = json["features"][i]["geometry"]["coordinates"][0].double // 経度
                infoBox[iN].lat = json["features"][i]["geometry"]["coordinates"][1].double // 緯度
                infoBox[iN].coordinate = CLLocationCoordinate2DMake(infoBox[iN].lat, infoBox[iN].lon) //ピンの緯度経度の設定
                
                infoBox[iN].picType = json["features"][i]["properties"]["pic_type"].string // 写真か動画か
                
                if infoBox[iN].picType == kPhoto {
                    infoBox[iN].photo = json["features"][i]["properties"]["photo"].string // 写真のURL
                } else if infoBox[iN].picType == kMovie {
                    infoBox[iN].movie = json["features"][i]["properties"]["movie"].string // 動画のURL
                }
                
                iN = iN + 1
                
                // 警告タグ
            } else if json["features"][i]["properties"]["infor_type"].string == kWarn {
                
                circle.append(MKCircle())
                circleRadius.append(0.0)
                
                warnBox.append(TagData())
                warnBox[wN].pinNum = wN //ピン番号
                warnBox[wN].id = json["features"][i]["properties"]["id"].string // id
                warnBox[wN].name = json["features"][i]["properties"]["Name"].string // タグの名前(施設名？)
                warnBox[wN].inforType = json["features"][i]["properties"]["infor_type"].string // タグの種類
                warnBox[wN].icon = json["features"][i]["properties"]["icon"].string // タグ画像
                warnBox[wN].descript = json["features"][i]["properties"]["description"].string // 内容の解説文
                warnBox[wN].lon = json["features"][i]["geometry"]["coordinates"][0].double // 経度
                warnBox[wN].lat = json["features"][i]["geometry"]["coordinates"][1].double // 緯度
                warnBox[wN].coordinate = CLLocationCoordinate2DMake(warnBox[wN].lat, warnBox[wN].lon) //ピンの緯度経度の設定
                
                warnBox[wN].range = json["features"][i]["properties"]["range"].int // 災害範囲
                warnBox[wN].start = json["features"][i]["properties"]["start"].string // 災害開始時刻
                warnBox[wN].stop = json["features"][i]["properties"]["stop"].string // 災害終了時刻
                warnBox[wN].message1 = json["features"][i]["properties"]["message1"].string // 警告範囲に近づいた時のメッセージ
                warnBox[wN].message2 = json["features"][i]["properties"]["message2"].string // 警告範囲に侵入した時のメッセージ
                warnBox[wN].riskType = json["features"][i]["properties"]["risk_type"].int // 災害の種類
                
                wN = wN + 1
                
            } else {
                print("infor_typeの設定を間違えています") /****後でこのときの対策を考える****/
            }
        }
    }
    
    
    /* 警告モード(災害範囲に侵入したしていない) */
    func intrusion(riskType: Int, distance: Int, range: Int, inout warnState: String, message1: String, message2: String) {

        // 災害範囲内に侵入した時
        if distance - range <= 0 {
            
            if warnState != warningState.inst.rawValue {
                switch riskType {
                    
                case 0: // 火災のとき：赤色
                    warningView.backgroundColor = UIColor(red: 0.545, green: 0.020, blue: 0.220, alpha: kMapAbnormal)
                    
                case 1: // 浸水のとき：青色
                    warningView.backgroundColor = UIColor(red: 0.000, green: 0.400, blue: 1.000, alpha: kMapAbnormal)
                    
                case 2: // 落橋のとき：黄色
                    warningView.backgroundColor = UIColor(red: 1.000, green: 0.945, blue: 0.024, alpha: kMapAbnormal)
                    
                case 3: // 土砂崩れのとき：茶色
                    warningView.backgroundColor = UIColor(red: 0.800, green: 0.400, blue: 0.000, alpha: kMapAbnormal)
                    
                default: // その他の災害のとき：緑色
                    warningView.backgroundColor = UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: kMapAbnormal)
                    break
                }
                
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
    
    
    /* 拡大縮小や距離の更新による新しいピン画像の設定 */
    func scalingImage() {
        
        scaleZoom = mapView.region
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
            
            newsize = CGFloat(screenWidth * (kTagNewSize / (scaleZoom.span.latitudeDelta * kMPerDeg * kMeter)))
            changeImage(&infoBox[i], newsize: newsize)
        }
        
        for i in 0 ..< warnBox.count {
            
            if warnBox[i].inforType == kWarn {
                
                // 情報タグと同じ計算方法
                // タグのサイズは、災害円の直径
                
                let han: Double = circleRadius[i] * kDia
                newsize = CGFloat(screenWidth * ((han * kWarnNewSize) / (scaleZoom.span.latitudeDelta * kMPerDeg * kMeter)))
                changeImage(&warnBox[i], newsize: newsize)
            }
        }
    }
    
    /* ピン画像の入れ替え */
    func changeImage(inout tag: TagData, newsize: CGFloat) {
        
        let newimage = getResizeImage(tag.expandImage, newHeight: newsize) // 新しい画像
        let tmpAnnotation: TagData = tag // 一旦他の場所にデータを保持させる
        mapView.removeAnnotation(tag) // 古い災害ピンを削除
        tag = tmpAnnotation
        tag.pinImage = newimage
        
        mapView.addAnnotation(tag)
        
    }
    
    /* ピンの画像設定 */
    func getPinView(annotation: MKAnnotation, pinView: MKAnnotationView, pin: TagData) -> MKAnnotationView {
        
        pinView.annotation = annotation
        pinView.image = pin.pinImage // ピンの画像設定
        pinView.canShowCallout = false // ピンをタップ時の吹き出しを非表示
        
        return pinView
    }
    
    
    /* ピン情報を更新する */
    func updatePin(tag: TagData) {
        
        let labelImg = makeLabel(tag.pinNum, inforType: tag.inforType) // UILabelをUIImageに変換する
        tag.pinImage = getPinImage(labelImg, inforType: tag.inforType)
        tag.expandImage = getPinImage(labelImg, inforType: tag.inforType)
        
        self.mapView.addAnnotation(tag) // ピン情報の更新
    }
    
    
    /* 災害円を描く(ここでのマジックナンバーはjsonのstartとstopで発火させるようにできるようになったら変える) */
    func makeCircle(index: Int, inout circle: MKCircle, inout radius: CLLocationDistance, start: NSDate, stop: NSDate) {
        
        let Sn = NSDate().timeIntervalSinceDate(start) / 60 // 開始時刻(start)と現在時刻(now)の差
        let Ne = stop.timeIntervalSinceDate(NSDate()) / 60 // 現在時刻(now)と終了時刻(end)の差
        let Se = Sn + Ne // 開始時刻と終了時刻の差
        
        // アプリを開いたら災害範囲がすでに最大になっていたとき、最大の半径で円を描く
        if CLLocationDistance(Sn) > CLLocationDistance(warnBox[index].range) {
            radius = CLLocationDistance(warnBox[index].range)
            
        } else { // 経過時間分だけの半径の円を描く
            radius = CLLocationDistance(Sn)
        }
        
        circle = MKCircle(centerCoordinate: warnBox[index].coordinate, radius: radius)
        self.mapView.addOverlay(circle, level: MKOverlayLevel.AboveRoads)
        
        // 1分で半径1mずつ広がっていく
        for time in Int(Sn)...Int(Se) {
            
            runAfterDelay(Double(time)) {
                
                if Int(radius) < warnBox[index].range {
                    radius = CLLocationDistance(time) // 災害範囲の半径の更新
                    self.mapView.removeOverlay(circle)
                    circle = MKCircle(centerCoordinate: warnBox[index].coordinate, radius: radius)
                    self.mapView.addOverlay(circle, level: MKOverlayLevel.AboveRoads)
                }
            }
        }
        
        // stopの時刻を過ぎたから、災害の円や文字を消す
        runAfterDelay(Double(Ne)) {
            self.mapView.removeOverlay(circle) // 円を消す
            warnBox[index].inforType = "pastWarn" // inforTypeを"warn"から"passWarn"に変更
            self.warnPinView[index].removeFromSuperview() // 災害のピン情報を削除
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
    
    /* String型で書かれた時間をNSData型に変換する */
    func dateFromString(string: String, format: String) -> NSDate {
        let formatter: NSDateFormatter = NSDateFormatter()
        formatter.dateFormat = format
        return formatter.dateFromString(string)!
    }
    
    /* 災害が発生したかを判断 */
    func update() {
        
        let nowTime = NSDate() // 現在時刻
        
        for i in 0 ..< warnBox.count {
            
            let start = dateFromString(warnBox[i].start, format: "yyyy/MM/dd HH:mm") // 災害開始時間
            let stop = dateFromString(warnBox[i].stop, format: "yyyy/MM/dd HH:mm") // 災害終了時間
            
            // 過去の災害
            if start.compare(nowTime) == NSComparisonResult.OrderedDescending {
                warnBox[i].inforType = kDidWarn
                
                // 現在災害発生中
            } else if stop.compare(nowTime) == NSComparisonResult.OrderedDescending && nowTime.compare(start) == NSComparisonResult.OrderedDescending {
                if circleRadius[i] == 0 {
                    makeCircle(i, circle: &circle[i], radius: &circleRadius[i], start: start, stop: stop)
                }
                
                // 今後発生する災害
            } else {
                warnBox[i].inforType = kWillWarn
            }
        }
    }
}
