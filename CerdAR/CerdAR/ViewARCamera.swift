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


class ViewARCamera: UIViewController, UIGestureRecognizerDelegate, CLLocationManagerDelegate {
    var avSession: AVCaptureSession! // AVキャプチャセッション
    var avDevice: AVCaptureDevice! // AVキャプチャデバイス
    var avInput: AVCaptureInput! // AVキャプチャデバイスインプット
    var avOutput: AVCaptureStillImageOutput! // AVキャプチャアウトプット

    var userLat: CLLocationDegrees = 0   // 緯度
    var userLon: CLLocationDegrees = 0 // 経度

    var motionManager: CMMotionManager! // 加速度センサ

    var locationManager: CLLocationManager! // 現在地の取得
    var compassManager: CLLocationManager! // コンパスの向き測定

    var dirN0 = 0.0 // 目的地の方角
    var compass = 0.0 // コンパス

    var distanceInt = 0 // 現在地〜災害地の距離
    var direction = 0.0 // カメラ〜被災地の方角

    var count = 0 // タグを表示するときに、はじめはremoveしないためのもの


    // 情報タグの構造体
    struct InfoTag {
        var iPlace: String // 地名
        var iLat: Double // 緯度
        var iLon: Double // 経度
        var iDis: Int // 距離
        var iDir: Double // 方角
    }

    // 情報タグの構造体の配列
    var infoTags: [InfoTag] = []  // 空の配列

    // 警告タグの構造体
    struct WarnTag {
        var wPlace: String // 地名
        var wLat: Double // 緯度
        var wLon: Double // 経度
        var wDis: Int // 距離
        var wDir: Double // 方角
        var wDisaster: String // 災害名
    }

    // 警告タグの構造体の配列
    var warnTags: [WarnTag] = []  // 空の配列

    // 情報タグ
    var infoLabelBox: [UILabel] = [] // 情報タグの文字
    var infoImageBox: [UIImageView] = [] // 情報タグの画像

    // 警告タグ
    var warnLabelBox: [UILabel] = [] // 警告タグの文字
    var warnImageBox: [UIImageView] = [] // 警告タグの画像


    let screenWidth: Double = Double(UIScreen.mainScreen().bounds.size.width)   // 実機の画面の横の長さ
    let screenHeight: Double = Double(UIScreen.mainScreen().bounds.size.height) // 実機の画面の縦の長さ


    // コンパス
    let imgCompass: UIImage = UIImage(named: "icon_compass.png")! // 画像設定
    var compassView: UIImageView! // コンパスのビュー
    var comCount = 0 // コンパスの表示制御用

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
    let updateLoc: Double = 1.0 // 1°動いたら更新する
    let zero: CGFloat = 0 // 初期値0
    let mapPos: CGFloat = 5 // 地図ボタンの位置(x、y)
    let butSize: CGFloat = 100 // ボタンのサイズ(wid、hei)
    let comPos: CGFloat = 5 // 地図ボタンの位置(x、y)


    /* インスタンス化された直後（初回に一度のみ）*/
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


        // NavigationBarを隠す処理
        self.navigationController?.setNavigationBarHidden(true, animated: true)


        /* (jsonからデータを取ってくるようになったらここをいじる) */
        // 情報タグに入れる情報
        infoTags.append(InfoTag(iPlace: "淀屋橋駅", iLat: 34.69255, iLon: 135.501687, iDis: 0, iDir: 0.0))
        infoTags.append(InfoTag(iPlace: "堂島ビルヂング", iLat: 34.695591, iLon: 135.501699, iDis: 0, iDir: 0.0))
        infoTags.append(InfoTag(iPlace: "大阪ビジネスカレッジ専門学校", iLat: 34.695556, iLon: 135.500189, iDis: 0, iDir: 0.0))
        infoTags.append(InfoTag(iPlace: "大阪地方裁判所", iLat: 34.682803, iLon: 135.519230, iDis: 0, iDir: 0.0))

        // 警告タグに入れる情報
        warnTags.append(WarnTag(wPlace: "大江橋駅", wLat: 34.694161, wLon: 135.499976, wDis: 0, wDir: 0.0, wDisaster: "火災"))
        warnTags.append(WarnTag(wPlace: "大阪市役所", wLat: 34.693742, wLon: 135.502362, wDis: 0, wDir: 0.0, wDisaster: "津波"))

        self.initCamera()
        self.initBox()
        self.renderView()
    }



    // タグ初期化
    func initBox() {

        // 情報タグの初期化
        for _ in 0..<infoTags.count {
            infoImageBox.append(UIImageView(frame: CGRect.init(x: zero, y: zero, width: zero, height: zero)))
            infoLabelBox.append(UILabel(frame: CGRect.init(x: zero, y: zero, width: zero, height: zero)))
        }

        // 警告タグの初期化
        for _ in 0..<warnTags.count {
            warnImageBox.append(UIImageView(frame: CGRect.init(x: zero, y: zero, width: zero, height: zero)))
            warnLabelBox.append(UILabel(frame: CGRect.init(x: zero, y: zero, width: zero, height: zero)))
        }
    }

    // カメラ初期化
    func initCamera() {

        // AVキャプチャセッション
        // (AVFoundationにおけるキャプチャ入出力を管理するクラス)
        avSession = AVCaptureSession()

        if avSession.canSetSessionPreset(AVCaptureSessionPresetPhoto) {
            avSession.beginConfiguration()

            // キャプチャクオリティ設定
            // AVCaptureSessionPresetPhoto    写真専用、デバイスの最大解像度
            // AVCaptureSessionPresetHigh     最高録画品質 (静止画でも一番高画質なのはコレ)
            // AVCaptureSessionPresetMedium   WiFi向け
            // AVCaptureSessionPresetLow      3G向け
            // AVCaptureSessionPreset640x480  640x480 VGA固定
            // AVCaptureSessionPreset1280x720 1280x720 HD固定
            avSession.sessionPreset = AVCaptureSessionPresetPhoto

            avSession.commitConfiguration()
        }

        // AVキャプチャデバイス
        // (前背面カメラやマイク等のデバイス)
        let devices = AVCaptureDevice.devices()
        for capDevice in devices {
            if capDevice.position == AVCaptureDevicePosition.Back {
                // 背面カメラを取得
                avDevice = capDevice as? AVCaptureDevice
            }
        }

        if avDevice != nil {

            // AVキャプチャデバイスインプット
            // (AVキャプチャデバイスからの入力)
            do {
                // バックカメラからVideoInputを取得
                avInput = try AVCaptureDeviceInput.init(device: avDevice!)
            } catch let error as NSError {
                print(error)
            }

            // AVキャプチャデバイスインプットをセッションに追加
            if avSession.canAddInput(avInput) {

                avSession.addInput(avInput)

                // AVキャプチャアウトプット (出力方法)
                // AVCaptureStillImageOutput: 静止画
                // AVCaptureMovieFileOutput: 動画ファイル
                // AVCaptureAudioFileOutput: 音声ファイル
                // AVCaptureVideoDataOutput: 動画フレームデータ
                // AVCaptureAudioDataOutput: 音声データ

                avOutput = AVCaptureStillImageOutput()

                // 出力設定
                avOutput.outputSettings = [AVVideoCodecKey: AVVideoCodecJPEG]

                // AVキャプチャアウトプットをセッションに追加
                if avSession.canAddOutput(avOutput) {
                    avSession.addOutput(avOutput)
                }

                // 画像を表示するレイヤーを生成.
                let capVideoLayer: AVCaptureVideoPreviewLayer = AVCaptureVideoPreviewLayer.init(session: avSession)
                capVideoLayer.frame = self.view.bounds
                capVideoLayer.videoGravity = AVLayerVideoGravityResizeAspectFill

                // AVLayerVideoGravityResizeAspectFill
                //      アスペクト比維持 + 必要に応じてトリミング (縦いっぱいに表示し横をトリミング)

                // AVLayerVideoGravityResizeAspect
                //      アスペクト比維持 (縦横とも収まる様に表示)

                // AVLayerVideoGravityResize
                //      利用可能な画面領域いっぱいにリサイズ


                // Viewに追加.
                self.view.layer.addSublayer(capVideoLayer)

                // セッション開始.
                avSession.startRunning()

            }
        }
    }


    // 画面を閉じる
    func close() {
        self.navigationController?.popViewControllerAnimated(true)
    }



    // 画面になにか重ねて表示する
    func renderView() {

        // 画面遷移のためのボタン
        let toMapBut = UIButton()
        toMapBut.frame = CGRect.init(x: zero, y: zero, width: butSize, height: butSize)
        let buttonImage: UIImage = UIImage(named: "icon_map.jpg")!
        toMapBut.setImage(buttonImage, forState: .Normal)
        toMapBut.layer.position = CGPoint(x: mapPos+butSize, y: self.view.bounds.height-mapPos-butSize)
        self.view.addSubview(toMapBut)
        toMapBut.addTarget(self, action: #selector(ViewARCamera.clickMap(_:)), forControlEvents: .TouchUpInside)

    }


    /* メモリ不足時に呼び出される */
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
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

        for i in 0..<infoTags.count {
            infoLabelBox[i].removeFromSuperview() // 情報タグの破棄
        }

        for i in 0..<warnTags.count {
            warnLabelBox[i].removeFromSuperview() // 警告タグの破棄
        }

        infoTags.removeAll()      // 情報タグ構造体配列の破棄
        warnTags.removeAll()      // 警告タグ構造体配列の破棄
        infoLabelBox.removeAll() // 情報タグのラベル配列の破棄
        infoImageBox.removeAll() // 情報タグの画像配列の破棄
        warnLabelBox.removeAll() // 警告タグのラベル配列の破棄
        warnImageBox.removeAll() // 警告タグの画像配列の破棄
        comCount = 0             // コンパスのカウントの破棄
        count = 0                 // タグのカウントの破棄
    }



    /* ボタンクリックしたときのイベント(ViewMapに遷移する) */
    internal func clickMap(sender: UIButton) {
        let map = ViewMap()
        self.navigationController?.pushViewController(map, animated: true)
    }


    /* iPhone の位置情報が更新されるたびに、デリゲートが呼ばれる */
    func locationManager(manager: CLLocationManager, didUpdateToLocation newLocation: CLLocation, fromLocation oldLocation: CLLocation) {

        userLat = newLocation.coordinate.latitude   // 現在地の緯度
        userLon = newLocation.coordinate.longitude  // 現在地の経度

    }


    func locationManager(manager: CLLocationManager, didUpdateHeading newHeading: CLHeading) {
        compass = newHeading.magneticHeading //現在のコンパスの向き(磁北)
        //print("磁北:", newHeading.magneticHeading) // 北：0、 東；90、 南：180、 西：270 //こちらが必要？ スマホの向き
        //print("真北:", newHeading.trueHeading) // 北：0、 東；90、 南：180、 西：270

        /* カメラの向きを利用してタグの表示(y軸)の調整(いつかするべき) */
        motionManager.startAccelerometerUpdatesToQueue(NSOperationQueue.mainQueue(), withHandler: {(accelerometerData: CMAccelerometerData?, error: NSError?) -> Void in
            self.camZ = accelerometerData!.acceleration.z * 1000 // 未完成のため、まだ定数の設定はしない
            //print("camZ: \(floor(self.camZ) / 1000)")
        })


        for i in 0..<infoTags.count {
            // 表示する画像を設定する.
            let infoImage = UIImage(named: "icon_airtag.png")

            locationDistance(infoTags[i].iLat, tLon: infoTags[i].iLon, tDis: &infoTags[i].iDis)
            geoDirection(infoTags[i].iLat, tLon: infoTags[i].iLon, tDir: &infoTags[i].iDir)
            tagDisplay(i, labelBox: &infoLabelBox, imageBox: &infoImageBox, tDir: infoTags[i].iDir, tDis: infoTags[i].iDis, tPlace: infoTags[i].iPlace, image: infoImage!)
        }

        for i in 0..<warnTags.count {
            // 表示する画像を設定する.
            let warnImage = UIImage(named: "icon_warn.png")

            locationDistance(warnTags[i].wLat, tLon: warnTags[i].wLon, tDis: &warnTags[i].wDis)
            geoDirection(warnTags[i].wLat, tLon: warnTags[i].wLon, tDir: &warnTags[i].wDir)
            tagDisplay(i, labelBox: &warnLabelBox, imageBox: &warnImageBox, tDir: warnTags[i].wDir, tDis: warnTags[i].wDis, tPlace: warnTags[i].wPlace, image: warnImage!)
        }

        compassRotate()

        // 災害発生時
        if disa == true {
            disaster()
            disa = false
        }

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
            warningView = UIView(frame: CGRect.init(x: zero, y: CGFloat(screenHeight) - CGFloat(time), width: CGFloat(screenWidth), height: CGFloat(time)))
            warningView.backgroundColor = UIColor.blueColor()

        } else if warn == "火災" {
            warningView = UIView(frame: CGRect.init(x: zero, y: zero, width: CGFloat(screenWidth), height: CGFloat(screenHeight)))
            warningView.backgroundColor = UIColor.redColor()
        }

        warningView.alpha = 0.3 // alphaを直接操作する
        view.addSubview(warningView)
        warnCount = warnCount + 1

    }




    //コンパス
    func compassRotate() {
        if comCount > 0 {
            compassView.removeFromSuperview()
        }

        compassView = UIImageView(frame: CGRect(x: comPos+butSize, y: butSize+comPos, width: butSize, height: butSize))

        // UIImageViewに画像を設定する.
        compassView.image = imgCompass

        // radianで回転角度を指定する.
        let angle: CGFloat = CGFloat((compass * M_PI) / 180.0)

        // 回転用のアフィン行列を生成する.
        compassView.transform = CGAffineTransformMakeRotation(angle)

        // Viewに張りつけ.
        self.view.addSubview(compassView)

        comCount = comCount + 1
    }




    // 距離を測る
    func locationDistance(tLat: Double, tLon: Double, inout tDis: Int) {

        // 2点の緯度の平均
        let latAvg = (( userLat + ((tLat - userLat)/2) ) / 180) * M_PI

        // 2点の緯度差
        let latDifference = (( userLat - tLat ) / 180) * M_PI

        // 2点の経度差
        let lonDifference = (( userLon - tLon ) / 180) * M_PI
        let curRadiusTemp = 1 - 0.00669438 * pow(sin(latAvg), 2)

        // 子午線曲率半径
        let meridianCurvatureRadius = 6335439.327 / sqrt(pow(curRadiusTemp, 3))

        // 卯酉線曲率半径
        let primeVerticalCircleCurvatureRadius = 6378137 / sqrt(curRadiusTemp)

        // 2点間の距離
        var distance = pow(meridianCurvatureRadius * latDifference, 2)
                        + pow(primeVerticalCircleCurvatureRadius * cos(latAvg) * lonDifference, 2)
        distance = sqrt(distance)

        tDis = Int(round(distance))
    }


    // 方角を測る
    func geoDirection(tLat: Double, tLon: Double, inout tDir: Double) {

        // 緯度経度 lat1, lng1 の点を出発として、緯度経度 lat2, lng2 への方位
        // 北を０度で右回りの角度０～３６０度
        let Y = cos(tLon * M_PI / 180) * sin(tLat * M_PI / 180 - userLat * M_PI / 180)
        let X = cos(userLon * M_PI / 180) * sin(tLon * M_PI / 180) - sin(userLon * M_PI / 180) * cos(tLon * M_PI / 180) * cos(tLat * M_PI / 180 - userLat * M_PI / 180)

        var dirE0 = 180 * atan2(Y, X) / M_PI // 東向きが０度の方向
        if dirE0 < 0 {
            dirE0 = dirE0 + 360 //0～360 にする。
        }

        tDir = (dirE0 + 90) % 360 // (dirE0+90)÷360の余りを出力 北向きが０度の方向

    }




    // タグを表示する(タグの表示方法が変わるかもしれないので、定数設定はしないでおく)
    func tagDisplay(index: Int, inout labelBox: [UILabel], inout imageBox: [UIImageView], tDir: Double, tDis: Int, tPlace: String, image: UIImage) {
        var angle = 0.0

        angle = tDir - compass

        //print("angle:",angle)

        var x = 0.0
        var y = screenHeight/2

        var sizeW = 0 // タグの横幅
        var sizeH = 0 // タグの縦幅
        var sizeF = 0 // ラベルのフォントサイズ
        var labelW = 0 // ラベルの表示位置(x軸)
        var labelY = 0.0 // ラベルの表示位置(y軸)


        // カメラの視野に対象が入ったら・・・
        if (angle >= 0 && angle <= 36.5) || (angle >= -36.5 && angle <= 0) {
            if count > 0 {
                imageBox[index].removeFromSuperview()
                labelBox[index].removeFromSuperview()
            }

            // 現在地〜対象までの距離によって、タグの大きさ、フォントの大きさを変える
            if tDis >= 0 && tDis <= 99 {
                sizeW = 230
                sizeH = 230
                sizeF = 29
                labelW = 206
                y = screenHeight * 0.2
                labelY = Double(y) - 12.0

            } else if tDis >= 100 && tDis <= 199 {
                sizeW = 180
                sizeH = 180
                sizeF = 24
                labelW = 150
                y = screenHeight * 0.4
                labelY = Double(y) - 11.0

            } else if tDis >= 200 && tDis <= 299 {
                sizeW = 130
                sizeH = 130
                sizeF = 17
                labelW = 110
                y = screenHeight * 0.6
                labelY = Double(y) - 7.0

            } else if tDis >= 300 && tDis <= 399 {
                sizeW = 90
                sizeH = 90
                sizeF = 12
                labelW = 77
                y = screenHeight * 0.7
                labelY = Double(y) - 6.0

            } else if tDis >= 400 && tDis <= 500 {
                sizeW = 50
                sizeH = 50
                sizeF = 8
                labelW = 40
                y = screenHeight * 0.9
                labelY = Double(y) - 5.0
            }


            // ラベルの作成
            labelBox[index] = UILabel(frame: CGRect.init(x: zero, y: zero, width: CGFloat(labelW), height: CGFloat(sizeH)))

            // UIImageViewを作成する.
            imageBox[index] = UIImageView(frame: CGRect.init(x: zero, y: zero, width: CGFloat(sizeW), height: CGFloat(sizeH)))

            // 画像をUIImageViewに設定する.
            imageBox[index].image = image

            // 画像の表示する座標を指定する.
            x = screenWidth/2 + screenWidth * (angle/36.5)
            imageBox[index].layer.position = CGPoint(x: x, y: y)

            // タグをタップしたときのイベント
            imageBox[index].userInteractionEnabled = true
            imageBox[index].addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(ViewARCamera.imageTapped(_:))))

            // タグに表示する文字の設定
            labelBox[index].font = UIFont.systemFontOfSize(CGFloat(sizeF));//文字サイズ
            labelBox[index].textAlignment = NSTextAlignment.Center//整列
            labelBox[index].numberOfLines = 2
            labelBox[index].text = "\(tPlace)\n\(tDis)m" // 表示する文字
            labelBox[index].textColor = UIColor.blackColor()
            labelBox[index].layer.position = CGPoint(x:x, y:labelY)

            count = count + 1


            // UIImageViewをViewに追加する.
            self.view.addSubview(imageBox[index])
            self.view.addSubview(labelBox[index])

        }
    }


    /* タグをタップしたときのイベント(詳細画面に遷移する) */
    internal func imageTapped(sender: UIButton) {
        let detail = ViewDetail()
        self.navigationController?.pushViewController(detail, animated: true)
    }

}
