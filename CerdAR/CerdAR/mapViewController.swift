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
        let context: CGContext = UIGraphicsGetCurrentContext()!
        
        // 対象のview内の描画をcontextに複写する.
        self.layer.render(in: context)
        
        // 現在のcontextのビットマップをUIImageとして取得.
        let capturedImage: UIImage = UIGraphicsGetImageFromCurrentImageContext()!
        
        // contextを閉じる.
        UIGraphicsEndImageContext()
        
        return capturedImage
    }
}

class mapViewController: UIViewController, CLLocationManagerDelegate, MKMapViewDelegate, detailViewDelegate, termsViewDelegate, ConfigViewDelegate {
    
    var detailview: detailView? // 詳細画面のビュー
    var termsview: termsView? // 利用規約のビュー
    var configview: ConfigView? // 設定画面のビュー
    var mapView: MKMapView? // AppleMaps
    
    var locationManager: CLLocationManager! // 現在地の取得
    
    var infoPinView = [MKAnnotationView]() // ピン画像を表示する(情報)
    var warnPinView = [MKAnnotationView]() // ピン画像を表示する(警告)
    
    var pinViewData: MKAnnotationView! // タップされたタグの情報を保持
    
    var warningView: UIView! // 災害範囲内に侵入した時に画面の色を変える
    
    var updateTimer: Timer! // update()を一定時間ごとに発火させる
    
    var circle = [MKCircle]() // 災害範囲の円
    
    var warnState = warningState.safe.rawValue // 現在ユーザーは災害からどの位置にいるか(安全・付近・侵入)
    
    var tapped = false // 情報タグをタップしたか。情報タグをタップしたときは、位置情報更新によるタグの貼り直しをしないようにする。


    class appleMapsAnnotation: MKPointAnnotation {
        var tagData: TagData!
    }
    
    var appleMapsInfoBox = [appleMapsAnnotation]() // ピンの情報を持つ(情報)
    var appleMapsWarnBox = [appleMapsAnnotation]() // ピンの情報を持つ(警告)
    
    // MARK: ライフサイクル
    override func viewDidLoad() {
        super.viewDidLoad()
        self.navigationController?.setNavigationBarHidden(true, animated: true)
        
        /* 警告ビューの設定 */
        /* 警告モードで全画面色を変えるために使用 */
        warningView = UIView(frame: CGRect(x: 0.0, y: 0.0, width: CGFloat(screenWidth), height: CGFloat(screenHeight)))
        warningView.backgroundColor = UIColor.clear
        view.addSubview(warningView) // viewに追加
        
        /* マップビューの設定 */
        mapView = MKMapView(frame: self.view.frame)
        mapView!.delegate = self
        mapView!.mapType = MKMapType.standard  // 地図の種類
        mapView!.showsUserLocation = true      // 現在地の表示を許可する
        mapView!.setCenter(mapView!.userLocation.coordinate, animated: true)
        view.addSubview(mapView!)
        
        /* 現在地の取得を開始 */
        if CLLocationManager.locationServicesEnabled() {
            locationManager = CLLocationManager()
            locationManager.delegate = self
            locationManager.startUpdatingLocation()
            locationManager.desiredAccuracy = kCLLocationAccuracyBest
            locationManager.startUpdatingHeading()
            locationManager.requestAlwaysAuthorization()
        }
        
        /* 警告タグメッセージの設定 */
        warningMessage = UILabel(frame: CGRect(x: screenWidth * 0.6, y: screenHeight * 0.8, width: screenWidth * 0.38, height: screenHeight * 0.13))
        warningMessage.textColor = UIColor.black // 文字色(黒)
        warningMessage.backgroundColor = UIColor.white // 背景色(白)
        warningMessage.textAlignment = NSTextAlignment.center // 中央揃え
        warningMessage.font = UIFont.systemFont(ofSize: 20.0) // 初期文字サイズ
        warningMessage.numberOfLines = 2 // ラベル内の行数
        warningMessage.layer.borderColor = UIColor.black.cgColor // 枠線の色(黒)
        warningMessage.layer.borderWidth = 5.0 // 枠線の太さ
        warningMessage.layer.cornerRadius = 20.0 // 枠線を角丸にする
        
        /* 画面遷移するためのボタンを生成 */
        let toCam_button = UIButton()
        let buttonImage: UIImage = UIImage(named: "icon_camera.png")!
        toCam_button.frame = CGRect(x: 0.0, y: 0.0, width: buttonImage.size.width / 4, height: buttonImage.size.height / 4)
        toCam_button.setImage(buttonImage, for: UIControlState())
        toCam_button.layer.position = CGPoint(x: 55.0, y: self.view.bounds.height - 55.0)
        view.addSubview(toCam_button)
        toCam_button.addTarget(self, action: #selector(mapViewController.onClick_AR(_:)), for: .touchUpInside)
        
        /* 設定画面へ遷移するためのボタン生成 */
        let toCon_button = UIButton()
        let conButImage: UIImage = UIImage(named: "icon_menu.png")!
        toCon_button.frame = CGRect(x: 0.0, y: 0.0, width: conButImage.size.width / 4, height: conButImage.size.height / 4)
        toCon_button.setImage(conButImage, for: UIControlState())
        toCon_button.layer.position = CGPoint(x: self.view.bounds.width - 55.0, y: 55.0)
        view.addSubview(toCon_button)
        toCon_button.addTarget(self, action: #selector(mapViewController.onClick_config(_:)), for: .touchUpInside)
        
        /* 画面の中心を現在地にするためのボタン生成 */
        let nowLoc_button = UIButton()
        let locButImage: UIImage = UIImage(named: "icon_locate.jpg")!
        nowLoc_button.frame = CGRect.init(x: 0, y: 0, width: locButImage.size.width / 4, height: locButImage.size.height / 4)
        nowLoc_button.setImage(locButImage, for: UIControlState())
        nowLoc_button.layer.position = CGPoint(x: 55.0, y: 55.0)
        mapView!.addSubview(nowLoc_button)
        
        nowLoc_button.addTarget(self, action: #selector(mapViewController.onClick_nowLocate(_:)), for: .touchUpInside)

        changeMapBut.addTarget(self, action: #selector(mapViewController.onClick_changeMap(_:)), for: .touchUpInside)
        
        
        /* 利用規約を表示する */
        termsview = termsView(frame: CGRect(x: 0, y: 0, width: screenWidth, height: screenHeight))
        termsview!.delegate = self
        self.view.addSubview(termsview!)
        
        storeData()
    }
    
    /* 画面が表示される直前 */
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        
        mapView?.delegate = self
        locationManager.delegate = self
        
        displayMode = mode.map.rawValue // 現在開いている画面は地図画面であると設定する
        
        
        update() // 災害円を描く
        // 10秒に1回update()を発火させる
        updateTimer = Timer.scheduledTimer(timeInterval: 10, target: self, selector: #selector(mapViewController.update), userInfo: nil, repeats: true)
        

        // ピンに画像を設定する
        for i in 0 ..< infoBox.count {
            infoPinView.append(MKAnnotationView())
            updatePin(appleMapsInfoBox[i])
        }
        
        for i in 0 ..< warnBox.count {
            warnPinView.append(MKAnnotationView())
            
            // 災害発生中のとき
            if dateFromString(warnBox[i].stop, format: "yyyy/MM/dd HH:mm").compare(Date()) == ComparisonResult.orderedDescending && Date().compare(dateFromString(warnBox[i].start, format: "yyyy/MM/dd HH:mm")) == ComparisonResult.orderedDescending {

                updatePin(appleMapsWarnBox[i])
            }
        }
        
        // 現在地を中心に画面を表示する(起動してすぐにユーザーの現在地を取ることはできないため、1.5秒待つ)
        runAfterDelay(1.5) {
            let coordinateRegion = MKCoordinateRegionMakeWithDistance(self.mapView!.userLocation.coordinate, 800, 800)
            self.mapView!.setRegion(coordinateRegion, animated:true)
        }

    }
    
    
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        
        for annotation in self.mapView!.annotations {
            self.mapView!.removeAnnotation(annotation)
        }
        
        updateTimer.invalidate() // uodate()を発火させていたタイマーを止める
        
    }
    
    /* 別の画面に遷移した直後(破棄) */
    override func viewDidDisappear(_ animated: Bool) {
        super.viewDidDisappear(animated)
        
        mapView!.delegate = nil
        locationManager.delegate = nil
    }


    // MARK: デリゲート-MKMapViewDelegate

    /*
     * 地図を触った後
     * 拡大縮小に合わせて画像を張り替える
     */
    func mapView(_ mapView: MKMapView, regionDidChangeAnimated animated: Bool) {
        scalingImage()
    }
    
    
    /*
     * addAnnotationされたとき
     * ピンにタグ画像を貼る
     */
    func mapView(_ mapView: MKMapView, viewFor annotation: MKAnnotation) -> MKAnnotationView? {
        
        if let pin = annotation as? appleMapsAnnotation {
            
            if annotation === mapView.userLocation { // 現在地を示すアノテーションの場合はデフォルトのまま
                return nil
            } else {
                
                if let annotationView = mapView.dequeueReusableAnnotationView(withIdentifier: pin.tagData.inforType + String(pin.tagData.pinNum)) { // 再利用できる場合はそのまま返す
                    
                    // 情報タグのとき
                    if pin.tagData.inforType == kInfo {
                        infoPinView[pin.tagData.pinNum].image = pin.tagData.pinImage // ピンの画像設定
                    
                    // 警告タグのとき(災害発生中)
                    } else if dateFromString(pin.tagData.stop, format: "yyyy/MM/dd HH:mm").compare(Date()) == ComparisonResult.orderedDescending && Date().compare(dateFromString(pin.tagData.start, format: "yyyy/MM/dd HH:mm")) == ComparisonResult.orderedDescending {
                        warnPinView[pin.tagData.pinNum].image = pin.tagData.pinImage // ピンの画像設定
                        
                    }
                    return annotationView
                    
                } else { // 再利用できるアノテーションが無い場合（初回など）は生成する

                    if pin.tagData.pinImage != nil {
                        
                        let pN = pin.tagData.pinNum //ピン番号をつける

                        if pin.tagData.inforType == kInfo {
                            infoPinView[pN!] = MKAnnotationView(annotation: annotation, reuseIdentifier: pin.tagData.inforType + String(pin.tagData.pinNum))
                            return getPinView(annotation, pinView: infoPinView[pN!], pinImage: pin.tagData.pinImage)
                            
                        // 警告タグのとき(災害発生中)
                        } else if dateFromString(pin.tagData.stop, format: "yyyy/MM/dd HH:mm").compare(Date()) == ComparisonResult.orderedDescending && Date().compare(dateFromString(pin.tagData.start, format: "yyyy/MM/dd HH:mm")) == ComparisonResult.orderedDescending {
                            warnPinView[pN!] = MKAnnotationView(annotation: annotation, reuseIdentifier: pin.tagData.inforType + String(pin.tagData.pinNum))
                            return getPinView(annotation, pinView: warnPinView[pN!], pinImage: pin.tagData.pinImage)
                        }
                    }
                }
            }
        }
        
        mapView.userLocation.title = ""
        
        // ユーザーロケーションのとき
        return nil
    }



    /*
     * タグ画像がタップされたとき、
     * タップされた画像は拡大され、詳細画面が表示される
     */
    func mapView(_ mapView: MKMapView, didSelect view: MKAnnotationView) {
        
        self.view.addSubview(cannotTouchView)
        
        if mapView.userLocation.coordinate.latitude == view.annotation!.coordinate.latitude && mapView.userLocation.coordinate.latitude == view.annotation!.coordinate.latitude {
            
        } else {
            
            for i in 0 ..< infoBox.count {
                if view.annotation!.coordinate.latitude == infoBox[i].lat && view.annotation!.coordinate.longitude == infoBox[i].lon {
                    pinData = infoBox[i]
                    // 0.3秒でズームインする
                    UIView.animate(withDuration: 0.3, delay: 0.0, options: .curveEaseOut, animations: {
                        
                        // 拡大用(3.0倍)のアフィン行列を生成する.
                        view.transform = CGAffineTransform(scaleX: 3.0, y: 3.0)
                        
                        }, completion: nil)
                    break
                }
            }
            
            for i in 0 ..< warnBox.count {
                if view.annotation!.coordinate.latitude == warnBox[i].lat && view.annotation!.coordinate.longitude == warnBox[i].lon {
                    pinData = warnBox[i]
                    
                    tapped = true
                    
                    let scaleZoom = mapView.region.span.latitudeDelta
                    let tmpAnnotation: appleMapsAnnotation = appleMapsWarnBox[i] // 一旦他の場所にデータを保持させる
                    mapView.removeAnnotation(appleMapsWarnBox[i]) // 古い災害ピンを削除
                    appleMapsWarnBox[i] = tmpAnnotation
                    appleMapsWarnBox[i].tagData.pinImage = makeTappedLabel(i, scale: scaleZoom)
                    
                    mapView.addAnnotation(appleMapsWarnBox[i])
                    break
                }
            }
            
            pinViewData = view // タップしたピンのデータを保持する

            // 詳細画面の表示
            runAfterDelay(0.4) { // タップしてから0.4秒後に遷移する
                self.detailview = detailView(frame: CGRect(x: screenWidth * 0.1, y: screenWidth * 0.1, width: screenWidth * 0.8, height: screenHeight * 0.8))
                self.detailview!.delegate = self
                backgroundView = detailView.makebackgroungView()
                backgroundView.isUserInteractionEnabled = true
                backgroundView.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(mapViewController.onClick_detailBackground(_:))))
                
                self.view.addSubview(backgroundView)
                self.view.addSubview(self.detailview!)
            }
        }
    }
    
    /*
     * addOverlayされたとき、
     * マップに描く円の色などを設定する
     */
    func mapView(_ mapview: MKMapView, rendererFor overlay: MKOverlay) -> MKOverlayRenderer {
        
        let circle = MKCircleRenderer(overlay:overlay)
        var color = UIColor()
        
        for i in 0 ..< warnBox.count {
            // addOverLayされた円の緯度経度と、annotationBoxで登録されている緯度経度で同じものを探す
            //if warnBox[i].inforType == kWarn {
            if dateFromString(warnBox[i].stop, format: "yyyy/MM/dd HH:mm").compare(Date()) == ComparisonResult.orderedDescending && Date().compare(dateFromString(warnBox[i].start, format: "yyyy/MM/dd HH:mm")) == ComparisonResult.orderedDescending {
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
                    circle.fillColor = color.withAlphaComponent(0.6)
                    circle.strokeColor = color.withAlphaComponent(0.9)
                }
            }
        }
        
        return circle
    }
    
    // MARK: デリゲート-CLLocationManagerDelegate
    func locationManager(_ manager: CLLocationManager, didFailWithError error: Error) {
        print("didFailWithError: \(error)")
    }
    
    
    /*
     * 位置情報のアクセス許可の状況が変わったときの処理
     */
    func locationManager(_ manager: CLLocationManager, didChangeAuthorization status: CLAuthorizationStatus) {
        
        switch status {
        // 設定によって制限されているとき
        case .restricted:
            print("Error: It is restricted by settings.")
            
        // 位置情報取得を拒否しているとき
        case .denied:
            print("Error: It is denied Location Service.")
            manager.stopUpdatingLocation()
            
        // 既に位置情報の取得が許可されているとき
        case .authorizedWhenInUse, .authorizedAlways:
            manager.startUpdatingLocation()
            
        // 位置情報を取得の可否が決まっていないとき
        case .notDetermined:
            self.locationManager.requestAlwaysAuthorization()
        }
    }
    
    /*
     * ユーザーの位置情報が更新されるたび
     * 目的地までの距離を計算し、新しくタグ画像を生成・貼り直しをする
     */
    //func locationManager(_ manager: CLLocationManager, didUpdateToLocation newLocation: CLLocation, fromLocation oldLocation: CLLocation) {
    func locationManager(_ manager: CLLocationManager, didUpdateLocations locations: [CLLocation]) {

        
        if tapped == false {
            
            var min = 1001 // 現在地から一番近い災害までの距離
            var idx = -1 // その災害を格納している配列のインデックス
            
            // 位置情報が変わるたびに、タグを作り直している
            for i in 0 ..< infoBox.count {
                infoBox[i].distance = calcDistance(infoBox[i].lat, lon: infoBox[i].lon, uLat: (mapView?.userLocation.coordinate.latitude)!, uLon: (mapView?.userLocation.coordinate.longitude)!) // 距離を求める
                updatePin(appleMapsInfoBox[i])
            }
            
            for i in 0 ..< warnBox.count {
                
                //if warnBox[i].inforType == kWarn {
                if dateFromString(warnBox[i].stop, format: "yyyy/MM/dd HH:mm").compare(Date()) == ComparisonResult.orderedDescending && Date().compare(dateFromString(warnBox[i].start, format: "yyyy/MM/dd HH:mm")) == ComparisonResult.orderedDescending {
                    
                    warnBox[i].distance = calcDistance(warnBox[i].lat, lon: warnBox[i].lon, uLat: (mapView?.userLocation.coordinate.latitude)!, uLon: (mapView?.userLocation.coordinate.longitude)!) // 距離を求める
                    updatePin(appleMapsWarnBox[i])
                    
                    if min > warnBox[i].distance {
                        min = warnBox[i].distance
                        idx = i
                    }
                }
            }
            
            // 警告モードにしたり、警告メッセージを表示したりする
            if idx != -1 {
                intrusion(warnBox[idx].riskType, distance: warnBox[idx].distance, range: Int(circleRadius[idx]), warnState: &warnState, message1: warnBox[idx].message1, message2: warnBox[idx].message2)
            }
            
            scalingImage()
        }
        
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
    
    // MARK: configViewDelegate
    func configViewFinish() {
        transFromDetailToMap(pinViewData)
        configview?.delegate = nil
        configview?.removeFromSuperview()
    }
    
    
    
    
    
    // MARK: プライベート関数
    /* データを格納する */
    func storeData() {
        
        let file_name = "data.json" // data.json
        var json: JSON!
        
        
        if let dir: NSString = NSSearchPathForDirectoriesInDomains(FileManager.SearchPathDirectory.documentDirectory, FileManager.SearchPathDomainMask.allDomainsMask, true).first as NSString? {
            
            let path_file_name = dir.appendingPathComponent(file_name)
            guard (try? Data(contentsOf: URL(fileURLWithPath: path_file_name))) != nil else {
                let alert = UIAlertController(title: "ERROR!!", message: "JSONファイルが見つかりませんでした。", preferredStyle: UIAlertControllerStyle.alert)
                alert.addAction(UIAlertAction(title: "OK", style: UIAlertActionStyle.default) { action -> Void in })
                present(alert, animated: true, completion: nil)
                
                return
            }
            
            let jsonData = try? Data(contentsOf: URL(fileURLWithPath: path_file_name))
            json = JSON(data:jsonData!)
            
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
                infoBox[iN].picType = json["features"][i]["properties"]["pic_type"].string // 写真か動画か
                
                if infoBox[iN].picType == kPhoto {
                    infoBox[iN].photo = json["features"][i]["properties"]["photo"].string // 写真のURL
                } else if infoBox[iN].picType == kMovie {
                    infoBox[iN].movie = json["features"][i]["properties"]["movie"].string // 動画のURL
                }
                
                appleMapsInfoBox.append(appleMapsAnnotation())
                appleMapsInfoBox[iN].tagData = infoBox[iN]
                appleMapsInfoBox[iN].coordinate = CLLocationCoordinate2DMake(appleMapsInfoBox[iN].tagData.lat, appleMapsInfoBox[iN].tagData.lon)
                
                
                // OSM用
                osmInfoBox.append(MGLTagData())
                osmInfoBox[iN].inforType = json["features"][i]["properties"]["infor_type"].string // タグの種類
                osmInfoBox[iN].pinNum = iN //ピン番号
                
                
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
                warnBox[wN].range = json["features"][i]["properties"]["range"].int // 災害範囲
                warnBox[wN].start = json["features"][i]["properties"]["start"].string // 災害開始時刻
                warnBox[wN].stop = json["features"][i]["properties"]["stop"].string // 災害終了時刻
                warnBox[wN].message1 = json["features"][i]["properties"]["message1"].string // 警告範囲に近づいた時のメッセージ
                warnBox[wN].message2 = json["features"][i]["properties"]["message2"].string // 警告範囲に侵入した時のメッセージ
                warnBox[wN].riskType = json["features"][i]["properties"]["risk_type"].int // 災害の種類
                
                appleMapsWarnBox.append(appleMapsAnnotation())
                appleMapsWarnBox[wN].tagData = warnBox[wN]
                appleMapsWarnBox[wN].coordinate = CLLocationCoordinate2DMake(appleMapsWarnBox[wN].tagData.lat, appleMapsWarnBox[wN].tagData.lon)
                
                
                // OSM用
                osmWarnBox.append(MGLTagData())
                osmWarnBox[wN].inforType = json["features"][i]["properties"]["infor_type"].string // タグの種類
                osmWarnBox[wN].pinNum = wN //ピン番号

                wN += 1
                
            } else {
                print("infor_typeの設定を間違えています") /****後でこのときの対策を考える****/
            }
        }
    }
    
    /**
     * 災害範囲に近づいたり侵入したりすると、
     * 警告メッセージを出したり、警告モードにしたりする
     *
     * @param riskType 災害の種類
     * @param distance ユーザーの現在地から災害の中心点までの距離(m)
     * @param range 災害の範囲(半径(m))
     * @param warnState ユーザーが安全圏にいるか、被災地に近づいているか、侵入しているか
     * @param message1 ユーザーが災害範囲付近にいるときに出る警告メッセージ
     * @param message2 ユーザーが災害範囲内に侵入したときに出る警告メッセージ
     */
    func intrusion(_ riskType: Int, distance: Int, range: Int, warnState: inout String, message1: String, message2: String) {
        
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
    
    /**
     * 拡大縮小や現在地の更新による新しいピン画像の設定
     */
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
            
            //newsize = screenWidth * CGFloat(100.0 / (scaleZoom.span.latitudeDelta * 111.0 * 1000.0))
            changeImage(&appleMapsInfoBox[i], newsize: 100)
        }
        
        for i in 0 ..< warnBox.count {
            
            if dateFromString(warnBox[i].stop, format: "yyyy/MM/dd HH:mm").compare(Date()) == ComparisonResult.orderedDescending && Date().compare(dateFromString(warnBox[i].start, format: "yyyy/MM/dd HH:mm")) == ComparisonResult.orderedDescending {
                
                // 情報タグと同じ計算方法
                // タグのサイズは、災害円の直径
                
                let han: Double = circleRadius[i] * 2.0
                newsize = screenWidth * CGFloat((han * 0.7) / (scaleZoom.span.latitudeDelta * 111.0 * 1000.0))
                changeImage(&appleMapsWarnBox[i], newsize: newsize)
            }
        }
    }
    
    /**
     * ピンのタグ画像を新しいタグ画像に更新する
     *
     * @param annotation 更新するピン
     * @param newsize 新しいピン画像の縦幅
     */
    func changeImage(_ annotation: inout appleMapsAnnotation, newsize: CGFloat) {
        
        let newimage = getResizeImage(annotation.tagData.expandImage, newHeight: newsize) // 新しい画像
        let tmpAnnotation: appleMapsAnnotation = annotation // 一旦他の場所にデータを保持させる
        mapView!.removeAnnotation(annotation) // 古い災害ピンを削除
        annotation = tmpAnnotation
        annotation.tagData.pinImage = newimage
        
        mapView!.addAnnotation(annotation)
    }
    

    /**
     * ピンビューの設定
     *
     * @param annotation 設定対象のピン
     * @param pinView 設定対象のピンビュー
     * @param pinImage ピンに貼るタグ画像
     *
     * @return ピンビューを返す
     */
    func getPinView(_ annotation: MKAnnotation, pinView: MKAnnotationView, pinImage: UIImage) -> MKAnnotationView {
        
        pinView.annotation = annotation
        pinView.image = pinImage // ピンの画像設定
        pinView.canShowCallout = false // ピンをタップ時の吹き出しを非表示
        return pinView
    }
    
    
    /**
     * ピンのタグ画像を新しいタグ画像に更新する
     * (現在地更新によって距離が変わるときに使用する)
     * (画像サイズの変更はしない)
     *
     * @param annotation 更新するピン
     */
    func updatePin(_ annotation: appleMapsAnnotation) {
        
        let labelImg = makeLabel(annotation.tagData.pinNum, inforType: annotation.tagData.inforType) // UILabelをUIImageに変換する
        annotation.tagData.pinImage = getPinImage(labelImg, inforType: annotation.tagData.inforType)
        annotation.tagData.expandImage = getPinImage(labelImg, inforType: annotation.tagData.inforType)
        
        self.mapView!.addAnnotation(annotation) // ピン情報の更新
    }
    
    
    /**
     * 災害円を描く
     *
     * @param index warnboxのインデックス
     * @param startNow 災害が発生してから現在までの経過時間(分)
     */
    func makeCircle(_ index: Int, startNow: Double) {
        
        // アプリを開いたら災害範囲がすでに最大になっていたとき、最大の半径で円を描く
        if CLLocationDistance(startNow) > CLLocationDistance(warnBox[index].range) {
            circleRadius[index] = CLLocationDistance(warnBox[index].range)
            
        } else { // 経過時間分だけの半径の円を描く
            circleRadius[index] = CLLocationDistance(startNow)
        }
        
        self.mapView!.remove(circle[index])
        circle[index] = MKCircle(center: CLLocationCoordinate2D(latitude: warnBox[index].lat, longitude: warnBox[index].lon), radius: circleRadius[index])
        self.mapView!.add(circle[index], level: MKOverlayLevel.aboveRoads)
        
    }

    /*
     * 詳細画面を閉じたとき
     * タップして拡大されていたタグを元の大きさに戻す
     */
    func transFromDetailToMap(_ view: MKAnnotationView) {
        
        if pinData.inforType == kWarn {
            
            runAfterDelay(1.0) {
                let scaleZoom = self.mapView!.region.span.latitudeDelta
                let han: Double = circleRadius[pinData.pinNum] * 2.0
                let newsize = screenWidth * CGFloat((han * 0.7) / (scaleZoom * 111.0 * 1000.0))
                self.changeImage(&self.appleMapsWarnBox[pinData.pinNum], newsize: newsize)
            }
            
        } else if pinData.inforType == kInfo {
            
            view.transform = CGAffineTransform(scaleX: 3.0, y: 3.0)
            
            // zoomTime秒でズームアウトする
            UIView.animate(withDuration: 0.3, delay: 0.0, options: .curveEaseOut, animations: {
                
                // 縮小用(1/3倍)のアフィン行列を生成する.
                view.transform = CGAffineTransform(scaleX: 1.0, y: 1.0)
                
                }, completion: nil)
            
        }
        

        runAfterDelay(1.0) {
            cannotTouchView.removeFromSuperview()
            self.tapped = false
        }
    }
    
    /*
     * 現在地情報の表示を許可する
     */
    func alertLocationServicesDisabled() {
        let title = "Location Services Disabled"
        let message = "You must enable Location Services to track your run."
        
        if NSClassFromString("UIAlertController") != nil {
            let alert = UIAlertController(title: title, message: message, preferredStyle: .alert)
            
            alert.addAction(UIAlertAction(title: "Settings", style: .default, handler: { action in
                let url = URL(string: UIApplicationOpenSettingsURLString)
                UIApplication.shared.openURL(url!)
            }))
            alert.addAction(UIAlertAction(title: "Close", style: .cancel, handler: nil))
            
            present(alert, animated: true, completion: nil)
        } else {
            UIAlertController.self
        }
    }
    

    /*
     * 画面左下のボタンをタップしたとき
     * ARカメラ画面に遷移する
     */
    func onClick_AR(_ sender: UIButton) {
        //self.navigationController?.pushViewController(cameraViewController(), animated: true)
        self.present(cameraViewController(), animated: true, completion: nil)
    }
    
    /*
     * 画面右上のボタンをタップしたとき
     * 設定画面を開く
     */
    func onClick_config(_ recognizer: UIGestureRecognizer) {
        configview = ConfigView(frame: CGRect(x: screenWidth * 0.1, y: screenWidth * 0.1, width: screenWidth * 0.8, height: screenHeight * 0.8))
        viewMode = viewmode.config.rawValue
        backgroundView = detailView.makebackgroungView()
        backgroundView.isUserInteractionEnabled = true
        backgroundView.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(mapViewController.onClick_configBackground(_:))))
        view.addSubview(backgroundView)
        view.addSubview(configview!)
    }
    
    
    /*
     * 設定画面の背景をタップしたとき
     * 表示されているものが廃棄される
     */
    func onClick_configBackground(_ sender: UITapGestureRecognizer) {
        configview?.removeFromSuperview()
        ConfigView().deleteConfigDisplay()
    }

    /*
     * 詳細画面の背景をタップしたとき
     * 表示されているものが廃棄される
     */
    func onClick_detailBackground(_ sender: UITapGestureRecognizer) {
        transFromDetailToMap(pinViewData)
        detailview?.removeFromSuperview()
        detailView().deleteDetailView()
    }

    
    /*
     * 設定画面の「いれかえ」をタップしたとき
     * OpenStreetMapsに切り替える
     */
    internal func onClick_changeMap(_ sender: UIButton) {
        configview?.removeFromSuperview()
        ConfigView().deleteConfigDisplay()
        self.present(osmViewController(), animated: true, completion: nil)
    }
    
    
    /*
     * 画面左上のボタンをタップしたとき
     * 現在地を中心に画面表示する
     */
    internal func onClick_nowLocate(_ sender: UIButton) {
        let coordinateRegion = MKCoordinateRegionMakeWithDistance(self.mapView!.userLocation.coordinate, 800, 800)
        self.mapView!.setRegion(coordinateRegion, animated:true)
    }
    
    
    /*
     * 現在時刻で災害が発生しているとき、
     * 災害円を描く
     */
    func update() {
        
        let nowTime = Date() // 現在時刻
        
        for i in 0 ..< warnBox.count {
            
            let start = dateFromString(warnBox[i].start, format: "yyyy/MM/dd HH:mm") // 災害開始時間
            let stop = dateFromString(warnBox[i].stop, format: "yyyy/MM/dd HH:mm") // 災害終了時間
            
            // 過去の災害
            if start.compare(nowTime) == ComparisonResult.orderedDescending {
                
                // stopの時刻を過ぎたから、災害の円や文字を消す
                self.mapView!.remove(circle[i]) // 円を消す
                self.mapView!.alpha = 1.0
                self.warnPinView[i].removeFromSuperview() // 災害のピン情報を削除
                cameraViewController().warningView.backgroundColor = UIColor.clear
                if warnImageBox.count != 0 {
                    warnImageBox[i].removeFromSuperview()
                }
                
            // 現在災害発生中
            } else if stop.compare(nowTime) == ComparisonResult.orderedDescending && nowTime.compare(start) == ComparisonResult.orderedDescending {
                let Sn = Date().timeIntervalSince(start) / 60 // 開始時刻(start)と現在時刻(now)の差
                makeCircle(i, startNow: Sn)
                
            // 今後発生する災害
            } else {
                
            }
        }
    }
}
