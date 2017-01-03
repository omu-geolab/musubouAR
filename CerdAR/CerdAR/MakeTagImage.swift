//
//  MakeTagImage.swift
//  CerdAR
//
//  Copyright (c) 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
//

import Foundation
import CoreLocation
import CoreMotion
import MapKit


/**
 * ユーザの現在地と目的地間の距離を求める
 *
 * @param lat 目的地の緯度
 * @param lon 目的地の経度
 * @param uLat ユーザーの現在地の緯度
 * @param uLon ユーザーの現在地の経度
 *
 * @return ユーザの現在地と目的地間の距離(m)を返す
 **/
func calcDistance(_ lat: Double, lon: Double, uLat: Double, uLon: Double) -> Int {
    
    let cLocation1 = CLLocationCoordinate2DMake(lat, lon)
    let point1 = MKMapPointForCoordinate(cLocation1)
    let cLocation2 = CLLocationCoordinate2DMake(uLat, uLon)
    let point2 = MKMapPointForCoordinate(cLocation2)
    
    return Int(MKMetersBetweenMapPoints(point1, point2))
}

/**
 * タグに記載する文
 * (情報のとき…目的地名、目的地までの距離)
 * (警告のとき…災害名、災害までの距離、災害範囲)
 *
 * @param num infoBoxまたはwarnBoxのインデックス
 * @param inforType タグの種別(情報か警告か)
 *
 * @return タグに記載する文を返す
 */
func getLabelText(_ num: Int, inforType: String) -> String {
    
    var text: String!
    
    // 情報タグ
    if inforType == kInfo {
        
        if displayMode == mode.applemap.rawValue || displayMode == mode.osm.rawValue { // 地図画面の時は名称のみ
            text = jsonDataManager.sharedInstance.infoBox[num].name
            
        } else { // カメラ画面の時は名称と距離
            text = jsonDataManager.sharedInstance.infoBox[num].name + "\n" + String(jsonDataManager.sharedInstance.infoBox[num].distance) + "m"
        }
        
        // 警告タグ
    } else if inforType == kWarn {
        
        var riskName: String!
        
        switch jsonDataManager.sharedInstance.warnBox[num].riskType {
            
        case 0: riskName = "火災"
        case 1: riskName = "浸水"
        case 2: riskName = "土砂くずれ"
        case 3: riskName = "落橋"
        case 4: riskName = "家屋倒壊"
        case 5: riskName = "塀の倒壊"
        case 6: riskName = "道路陥没"
//        case 6: riskName = "通行禁止(コンテナ流入)"
        default: riskName = "その他の災害"
        }
        
        
        if displayMode == mode.applemap.rawValue || displayMode == mode.osm.rawValue { // 地図画面の時は名称と範囲
            text = riskName + "\n"
            text = text + "範囲: " + String(Int(circleRadius[num])) + "m"
        } else { // カメラ画面の時は名称と距離と範囲
            
            var distance = jsonDataManager.sharedInstance.warnBox[num].distance - Int(circleRadius[num])
            
            // ユーザが災害範囲内に入ったら、災害までの距離を0mで表示する
            if distance <= 0 {
                distance = 0
            }
            
            text = riskName + "\n"
            text = text + String(distance) + "m" + "\n"
            text = text + "範囲: " + String(Int(circleRadius[num])) + "m"
        }
        
        
    }
    
    return text
}

/**
 * タグに記載する文をUILabel型からUIImage型に変換する
 *
 * @param num infoBoxまたはwarnBoxのインデックス
 * @param inforType タグの種別(情報か警告か)
 *
 * @return タグに記載する文の画像を返す
 */
func makeLabel(_ num: Int, inforType: String) -> UIImage {
    
    var label: UILabel! // 情報タグの文字
    var labelImg: UIImage! // ラベル画像
    
    if inforType == kInfo {
        
        if displayMode == mode.applemap.rawValue || displayMode == mode.osm.rawValue { // 地図画面のとき
            let tagImg = UIImage(named: jsonDataManager.sharedInstance.infoBox[num].icon)! // 情報タグの画像
            label = UILabel(frame: CGRect.init(x: 0.0, y: 0.0, width: tagImg.size.width, height: tagImg.size.height)) //ラベルサイズ
            label.numberOfLines = 2 // ラベル内の行数
            
            
        } else if displayMode == mode.cam.rawValue { // カメラ画面のとき
            let tagImg = UIImage(named: "icon_infoTagAR.png")! // 情報タグの画像
            label = UILabel(frame: CGRect.init(x: 0.0, y: 0.0, width: tagImg.size.width, height: tagImg.size.height)) //ラベルサイズ
            label.numberOfLines = 3 // ラベル内の行数
        }
        
        
    } else if inforType == kWarn {
        label = UILabel(frame: CGRect.init(x: 0.0, y: 0.0, width: warnImage!.size.width, height: warnImage!.size.height)) //ラベルサイズ
        if displayMode == mode.cam.rawValue {
            label.numberOfLines = 4 // ラベル内の行数
        } else {
            label.numberOfLines = 3 // ラベル内の行数
        }
    }
    
    label.text = getLabelText(num, inforType: inforType) // テキスト
    label.textColor = UIColor.black // 文字色
    label.textAlignment = NSTextAlignment.center // 中央揃え
    label.font = UIFont.systemFont(ofSize: 80) // 初期文字サイズ
    label.adjustsFontSizeToFitWidth = true // 文字の多さによってフォントサイズを調節する
    
    labelImg = label.getImage() as UIImage // UILabelをUIImageに変換する
    
    return labelImg
}


/**
 * タグに記載する文をUILabel型からUIImage型に変換する
 * (タップされたタグ)
 *
 * @param num infoBoxまたはwarnBoxのインデックス
 * @param inforType タグの種別(情報か警告か)
 *
 * @return タグに記載する文の画像を返す
 */
func makeTappedLabel(_ num: Int, size: Double) -> UIImage {
    
    let label = UILabel(frame: CGRect.init(x: 0.0, y: 0.0, width: size, height: size)) //ラベルサイズ
    label.text = getLabelText(num, inforType: kWarn) // テキスト
    label.textColor = UIColor.red // 文字色
    label.textAlignment = NSTextAlignment.center // 中央揃え
    label.font = UIFont.systemFont(ofSize: 100) // 初期文字サイズ
    label.adjustsFontSizeToFitWidth = true // 文字の多さによってフォントサイズを調節する
    label.numberOfLines = 2 // ラベル内の行数
    let labelImg = label.getImage() as UIImage // UILabelをUIImageに変換する
    
    return labelImg
}




/**
 * タグ画像を生成する
 * 情報タグ(地図画面・ARカメラ画面)、警告タグ(ARカメラ画面)のとき…吹き出しの画像とmakeLabelで生成した画像を合成してそれを返す
 * 警告タグ(地図画面)のとき…makeLabelで生成した画像を返す
 *
 * @param img makeLabelで生成した画像
 * @param inforType タグの種別(情報か警告か)
 *
 * @return 生成したタグ画像を縦幅100のサイズで返す
 */
func getPinImage(_ img: UIImage, inforType: String) -> UIImage {
    
    var imgsize: CGFloat =  500
    var labelRect = CGRect.init()
    
    if inforType == kInfo {
        
        if displayMode == mode.applemap.rawValue || displayMode == mode.osm.rawValue { // 地図画面のとき
            
            let tagImg = UIImage(named: "icon_infoTag.png")! // 情報タグの画像
            let tagRect = CGRect.init(x: 0.0, y: 0.0, width: img.size.width, height: img.size.height) // タグ画像のサイズと位置
            UIGraphicsBeginImageContext(img.size)
            tagImg.draw(in: tagRect)
            imgsize = 100
            labelRect = CGRect.init(x: kTagXY, y: kTagXY, width: img.size.width - kTagW, height: img.size.height - kTagH) // ラベル画像のサイズと位置
            
        } else if displayMode == mode.cam.rawValue { // カメラ画面のとき
            
            let tagImg = UIImage(named: "icon_infoTagAR.png")! // 情報タグの画像
            let tagRect = CGRect.init(x: 0.0, y: 0.0, width: img.size.width, height: img.size.height) // タグ画像のサイズと位置
            UIGraphicsBeginImageContext(img.size)
            tagImg.draw(in: tagRect)
            labelRect = CGRect.init(x: 50.0, y: 70.0, width: img.size.width - 100.0, height: img.size.height - 135.0) // ラベル画像のサイズと位置
        }
        
    } else if inforType == kWarn {
        
        if displayMode == mode.applemap.rawValue || displayMode == mode.osm.rawValue { // 地図画面のとき
            return img
            
        } else if displayMode == mode.cam.rawValue { // カメラ画面のとき
            
            let tagRect = CGRect.init(x: 0.0, y: 0.0, width: warnImage!.size.width, height: warnImage!.size.height) // タグ画像のサイズと位置
            UIGraphicsBeginImageContext(warnImage!.size)
            warnImage!.draw(in: tagRect)
            labelRect = CGRect.init(x: 30.0, y: 30.0, width: img.size.width - 60.0, height: img.size.height - 120.0) // ラベル画像のサイズと位置
        }
    }
    
    
    img.draw(in: labelRect)
    
    // Context に描画された画像を新しく設定
    let newImage = UIGraphicsGetImageFromCurrentImageContext()
    
    // Context 終了
    UIGraphicsEndImageContext()
    
    return getResizeImage(newImage!, newHeight: imgsize)
}

/**
 * タグ画像をリサイズする
 *
 * @param image getPinImageで合成した画像
 * @param newHeight リサイズされたときの画像の縦幅
 *
 * @return リサイズされた画像を返す
 */
func getResizeImage(_ image: UIImage, newHeight: CGFloat) -> UIImage {
    
    let scale = newHeight / image.size.height // 縮尺度を決める
    let newWidth = image.size.width * scale // 新しい画像の幅
    
    UIGraphicsBeginImageContext(CGSize.init(width: newWidth, height: newHeight)) // 指定された画像の大きさのコンテキストを用意
    image.draw(in: CGRect.init(x: 0.0, y: 0.0, width: newWidth, height: newHeight)) // コンテキストに画像を描画する
    let newImage = UIGraphicsGetImageFromCurrentImageContext() // コンテキストからUIImageを作る
    UIGraphicsEndImageContext() // コンテキストを閉じる
    
    return newImage!
}

/*
 * delay秒後に行う処理
 */
func runAfterDelay(_ delay: TimeInterval, block: @escaping ()->()) {
    let time = DispatchTime.now() + Double(Int64(delay*Double(NSEC_PER_SEC))) / Double(NSEC_PER_SEC)
    DispatchQueue.main.asyncAfter(deadline: time, execute: block)
}

/*
 * サブビューを削除する
 * @param parentView親ビュー
 */
func removeAllSubviews(_ parentView: UIView) {
    let subviews = parentView.subviews
    for subview in subviews {
        subview.removeFromSuperview()
    }
}
