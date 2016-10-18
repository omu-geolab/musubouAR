//
//  DataManager.swift
//  CerdAR
//
//  Copyright © 2016年 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University). All rights reserved.
//

import Foundation
import UIKit
import MapKit


/* タグに持たせるデータ群 */
class TagData {
    
    // 共通タグ
    var id: String!           // 共通ID(必要なのか？)
    var name: String!         // タグの名前
    var inforType: String!    // 種別(info or warn)
    var icon: String!         // 使用する画像
    var descript: String!     // 内容の解説文
    var lat: Double!          // 緯度
    var lon: Double!          // 経度
    
    var direction: Double!     // 各目的地への方角
    
    var pinNum: Int!          // ピン番号
    var pinImage: UIImage!    // タグ画像
    var expandImage: UIImage! // サイズ調節用画像
    
    var distance = 0     // 現在地から目的地までの距離
    
    // 情報の独自タグ
    var picType: String!      // 写真か動画か
    var photo: String!        // 写真のURL
    var movie: String!        // 動画のURL
    
    // 災害の独自タグ
    var range: Int!           // 災害の範囲
    var start: Date!        // 災害の開始時間
    var stop: Date!         // 災害の終了時間
    var message1: String!     // 警告範囲に近づいてきた時のメッセージ
    var message2: String!     // 警告範囲に侵入した時のメッセージ
    var riskType: Int!        // 災害の種類(0:火災,1:浸水,2:落橋,3:土砂崩れ)
}


class jsonDataManager: NSObject {
    // テストメッセージ出力用
    var infoBox = [TagData]() // 情報タグ用
    var warnBox = [TagData]() // 警告タグ用
    
    func storeData(json: JSON, callback: (String) -> Void) -> Void {
        
        var iN = 0 // 情報タグの番号
        var wN = 0 // 警告タグの番号
        for i in 0 ..< json["features"].count {
            // 情報タグ
            if json["features"][i]["properties"]["info_type"].string == kInfo {
                
                infoBox.append(TagData())
                infoBox[iN].pinNum = iN //ピン番号
                
                
                if let id = json["features"][i]["properties"]["id"].string { // ID
                    infoBox[iN].id = id
                } else {
                    infoBox.removeLast()
                    continue
                }
                
                if let name = json["features"][i]["properties"]["Name"].string { // 目的地の名前
                    infoBox[iN].name = name
                } else {
                    infoBox.removeLast()
                    continue
                }
                
                if let iType = json["features"][i]["properties"]["info_type"].string { // タグの種類
                    infoBox[iN].inforType = iType
                } else {
                    infoBox.removeLast()
                    continue
                }
                
                if let icon = json["features"][i]["properties"]["icon"].string, let _ = UIImage(named: icon) { // タグの画像
                    infoBox[iN].icon = icon
                } else {
                    infoBox.removeLast()
                    continue
                }
                
                if let descript = json["features"][i]["properties"]["description"].string { // 解説文
                    infoBox[iN].descript = descript
                } else {
                    if json["features"][i]["geometry"]["coordinates"][2].double != 0 { // 標高
                        infoBox.removeLast()
                        continue
                    }
                }
                
                if let lon = json["features"][i]["geometry"]["coordinates"][0].double { // 緯度
                    infoBox[iN].lon = lon
                } else {
                    infoBox.removeLast()
                    continue
                }
                
                if let lat = json["features"][i]["geometry"]["coordinates"][1].double { // 経度
                    infoBox[iN].lat = lat
                } else {
                    infoBox.removeLast()
                    continue
                }
                
                if let pType = json["features"][i]["properties"]["pic_type"].string { // 写真か動画か
                    infoBox[iN].picType = pType
                    
                    if let pm = json["features"][i]["properties"][pType].string { // 写真・動画のURL
                        if pType == kPhoto {
                            infoBox[iN].photo = pm
                        } else if pType == kMovie {
                            infoBox[iN].movie = pm
                        } else {
                            infoBox.removeLast()
                            continue
                        }
                        
                    } else {
                        infoBox.removeLast()
                        continue
                    }
                    
                } else {
                    
                    if json["features"][i]["properties"]["photo"].string != nil || json["features"][i]["properties"]["movie"].string != nil {
                        infoBox.removeLast()
                        continue
                    }
                }
                
                
                // OSM用
                osmInfoBox.append(MGLTagData())
                osmInfoBox[iN].inforType = json["features"][i]["properties"]["info_type"].string // タグの種類
                osmInfoBox[iN].pinNum = iN //ピン番号
                
                
                iN += 1
                
                // 警告タグ
            } else if json["features"][i]["properties"]["info_type"].string == kWarn {
                
                warnBox.append(TagData())
                warnBox[wN].pinNum = wN //ピン番号
                warnBox[wN].id = json["features"][i]["properties"]["id"].string // id
                
                
                if let id = json["features"][i]["properties"]["id"].string { // 目的地の名前
                    warnBox[wN].id = id
                } else {
                    warnBox.removeLast()
                    continue
                }
                
                
                if let name = json["features"][i]["properties"]["Name"].string { // 目的地の名前
                    warnBox[wN].name = name
                } else {
                    warnBox.removeLast()
                    continue
                }
                
                if let iType = json["features"][i]["properties"]["info_type"].string { // タグの種類
                    warnBox[wN].inforType = iType
                } else {
                    warnBox.removeLast()
                    continue
                }
                
                if let icon = json["features"][i]["properties"]["icon"].string { // タグの画像
                    warnBox[wN].icon = icon
                } else {
                    warnBox.removeLast()
                    continue
                }
                
                if let descript = json["features"][i]["properties"]["description"].string { // 解説文
                    warnBox[wN].descript = descript
                } else {
                    warnBox.removeLast()
                    continue
                }
                
                if let lon = json["features"][i]["geometry"]["coordinates"][0].double { // 緯度
                    warnBox[wN].lon = lon
                } else {
                    warnBox.removeLast()
                    continue
                }
                
                if let lat = json["features"][i]["geometry"]["coordinates"][1].double { // 経度
                    warnBox[wN].lat = lat
                } else {
                    warnBox.removeLast()
                    continue
                }
                
                if let range = json["features"][i]["properties"]["range"].int { // 災害範囲
                    warnBox[wN].range = range
                } else {
                    warnBox.removeLast()
                    continue
                }
                
                
                if let start = json["features"][i]["properties"]["start"].string { // 災害範囲
                    if let start2: Date = dateFromString(start, format: "yyyy/MM/dd HH:mm", num: wN) { // 災害開始時刻
                        warnBox[wN].start = start2
                    } else {
                        warnBox.removeLast()
                        continue
                    }
                } else {
                    warnBox.removeLast()
                    continue
                }
                
                
                
                if let stop = json["features"][i]["properties"]["stop"].string { // 災害範囲
                    if let stop2: Date = dateFromString(stop, format: "yyyy/MM/dd HH:mm", num: wN) { // 災害終了時刻
                        warnBox[wN].stop = stop2
                    } else {
                        warnBox.removeLast()
                        continue
                    }
                } else {
                    warnBox.removeLast()
                    continue
                }
                
                
                if let message1 = json["features"][i]["properties"]["message1"].string { // 警告範囲に近づいた時のメッセージ
                    warnBox[wN].message1 = message1
                } else {
                    warnBox.removeLast()
                    continue
                }
                
                if let message2 = json["features"][i]["properties"]["message2"].string { // 警告範囲に侵入した時のメッセージ
                    warnBox[wN].message2 = message2
                } else {
                    warnBox.removeLast()
                    continue
                }
                
                
                if let rType = json["features"][i]["properties"]["risk_type"].int { // 災害の種類
                    warnBox[wN].riskType = rType
                } else {
                    warnBox.removeLast()
                    continue
                }
                
                
                // OSM用
                osmWarnBox.append(MGLTagData())
                osmWarnBox[wN].inforType = json["features"][i]["properties"]["info_type"].string // タグの種類
                osmWarnBox[wN].pinNum = wN //ピン番号
                
                wN += 1
                
            } else {
                print("info_typeの設定を間違えています") /****後でこのときの対策を考える****/
            }
        }
        
        callback("finished")
    }
    
    
    /*
     * String型で書かれた時間をNSData型に変換する
     * @param string 時間 (format通りに書く)
     * @param format "yyyy/mm/dd HH:mm"
     */
    func dateFromString(_ string: String, format: String, num: Int) -> Date {
        let formatter: DateFormatter = DateFormatter()
        formatter.dateFormat = format
        
        if let warnDate: Date = formatter.date(from: string) { // 災害時間を正しいフォーマットで書いているとき
            return warnDate
            
        } else { // // 災害時間を誤ったフォーマットで書いているとき
            warnBox[num].start = formatter.date(from: "2100/01/01 00:00")!
            return formatter.date(from: "2100/01/01 00:00")!
            
        }
    }
    
    /** シングルトンでインスタンスを返す */
    class var sharedInstance: jsonDataManager {
        struct Static {
            static let instance: jsonDataManager = jsonDataManager()
        }
        return Static.instance
    }
    
    // initのプライベート化。インスタンスの作成・取得はsharedInstanceを利用する。
    override private init() {
        super.init()
    }
}



// 定数
let kInfo = "info" // 種別(情報)
let kWarn = "warn" // 種別(警告(今災害が起こっている))
let kPhoto = "photo" // 写真
let kMovie = "movie" // 動画

let screenWidth = UIScreen.main.bounds.size.width   // 実機の画面の横の長さ
let screenHeight = UIScreen.main.bounds.size.height // 実機の画面の縦の長さ

let dWid = screenWidth * 0.8
let dHei = screenHeight * 0.8


var osmInfoBox = [MGLTagData]() // OSM情報タグ用
var osmWarnBox = [MGLTagData]() // OSM情報タグ用

var infoImageBox: [UIImageView] = [] // 画面上での情報タグ画像の表示を管理する
var warnImageBox: [UIImageView] = [] // 画面上での警告タグ画像の表示を管理する

var userLat: CLLocationDegrees = 0   // 緯度
var userLon: CLLocationDegrees = 0 // 経度

let butSize: CGFloat = 70.0 // ボタンサイズ



/* 現在開いているページは地図画面か、ARカメラ画面か */
enum mode: Int {
    case applemap = 0
    case osm = 1
    case cam = 2
}

// 現在の画面が、地図かカメラかを保持する変数
var displayMode = 0

// 現在地から一番近い災害の状況
enum viewmode: Int {
    case detail = 0
    case config = 1
}

var viewMode = 0

var warnImage = UIImage(named: "icon_warn0.png") // 情報タグの画像
//var warningMessage: UILabel! // 災害範囲内・付近にいるときに表示するメッセージ

var circleRadius = [CLLocationDistance]() // 災害範囲の円の半径

// 現在地から一番近い災害の状況
enum warningState: String {
    case inst = "侵入"
    case near = "付近"
    case safe = "安全"
}


var pinData: TagData! // タップされたタグの情報を保持

var backgroundView = UIImageView(frame: CGRect.init(x: 0, y: 0, width: screenWidth, height: screenHeight)) // 詳細画面の後ろのビュー

let backBut = UIButton(frame: CGRect.init(x: 0, y: 0, width: screenWidth * 0.8 * 0.1, height: screenHeight * 0.8 * 0.1))
let changeMapBut = UIButton(frame: CGRect.init(x: 0, y: 0, width: screenWidth / 4, height: screenHeight / 8))

let cannotTouchView = UIView(frame: CGRect.init(x: 0.0, y: 0.0, width: CGFloat(screenWidth), height: CGFloat(screenHeight))) // 画面に触れられないようにするためのビュー
