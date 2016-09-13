//
//  ViewARCamera.swift
//  CerdAR
//
//  Copyright (c) 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
//

import Foundation
import UIKit
import AVFoundation
import CoreLocation
import CoreMotion
import MapKit

class ViewARCamera: UIViewController, UIGestureRecognizerDelegate, CLLocationManagerDelegate {
    
    var avSession: AVCaptureSession! // AVキャプチャセッション
    var avDevice: AVCaptureDevice! // AVキャプチャデバイス
    var avInput: AVCaptureInput! // AVキャプチャデバイスインプット
    var avOutput: AVCaptureStillImageOutput! // AVキャプチャアウトプット
    var previewLayer: AVCaptureVideoPreviewLayer? // 画面表示用レイヤー
    
    var userLat: CLLocationDegrees = 0   // 緯度
    var userLon: CLLocationDegrees = 0 // 経度
    
    var motionManager: CMMotionManager! // 加速度センサ
    
    var locationManager: CLLocationManager! // 現在地の取得
    var compassManager: CLLocationManager! // コンパスの向き測定
    
    var count = 0 // タグを表示するときに、はじめはremoveしないためのもの
    
    var infoImageBox: [UIImageView] = [] // 画面上での情報タグ画像の表示を管理する
    var warnImageBox: [UIImageView] = [] // 画面上での警告タグ画像の表示を管理する
    
    // コンパス
    let imgCompass = UIImage(named: "icon_compass.png")! // 画像設定
    var compassView: UIImageView! // コンパスのビュー
    var isExistCom = false // コンパスの表示制御用
    
    // 警告
    var warningView = UIView(frame: CGRect.init(x: kZero, y: kZero, width: CGFloat(screenWidth), height: CGFloat(screenHeight)))
    
    //var tunami = 0 // 津波の浸水度
    
    // 災害の発生時刻の取得
    var calendar: NSCalendar!
    var startDate: NSDate!
    var time = 0.0
    var timer: NSTimer!
    var disa = false // 災害発生 → true
    
    var camZ = 0.0 // カメラの傾き(保留)
    
    //定数
    let updateLoc = 1.0 // 1.0°動いたら更新する
    
    
    
    
    // MARK: ライフサイクル
    override func viewDidLoad() {
        super.viewDidLoad()
        
        //ページタイトル
        self.title = "AR"
        
        calendar = NSCalendar(identifier: NSCalendarIdentifierGregorian)!
        startDate = calendar.dateWithEra(1, year: 2016, month: 8, day: 10, hour: 14, minute: 39, second: 0, nanosecond: 0)! // 災害発生時刻
        
        // 現在地の取得を開始
        if CLLocationManager.locationServicesEnabled() {
            locationManager = CLLocationManager()
            locationManager.delegate = self
            locationManager.startUpdatingLocation() // 位置情報の更新を開始
        }
        
        // CMMotionManagerを生成
        motionManager = CMMotionManager()
        
        // 磁北測定
        if CLLocationManager.locationServicesEnabled() {
            compassManager = CLLocationManager()
            compassManager.delegate = self
            
            // 1°動いたら更新する
            compassManager.headingFilter = updateLoc
            
            // デバイスのどの向きを北とするか（デフォルトは画面上部）
            compassManager.headingOrientation = .Portrait
            compassManager.startUpdatingHeading()
        }
    }
    
    
    /* 画面が表示される直前 */
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
        
        mode = 1
        
        // NavigationBarを隠す処理
        self.navigationController?.setNavigationBarHidden(true, animated: true)
        self.initCamera()
        self.initBox()
        
        view.addSubview(warningView)
        
        // 画面遷移のためのボタン
        let toMapBut = UIButton()
        toMapBut.frame = CGRect.init(x: kZero, y: kZero, width: kButSize, height: kButSize)
        let buttonImage: UIImage = UIImage(named: "icon_map.png")!
        toMapBut.setImage(buttonImage, forState: .Normal)
        toMapBut.layer.position = CGPoint(x: kButPos + kButSize, y: self.view.bounds.height - kButPos - kButSize)
        view.addSubview(toMapBut)
        toMapBut.addTarget(self, action: #selector(ViewARCamera.clickMap(_:)), forControlEvents: .TouchUpInside)
        
    }
    
    
    
    /* 画面が表示された直後 */
    override func viewDidAppear(animated: Bool) {
        super.viewDidAppear(animated)
    }
    
    
    /* 別の画面に遷移する直前 */
    override func viewWillDisappear(animated: Bool) {
        super.viewWillDisappear(animated)
    }
    
    
    /* 別の画面に遷移した直後(破棄) */
    override func viewDidDisappear(animated: Bool) {
        super.viewDidDisappear(animated)
        
        // カメラの停止とメモリ解放
        self.avSession.stopRunning()
        
        for output in self.avSession.outputs {
            self.avSession.removeOutput(output as? AVCaptureOutput)
        }
        
        for input in self.avSession.inputs {
            self.avSession.removeInput(input as? AVCaptureInput)
        }
        
        self.avOutput = nil
        self.avInput = nil
        self.avDevice = nil
        self.avSession = nil
        
        compassView.removeFromSuperview() // コンパスの破棄
        
        isExistCom = false // コンパスのカウントの破棄
        count = 0 // タグのカウントの破棄
    }
    
    
    // MARK: デリゲート
    
    // CLLocationManagerDelegate
    /* iPhone の位置情報が更新されるたびに、デリゲートが呼ばれる */
    func locationManager(manager: CLLocationManager, didUpdateToLocation newLocation: CLLocation, fromLocation oldLocation: CLLocation) {
        
        userLat = newLocation.coordinate.latitude   // 現在地の緯度
        userLon = newLocation.coordinate.longitude  // 現在地の経度
        
    }
    
    
    /* カメラの向きが変わるたびに呼ばれる */
    func locationManager(manager: CLLocationManager, didUpdateHeading newHeading: CLHeading) {
        
        //print("磁北:", newHeading.magneticHeading) // 北：0、 東；90、 南：180、 西：270 //こちらが必要？ スマホの向き
        //print("真北:", newHeading.trueHeading) // 北：0、 東；90、 南：180、 西：270
        
        //        /* カメラの向きを利用してタグの表示(y軸)の調整(いつかするべき) */
        //        motionManager.startAccelerometerUpdatesToQueue(NSOperationQueue.mainQueue(), withHandler: {(accelerometerData: CMAccelerometerData?, error: NSError?) -> Void in
        //            self.camZ = accelerometerData!.acceleration.z * 1000 // 未完成のため、まだ定数の設定はしない
        //            //print("camZ: \(floor(self.camZ) / 1000)")
        //        })
        
        
        var min = 1001
        var idx = -1
        
        for i in 0 ..< infoBox.count {
            
            // 距離を取得する
            infoBox[i].distance = calcDistance(infoBox[i].lat, lon: infoBox[i].lon, uLat: userLat, uLon: userLon)
            
            // 1000m以内の場所のタグは表示する
            if infoBox[i].distance <= 1000 {
                
                // 方角を取得する
                infoBox[i].direction = getGeoDirection(infoBox[i].lat, tLon: infoBox[i].lon)
                
                tagDisplay(i, imageBox: &infoImageBox[i], tDir: infoBox[i].direction, tDis: infoBox[i].distance, compass: newHeading.magneticHeading, inforType: infoBox[i].inforType)
            }
        }
        
        
        for i in 0 ..< warnBox.count {
            
            if warnBox[i].inforType == kWarn {
                
                // 距離を取得する
                warnBox[i].distance = calcDistance(warnBox[i].lat, lon: warnBox[i].lon, uLat: userLat, uLon: userLon)
                
                // 1000m以内の場所のタグは表示する
                if warnBox[i].distance <= 1000 {
                    
                    // 方角を取得する
                    warnBox[i].direction = getGeoDirection(warnBox[i].lat, tLon: warnBox[i].lon)
                    
                    // 警告タグの画像を設定する
                    if warnBox[i].inforType == kWarn {
                        switch warnBox[i].riskType {
                        case 0: warnImage = UIImage(named: "icon_warn0.png")! // 火災
                        case 1: warnImage = UIImage(named: "icon_warn1.png")! // 浸水
                        case 2: warnImage = UIImage(named: "icon_warn2.png")! // 土砂崩れ
                        case 3: warnImage = UIImage(named: "icon_warn3.png")! // 通行止め
                        default: warnImage = airtagImage; break
                        }
                        
                        if min >= warnBox[i].distance {
                            min = warnBox[i].distance
                            idx = i
                        }
                    }
                    
                    tagDisplay(i, imageBox: &warnImageBox[i], tDir: warnBox[i].direction, tDis: warnBox[i].distance, compass: newHeading.magneticHeading, inforType: warnBox[i].inforType)
                }
                
            }
        }
        
        
        // コンパスの向きを調整する
        compassRotate(newHeading.magneticHeading)
        
        // 災害発生時
        if idx != -1 {
            warningDisplay(idx, distance: warnBox[idx].distance, range: Int(circleRadius[idx]), warnState: &warnState, message1: warnBox[idx].message1, message2: warnBox[idx].message2)
        }
        
    }
    
    
    
    /* メモリ不足時に呼び出される */
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
    
    
    // MARK: プライベート関数
    
    // タグ初期化
    func initBox() {
        
        // 情報タグの初期化
        for _ in 0 ..< infoBox.count {
            infoImageBox.append(UIImageView(frame: CGRect.init(x: kZero, y: kZero, width: kZero, height: kZero)))
        }
        
        // 情報タグの初期化
        for _ in 0 ..< warnBox.count {
            warnImageBox.append(UIImageView(frame: CGRect.init(x: kZero, y: kZero, width: kZero, height: kZero)))
        }
    }
    
    // カメラの初期化
    func initCamera() {
        
        // AVキャプチャセッション
        // (AVFoundationにおけるキャプチャ入出力を管理するクラス)
        avSession = AVCaptureSession()
        
        if avSession.canSetSessionPreset(AVCaptureSessionPresetPhoto) {
            avSession.beginConfiguration()
            
            avSession.sessionPreset = AVCaptureSessionPresetPhoto
            
            avSession.commitConfiguration()
        }
        
        let devices = AVCaptureDevice.devices()
        
        for capDevice in devices {
            if capDevice.position == AVCaptureDevicePosition.Back {
                // 背面カメラを取得
                avDevice = capDevice as? AVCaptureDevice
            }
        }
        
        if avDevice != nil {
            
            do {
                avInput = try AVCaptureDeviceInput.init(device: avDevice!)
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
                
                let capVideoLayer: AVCaptureVideoPreviewLayer = AVCaptureVideoPreviewLayer.init(session:avSession)
                capVideoLayer.frame = self.view.bounds
                capVideoLayer.videoGravity = AVLayerVideoGravityResizeAspectFill
                
                self.previewLayer = capVideoLayer
                
                self.view.layer.addSublayer(capVideoLayer)
                
                avSession.startRunning()
                
            }
        }
    }
    
    
    /* 画面を閉じる */
    func close() {
        self.navigationController?.popViewControllerAnimated(true)
    }
    
    
    // 災害地範囲内に入ったときに画面の色を変化させる
    func warningDisplay(index: Int, distance: Int, range: Int, inout warnState: String, message1: String, message2: String) {
        
        // 災害範囲内に侵入した時
        if distance - range <= 0 {
            
            if warnState != warningState.inst.rawValue {
                
                // 災害が「火災」または「土砂崩れ」のとき
                if warnBox[index].riskType == 0 || warnBox[index].riskType == 3 {
                    warningView.frame = CGRect.init(x: kZero, y: kZero, width: CGFloat(screenWidth), height: CGFloat(screenHeight))
                    
                    switch warnBox[index].riskType {
                    case 0: warningView.backgroundColor = UIColor(red: 0.545, green: 0.020, blue: 0.220, alpha: 0.5)
                    case 3: warningView.backgroundColor = UIColor(red: 0.800, green: 0.400, blue: 0.000, alpha: 0.5)
                    default: warningView.backgroundColor = UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: 0.5)
                    }
                    
                // 災害が「浸水」または「落橋」のとき
                } else if warnBox[index].riskType == 1 || warnBox[index].riskType == 2 {
                    
                    warningView.frame = CGRect.init(x: kZero, y: CGFloat(screenHeight * 3 / 4), width: CGFloat(screenWidth), height: CGFloat(screenHeight / 4))
                    
                    switch warnBox[index].riskType {
                    case 1: warningView.backgroundColor = UIColor(red: 0.000, green: 0.400, blue: 1.000, alpha: 0.5)
                    case 2: warningView.backgroundColor = UIColor(red: 1.000, green: 0.945, blue: 0.024, alpha: 0.5)
                    default: warningView.backgroundColor = UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: 0.5)
                    }
                }
                                
                warningMessage.text = message2 // 警告メッセージ
                
                // 一定時間後に警告メッセージを消す
                runAfterDelay(10.0) {
                    warningMessage.removeFromSuperview()
                }
                
                view.addSubview(warningMessage)
                warnState = warningState.near.rawValue
                
            }
            
        } else if distance - range > 0 && distance - range <= 500 {
            
            if warnState != warningState.near.rawValue  {
                
                warningMessage.text = message1 // 警告メッセージ
                
                // 一定時間後に警告メッセージを消す
                runAfterDelay(10.0) {
                    warningMessage.removeFromSuperview()
                }
                
                warningView.alpha = 0 // alphaを直接操作する
                view.addSubview(warningMessage)
                warnState = warningState.inst.rawValue
            }
            
            // 安全圏にいる時
        } else {
            
            if warnState != warningState.safe.rawValue  {
                warningView.alpha = 0 // alphaを直接操作する
                warningMessage.removeFromSuperview()
                warnState = warningState.safe.rawValue
            }
        }
        
    }
    
    
    
    //コンパス
    func compassRotate(compass: Double) {
        
        // radianで回転角度を指定する.
        let angle: CGFloat = CGFloat((compass * M_PI) / 180.0)
        
        if isExistCom == false {
            
            compassView = UIImageView(frame: CGRect(x: kButPos + kButSize, y: kButSize + kButPos, width: kButSize, height: kButSize))
            
            // UIImageViewに画像を設定する.
            compassView.image = imgCompass
            
            // 回転用のアフィン行列を生成する.
            compassView.transform = CGAffineTransformMakeRotation(angle)
            
            // Viewに張りつけ.
            view.addSubview(compassView)
            
            isExistCom = true
            
        } else {
            
            // 回転用のアフィン行列を生成する.
            compassView.transform = CGAffineTransformMakeRotation(angle)
            
        }
    }
    
    
    // 方角を測る
    func getGeoDirection(tLat: Double, tLon: Double) -> Double {
        
        // 緯度経度 lat1, lng1 の点を出発として、緯度経度 lat2, lng2 への方位
        // 北を０度で右回りの角度0～360度
        let Y = cos(tLon * M_PI / 180) * sin(tLat * M_PI / 180 - userLat * M_PI / 180)
        let X = cos(userLon * M_PI / 180) * sin(tLon * M_PI / 180) - sin(userLon * M_PI / 180) * cos(tLon * M_PI / 180) * cos(tLat * M_PI / 180 - userLat * M_PI / 180)
        
        var dirE0 = 180 * atan2(Y, X) / M_PI // 東向きが０度の方向
        if dirE0 < 0 {
            dirE0 = dirE0 + 360 //0～360 にする。
        }
        
        return (dirE0 + 90) % 360 // (dirE0+90)÷360の余りを出力 北向きが0度の方向
    }
    
    
    // タグを表示する(タグの表示方法が変わるかもしれないので、定数設定はしないでおく)
    func tagDisplay(index: Int, inout imageBox: UIImageView, tDir: Double, tDis: Int, compass: Double, inforType: String) {
        let angle = tDir - compass
        
        var x = 0.0
        var y = screenHeight / 2
        
        var sizeW = 0.0 // タグの横幅
        var sizeH = 0.0 // タグの縦幅
        
        var labelImg: UIImage!
        
        if count > 0 {
            imageBox.removeFromSuperview()
        }
        
        // カメラの視野に対象が入ったら・・・
        if (angle >= 0 && angle <= 36.5) || (angle >= -36.5 && angle <= 0) {
            
            if tDis >= 0 && tDis < 200 {
                
                sizeW = Double(screenWidth / 3)
                sizeH = Double(screenWidth / 3)
                y = screenHeight * Double(tDis) / 500
                
            } else if tDis >= 200 && tDis < 800 {
                
                sizeW = Double(screenWidth) * (50 / Double(tDis))
                sizeH = Double(screenWidth) * (50 / Double(tDis))
                y = screenHeight * Double(tDis) / 1000
                
                
            } else {
                
                sizeW = Double(screenWidth / 8)
                sizeH = Double(screenWidth / 8)
                y = screenHeight * Double(tDis) / 1200
                
            }
            
            if inforType == kInfo {
                labelImg = makeLabel(infoBox[index].pinNum, inforType: inforType) // UILabelをUIImageに変換する
                imageBox = UIImageView(frame: CGRect.init(x: kZero, y: kZero, width: CGFloat(sizeW), height: CGFloat(sizeH)))
                imageBox.image = getPinImage(labelImg, inforType: infoBox[index].inforType)
                
            } else if inforType == kWarn {
                labelImg = makeLabel(warnBox[index].pinNum, inforType: inforType) // UILabelをUIImageに変換する
                imageBox = UIImageView(frame: CGRect.init(x: kZero, y: kZero, width: CGFloat(sizeW), height: CGFloat(sizeH)))
                imageBox.image = getPinImage(labelImg, inforType: warnBox[index].inforType)
            }
            
            
            // 画像の表示する座標を指定する.
            x = screenWidth / 2 + screenWidth * (angle / 36.5)
            imageBox.layer.position = CGPoint(x: x, y: y)
            
            
            // タグをタップしたときのイベント
            imageBox.userInteractionEnabled = true
            imageBox.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(ViewARCamera.imageTapped(_:))))
            
            count = count + 1
            
            // UIImageViewをViewに追加する.
            view.addSubview(imageBox) // 画像表示用
        }
    }
    
    
    /* タグをタップしたときのイベント(詳細画面に遷移する) */
    internal func imageTapped(sender: UIButton) {
        let detail = ViewDetail()
        self.navigationController?.pushViewController(detail, animated: true)
    }
    
    
    
    /* カメラの向きを変える */
    private func updatePreviewLayer(layer: AVCaptureConnection, orientation: AVCaptureVideoOrientation) {
        layer.videoOrientation = orientation
        previewLayer!.frame = self.view.bounds
    }
    
    
    
    /* 携帯電話の向きに応じてカメラの向きを変える */
    override func viewDidLayoutSubviews() {
        super.viewDidLayoutSubviews()
        
        if let connection = self.previewLayer?.connection {
            let currentDevice: UIDevice = UIDevice.currentDevice()
            
            let orientation: UIDeviceOrientation = currentDevice.orientation
            
            let previewLayerConnection: AVCaptureConnection = connection
            
            if previewLayerConnection.supportsVideoOrientation {
                
                switch orientation {
                case .Portrait:
                    updatePreviewLayer(previewLayerConnection, orientation: .LandscapeLeft )
                    break
                    
                case .LandscapeRight:
                    updatePreviewLayer(previewLayerConnection, orientation: .LandscapeLeft)
                    break
                    
                case .LandscapeLeft:
                    updatePreviewLayer(previewLayerConnection, orientation: .LandscapeRight)
                    break
                    
                case .PortraitUpsideDown:
                    updatePreviewLayer(previewLayerConnection, orientation: .PortraitUpsideDown)
                    break
                    
                default:
                    updatePreviewLayer(previewLayerConnection, orientation: .LandscapeLeft)
                    break
                }
            }
        }
    }
    
    
    /* ボタンクリックしたときのイベント(ViewMapに遷移する) */
    internal func clickMap(sender: UIButton) {
        let map = ViewMap()
        self.navigationController?.pushViewController(map, animated: true)
    }
    
}
