//
//  DataManager.swift
//  CerdAR
//
//  Created by 山根 舞 on 2016/09/07.
//  Copyright © 2016年 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University). All rights reserved.
//

import Foundation
import UIKit
import MapKit


/* タグに持たせるデータ群 */
class TagData: MKPointAnnotation {
    
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
    var start: String!        // 災害の開始時間
    var stop: String!         // 災害の終了時間
    var message1: String!     // 警告範囲に近づいてきた時のメッセージ
    var message2: String!     // 警告範囲に侵入した時のメッセージ
    var riskType: Int!        // 災害の種類(0:火災,1:浸水,2:落橋,3:土砂崩れ)
}


// 定数
let kInfo = "info" // 種別(情報)
let kWarn = "warn" // 種別(警告(今災害が起こっている))
let kWillWarn = "willWarn" // 種別(警告(災害が今後発生する))
let kDidWarn = "didWarn" // 種別(警告(災害がおさまった))
let airtagImage = UIImage(named: "icon_airtag.png")! // 情報タグの画像
let kZero: CGFloat = 0 // 初期値0
let kTagFont: CGFloat = 100 // タグのフォントサイズ
let kTagLine = 3 // タグの行数
let kTagXY: CGFloat = 40 // タグのx,y座標
let kTagW: CGFloat = 80 // タグの横幅
let kTagH: CGFloat = 100 // タグの縦幅
let kTagSize: CGFloat = 500 // タグ画像のサイズ
let kButSize: CGFloat = 100 // ボタンのサイズ(wid・hei)
let kButPos: CGFloat = 5 // ボタンの位置


let screenWidth = Double(UIScreen.mainScreen().bounds.size.width)   // 実機の画面の横の長さ
let screenHeight = Double(UIScreen.mainScreen().bounds.size.height) // 実機の画面の縦の長さ

var infoBox = [TagData]() // 情報タグ用
var warnBox = [TagData]() // 警告タグ用

var mode = 0 // 地図画面(0)、カメラ画面(1)
var warnImage = UIImage(named: "icon_warn0.png") // 情報タグの画像
var warningMessage: UILabel! // 災害範囲内・付近にいるときに表示するメッセージ

enum warningState: String {
    case inst = "侵入"
    case near = "付近"
    case safe = "安全"
}

var warnState = warningState.safe.rawValue

var circleRadius = [CLLocationDistance]() // 災害範囲の円の半径
