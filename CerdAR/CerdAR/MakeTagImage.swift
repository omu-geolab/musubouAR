//
//  MakeTagImage.swift
//  CerdAR
//
//  Copyright © 2016年 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University). All rights reserved.
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
func calcDistance(lat: Double, lon: Double, uLat: Double, uLon: Double) -> Int {
    
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
func getLabelText(num: Int, inforType: String) -> String {
    
    var text: String!
    
    // 情報タグ
    if inforType == kInfo {
        text = infoBox[num].name + "\n" + String(infoBox[num].distance) + "m"
        
        // 警告タグ
    } else if inforType == kWarn {
        
        var distance = warnBox[num].distance - Int(circleRadius[num])
        var riskName: String!
        
        // ユーザが災害範囲内に入ったら、災害までの距離を0mで表示する
        if distance <= 0 {
            distance = 0
        }
        
        switch warnBox[num].riskType {
            
        case 0: riskName = "火災"
        case 1: riskName = "浸水"
        case 2: riskName = "落橋"
        case 3: riskName = "土砂崩れ"
        default: riskName = "その他の災害"
        }
        
        text = riskName + "\n" + String(distance) + "m" + "\n" + "範囲: " + String(Int(circleRadius[num])) + "m"
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
func makeLabel(num: Int, inforType: String) -> UIImage {
    
    var label: UILabel! // 情報タグの文字
    var labelImg: UIImage! // ラベル画像
    let airtagImage = UIImage(named: "icon_airtag.png")! // 情報タグの画像

    if inforType == kInfo {
        label = UILabel(frame: CGRect.init(x: 0.0, y: 0.0, width: airtagImage.size.width, height: airtagImage.size.height)) //ラベルサイズ
        
    } else if inforType == kWarn {
        label = UILabel(frame: CGRect.init(x: 0.0, y: 0.0, width: warnImage!.size.width, height: warnImage!.size.height)) //ラベルサイズ
    }
    
    label.text = getLabelText(num, inforType: inforType) // テキスト
    label.textColor = UIColor.blackColor() // 文字色
    label.textAlignment = NSTextAlignment.Center // 中央揃え
    label.font = UIFont.systemFontOfSize(100) // 初期文字サイズ
    label.adjustsFontSizeToFitWidth = true // 文字の多さによってフォントサイズを調節する
    label.numberOfLines = 3 // ラベル内の行数
    
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
func makeTappedLabel(num: Int, scale: Double) -> UIImage {
    
    var label: UILabel! // 情報タグの文字
    var labelImg: UIImage! // ラベル画像
    let han: Double = circleRadius[num] * 2.0
    let newsize = screenWidth * CGFloat((han * 0.7) / (scale * 111.0 * 1000.0))
    
    label = UILabel(frame: CGRect.init(x: 0.0, y: 0.0, width: newsize, height: newsize)) //ラベルサイズ
    label.text = getLabelText(num, inforType: kWarn) // テキスト
    label.textColor = UIColor.redColor() // 文字色
    label.textAlignment = NSTextAlignment.Center // 中央揃え
    label.font = UIFont.systemFontOfSize(100) // 初期文字サイズ
    label.adjustsFontSizeToFitWidth = true // 文字の多さによってフォントサイズを調節する
    label.numberOfLines = 3 // ラベル内の行数
    
    labelImg = label.getImage() as UIImage // UILabelをUIImageに変換する
    
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
 * @return 生成したタグ画像を縦幅500のサイズで返す
 */
func getPinImage(img: UIImage, inforType: String) -> UIImage {
    let airtagImage = UIImage(named: "icon_airtag.png")! // 情報タグの画像

    if inforType == kInfo {
        
        let tagRect = CGRect.init(x: 0.0, y: 0.0, width: airtagImage.size.width, height: airtagImage.size.height) // タグ画像のサイズと位置
        UIGraphicsBeginImageContext(airtagImage.size)
        airtagImage.drawInRect(tagRect)
        
    } else if inforType == kWarn {
        
        if displayMode == mode.map.rawValue { // 地図画面のとき
            return img
            
        } else if displayMode == mode.cam.rawValue { // カメラ画面のとき
            
            let tagRect = CGRect.init(x: 0.0, y: 0.0, width: warnImage!.size.width, height: warnImage!.size.height) // タグ画像のサイズと位置
            UIGraphicsBeginImageContext(warnImage!.size)
            warnImage!.drawInRect(tagRect)
        }
    }
    
    let labelRect = CGRect.init(x: 40.0, y: 40.0, width: img.size.width - 80.0, height: img.size.height - 100.0) // ラベル画像のサイズと位置
    img.drawInRect(labelRect)
    
    // Context に描画された画像を新しく設定
    let newImage = UIGraphicsGetImageFromCurrentImageContext()
    
    // Context 終了
    UIGraphicsEndImageContext()
    
    return getResizeImage(newImage, newHeight: 500.0)
}

/**
 * タグ画像をリサイズする
 *
 * @param image getPinImageで合成した画像
 * @param newHeight リサイズされたときの画像の縦幅
 *
 * @return リサイズされた画像を返す
 */
func getResizeImage(image: UIImage, newHeight: CGFloat) -> UIImage {
    
    let scale = newHeight / image.size.height // 縮尺度を決める
    let newWidth = image.size.width * scale // 新しい画像の幅
    
    UIGraphicsBeginImageContext(CGSize.init(width: newWidth, height: newHeight)) // 指定された画像の大きさのコンテキストを用意
    image.drawInRect(CGRect.init(x: 0.0, y: 0.0, width: newWidth, height: newHeight)) // コンテキストに画像を描画する
    let newImage = UIGraphicsGetImageFromCurrentImageContext() // コンテキストからUIImageを作る
    UIGraphicsEndImageContext() // コンテキストを閉じる
    
    return newImage
}

/*
 * delay秒後に行う処理
 */
func runAfterDelay(delay: NSTimeInterval, block: dispatch_block_t) {
    let time = dispatch_time(DISPATCH_TIME_NOW, Int64(delay*Double(NSEC_PER_SEC)))
    dispatch_after(time, dispatch_get_main_queue(), block)
}

/*
 * サブビューを削除する
 * @param parentView親ビュー
 */
func removeAllSubviews(parentView: UIView) {
    let subviews = parentView.subviews
    for subview in subviews {
        subview.removeFromSuperview()
    }
}


/*
 * String型で書かれた時間をNSData型に変換する
 * @param string 時間 (format通りに書く)
 * @param format "yyyy/mm/dd HH:mm"
 */
func dateFromString(string: String, format: String) -> NSDate {
    let formatter: NSDateFormatter = NSDateFormatter()
    formatter.dateFormat = format
    return formatter.dateFromString(string)!
}
