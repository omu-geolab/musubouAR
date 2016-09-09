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


/* ユーザの現在地と目的地間の距離を求める */
func calcDistance(lat: Double, lon: Double, uLat: Double, uLon: Double) -> Int {
    
    let cLocation1 = CLLocationCoordinate2DMake(lat, lon)
    let point1 = MKMapPointForCoordinate(cLocation1)
    let cLocation2 = CLLocationCoordinate2DMake(uLat, uLon)
    let point2 = MKMapPointForCoordinate(cLocation2)
    
    return Int(MKMetersBetweenMapPoints(point1, point2))
}


/* ラベルテキスト */
func getLabelText(num: Int) -> String {
    
    var text: String!
    
    // 情報タグ
    if annotationBox[num].inforType == kInfo {
        text = annotationBox[num].name + "\n" + String(annotationBox[num].distance) + "m"
        
        // 警告タグ
    } else if annotationBox[num].inforType == kWarn {
        
        var distance = annotationBox[num].distance - annotationBox[num].range
        var riskName: String!
        
        // ユーザが災害範囲内に入ったら、災害までの距離を0mで表示する
        if distance <= 0 {
            distance = 0
        }
        
        switch annotationBox[num].riskType {
            
        case 0: riskName = "火災"
        case 1: riskName = "浸水"
        case 2: riskName = "落橋"
        case 3: riskName = "土砂崩れ"
        default: riskName = "その他の災害"
        }
        
        text = riskName + "\n" + String(distance) + "m" + "\n" + "範囲: " + String(annotationBox[num].range) + "m"
    }
    
    return text
}


/* ラベル画像を作る */
func makeLabel(num: Int) -> UIImage {
    
    var label: UILabel! // 情報タグの文字
    var labelImg: UIImage! // ラベル画像
    
    if annotationBox[num].inforType == kInfo {
        label = UILabel(frame: CGRect.init(x: kZero, y: kZero, width: airtagImage.size.width, height: airtagImage.size.height)) //ラベルサイズ
    } else if annotationBox[num].inforType == kWarn {
        label = UILabel(frame: CGRect.init(x: kZero, y: kZero, width: warnImage!.size.width, height: warnImage!.size.height)) //ラベルサイズ
    }
    label.text = getLabelText(num) // テキスト
    label.textColor = UIColor.blackColor() // 文字色
    label.textAlignment = NSTextAlignment.Center // 中央揃え
    //label.layer.position = CGPoint.init(x: view.frame.width, y: view.frame.height)
    label.font = UIFont.systemFontOfSize(kTagFont) // 初期文字サイズ
    label.adjustsFontSizeToFitWidth = true // 文字の多さによってフォントサイズを調節する
    label.numberOfLines = kTagLine // ラベル内の行数
    
    labelImg = label.getImage() as UIImage // UILabelをUIImageに変換する
    
    return labelImg
}


/* ピン画像を設定する */
func getPinImage(img: UIImage, inforType: String) -> UIImage {
    
    if inforType == kInfo {
        
        let tagRect = CGRect.init(x: kZero, y: kZero, width: airtagImage.size.width, height: airtagImage.size.height) // タグ画像のサイズと位置
        UIGraphicsBeginImageContext(airtagImage.size)
        airtagImage.drawInRect(tagRect)
        
        let labelRect = CGRect.init(x: kTagXY, y: kTagXY, width: img.size.width - kTagW, height: img.size.height - kTagH) // ラベル画像のサイズと位置
        
        img.drawInRect(labelRect)
        
        // Context に描画された画像を新しく設定
        let newImage = UIGraphicsGetImageFromCurrentImageContext()
        
        // Context 終了
        UIGraphicsEndImageContext()
        
        return getResizeImage(newImage, newHeight: kTagSize)
        
    } else if inforType == kWarn {
        
        if mode == 0 { // 地図画面のとき
            return img
            
        } else if mode == 1 { // カメラ画面のとき
            
            let tagRect = CGRect.init(x: kZero, y: kZero, width: warnImage!.size.width, height: warnImage!.size.height) // タグ画像のサイズと位置
            UIGraphicsBeginImageContext(warnImage!.size)
            warnImage!.drawInRect(tagRect)
            
            let labelRect = CGRect.init(x: kTagXY, y: kTagXY, width: img.size.width - kTagW, height: img.size.height - kTagH) // ラベル画像のサイズと位置
            
            img.drawInRect(labelRect)
            
            // Context に描画された画像を新しく設定
            let newImage = UIGraphicsGetImageFromCurrentImageContext()
            
            // Context 終了
            UIGraphicsEndImageContext()
            
            return getResizeImage(newImage, newHeight: kTagSize)
        }
    }
    
    return img // ここに来ることはまずないので違うのを変えしたい
}



/* 画像をリサイズする */
func getResizeImage(image: UIImage, newHeight: CGFloat) -> UIImage {
    
    let scale = newHeight / image.size.height // 縮尺度を決める
    let newWidth = image.size.width * scale // 新しい画像の幅
    UIGraphicsBeginImageContext(CGSize.init(width: newWidth, height: newHeight)) // 指定された画像の大きさのコンテキストを用意
    image.drawInRect(CGRect.init(x: kZero, y: kZero, width: newWidth, height: newHeight)) // コンテキストに画像を描画する
    let newImage = UIGraphicsGetImageFromCurrentImageContext() // コンテキストからUIImageを作る
    UIGraphicsEndImageContext() // コンテキストを閉じる
    
    return newImage
}


/* delay秒後に行う処理 */
func runAfterDelay(delay: NSTimeInterval, block: dispatch_block_t) {
    let time = dispatch_time(DISPATCH_TIME_NOW, Int64(delay*Double(NSEC_PER_SEC)))
    dispatch_after(time, dispatch_get_main_queue(), block)
}
