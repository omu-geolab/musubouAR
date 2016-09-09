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
    
    var distanceInt = 0 // 現在地〜災害地の距離
    var direction = 0.0 // カメラ〜被災地の方角
    
    var count = 0 // タグを表示するときに、はじめはremoveしないためのもの
    
    // 情報タグ
    var infoImageBox: [UIImageView] = [] // 情報タグの画像
    
    // コンパス
    let imgCompass = UIImage(named: "icon_compass.png")! // 画像設定
    var compassView: UIImageView! // コンパスのビュー
    var isExistCom = false // コンパスの表示制御用
    
    // 警告
    var warningView: UIView!
    var warnCount = 0 // 警告の表示制御用
    var warn = "津波" // 警告の種類
    //var tunami = 0 // 津波の浸水度
    
    
    // 災害の発生時刻の取得
    var calendar: NSCalendar!
    var startDate: NSDate!
    var time = 0.0
    var timer: NSTimer!
    var disa = false // 災害発生 → true
    
    var camZ = 0.0 // カメラの傾き(保留)
    
    //定数
    let updateLoc: Double = 1.0 // 1.0°動いたら更新する
    let mapPos: CGFloat = 5 // 地図ボタンの位置(x、y)
    let butSize: CGFloat = 100 // ボタンのサイズ(wid、hei)
    let comPos: CGFloat = 5 // 地図ボタンの位置(x、y)
    
    
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
        
        // 画面遷移のためのボタン
        let toMapBut = UIButton()
        toMapBut.frame = CGRect.init(x: kZero, y: kZero, width: butSize, height: butSize)
        let buttonImage: UIImage = UIImage(named: "icon_map.png")!
        toMapBut.setImage(buttonImage, forState: .Normal)
        toMapBut.layer.position = CGPoint(x: mapPos + butSize, y: self.view.bounds.height - mapPos - butSize)
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
        
        isExistCom = false             // コンパスのカウントの破棄
        count = 0                 // タグのカウントの破棄
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
        
        
        for i in 0 ..< annotationBox.count {
            
            // 距離を取得する
            annotationBox[i].distance = calcDistance(annotationBox[i].lat, lon: annotationBox[i].lon, uLat: userLat, uLon: userLon)
            
            // 1000m以内の場所のタグは表示する
            if annotationBox[i].distance <= 1000 {
                
                // 方角を取得する
                annotationBox[i].direction = getGeoDirection(annotationBox[i].lat, tLon: annotationBox[i].lon)
                
                // 警告タグの画像を設定する
                if annotationBox[i].inforType == kWarn {
                    switch annotationBox[i].riskType {
                    case 0: warnImage = UIImage(named: "icon_warn0.png")! // 火災
                    case 1: warnImage = UIImage(named: "icon_warn1.png")! // 浸水
                    case 2: warnImage = UIImage(named: "icon_warn2.png")! // 土砂崩れ
                    case 3: warnImage = UIImage(named: "icon_warn3.png")! // 通行止め
                    default: warnImage = airtagImage; break
                    }
                }
                
                tagDisplay(i, imageBox: &infoImageBox, tDir: annotationBox[i].direction, tDis: annotationBox[i].distance, compass: newHeading.magneticHeading)
            }
            
        }
        
        compassRotate(newHeading.magneticHeading)
        
        // 災害発生時
        if disa == true {
            disaster()
            disa = false
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
        for _ in 0 ..< annotationBox.count {
            infoImageBox.append(UIImageView(frame: CGRect.init(x: kZero, y: kZero, width: kZero, height: kZero)))
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
    
    
    
    
    func warningTimer() {
        time = NSDate().timeIntervalSinceDate(startDate) // 現在時刻と開始時刻の差
        warningDisplay()
    }
    
    
    func disaster() {
        timer = NSTimer.scheduledTimerWithTimeInterval(1.0,
                                                       target: self,
                                                       selector: #selector(ViewARCamera.warningTimer),
                                                       userInfo: nil,
                                                       repeats: true)
    }
    
    
    
    
    // 災害地範囲内に入ったときに画面の色を変化させる
    func warningDisplay() {
        if warnCount > 0 {
            warningView.removeFromSuperview()
        }
        
        if warn == "津波" {
            warningView = UIView(frame: CGRect.init(x: kZero, y: CGFloat(screenHeight) - CGFloat(time), width: CGFloat(screenWidth), height: CGFloat(time)))
            warningView.backgroundColor = UIColor.blueColor()
            
        } else if warn == "火災" {
            warningView = UIView(frame: CGRect.init(x: kZero, y: kZero, width: CGFloat(screenWidth), height: CGFloat(screenHeight)))
            warningView.backgroundColor = UIColor.redColor()
        }
        
        warningView.alpha = 0.3 // alphaを直接操作する
        view.addSubview(warningView)
        warnCount = warnCount + 1
        
    }
    
    
    
    
    //コンパス
    func compassRotate(compass: Double) {
        
        // radianで回転角度を指定する.
        let angle: CGFloat = CGFloat((compass * M_PI) / 180.0)
        
        if isExistCom == false {
            
            compassView = UIImageView(frame: CGRect(x: comPos+butSize, y: butSize+comPos, width: butSize, height: butSize))
            
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
    func tagDisplay(index: Int, inout imageBox: [UIImageView], tDir: Double, tDis: Int, compass: Double) {
        let angle = tDir - compass
        
        var x = 0.0
        var y = screenHeight / 2
        
        var sizeW = 0.0 // タグの横幅
        var sizeH = 0.0 // タグの縦幅
        
        if count > 0 {
            imageBox[index].removeFromSuperview()
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
            
            let labelImg = makeLabel(annotationBox[index].pinNum) // UILabelをUIImageに変換する
            imageBox[index] = UIImageView(frame: CGRect.init(x: kZero, y: kZero, width: CGFloat(sizeW), height: CGFloat(sizeH)))
            imageBox[index].image = getPinImage(labelImg, inforType: annotationBox[index].inforType)
            
            
            // 画像の表示する座標を指定する.
            x = screenWidth / 2 + screenWidth * (angle / 36.5)
            imageBox[index].layer.position = CGPoint(x: x, y: y)
            
            
            // タグをタップしたときのイベント
            imageBox[index].userInteractionEnabled = true
            imageBox[index].addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(ViewARCamera.imageTapped(_:))))
            
            count = count + 1
            
            // UIImageViewをViewに追加する.
            view.addSubview(imageBox[index]) // 画像表示用
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
