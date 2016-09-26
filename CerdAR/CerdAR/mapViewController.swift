//
//  mapViewController.swift
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

class mapViewController: UIViewController, CLLocationManagerDelegate, MKMapViewDelegate, detailViewDelegate, termsViewDelegate {
    
    var detailview: detailView?
    var termsview: termsView?
    var mapView: MKMapView?
    
    var locationManager: CLLocationManager! // 現在地の取得
    
    var infoPinView = [MKAnnotationView]()
    var warnPinView = [MKAnnotationView]()
    
    var pinViewData: MKAnnotationView! // タップされたタグの情報を保持
    
    var warningView: UIView! // 災害範囲内に侵入した時に画面の色を変える
    
    var circle = [MKCircle]() // 災害範囲の円
    
    var warnState = warningState.safe.rawValue

    class appleMapsAnnotation : MKPointAnnotation {
        var tagData: TagData!
    }
    
    var appleMapsInfoBox = [appleMapsAnnotation]()
    var appleMapsWarnBox = [appleMapsAnnotation]()
    
    // MARK: ライフサイクル
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.navigationController?.setNavigationBarHidden(true, animated: true)
        
        //警告ビューの設定
        //警告モードで全画面色を変えるために使用
        warningView = UIView(frame: CGRect(x: 0.0, y: 0.0, width: CGFloat(screenWidth), height: CGFloat(screenHeight)))
        warningView.backgroundColor = UIColor.clearColor()
        view.addSubview(warningView) // viewに追加
        
        /* マップビューの設定 */
        mapView = MKMapView(frame: self.view.frame)
        mapView!.delegate = self
        mapView!.mapType = MKMapType.Standard  // 地図の種類
        mapView!.showsUserLocation = true      // 現在地の表示を許可する
        mapView!.setCenterCoordinate(mapView!.userLocation.coordinate, animated: true)
        view.addSubview(mapView!)
        
        // 現在地の取得を開始
        if CLLocationManager.locationServicesEnabled() {
            locationManager = CLLocationManager()
            locationManager.delegate = self
            locationManager.startUpdatingLocation()
            locationManager.desiredAccuracy = kCLLocationAccuracyBest
            locationManager.startUpdatingHeading()
            locationManager.requestAlwaysAuthorization()
        }
        
        // 警告タグメッセージの設定
        warningMessage = UILabel(frame: CGRect(x: screenWidth * 0.6, y: screenHeight * 0.8, width: screenWidth * 0.38, height: screenHeight * 0.13))
        warningMessage.textColor = UIColor.blackColor() // 文字色(黒)
        warningMessage.backgroundColor = UIColor.whiteColor() // 背景色(白)
        warningMessage.textAlignment = NSTextAlignment.Center // 中央揃え
        warningMessage.font = UIFont.systemFontOfSize(20.0) // 初期文字サイズ
        warningMessage.numberOfLines = 2 // ラベル内の行数
        warningMessage.layer.borderColor = UIColor.blackColor().CGColor // 枠線の色(黒)
        warningMessage.layer.borderWidth = 5.0 // 枠線の太さ
        warningMessage.layer.cornerRadius = 20.0 // 枠線を角丸にする
        
        // 画面遷移するためのボタンを生成
        let toCam_button = UIButton()
        let buttonImage: UIImage = UIImage(named: "icon_camera.png")!
        toCam_button.frame = CGRect(x: 0.0, y: 0.0, width: buttonImage.size.width / 4, height: buttonImage.size.height / 4)
        toCam_button.setImage(buttonImage, forState: .Normal)
        toCam_button.layer.position = CGPoint(x: 55.0, y: self.view.bounds.height - 55.0)
        view.addSubview(toCam_button)
        toCam_button.addTarget(self, action: #selector(mapViewController.clickAR(_:)), forControlEvents: .TouchUpInside)
        
        // 設定画面へ遷移するためのボタン生成
        let toCon_button = UIButton()
        let conButImage: UIImage = UIImage(named: "icon_menu.png")!
        toCon_button.frame = CGRect(x: 0.0, y: 0.0, width: conButImage.size.width / 4, height: conButImage.size.height / 4)
        toCon_button.setImage(conButImage, forState: .Normal)
        toCon_button.layer.position = CGPoint(x: self.view.bounds.width - 55.0, y: 55.0)
        view.addSubview(toCon_button)
        toCon_button.addTarget(self, action: #selector(mapViewController.didClickConfig(_:)), forControlEvents: .TouchUpInside)
        
        changeMapBut.addTarget(self, action: #selector(mapViewController.changeMap(_:)), forControlEvents: .TouchUpInside)
        
        // 時間管理してくれる
        //        termsOfService(view) //毎回呼ばれる・・・
        termsview = termsView(frame: CGRect(x: 0, y: 0, width: screenWidth, height: screenHeight))
        termsview!.delegate = self
        self.view.addSubview(termsview!)
        
        storeData()
    }
    
    /* 画面が表示される直前 */
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
        
        displayMode = mode.map.rawValue
        
        update()
        
        _ = NSTimer.scheduledTimerWithTimeInterval(10, target: self, selector: #selector(mapViewController.update), userInfo: nil, repeats: true)
        
        for i in 0 ..< infoBox.count {
            infoPinView.append(MKAnnotationView())
            updatePin(appleMapsInfoBox[i])
        }
        
        for i in 0 ..< warnBox.count {
            warnPinView.append(MKAnnotationView())
            if warnBox[i].inforType == kWarn {
                updatePin(appleMapsWarnBox[i])
            }
        }
        runAfterDelay(1.5) {
            let coordinateRegion = MKCoordinateRegionMakeWithDistance(self.mapView!.userLocation.coordinate, 800, 800)
            self.mapView!.setRegion(coordinateRegion, animated:true)
        }
        
    }
    
    override func viewWillDisappear(animated: Bool) {
        super.viewWillDisappear(animated)
        
        for annotation in self.mapView!.annotations {
            self.mapView!.removeAnnotation(annotation)
        }
        
    }
    
    /* 別の画面に遷移した直後(破棄) */
    override func viewDidDisappear(animated: Bool) {
        super.viewDidDisappear(animated)
        
        //pinView.removeAll() // ピン画像の破棄
        //annotationBox.removeAll() //ピンの破棄
        
    }
    
    // MARK: デリゲート-MKMapViewDelegate
    /* 地図を触った後 */
    func mapView(mapView: MKMapView, regionDidChangeAnimated animated: Bool) {
        scalingImage()
    }
    
    /* ピン画像の設定 */
    func mapView(mapView: MKMapView, viewForAnnotation annotation: MKAnnotation) -> MKAnnotationView? {
        if let pin = annotation as? appleMapsAnnotation {
            // 情報タグのとき
            if pin.tagData.pinImage != nil {
                
                let pN = pin.tagData.pinNum //ピン番号をつける
                
                if pin.tagData.inforType == kInfo {
                    return getPinView(annotation, pinView: infoPinView[pN], pinImage: pin.tagData.pinImage)
                    
                } else if pin.tagData.inforType == kWarn {
                    return getPinView(annotation, pinView: warnPinView[pN], pinImage: pin.tagData.pinImage)
                    
                }
            }
        }
        
        mapView.userLocation.title = ""
        
        // ユーザーロケーションのとき
        return nil
    }
    
    /* 情報タグがタップされると、詳細画面に遷移する */
    func mapView(mapView: MKMapView, didSelectAnnotationView view: MKAnnotationView) {
        
//        self.view.addSubview(cannotTouchView)
        
        if mapView.userLocation.coordinate.latitude == view.annotation!.coordinate.latitude && mapView.userLocation.coordinate.latitude == view.annotation!.coordinate.latitude {
            
        } else {
            
            for i in 0 ..< infoBox.count {
                if view.annotation!.coordinate.latitude == infoBox[i].lat && view.annotation!.coordinate.longitude == infoBox[i].lon {
                    pinData = infoBox[i]
                }
            }
            
            for i in 0 ..< warnBox.count {
                if view.annotation!.coordinate.latitude == warnBox[i].lat && view.annotation!.coordinate.longitude == warnBox[i].lon {
                    pinData = warnBox[i]
                }
            }
            
            pinViewData = view // タップしたピンのデータを保持する
            
            // zoomTime秒でズームインする
            UIView.animateWithDuration(0.3, delay: 0.0, options: .CurveEaseOut, animations: {
                
                // 拡大用(3.0倍)のアフィン行列を生成する.
                view.transform = CGAffineTransformMakeScale(3.0, 3.0)
                
                }, completion: nil)
            
            
            runAfterDelay(0.4) { // ズームしてから0.1秒後に遷移する
                self.detailview = detailView(frame: CGRect(x: screenWidth * 0.1, y: screenWidth * 0.1, width: screenWidth * 0.8, height: screenHeight * 0.8))
                self.detailview!.delegate = self
                self.view.addSubview(self.detailview!)
            }
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
                        color = UIColor(red: 0.545, green: 0.020, blue: 0.220, alpha: 1.0)
                        
                    case 1: // 浸水のとき：青色
                        color = UIColor(red: 0.000, green: 0.400, blue: 1.000, alpha: 1.0)
                        
                    case 2: // 落橋のとき：黄色
                        color = UIColor(red: 1.000, green: 0.945, blue: 0.024, alpha: 1.0)
                        
                    case 3: // 土砂崩れのとき：茶色
                        color = UIColor(red: 0.800, green: 0.400, blue: 0.000, alpha: 1.0)
                        
                    default: // その他の災害のとき：緑色
                        color = UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: 1.0)
                        break
                    }
                    
                    circle.lineWidth = 10.0 // 円周の太さ
                    circle.fillColor = color.colorWithAlphaComponent(0.6)
                    circle.strokeColor = color.colorWithAlphaComponent(0.9)
                }
            }
        }
        
        return circle
    }
    
    // MARK: デリゲート-CLLocationManagerDelegate
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
            updatePin(appleMapsInfoBox[i])
        }
        
        for i in 0 ..< warnBox.count {
            
            if warnBox[i].inforType == kWarn {
                
                warnBox[i].distance = calcDistance(warnBox[i].lat, lon: warnBox[i].lon, uLat: newLocation.coordinate.latitude, uLon: newLocation.coordinate.longitude) // 距離を求める
                updatePin(appleMapsWarnBox[i])
                
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
    
    // MARK: detailViewDelegate
    func detailViewFinish() {
        transFromDetailToMap(pinViewData)
        
        detailview?.delegate = nil
        detailview?.removeFromSuperview()
    }
    
    // MARK: detailViewDelegate
    func termsViewfinish() {
        termsview?.delegate = nil
        termsview?.removeFromSuperview()
    }
    
    // MARK: プライベート関数
    /* データを格納する */
    func storeData() {
        
        let file_name = "data.json"
        var json: JSON!
        
        if let dir: NSString = NSSearchPathForDirectoriesInDomains(NSSearchPathDirectory.DocumentDirectory, NSSearchPathDomainMask.AllDomainsMask, true).first {
            
            let path_file_name = dir.stringByAppendingPathComponent(file_name)
            guard NSData(contentsOfFile: path_file_name) != nil else {
                let alert = UIAlertController(title: "ERROR!!", message: "JSONファイルが見つかりませんでした。", preferredStyle: UIAlertControllerStyle.Alert)
                alert.addAction(UIAlertAction(title: "OK", style: UIAlertActionStyle.Default) { action -> Void in })
                presentViewController(alert, animated: true, completion: nil)
                
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
//                infoBox[iN].coordinate = CLLocationCoordinate2DMake(infoBox[iN].lat, infoBox[iN].lon) //ピンの緯度経度の設定
                
                infoBox[iN].picType = json["features"][i]["properties"]["pic_type"].string // 写真か動画か
                
                if infoBox[iN].picType == kPhoto {
                    infoBox[iN].photo = json["features"][i]["properties"]["photo"].string // 写真のURL
                } else if infoBox[iN].picType == kMovie {
                    infoBox[iN].movie = json["features"][i]["properties"]["movie"].string // 動画のURL
                }
                
                appleMapsInfoBox.append(appleMapsAnnotation())
                appleMapsInfoBox[iN].tagData = infoBox[iN]
                appleMapsInfoBox[iN].coordinate = CLLocationCoordinate2DMake(appleMapsInfoBox[iN].tagData.lat, appleMapsInfoBox[iN].tagData.lon)
                
                iN += 1
                
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
//                warnBox[wN].coordinate = CLLocationCoordinate2DMake(warnBox[wN].lat, warnBox[wN].lon) //ピンの緯度経度の設定
                
                warnBox[wN].range = json["features"][i]["properties"]["range"].int // 災害範囲
                warnBox[wN].start = json["features"][i]["properties"]["start"].string // 災害開始時刻
                warnBox[wN].stop = json["features"][i]["properties"]["stop"].string // 災害終了時刻
                warnBox[wN].message1 = json["features"][i]["properties"]["message1"].string // 警告範囲に近づいた時のメッセージ
                warnBox[wN].message2 = json["features"][i]["properties"]["message2"].string // 警告範囲に侵入した時のメッセージ
                warnBox[wN].riskType = json["features"][i]["properties"]["risk_type"].int // 災害の種類
                
                appleMapsWarnBox.append(appleMapsAnnotation())
                appleMapsWarnBox[wN].tagData = warnBox[wN]
                appleMapsWarnBox[wN].coordinate = CLLocationCoordinate2DMake(appleMapsWarnBox[wN].tagData.lat, appleMapsWarnBox[wN].tagData.lon)

                wN += 1
                
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
                    warningView.backgroundColor = UIColor(red: 1.000, green: 0.000, blue: 0.000, alpha: 0.7)
                    
                case 1: // 浸水のとき：青色
                    warningView.backgroundColor = UIColor(red: 0.000, green: 0.400, blue: 1.000, alpha: 0.7)
                    
                case 2: // 落橋のとき：黄色
                    warningView.backgroundColor = UIColor(red: 1.000, green: 0.945, blue: 0.024, alpha: 0.7)
                    
                case 3: // 土砂崩れのとき：茶色
                    warningView.backgroundColor = UIColor(red: 0.800, green: 0.400, blue: 0.000, alpha: 0.5)
                    
                default: // その他の災害のとき：緑色
                    warningView.backgroundColor = UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: 0.7)
                    break
                }
                
                mapView!.alpha = 0.8
                warningMessage.text = message2 // 警告メッセージ
                
                // 一定時間後に警告メッセージを消す
                runAfterDelay(10.0) {
                    warningMessage.removeFromSuperview()
                }
                
                mapView!.addSubview(warningMessage)
                warnState = warningState.inst.rawValue
                
            }
            
            // 災害範囲付近にいる時(範囲から500mとする)
        } else if distance - range > 0 && distance - range <= 500 {
            
            if warnState != warningState.near.rawValue {
                
                self.mapView!.alpha = 1.0
                warningMessage.text = message1 // 警告メッセージ
                
                // 一定時間後に警告メッセージを消す
                runAfterDelay(10.0) {
                    warningMessage.removeFromSuperview()
                }
                
                mapView!.addSubview(warningMessage)
                warnState = warningState.near.rawValue
            }
            
            // 安全圏にいる時
        } else {
            
            if warnState != warningState.safe.rawValue {
                self.mapView!.alpha = 1.0
                warningMessage.removeFromSuperview()
                warnState = warningState.safe.rawValue
            }
        }
    }
    
    /* 拡大縮小や距離の更新による新しいピン画像の設定 */
    func scalingImage() {
        
        let scaleZoom = mapView!.region
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
            
            newsize = screenWidth * CGFloat(100.0 / (scaleZoom.span.latitudeDelta * 111.0 * 1000.0))
            changeImage(&appleMapsInfoBox[i], newsize: newsize)
        }
        
        for i in 0 ..< warnBox.count {
            
            if warnBox[i].inforType == kWarn {
                
                // 情報タグと同じ計算方法
                // タグのサイズは、災害円の直径
                
                let han: Double = circleRadius[i] * 2.0
                newsize = screenWidth * CGFloat((han * 0.7) / (scaleZoom.span.latitudeDelta * 111.0 * 1000.0))
                changeImage(&appleMapsWarnBox[i], newsize: newsize)
            }
        }
    }
    
    /* ピン画像の入れ替え */
    func changeImage(inout annotation: appleMapsAnnotation, newsize: CGFloat) {
        
        let newimage = getResizeImage(annotation.tagData.expandImage, newHeight: newsize) // 新しい画像
        let tmpAnnotation: appleMapsAnnotation = annotation // 一旦他の場所にデータを保持させる
        mapView!.removeAnnotation(annotation) // 古い災害ピンを削除
        annotation = tmpAnnotation
        annotation.tagData.pinImage = newimage
        
        mapView!.addAnnotation(annotation)
        
    }
    
    /* ピンの画像設定 */
    func getPinView(annotation: MKAnnotation, pinView: MKAnnotationView, pinImage: UIImage) -> MKAnnotationView {
        
        pinView.annotation = annotation
        pinView.image = pinImage // ピンの画像設定
        pinView.canShowCallout = false // ピンをタップ時の吹き出しを非表示
        
        return pinView
    }
    
    
    /* ピン情報を更新する */
    func updatePin(annotation: appleMapsAnnotation) {
        
        let labelImg = makeLabel(annotation.tagData.pinNum, inforType: annotation.tagData.inforType) // UILabelをUIImageに変換する
        annotation.tagData.pinImage = getPinImage(labelImg, inforType: annotation.tagData.inforType)
        annotation.tagData.expandImage = getPinImage(labelImg, inforType: annotation.tagData.inforType)
        
        self.mapView!.addAnnotation(annotation) // ピン情報の更新
    }
    
    /* 災害円を描く */
    func makeCircle(index: Int, inout circle: MKCircle, start: NSDate, stop: NSDate) {
        
        let Sn = NSDate().timeIntervalSinceDate(start) / 60 // 開始時刻(start)と現在時刻(now)の差
        let Ne = stop.timeIntervalSinceDate(NSDate()) / 60 // 現在時刻(now)と終了時刻(end)の差
        let Se = Sn + Ne // 開始時刻と終了時刻の差
        
        // アプリを開いたら災害範囲がすでに最大になっていたとき、最大の半径で円を描く
        if CLLocationDistance(Sn) > CLLocationDistance(warnBox[index].range) {
            circleRadius[index] = CLLocationDistance(warnBox[index].range)
            
        } else { // 経過時間分だけの半径の円を描く
            circleRadius[index] = CLLocationDistance(Sn)
        }
        
        circle = MKCircle(centerCoordinate: appleMapsWarnBox[index].coordinate, radius: circleRadius[index])
        self.mapView!.addOverlay(circle, level: MKOverlayLevel.AboveRoads)
        
        // 1分で半径1mずつ広がっていく
        for time in 1...(Int(Se) - Int(Sn)) {
            
            runAfterDelay(Double(time)) {
                if Int(circleRadius[index]) < self.appleMapsWarnBox[index].tagData.range {
                    circleRadius[index] = CLLocationDistance(Sn) + CLLocationDistance(time) // 災害範囲の半径の更新
                    self.mapView!.removeOverlay(circle)
                    circle = MKCircle(centerCoordinate: self.appleMapsWarnBox[index].coordinate, radius: circleRadius[index])
                    self.mapView!.addOverlay(circle, level: MKOverlayLevel.AboveRoads)
                }
            }
        }
        
        // stopの時刻を過ぎたから、災害の円や文字を消す
        runAfterDelay(Double(Ne) + 60) {
            self.mapView!.removeOverlay(circle) // 円を消す
            self.mapView!.alpha = 1.0
            warnBox[index].inforType = kDidWarn // inforTypeを"warn"から"didWarn"に変更
            self.warnPinView[index].removeFromSuperview() // 災害のピン情報を削除
            cameraViewController().warningView.backgroundColor = UIColor.clearColor()
            if warnImageBox.count != 0 {
                warnImageBox[index].removeFromSuperview()
            }
            
        }
    }
    
    /* 詳細画面から地図画面に遷移したときの表示の設定 */
    func transFromDetailToMap(view: MKAnnotationView) {
        
        view.transform = CGAffineTransformMakeScale(3.0, 3.0)
        
        // zoomTime秒でズームアウトする
        UIView.animateWithDuration(0.3, delay: 0.0, options: .CurveEaseOut, animations: {
            
            // 縮小用(1/3倍)のアフィン行列を生成する.
            view.transform = CGAffineTransformMakeScale(1.0, 1.0)
            
            }, completion: nil)
        
        runAfterDelay(1.0) {
//            cannotTouchView.removeFromSuperview()
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
    func clickAR(sender: UIButton) {
        let ar = cameraViewController()
        self.navigationController?.pushViewController(ar, animated: true)
    }
    
//    /* (利用規約)OKボタンをクリックした時 */
//    internal func onClickOkButton(sender: UIButton) {
//        clearView.removeFromSuperview() // clearviewを消すことでアラートが消える
//    }
//    
//    /* (利用規約)キャンセルボタンをクリックした時 */
//    internal func onClickCancelButton(sender: UIButton) {
//        exit(0) // アプリを終了する
//    }
    
    /* 設定ボタンが押された時 */
    func didClickConfig(recognizer: UIGestureRecognizer) {
        //ViewConfig().configMenu(view)
    }

    /* (詳細画面)戻るボタンをクリックした時 */
    func clickBackBut(sender: UIButton) {
        backgroundView.removeFromSuperview()
        //        removeAllSubviews(detailView)
        //        detailView.removeFromSuperview()
        transFromDetailToMap(pinViewData) // ズームアウト
    }
    
    /* (設定画面)戻るボタンをクリックした時 */
    func changeMap(sender: UIButton) {
        //        removeAllSubviews(configView)
        //        configView.removeFromSuperview()
        backgroundView.removeFromSuperview()
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
                    makeCircle(i, circle: &circle[i], start: start, stop: stop)
                }
                
                // 今後発生する災害
            } else {
                warnBox[i].inforType = kWillWarn
            }
        }
    }
    
    
}
