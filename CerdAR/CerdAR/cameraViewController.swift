//
//  cameraViewController.swift
//  CerdAR
//
//  Copyright (c) 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
//

import Foundation
import UIKit
import AVFoundation
import CoreLocation

class cameraViewController: UIViewController, CLLocationManagerDelegate, detailViewDelegate {
    
    var avSession: AVCaptureSession! // AVキャプチャセッション
    var avDevice: AVCaptureDevice! // AVキャプチャデバイス
    var avInput: AVCaptureInput! // AVキャプチャデバイスインプット
    var previewLayer: AVCaptureVideoPreviewLayer? // 画面表示用レイヤー
    
    var detailview: detailView? // 詳細画面
    
    var locationManager: CLLocationManager! // 現在地の取得
    
    var count = 0 // タグを表示するときに、はじめはremoveしないためのもの
    
    // コンパス
    let imgCompass = UIImage(named: "icon_compass.png")! // 画像設定
    var compassView: UIImageView! // コンパスのビュー
    
    // 警告
    var warningView = UIView(frame: CGRect(x: 0.0, y: 0.0, width: screenWidth, height: screenHeight)) // 警告モード
    var warnState = warningState.safe.rawValue // 現在ユーザーは災害からどの位置にいるか(安全・付近・侵入)
    
    let warningMessage = UILabel(frame: CGRect(x: screenWidth * 0.35, y: screenHeight - 125.0, width: screenWidth * 0.6, height: screenHeight * 0.13)) // 警告メッセージ
    
    
    var warnNums: [Int] = [] // 災害番号
    var msgCount = 0 // 警告メッセージを表示する災害の配列番号を管理する
    var msgSafeCount = 0 // ユーザーは現在安全圏にいるかを確認するための変数
    var viewCount = 0 // 警告モードを表示する災害の配列番号を管理する
    var viewSafeCount = 0 // ユーザーは現在付近または安全圏にいるかを確認するための変数
    var messageTimer: Timer! // 警告メッセージを表示するためのタイマー
    var viewTimer: Timer! // 警告モードを表示するためのタイマー
    var box: [Int] = [] // 現在発生している災害の番号を管理する配列
    var updateTimer: Timer! // 一定時間ごとにupdate()を発火させる
    
    var tagTimer: Timer! // タグを表示するためのタイマー
    var heading = 0.0 // 現在のユーザーの方位を保持する
    var beforeHeading = 0.0 // kTagUpdateTime秒前のユーザーの方位を保持する
    
    
    // アラート
    let alert: UIAlertController = UIAlertController(title: "⚠︎", message: "iPadを垂直に，ホームボタンを右側に向けた状態にiPadを持ち直してください", preferredStyle:  UIAlertControllerStyle.alert)
    
    
    // MARK: ライフサイクル
    override func viewDidLoad() {
        
        super.viewDidLoad()
        
        warnState = warningState.safe.rawValue
        
        // 現在地の取得を開始
        if CLLocationManager.locationServicesEnabled() {
            locationManager = CLLocationManager()
        }
        
        // カメラ起動
        initCamera()
        
        // 警告モード
        view.addSubview(warningView)
        
        /* 警告タグメッセージの設定 */
        warningMessage.textColor = UIColor.black // 文字色(黒)
        warningMessage.backgroundColor = UIColor.white.withAlphaComponent(CGFloat(kMsgAlpha)) // 背景色(白)
        warningMessage.textAlignment = NSTextAlignment.center // 中央揃え
        warningMessage.font = UIFont.systemFont(ofSize: 20.0) // 初期文字サイズ
        warningMessage.numberOfLines = 3 // ラベル内の行数
//        warningMessage.layer.borderColor = UIColor.black.cgColor // 枠線の色(黒)
//        warningMessage.layer.borderWidth = 5.0 // 枠線の太さ
        warningMessage.layer.cornerRadius = 20.0 // 枠線を角丸にする
        warningMessage.clipsToBounds = true // 角を取る
        view.addSubview(warningMessage)
        warningMessage.isHidden = true
        
        
        // 地図切替ボタン
        let toMap_Button = UIButton()
        let buttonImage: UIImage = UIImage(named: "icon_map.png")!
        toMap_Button.frame = CGRect(x: 0.0, y: 0.0, width: butSize, height: butSize)
        toMap_Button.setImage(buttonImage, for: UIControlState())
        toMap_Button.layer.position = CGPoint(x: 55.0, y: self.view.bounds.height - 55.0)
        view.addSubview(toMap_Button)
        toMap_Button.addTarget(self, action: #selector(cameraViewController.onClick_map(_:)), for: .touchUpInside)
        
        // コンパス
        compassView = UIImageView(frame: CGRect(x: 40.0, y: 40.0, width: imgCompass.size.width / 4, height: imgCompass.size.height / 4))
        compassView.image = imgCompass
        view.addSubview(compassView)
        
        // 情報タグの初期化
        for _ in 0 ..< jsonDataManager.sharedInstance.infoBox.count {
            infoImageBox.append(UIImageView(frame: CGRect(x: 0.0, y: 0.0, width: 0.0, height: 0.0)))
        }
        
        // 警告タグの初期化
        for _ in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
            warnImageBox.append(UIImageView(frame: CGRect(x: 0.0, y: 0.0, width: 0.0, height: 0.0)))
        }
    }
    
    
    override func viewWillAppear(_ animated: Bool) {
        
        super.viewWillAppear(animated)
        
        displayMode = mode.cam.rawValue
        
        // カメラの開始
        avSession.startRunning()
        
        // 現在地の取得を開始
        if CLLocationManager.locationServicesEnabled() {
            locationManager.delegate = self
            locationManager.startUpdatingLocation() // GPSの更新を開始する
            locationManager.headingFilter = 0.5 // ユーザーの向きが0.5度変わるたびに変数"heading"の値を更新する
            locationManager.headingOrientation = .landscapeLeft // ホームボタン右向きに実機を持った時の画面上側が北になる
            locationManager.startUpdatingHeading() // 電子コンパスの更新を開始する
        }
        
        update() // 災害情報を更新する
        // kUpdateWarn秒に1回update()を発火させる
        updateTimer = Timer.scheduledTimer(timeInterval: kUpdateWarn, target: self, selector: #selector(cameraViewController.update), userInfo: nil, repeats: true)
        
        // kTagUpdateTime秒に1回locateUpdate()を発火させる
        tagTimer = Timer.scheduledTimer(timeInterval: kTagUpdateTime, target: self, selector: #selector(cameraViewController.locateUpdate), userInfo: nil, repeats: true)
        
    }
    
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        
        // 端末の向きを間違えていたら、アラートで知らせる
        alertDeviceOrientation()
        NotificationCenter.default.addObserver(self, selector: #selector(cameraViewController.onOrientationChange(notification:)), name: NSNotification.Name.UIDeviceOrientationDidChange, object: nil)
    }
    
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
    }
    
    override func viewDidDisappear(_ animated: Bool) {
        
        super.viewDidDisappear(animated)
        
        // カメラの停止
        avSession.stopRunning()
        
        count = 0 // タグのカウントの破棄
        locationManager.stopUpdatingHeading() // GPSを停止する
        locationManager.delegate = nil // デリゲートを止める
        if messageTimer != nil {
            messageTimer.invalidate() // 警告メッセージのタイマーを止める
        }
        if viewTimer != nil {
            viewTimer.invalidate() // 警告モードのタイマーを止める
        }
        updateTimer.invalidate() // 災害情報の更新をするタイマーを止める
        tagTimer.invalidate() // タグ表示を更新するタイマーを止める
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
    
    // MARK: CLLocationManagerDelegate
    // iPhone の位置情報が更新されるたびに、デリゲートが呼ばれる
    func locationManager(_ manager: CLLocationManager, didUpdateLocations locations: [CLLocation]) {
        
        userLat = (locationManager.location?.coordinate.latitude)!   // 現在地の緯度
        userLon = (locationManager.location?.coordinate.longitude)!   // 現在地の経度
    }
    
    
    /*
     * カメラの向きが変わるたび
     * ユーザーから目的地までの距離を計算する
     * kCamDis(m)以内のものの方角を取得し、tagDisplay()を発火させ、画面にタグ画像を表示させる
     */
    func locationManager(_ manager: CLLocationManager, didUpdateHeading newHeading: CLHeading) {
        
        heading = newHeading.magneticHeading
    }
    
    
    // MARK: detailViewDelegate
    func detailViewFinish() {
        detailview?.delegate = nil
        detailview?.removeFromSuperview()
        backgroundView.removeFromSuperview()
    }
    
    
    
    // MARK: プライベート関数
    
    /*
     *カメラの初期化
     */
    func initCamera() {
        
        // iOS10以上
        if #available(iOS 10.0, *) {
        
            var avOutput: AVCapturePhotoOutput! // AVキャプチャアウトプット
            avSession = AVCaptureSession()
        
            if avSession.canSetSessionPreset(AVCaptureSessionPresetPhoto) {
                avSession.beginConfiguration()
                avSession.sessionPreset = AVCaptureSessionPresetPhoto
                avSession.commitConfiguration()
            }
        
            let devices = AVCaptureDevice.defaultDevice(withMediaType: AVMediaTypeVideo)
        
            do {
                avInput = try AVCaptureDeviceInput(device: devices!)
            } catch let error as NSError {
                print(error)
            }
        
            if avSession.canAddInput(avInput) {
                avSession.addInput(avInput)
                avOutput = AVCapturePhotoOutput()
                if avSession.canAddOutput(avOutput) {
                    avSession.addOutput(avOutput)
                }
                let capVideoLayer: AVCaptureVideoPreviewLayer = AVCaptureVideoPreviewLayer(session:avSession)
                capVideoLayer.frame = self.view.bounds
                capVideoLayer.videoGravity = AVLayerVideoGravityResizeAspectFill
                self.previewLayer = capVideoLayer
                self.view.layer.addSublayer(capVideoLayer)
            }
            
        } else { // iOS10以下
        
            var avOutput: AVCaptureStillImageOutput! // AVキャプチャアウトプット
            avSession = AVCaptureSession()
        
            if avSession.canSetSessionPreset(AVCaptureSessionPresetPhoto) {
                avSession.beginConfiguration()
                avSession.sessionPreset = AVCaptureSessionPresetPhoto
                avSession.commitConfiguration()
            }
        
            let devices = AVCaptureDevice.devices()

            for capDevice in devices! {
                if (capDevice as AnyObject).position == AVCaptureDevicePosition.back {
                    // 背面カメラを取得
                    avDevice = capDevice as? AVCaptureDevice
                }
            }
        
            if avDevice != nil {
        
                do {
                    avInput = try AVCaptureDeviceInput(device: avDevice!)
                } catch let error as NSError {
                    print(error)
                }
        
                if avSession.canAddInput(avInput) {
                    avSession.addInput(avInput)
                    avOutput = AVCaptureStillImageOutput()
                    avOutput.outputSettings = [AVVideoCodecKey: AVVideoCodecJPEG]
                    if avSession.canAddOutput(avOutput) {
                        avSession.addOutput(avOutput)
                    }
                    let capVideoLayer: AVCaptureVideoPreviewLayer = AVCaptureVideoPreviewLayer(session:avSession)
                    capVideoLayer.frame = self.view.bounds
                    capVideoLayer.videoGravity = AVLayerVideoGravityResizeAspectFill
                    self.previewLayer = capVideoLayer
                    self.view.layer.addSublayer(capVideoLayer)
                }
            }
        }
    }
    
    /*
     * 災害情報を更新する
     */
    func update() {
        
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
        
        // インデックスを初期化
        msgCount = 0
        viewCount = 0
        
        for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
            
            // 現在発生中
            if jsonDataManager.sharedInstance.warnBox[i].stop.compare(nowTime) == ComparisonResult.orderedDescending && nowTime.compare(jsonDataManager.sharedInstance.warnBox[i].start) == ComparisonResult.orderedDescending {
                
                let startNow = Date().timeIntervalSince(jsonDataManager.sharedInstance.warnBox[i].start) / 60 // 開始時刻(start)と現在時刻(now)の差
                
                // アプリを開いたら災害範囲がすでに最大になっていたとき、最大の半径で円を描く
                if CLLocationDistance(startNow) > CLLocationDistance(jsonDataManager.sharedInstance.warnBox[i].range) {
                    circleRadius[i] = CLLocationDistance(jsonDataManager.sharedInstance.warnBox[i].range)
                    
                } else { // 経過時間分だけの半径の円を描く
                    circleRadius[i] = CLLocationDistance(startNow)
                }
                
                // 現在発生している災害の番号を格納する
                box.append(i)
            }
        }
        
        // 災害発生していないとき
        if box.count == 0 {
            warningMessage.isHidden = true // 警告メッセージを隠す
            warningView.backgroundColor = UIColor.clear // 透明にする
            
            // 災害が発生しているとき
        } else {
            
            // 警告メッセージのタイマーを開始させる
            if messageTimer == nil {
                messageTimer = Timer.scheduledTimer(timeInterval: kUpdateMM, target: self, selector: #selector(cameraViewController.updateMessage), userInfo: nil, repeats: true)
            } else if !messageTimer.isValid {
                messageTimer = Timer.scheduledTimer(timeInterval: kUpdateMM, target: self, selector: #selector(cameraViewController.updateMessage), userInfo: nil, repeats: true)
            }
            
            // 警告モードのタイマーを開始させる
            if viewTimer == nil {
                viewTimer = Timer.scheduledTimer(timeInterval: kUpdateMM, target: self, selector: #selector(cameraViewController.updateView), userInfo: nil, repeats: true)
                
            } else if !viewTimer.isValid {
                viewTimer = Timer.scheduledTimer(timeInterval: kUpdateMM, target: self, selector: #selector(cameraViewController.updateView), userInfo: nil, repeats: true)
            }
        }
    }
    
    
    
    
    /*
     * 警告メッセージを表示する
     */
    func updateMessage() {
        
        if msgCount == box.count {
            msgCount = 0
            msgSafeCount = 0
        }
        
        let num = box[msgCount] // 現在発生している災害のインデックスを渡す
        
        // 現在地からその災害までの距離を求める
        jsonDataManager.sharedInstance.warnBox[num].distance = calcDistance(jsonDataManager.sharedInstance.warnBox[num].lat, lon: jsonDataManager.sharedInstance.warnBox[num].lon, uLat: userLat, uLon: userLon)
        
        // 0m以下・・・侵入
        if jsonDataManager.sharedInstance.warnBox[num].distance - Int(circleRadius[num]) < 0 {
            // 侵入していることを通知音で知らせる
            if audioPlayerIntr != nil {
                audioPlayerIntr.play()
            }
            warningMessage.isHidden = false
            warningMessage.text = jsonDataManager.sharedInstance.warnBox[num].message2 // 警告メッセージ
            msgCount += 1
            
            // 0m以上、kNearMsg(m)以下・・・付近
        } else if jsonDataManager.sharedInstance.warnBox[num].distance - Int(circleRadius[num]) < kNearMsg {
            // 付近にいることを通知音で知らせる
            if audioPlayerNear != nil {
                audioPlayerNear.play()
            }
            warningMessage.isHidden = false
            warningMessage.text = jsonDataManager.sharedInstance.warnBox[num].message1 // 警告メッセージ
            msgCount += 1
            
            // それ以外・・・安全
        } else {
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
            messageTimer = Timer.scheduledTimer(timeInterval: kUpdateMM, target: self, selector: #selector(mapViewController.updateMessage), userInfo: nil, repeats: true)
        }
    }
    
    
    /*
     * 警告モードを表示する
     */
    func updateView() {
        
        if viewCount == box.count {
            viewCount = 0
            viewSafeCount = 0
        }
        
        let num = box[viewCount] // 現在発生している災害のインデックスを渡す
        
        // 現在地からその災害までの距離を求める
        jsonDataManager.sharedInstance.warnBox[num].distance = calcDistance(jsonDataManager.sharedInstance.warnBox[num].lat, lon: jsonDataManager.sharedInstance.warnBox[num].lon, uLat: userLat, uLon: userLon)
        
        // 0m以下・・・侵入
        if jsonDataManager.sharedInstance.warnBox[num].distance - Int(circleRadius[num]) < 0 {
            
            switch jsonDataManager.sharedInstance.warnBox[num].riskType {
                
            case 0: // 火災：赤色
                warningView.frame = CGRect(x: 0.0, y: 0.0, width: screenWidth, height: screenHeight)
                warningView.backgroundColor = UIColor(red: 1.000, green: 0.000, blue: 0.000, alpha: CGFloat(kCamAlpha))
                
            case 1: // 浸水：青色
                warningView.frame = CGRect(x: 0.0, y: screenHeight * 0.75, width: screenWidth, height: screenHeight / 4)
                warningView.backgroundColor = UIColor(red: 0.000, green: 0.400, blue: 1.000, alpha: CGFloat(kCamAlpha))
                
            case 2: // 土砂崩れ：茶色
                warningView.frame = CGRect(x: 0.0, y: 0.0, width: screenWidth, height: screenHeight)
                warningView.backgroundColor = UIColor(red: 0.800, green: 0.400, blue: 0.000, alpha: CGFloat(kCamAlpha))
                
            case 3, 4, 5, 6: // 道路閉塞：黄色
                warningView.frame = CGRect(x: 0.0, y: screenHeight * 0.75, width: screenWidth, height: screenHeight / 4)
                warningView.backgroundColor = UIColor(red: 1.000, green: 0.945, blue: 0.024, alpha: CGFloat(kCamAlpha))
                
                
            default: // その他の災害：緑色
                warningView.frame = CGRect(x: 0.0, y: 0.0, width: screenWidth, height: screenHeight)
                warningView.backgroundColor = UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: CGFloat(kCamAlpha))
            }
            
            viewCount += 1
            
            // 0m以上・・・安全
        } else {
            viewSafeCount += 1
            if viewSafeCount == box.count {
                viewSafeCount = 0
                warningView.backgroundColor = UIColor.clear // 透明にする
                return
            }
            viewCount += 1
            warningView.backgroundColor = UIColor.clear // 透明にする
            viewTimer.invalidate()
            updateView()
        }
        
        if !viewTimer.isValid {
            viewTimer = Timer.scheduledTimer(timeInterval: kUpdateMM, target: self, selector: #selector(mapViewController.updateView), userInfo: nil, repeats: true)
        }
    }


    /*
     * ユーザーから目的地までの距離を計算する
     * kCamDis(m)以内のものの方角を取得し、tagDisplay()を発火させ、画面にタグ画像を表示させる
     */
    func locateUpdate() {
        
        // kTagUpdateTime秒前と比較して -kDiff ~ kDiff度の変化があるときのみ処理をする(手ぶれ補正)
        if beforeHeading - heading > kDiff || beforeHeading - heading < -kDiff {
            
            // コンパスを北の方向を指すように画像を回転させる
            self.compassView.transform = CGAffineTransform(rotationAngle: CGFloat(-1 * heading * M_PI) / 180)
            
            // PCの磁気の影響を受けている時は処理をしない
            if heading < 0 {
                return
            }
            
            DispatchQueue(label: "showInfoTag").async {
                
                // 情報タグのとき
                for i in 0 ..< jsonDataManager.sharedInstance.infoBox.count {
                    
                    // 距離を取得する
                    jsonDataManager.sharedInstance.infoBox[i].distance = calcDistance(jsonDataManager.sharedInstance.infoBox[i].lat, lon: jsonDataManager.sharedInstance.infoBox[i].lon, uLat: userLat, uLon: userLon)
                    
                    // kCamDis(m)以内の場所のタグは表示する
                    if jsonDataManager.sharedInstance.infoBox[i].distance <= kCamDis {
                        
                        // 方角を取得する
                        jsonDataManager.sharedInstance.infoBox[i].direction = self.getGeoDirection(jsonDataManager.sharedInstance.infoBox[i].lat, tLon: jsonDataManager.sharedInstance.infoBox[i].lon)
                        
                        DispatchQueue.main.async {
                            
                            // タグを画面に表示させる
                            self.tagDisplay(i, imageBox: &infoImageBox, tDir: jsonDataManager.sharedInstance.infoBox[i].direction, tDis: jsonDataManager.sharedInstance.infoBox[i].distance, compass: self.heading, inforType: jsonDataManager.sharedInstance.infoBox[i].inforType)
                        }
                        
                    } else if jsonDataManager.sharedInstance.infoBox[i].distance >= kCamDis && jsonDataManager.sharedInstance.infoBox[i].distance <= kCamDis + 50 {
                        infoImageBox[i].removeFromSuperview()
                    }
                }
            }
            
            
            // 警告タグのとき
            for i in 0 ..< jsonDataManager.sharedInstance.warnBox.count {
                
                // 災害が発生しているとき
                if jsonDataManager.sharedInstance.warnBox[i].stop.compare(Date()) == ComparisonResult.orderedDescending && Date().compare(jsonDataManager.sharedInstance.warnBox[i].start) == ComparisonResult.orderedDescending {
                    
                    // 距離を取得する
                    jsonDataManager.sharedInstance.warnBox[i].distance = calcDistance(jsonDataManager.sharedInstance.warnBox[i].lat, lon: jsonDataManager.sharedInstance.warnBox[i].lon, uLat: userLat, uLon: userLon)
                    
                    // kCamDis(m)以内の場所のタグは表示する
                    if jsonDataManager.sharedInstance.warnBox[i].distance <= kCamDis {
                        
                        // 方角を取得する
                        jsonDataManager.sharedInstance.warnBox[i].direction = getGeoDirection(jsonDataManager.sharedInstance.warnBox[i].lat, tLon: jsonDataManager.sharedInstance.warnBox[i].lon)
                        
                        // 警告タグの画像を設定する
                        switch jsonDataManager.sharedInstance.warnBox[i].riskType {
                        case 0: // 火災
                            warnImage = UIImage(named: "icon_warn0.png")!
                        case 1: // 浸水
                            warnImage = UIImage(named: "icon_warn1.png")!
                        case 2: // 土砂崩れ
                            warnImage = UIImage(named: "icon_warn2.png")!
                        case 3, 4, 5, 6: // 道路閉塞
                            warnImage = UIImage(named: "icon_warn3.png")!
                        default: // その他
                            warnImage = UIImage(named: "icon_infoTagAR.png")!
                            break
                        }
                        
                        // タグを画面に表示させる
                        tagDisplay(i, imageBox: &warnImageBox, tDir: jsonDataManager.sharedInstance.warnBox[i].direction, tDis: jsonDataManager.sharedInstance.warnBox[i].distance, compass: heading, inforType: jsonDataManager.sharedInstance.warnBox[i].inforType)
                    }
                    
                } else if Date().compare(jsonDataManager.sharedInstance.warnBox[i].stop) == ComparisonResult.orderedDescending {
                    
                    // 方角を取得する
                    jsonDataManager.sharedInstance.warnBox[i].direction = getGeoDirection(jsonDataManager.sharedInstance.warnBox[i].lat, tLon: jsonDataManager.sharedInstance.warnBox[i].lon)
                    let angle = jsonDataManager.sharedInstance.warnBox[i].direction - heading
                    if (angle >= 0 && angle <= 36.5) || (angle >= -36.5 && angle <= 0) {
                        warnImageBox[i].removeFromSuperview()
                    }
                }
            }
        }
        
        beforeHeading = heading
    }
    
    
    /*
     * ユーザーが向いている方角を測る
     *
     * @param tLat 目的地の緯度
     * @param tLat 目的地の経度
     *
     * @return ユーザーが向いている方角を返す(北：0、 東；90、 南：180、 西：270)
     */
    func getGeoDirection(_ tLat: Double, tLon: Double) -> Double {
        
        // 緯度経度 lat1, lng1 の点を出発として、緯度経度 lat2, lng2 への方位
        // 北を０度で右回りの角度0～360度
        let Y = cos(tLon * M_PI / 180) * sin(tLat * M_PI / 180 - userLat * M_PI / 180)
        let X = cos(userLon * M_PI / 180) * sin(tLon * M_PI / 180) - sin(userLon * M_PI / 180) * cos(tLon * M_PI / 180) * cos(tLat * M_PI / 180 - userLat * M_PI / 180)
        
        var dirE0 = 180 * atan2(Y, X) / M_PI // 東向きが０度の方向
        if dirE0 < 0 {
            dirE0 = dirE0 + 360 //0～360 にする
        }
        
        return (dirE0 + 90).truncatingRemainder(dividingBy: 360) // (dirE0+90)÷360の余りを出力 北向きが0度の方向
    }
    
    /*
     * カメラ画面にタグ画像を表示する
     * カメラの視野内にある目的地のタグが表示される
     * 距離に応じてタグ画像の大きさ、表示位置の高さを設定する
     *
     * @param index 情報・警告タグのインデックス
     * @param imageBox 情報・警告タグのImageView
     * @param tDir ユーザーから見た目的地の方角
     * @param tDis ユーザーから目的地までの距離
     * @param compass ユーザーが向いている方角
     * @param inforType タグの種別(情報か警告か)
     */
    func tagDisplay(_ index: Int, imageBox: inout [UIImageView], tDir: Double, tDis: Int, compass: Double, inforType: String) {
        var angle = tDir - compass
        
        // 目的地が真北から見て西側にあり、ユーザーが向いている方向が真北から見て東側であるとき
        if angle >= 323.5 && angle <= 360 {
            angle = angle - 360
            
        // 目的地が真北から見て東側にあり、ユーザーが向いている方向が真北から見て西側であるとき
        } else if angle >= -360 && angle <= -325.5 {
            angle = 360 + angle
        }
        
        var x = 0.0 // タグの表示位置(x軸)
        var y: CGFloat = 0.0 // タグの表示位置(y軸)
        
        var size = 0.0 // タグサイズ
        
        var labelImg: UIImage!
        
        if count > 0 {
            imageBox[index].removeFromSuperview()
        }
        
        // カメラの視野に対象が入ったら、タグを表示させる
        if (angle >= 0 && angle <= 36.5) || (angle >= -36.5 && angle <= 0) {
            
            // 現在地〜目的地までの距離が
            //    0mのとき・・・画面縦幅の1/8の大きさ
            //    kCamDis(m)のとき・・・画面縦幅の3/8の大きさ
            // タグのサイズ = 0mのときの大きさ + 画面縦幅1/4の大きさ * 距離による倍率
            //size = Double(screenHeight / 7) + Double(screenHeight / 3) * Double(kCamDis - tDis) /  Double(kCamDis)
            
            // タグの最大最小サイズの強調（kCamDisは150mを前提）
            size = Double(screenHeight) / 1.5 * Double(kCamDis - tDis) /  Double(kCamDis)
            
            // 画面の表示位置(縦) = タグの最小サイズの半分 + 画面縦幅3/4の大きさ * 距離による倍率
            y = CGFloat(screenHeight / (8 * 2)) + CGFloat(screenHeight * 3 / 4) * CGFloat(kCamDis - tDis) / CGFloat(kCamDis)
            
            // 遠近感の調整（kCamDisは150mを前提）
            // 画面の表示位置(縦) = 最大最小範囲の調整 +　全体的な位置の微調整
            y = y * 0.8 + 220
            
            
            imageBox[index] = UIImageView(frame: CGRect(x: 0.0, y: 0.0, width: CGFloat(size), height: CGFloat(size)))
            
            // 情報タグを生成する
            if inforType == kInfo {
                
                if jsonDataManager.sharedInstance.infoBox[index].icon == "icon_infoTag.png" {
                    labelImg = makeLabel(jsonDataManager.sharedInstance.infoBox[index].pinNum, inforType: inforType) // UILabelをUIImageに変換する
                    imageBox[index].image = getPinImage(labelImg, inforType: jsonDataManager.sharedInstance.infoBox[index].inforType)
                    
                } else {
                    imageBox[index].image = UIImage(named: jsonDataManager.sharedInstance.infoBox[index].icon!)!
                }
                imageBox[index].tag = index // 情報は0以上からで判断
                
            // 警告タグを生成する
            } else if inforType == kWarn {
                labelImg = makeLabel(jsonDataManager.sharedInstance.warnBox[index].pinNum, inforType: inforType) // UILabelをUIImageに変換する
                imageBox[index].image = getPinImage(labelImg, inforType: jsonDataManager.sharedInstance.warnBox[index].inforType)
                imageBox[index].tag = (-1) + index * (-1) // 警告は-1以下からで判断 あとで+1してインデックス番号に合わせる
            }
            
            // 画像の表示する座標を指定する.
            x = Double(screenWidth) / 2 + Double(screenWidth) * (angle / 36.5)
            imageBox[index].layer.position = CGPoint(x: CGFloat(x), y: y)
            
            // タグをタップしたときのイベント
            imageBox[index].isUserInteractionEnabled = true
            let gesture = UITapGestureRecognizer(target:self, action: #selector(cameraViewController.didClickImageView(_:)))
            imageBox[index].addGestureRecognizer(gesture)
            
            count = count + 1
            
            // UIImageViewをViewに追加する.
            view.addSubview(imageBox[index]) // 画像表示用
            view.bringSubview(toFront: backgroundView)
            if detailview != nil {
                view.bringSubview(toFront: detailview!) // 詳細画面を最前面にする
            }
        }
    }
    
    /*
     * 端末の向きがかわったら呼び出される
     */
    func onOrientationChange(notification: NSNotification) {
        alertDeviceOrientation()
    }
    
    /*
     * 端末の向きを間違えているとき、アラートが表示される
     */
    func alertDeviceOrientation() {
        
        // 現在のデバイスの向きを取得.
        let deviceOrientation: UIDeviceOrientation!  = UIDevice.current.orientation
        
        // 画面が間違えた向きのとき・・・アラートで知らせる
        if deviceOrientation == UIDeviceOrientation.landscapeRight {
            alert.dismiss(animated: true, completion: nil)
            present(alert, animated: true, completion: nil)
            
            // 画面が正しい向きのとき・・・アラートを消す
        } else if deviceOrientation == UIDeviceOrientation.landscapeLeft {
            alert.dismiss(animated: true, completion: nil)
        }
    }
    
    
    /*
     * タグ画像がタップされた時
     * 詳細画面を表示する
     *
     * @param sender
     */
    func didClickImageView(_ sender: UITapGestureRecognizer) {
        
        backgroundView = detailView.makebackgroungView()
        backgroundView.isUserInteractionEnabled = true
        backgroundView.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(osmViewController.onClick_detailBackground(_:))))
        view.addSubview(backgroundView)
        
        if let imageView = sender.view as? UIImageView {
            
            if imageView.tag >= 0 {
                pinData = jsonDataManager.sharedInstance.infoBox[imageView.tag]
                
            } else if imageView.tag < 0 {
                pinData = jsonDataManager.sharedInstance.warnBox[(-1) + imageView.tag * (-1)]
            }
            
            detailview = detailView(frame: CGRect(x: screenWidth * 0.1, y: screenWidth * 0.1, width: screenWidth * 0.8, height: screenHeight * 0.8))
            detailview!.delegate = self
            view.addSubview(detailview!)
        }
    }
    
    /* カメラの向きを変える */
    fileprivate func updatePreviewLayer(_ layer: AVCaptureConnection, orientation: AVCaptureVideoOrientation) {
        layer.videoOrientation = orientation
        previewLayer!.frame = self.view.bounds
    }
    
    /*
     * 画面の向きに合わせてカメラの向きを変える
     *
     * @param layer
     * @param orientation
     */
    override func viewDidLayoutSubviews() {
        super.viewDidLayoutSubviews()
        
        if let connection = self.previewLayer?.connection {
            let currentDevice: UIDevice = UIDevice.current
            
            let orientation: UIDeviceOrientation = currentDevice.orientation
            
            let previewLayerConnection: AVCaptureConnection = connection
            
            if previewLayerConnection.isVideoOrientationSupported {
                
                switch orientation {
                case .portrait:
                    updatePreviewLayer(previewLayerConnection, orientation: .landscapeLeft)
                    break
                    
                case .landscapeRight:
                    updatePreviewLayer(previewLayerConnection, orientation: .landscapeLeft)
                    break
                    
                case .landscapeLeft:
                    updatePreviewLayer(previewLayerConnection, orientation: .landscapeRight)
                    break
                    
                case .portraitUpsideDown:
                    updatePreviewLayer(previewLayerConnection, orientation: .portraitUpsideDown)
                    break
                    
                default:
                    updatePreviewLayer(previewLayerConnection, orientation: .landscapeLeft)
                    break
                }
            }
        }
    }
    
    /*
     * 画面左下の地図ボタンをタップしたとき
     * 地図画面に遷移する
     *
     * @param sender
     */
    func onClick_map(_ sender: UIButton) {
        self.dismiss(animated: true, completion: nil)
    }
    
    
    /*
     * 詳細画面の背景をタップしたとき
     * 詳細画面を閉じる
     * @param sender
     */
    func onClick_detailBackground(_ sender: UITapGestureRecognizer) {
        detailview?.removeFromSuperview() // 表示されているものが廃棄される
        detailView().deleteDetailView()
    }

}
