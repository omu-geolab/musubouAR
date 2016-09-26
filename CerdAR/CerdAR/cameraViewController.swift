//
//  arCameraViewController.swift
//  CerdAR
//
//  Copyright (c) 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
//

import Foundation
import UIKit
import AVFoundation
import CoreLocation
import CoreMotion


class cameraViewController: UIViewController, UIGestureRecognizerDelegate, CLLocationManagerDelegate, detailViewDelegate {
    
    var avSession: AVCaptureSession! // AVキャプチャセッション
    var avDevice: AVCaptureDevice! // AVキャプチャデバイス
    var avInput: AVCaptureInput! // AVキャプチャデバイスインプット
    var avOutput: AVCaptureStillImageOutput! // AVキャプチャアウトプット
    var previewLayer: AVCaptureVideoPreviewLayer? // 画面表示用レイヤー
    
    var detailview: detailView?
    
    var userLat: CLLocationDegrees = 0   // 緯度
    var userLon: CLLocationDegrees = 0 // 経度
    
    var locationManager: CLLocationManager! // 現在地の取得
    
    var count = 0 // タグを表示するときに、はじめはremoveしないためのもの
    
    // コンパス
    let imgCompass = UIImage(named: "icon_compass.png")! // 画像設定
    var compassView: UIImageView! // コンパスのビュー
    var isExistCom = false // コンパスの表示制御用
    
    // 警告
    var warningView = UIView(frame: CGRect(x: 0.0, y: 0.0, width: screenWidth, height: screenHeight))
    var warnState = warningState.safe.rawValue
    
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
        
        self.navigationController?.setNavigationBarHidden(true, animated: true)
        
        calendar = NSCalendar(identifier: NSCalendarIdentifierGregorian)!
        startDate = calendar.dateWithEra(1, year: 2016, month: 8, day: 10, hour: 14, minute: 39, second: 0, nanosecond: 0)! // 災害発生時刻
        
        // 現在地の取得を開始
        if CLLocationManager.locationServicesEnabled() {
            locationManager = CLLocationManager()
            locationManager.delegate = self
            locationManager.headingFilter = updateLoc
            locationManager.headingOrientation = .Portrait
            locationManager.startUpdatingLocation()
            locationManager.startUpdatingHeading()
        }
        
        warnState = warningState.safe.rawValue
        
        //カメラ起動
        initCamera()

        //地図切替ボタン
        let toMap_Button = UIButton()
        let buttonImage: UIImage = UIImage(named: "icon_map.png")!
        toMap_Button.frame = CGRect(x: 0.0, y: 0.0, width: buttonImage.size.width / 4, height: buttonImage.size.height / 4)
        toMap_Button.setImage(buttonImage, forState: .Normal)
        toMap_Button.layer.position = CGPoint(x: 55.0, y: self.view.bounds.height - 55.0)
        warningView.addSubview(toMap_Button)
        toMap_Button.addTarget(self, action: #selector(cameraViewController.clickMap(_:)), forControlEvents: .TouchUpInside)
        
        //コンパス
        compassView = UIImageView(frame: CGRect(x: 50.0, y: 50.0, width: imgCompass.size.width / 4, height: imgCompass.size.height / 4))
        compassView.image = imgCompass
        warningView.addSubview(compassView)
        
        //災害タグ
        view.addSubview(warningView)

    }
    
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
        
        displayMode = mode.cam.rawValue
        
        // カメラの開始
        avSession.startRunning()
        
        // 情報タグの初期化
        for _ in 0 ..< infoBox.count {
            infoImageBox.append(UIImageView(frame: CGRect(x: 0.0, y: 0.0, width: 0.0, height: 0.0)))
        }
        
        // 警告タグの初期化
        for _ in 0 ..< warnBox.count {
            warnImageBox.append(UIImageView(frame: CGRect(x: 0.0, y: 0.0, width: 0.0, height: 0.0)))
        }
    }
    
    override func viewDidAppear(animated: Bool) {
        super.viewDidAppear(animated)
    }
    
    override func viewWillDisappear(animated: Bool) {
        super.viewWillDisappear(animated)
    }
    
    override func viewDidDisappear(animated: Bool) {
        super.viewDidDisappear(animated)
        
        // カメラの停止
        avSession.stopRunning()
        
//        for output in self.avSession.outputs {
//            self.avSession.removeOutput(output as? AVCaptureOutput)
//        }
//        
//        for input in self.avSession.inputs {
//            self.avSession.removeInput(input as? AVCaptureInput)
//        }
//        
//        self.avOutput = nil
//        self.avInput = nil
//        self.avDevice = nil
//        self.avSession = nil
//        
//        compassView.removeFromSuperview() // コンパスの破棄
        
        isExistCom = false // コンパスのカウントの破棄
        count = 0 // タグのカウントの破棄
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
    
    // MARK: CLLocationManagerDelegate
    // iPhone の位置情報が更新されるたびに、デリゲートが呼ばれる
    func locationManager(manager: CLLocationManager, didUpdateToLocation newLocation: CLLocation, fromLocation oldLocation: CLLocation) {
        
        userLat = newLocation.coordinate.latitude   // 現在地の緯度
        userLon = newLocation.coordinate.longitude  // 現在地の経度
        
    }
    
    /* カメラの向きが変わるたびに呼ばれる */
    func locationManager(manager: CLLocationManager, didUpdateHeading newHeading: CLHeading) {
        
        //print("磁北:", newHeading.magneticHeading) // 北：0、 東；90、 南：180、 西：270 //こちらが必要？ スマホの向き
        //print("真北:", newHeading.trueHeading) // 北：0、 東；90、 南：180、 西：270
        
        var min = 1001
        var idx = -1
        
        for i in 0 ..< infoBox.count {
            
            // 距離を取得する
            infoBox[i].distance = calcDistance(infoBox[i].lat, lon: infoBox[i].lon, uLat: userLat, uLon: userLon)
            
            // 1000m以内の場所のタグは表示する
            if infoBox[i].distance <= 1000 {
                
                // 方角を取得する
                infoBox[i].direction = getGeoDirection(infoBox[i].lat, tLon: infoBox[i].lon)
                
                tagDisplay(i, imageBox: &infoImageBox, tDir: infoBox[i].direction, tDis: infoBox[i].distance, compass: newHeading.magneticHeading, inforType: infoBox[i].inforType)
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
                        case 0:
                             // 火災
                            warnImage = UIImage(named: "icon_warn0.png")!
                        case 1:
                             // 浸水
                            warnImage = UIImage(named: "icon_warn1.png")!
                        case 2:
                             // 土砂崩れ
                            warnImage = UIImage(named: "icon_warn2.png")!
                        case 3:
                             // 通行止め
                            warnImage = UIImage(named: "icon_warn3.png")!
                        default:
                            warnImage = UIImage(named: "icon_airtag.png")!
                            break
                        }
                        
                        if min >= warnBox[i].distance {
                            min = warnBox[i].distance
                            idx = i
                        }
                    }
                    
                    tagDisplay(i, imageBox: &warnImageBox, tDir: warnBox[i].direction, tDis: warnBox[i].distance, compass: newHeading.magneticHeading, inforType: warnBox[i].inforType)
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
    
    // MARK: プライベート関数
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
//                avSession.startRunning()
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
                    warningView.frame = CGRect(x: 0.0, y: 0.0, width: screenWidth, height: screenHeight)
                    
                    switch warnBox[index].riskType {
                    case 0:
                        warningView.backgroundColor = UIColor(red: 1.000, green: 0.000, blue: 0.000, alpha: 0.7)
                    case 3:
                        warningView.backgroundColor = UIColor(red: 0.800, green: 0.400, blue: 0.000, alpha: 0.5)
                    default:
                        warningView.backgroundColor = UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: 0.7)
                        break
                    }
                    
                // 災害が「浸水」または「落橋」のとき
                } else if warnBox[index].riskType == 1 || warnBox[index].riskType == 2 {
                    
                    warningView.frame = CGRect(x: 0.0, y: screenHeight * 3 / 4, width: screenWidth, height: screenHeight / 4)
                    
                    switch warnBox[index].riskType {
                    case 1:
                        warningView.backgroundColor = UIColor(red: 0.000, green: 0.400, blue: 1.000, alpha: 0.7)
                    case 2:
                        warningView.backgroundColor = UIColor(red: 1.000, green: 0.945, blue: 0.024, alpha: 0.7)
                    default:
                        warningView.backgroundColor = UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: 0.7)
                        break
                    }
                }
                
                warningMessage.text = message2 // 警告メッセージ
                
                // 一定時間後に警告メッセージを消す
                runAfterDelay(10.0) {
                    warningMessage.removeFromSuperview()
                }
                
                view.addSubview(warningMessage)
                warnState = warningState.inst.rawValue
            }
            
        } else if distance - range > 0 && distance - range <= 500 {
            
            if warnState != warningState.near.rawValue {
                
                warningMessage.text = message1 // 警告メッセージ
                
                // 一定時間後に警告メッセージを消す
                runAfterDelay(10.0) {
                    warningMessage.removeFromSuperview()
                }
                
                warningView.alpha = 0 // alphaを直接操作する
                view.addSubview(warningMessage)
                warnState = warningState.near.rawValue
            }
            
            // 安全圏にいる時
        } else {
            
            if warnState != warningState.safe.rawValue {
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
            
//            compassView = UIImageView(frame: CGRect(x: 50.0, y: 50.0, width: imgCompass.size.width / 4, height: imgCompass.size.height / 4))
            
            // UIImageViewに画像を設定する.
//            compassView.image = imgCompass
            
            // 回転用のアフィン行列を生成する.
            compassView.transform = CGAffineTransformMakeRotation(angle)
            
            // Viewに張りつけ.
//            view.addSubview(compassView)
            
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
    func tagDisplay(index: Int, inout imageBox: [UIImageView], tDir: Double, tDis: Int, compass: Double, inforType: String) {
        let angle = tDir - compass
        
        var x = 0.0
        var y = screenHeight / 2
        
        var sizeW = 0.0 // タグの横幅
        var sizeH = 0.0 // タグの縦幅
        
        var labelImg: UIImage!
        
        if count > 0 {
            imageBox[index].removeFromSuperview()
        }
        
        // カメラの視野に対象が入ったら・・・
        if (angle >= 0 && angle <= 36.5) || (angle >= -36.5 && angle <= 0) {
            
            if tDis >= 0 && tDis < 200 {
                
                sizeW = Double(screenWidth / 3)
                sizeH = Double(screenWidth / 3)
                y = screenHeight * CGFloat(tDis) / 500
                
            } else if tDis >= 200 && tDis < 800 {
                
                sizeW = Double(screenWidth) * (50 / Double(tDis))
                sizeH = Double(screenWidth) * (50 / Double(tDis))
                y = screenHeight * CGFloat(tDis) / 1000
                
                
            } else {
                
                sizeW = Double(screenWidth / 8)
                sizeH = Double(screenWidth / 8)
                y = screenHeight * CGFloat(tDis) / 1200
                
            }
            
            y = screenHeight / 2
            
            if inforType == kInfo {
                labelImg = makeLabel(infoBox[index].pinNum, inforType: inforType) // UILabelをUIImageに変換する
                imageBox[index] = UIImageView(frame: CGRect(x: 0.0, y: 0.0, width: CGFloat(sizeW), height: CGFloat(sizeH)))
                imageBox[index].image = getPinImage(labelImg, inforType: infoBox[index].inforType)
                imageBox[index].tag = index // 情報は0以上からで判断
                
            } else if inforType == kWarn {
                labelImg = makeLabel(warnBox[index].pinNum, inforType: inforType) // UILabelをUIImageに変換する
                imageBox[index] = UIImageView(frame: CGRect(x: 0.0, y: 0.0, width: CGFloat(sizeW), height: CGFloat(sizeH)))
                imageBox[index].image = getPinImage(labelImg, inforType: warnBox[index].inforType)
                imageBox[index].tag = (-1) + index * (-1) // 警告は-1以下からで判断 あとで+1してインデックス番号に合わせる
            }
            
            // 画像の表示する座標を指定する.
            x = Double(screenWidth) / 2 + Double(screenWidth) * (angle / 36.5)
            imageBox[index].layer.position = CGPoint(x: CGFloat(x), y: y)
            
            // タグをタップしたときのイベント
            imageBox[index].userInteractionEnabled = true
            let gesture = UITapGestureRecognizer(target:self, action: #selector(cameraViewController.didClickImageView(_:)))
            imageBox[index].addGestureRecognizer(gesture)
            
            count = count + 1
            
            // UIImageViewをViewに追加する.
            view.addSubview(imageBox[index]) // 画像表示用
            view.bringSubviewToFront(backgroundView)
        }
    }
    
    func didClickImageView(recognizer: UIGestureRecognizer) {
        
//        view.addSubview(cannotTouchView)
        
        if let imageView = recognizer.view as? UIImageView {
            
            if imageView.tag >= 0 {
                pinData = infoBox[imageView.tag]
                
            } else if imageView.tag < 0 {
                pinData = warnBox[(-1) + imageView.tag * (-1)]
            }

            detailview = detailView(frame: CGRect(x: screenWidth * 0.1, y: screenWidth * 0.1, width: screenWidth * 0.8, height: screenHeight * 0.8))
            detailview!.delegate = self
            view.addSubview(detailview!)
        }
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
                    updatePreviewLayer(previewLayerConnection, orientation: .LandscapeLeft)
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
    
    /* ボタンクリックしたときのイベント(mapViewControllerに遷移する) */
    func clickMap(sender: UIButton) {
        self.navigationController?.popViewControllerAnimated(true)
    }
    
    // MARK: detailViewDelegate
    func detailViewFinish() {
        detailview?.delegate = nil
        detailview?.removeFromSuperview()
    }
    
}
