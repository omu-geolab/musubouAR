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
    
    // 警告
    var warningView = UIView(frame: CGRect(x: 0.0, y: 0.0, width: screenWidth, height: screenHeight))
    var warnState = warningState.safe.rawValue // 現在ユーザーは災害からどの位置にいるか(安全・付近・侵入)
    
    //    var camZ = 0.0 // カメラの傾き(保留)
    //    var motionManager = CMMotionManager()
    
    //定数
    let updateLoc = 1.0 // 1.0°動いたら更新する
    
    // MARK: ライフサイクル
    override func viewDidLoad() {
        print("viewdidload")
        super.viewDidLoad()
        
        self.navigationController?.setNavigationBarHidden(true, animated: true)
        
        warnState = warningState.safe.rawValue
        
        // カメラ起動
        initCamera()
        
        // 地図切替ボタン
        let toMap_Button = UIButton()
        let buttonImage: UIImage = UIImage(named: "icon_map.png")!
        toMap_Button.frame = CGRect(x: 0.0, y: 0.0, width: buttonImage.size.width / 4, height: buttonImage.size.height / 4)
        toMap_Button.setImage(buttonImage, for: UIControlState())
        toMap_Button.layer.position = CGPoint(x: 55.0, y: self.view.bounds.height - 55.0)
        warningView.addSubview(toMap_Button)
        toMap_Button.addTarget(self, action: #selector(cameraViewController.onClick_map(_:)), for: .touchUpInside)
        
        // コンパス
        compassView = UIImageView(frame: CGRect(x: 50.0, y: 50.0, width: imgCompass.size.width / 4, height: imgCompass.size.height / 4))
        compassView.image = imgCompass
        warningView.addSubview(compassView)
        
        // 警告モード
        view.addSubview(warningView)
    }
    
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        print("viewWillAppear")
        
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
        
        
        // 現在地の取得を開始
        if CLLocationManager.locationServicesEnabled() {
            locationManager = CLLocationManager()
            locationManager.delegate = self
            locationManager.headingFilter = updateLoc
            locationManager.headingOrientation = .portrait
            locationManager.startUpdatingLocation()
            locationManager.startUpdatingHeading()
        }
        
        
        
        //        // 更新周期を設定.
        //        motionManager.accelerometerUpdateInterval = 0.25
        //
        //        // 加速度の取得を開始.
        //        motionManager.startAccelerometerUpdates(to: OperationQueue.main, withHandler: {(accelerometerData, error) in
        //            if let e = error {
        //                print(e.localizedDescription)
        //                return
        //            }
        //            guard let data = accelerometerData else {
        //                return
        //            }
        //
        //            print("x=\(data.acceleration.x)")
        //
        //        })
        
        
        
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
    }
    
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
    }
    
    override func viewDidDisappear(_ animated: Bool) {
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
        
        count = 0 // タグのカウントの破棄
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
     * 1000m以内のものの方角を取得し、tagDisplay()を発火させ、画面にタグ画像を表示させる
     * また、ユーザーが災害範囲に近づいたり、侵入したりしたとき、
     * warningDisplay()を発火させ、警告モードにし、警告メッセージを表示させる
     */
    func locationManager(_ manager: CLLocationManager, didUpdateHeading newHeading: CLHeading) {
        
        var min = 1001 // 現在地から一番近い災害までの距離
        var idx = -1 // その災害を格納している配列のインデックス
        
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
            
            if warnBox[i].stop.compare(Date()) == ComparisonResult.orderedDescending && Date().compare(warnBox[i].start) == ComparisonResult.orderedDescending {
                
                // 距離を取得する
                warnBox[i].distance = calcDistance(warnBox[i].lat, lon: warnBox[i].lon, uLat: userLat, uLon: userLon)
                
                // 1000m以内の場所のタグは表示する
                if warnBox[i].distance <= 1000 {
                    
                    // 方角を取得する
                    warnBox[i].direction = getGeoDirection(warnBox[i].lat, tLon: warnBox[i].lon)
                    
                    // 警告タグの画像を設定する
                    switch warnBox[i].riskType {
                    case 0: // 火災
                        warnImage = UIImage(named: "icon_warn0.png")!
                    case 1: // 浸水
                        warnImage = UIImage(named: "icon_warn1.png")!
                    case 2: // 土砂崩れ
                        warnImage = UIImage(named: "icon_warn2.png")!
                    case 3: // 道路閉塞
                        warnImage = UIImage(named: "icon_warn3.png")!
                    default: // その他
                        warnImage = UIImage(named: "icon_infoTag.png")!
                        break
                    }
                    
                    // 現在地から災害までの距離
                    if min >= warnBox[i].distance {
                        min = warnBox[i].distance
                        idx = i
                    }
                    
                    // 画面にタグを表示する
                    tagDisplay(i, imageBox: &warnImageBox, tDir: warnBox[i].direction, tDis: warnBox[i].distance, compass: newHeading.magneticHeading, inforType: warnBox[i].inforType)
                }
                
            }
        }
        
        // コンパスの向きを調整する
        compassView.transform = CGAffineTransform(rotationAngle: CGFloat(-1 * newHeading.magneticHeading * M_PI) / 180)
        
        // 災害発生時、警告モードにし、警告メッセージを表示させる
        if idx != -1 {
            warningDisplay(idx, distance: warnBox[idx].distance, range: Int(circleRadius[idx]), warnState: &warnState, message1: warnBox[idx].message1, message2: warnBox[idx].message2)
        }
        
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
        
        // AVキャプチャセッション
        // (AVFoundationにおけるキャプチャ入出力を管理するクラス)
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
                //                avSession.startRunning()
            }
        }
    }
    
    
    /**
     * 災害範囲に近づいたり侵入したりすると、
     * 警告メッセージを出したり、警告モードにしたりする
     *
     * @param index warnBoxのインデックス
     * @param distance ユーザーの現在地から災害の中心点までの距離(m)
     * @param range 災害の範囲(半径(m))
     * @param warnState ユーザーが安全圏にいるか、被災地に近づいているか、侵入しているか
     * @param message1 ユーザーが災害範囲付近にいるときに出る警告メッセージ
     * @param message2 ユーザーが災害範囲内に侵入したときに出る警告メッセージ
     */
    func warningDisplay(_ index: Int, distance: Int, range: Int, warnState: inout String, message1: String, message2: String) {
        
        // 災害範囲内に侵入した時
        if distance - range <= 0 {
            
            if warnState != warningState.inst.rawValue {
                
                switch warnBox[index].riskType {
                    
                case 0: // 火災：赤色
                    warningView.frame = CGRect(x: 0.0, y: 0.0, width: screenWidth, height: screenHeight)
                    warningView.backgroundColor = UIColor(red: 1.000, green: 0.000, blue: 0.000, alpha: 0.7)
                    
                case 1: // 浸水：青色
                    warningView.frame = CGRect(x: 0.0, y: 0.0, width: screenWidth, height: screenHeight / 4)
                    warningView.backgroundColor = UIColor(red: 0.000, green: 0.400, blue: 1.000, alpha: 0.7)
                    
                case 2: // 土砂崩れ：茶色
                    warningView.frame = CGRect(x: 0.0, y: 0.0, width: screenWidth, height: screenHeight)
                    warningView.backgroundColor = UIColor(red: 0.800, green: 0.400, blue: 0.000, alpha: 0.5)
                    
                case 3, 4, 5, 6: // 道路閉塞：黄色
                    warningView.frame = CGRect(x: 0.0, y: 0.0, width: screenWidth, height: screenHeight / 4)
                    warningView.backgroundColor = UIColor(red: 1.000, green: 0.945, blue: 0.024, alpha: 0.7)
                    
                default: // その他の災害：緑色
                    warningView.frame = CGRect(x: 0.0, y: 0.0, width: screenWidth, height: screenHeight)
                    warningView.backgroundColor = UIColor(red: 0.200, green: 1.000, blue: 0.384, alpha: 0.7)
                    break
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
        let angle = tDir - compass
        
        var x = 0.0 // タグの表示位置(x軸)
        var y = screenHeight / 2 // タグの表示位置(y軸)
        
        var size = 0.0
        
        var labelImg: UIImage!
        
        if count > 0 {
            imageBox[index].removeFromSuperview()
        }
        
        // カメラの視野に対象が入ったら、タグを表示させる
        if (angle >= 0 && angle <= 36.5) || (angle >= -36.5 && angle <= 0) {
            
            size = Double(screenHeight / 8) + Double(screenHeight / 4) * Double(1000 - tDis)/1000
            
            y = screenHeight / 2
            
            // 情報タグを生成する
            if inforType == kInfo {
                
                imageBox[index] = UIImageView(frame: CGRect(x: 0.0, y: 0.0, width: CGFloat(size), height: CGFloat(size)))
                if infoBox[index].picType != "" {
                    labelImg = makeLabel(infoBox[index].pinNum, inforType: inforType) // UILabelをUIImageに変換する
                    imageBox[index].image = getPinImage(labelImg, inforType: infoBox[index].inforType)
                } else {
                    imageBox[index].image = UIImage(named: infoBox[index].icon)!
                }
                imageBox[index].tag = index // 情報は0以上からで判断
                
                // 警告タグを生成する
            } else if warnBox[index].stop.compare(Date()) == ComparisonResult.orderedDescending && Date().compare(warnBox[index].start) == ComparisonResult.orderedDescending {
                labelImg = makeLabel(warnBox[index].pinNum, inforType: inforType) // UILabelをUIImageに変換する
                imageBox[index] = UIImageView(frame: CGRect(x: 0.0, y: 0.0, width: CGFloat(size), height: CGFloat(size)))
                imageBox[index].image = getPinImage(labelImg, inforType: warnBox[index].inforType)
                imageBox[index].tag = (-1) + index * (-1) // 警告は-1以下からで判断 あとで+1してインデックス番号に合わせる
            }
            
            // 画像の表示する座標を指定する.
            x = Double(screenWidth) / 2 + Double(screenWidth) * (angle / 36.5)
            imageBox[index].layer.position = CGPoint(x: CGFloat(x), y: y)
            
            // タグをタップしたときのイベント
            if infoBox[index].picType != "" {
                imageBox[index].isUserInteractionEnabled = true
                let gesture = UITapGestureRecognizer(target:self, action: #selector(cameraViewController.didClickImageView(_:)))
                imageBox[index].addGestureRecognizer(gesture)
            }
            
            count = count + 1
            
            // UIImageViewをViewに追加する.
            view.addSubview(imageBox[index]) // 画像表示用
            view.bringSubview(toFront: backgroundView)
            if detailview != nil {
                view.bringSubview(toFront: detailview!) // 詳細画面を最前面にする
            }
        }
        
        
        
        
        
        //        var angle2 = atan2(infoBox[index].lon - userLon, infoBox[index].lat - userLat)
        //        var degree = angle2 * 180 / M_PI
        //        degree = -1 * degree + 90
        //        if degree < 0 {
        //            degree = degree + 360
        //        }
        //
        //        var sub = degree - compass
        //        if sub < -180.0 {
        //            sub = sub + 360
        //        }
        //        if sub > 180.0 {
        //            sub = sub - 360
        //        }
        //
        //
        //        let kAngle = 73.0
        //        if abs(sub) < (kAngle / 2) {
        //
        //            size = Double(screenHeight / 8) + Double(screenHeight / 4) * Double(1000 - tDis)/1000
        //
        //            y = screenHeight / 2
        //
        //            // 情報タグを生成する
        //            if inforType == kInfo {
        //
        //                imageBox[index] = UIImageView(frame: CGRect(x: 0.0, y: 0.0, width: CGFloat(size), height: CGFloat(size)))
        //                if infoBox[index].picType != "" {
        //                    labelImg = makeLabel(infoBox[index].pinNum, inforType: inforType) // UILabelをUIImageに変換する
        //                    imageBox[index].image = getPinImage(labelImg, inforType: infoBox[index].inforType)
        //                } else {
        //                    imageBox[index].image = UIImage(named: infoBox[index].icon)!
        //                }
        //                imageBox[index].tag = index // 情報は0以上からで判断
        //
        //
        //
        //                let diff = (sub / (kAngle / 2)) / 2
        //                let left = (Double(screenWidth) / 2 + Double(screenWidth) * diff) - (size / 2)
        //                imageBox[index].layer.position = CGPoint(x: CGFloat(left), y: y)
        //
        //                count = count + 1
        //
        //                // UIImageViewをViewに追加する.
        //                view.addSubview(imageBox[index]) // 画像表示用
        //                view.bringSubview(toFront: backgroundView)
        //                if detailview != nil {
        //                    view.bringSubview(toFront: detailview!) // 詳細画面を最前面にする
        //                }
        //            }
        //        }
        
        
        
        
        
    }
    
    
    /*
     * タグ画像がタップされた時
     * 詳細画面を表示する
     *
     * @param recognizer
     */
    func didClickImageView(_ recognizer: UIGestureRecognizer) {
        
        backgroundView = detailView.makebackgroungView()
        backgroundView.isUserInteractionEnabled = true
        backgroundView.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(osmViewController.onClick_detailBackground(_:))))
        
        
        view.addSubview(backgroundView)
        
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
