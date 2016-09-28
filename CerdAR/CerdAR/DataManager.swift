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
    var start: String!        // 災害の開始時間
    var stop: String!         // 災害の終了時間
    var message1: String!     // 警告範囲に近づいてきた時のメッセージ
    var message2: String!     // 警告範囲に侵入した時のメッセージ
    var riskType: Int!        // 災害の種類(0:火災,1:浸水,2:落橋,3:土砂崩れ)
}

// 定数
let kInfo = "info" // 種別(情報)
let kWarn = "warn" // 種別(警告(今災害が起こっている))
let kPhoto = "photo" // 写真
let kMovie = "movie" // 動画

let screenWidth = UIScreen.mainScreen().bounds.size.width   // 実機の画面の横の長さ
let screenHeight = UIScreen.mainScreen().bounds.size.height // 実機の画面の縦の長さ

let dWid = screenWidth * 0.8
let dHei = screenHeight * 0.8

var infoBox = [TagData]() // 情報タグ用
var warnBox = [TagData]() // 警告タグ用

var osmInfoBox = [MGLTagData]() // OSM情報タグ用
var osmWarnBox = [MGLTagData]() // OSM情報タグ用

var infoImageBox: [UIImageView] = [] // 画面上での情報タグ画像の表示を管理する
var warnImageBox: [UIImageView] = [] // 画面上での警告タグ画像の表示を管理する

/* 現在開いているページは地図画面か、ARカメラ画面か */
enum mode: Int {
    case map = 0
    case cam = 1
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
var warningMessage: UILabel! // 災害範囲内・付近にいるときに表示するメッセージ

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
let changeMapBut = UIButton(frame: CGRect.init(x: 0, y: 0, width: screenWidth * 0.8 * 0.5, height: screenHeight * 0.8 * 0.2))

let cannotTouchView = UIView(frame: CGRect.init(x: 0.0, y: 0.0, width: CGFloat(screenWidth), height: CGFloat(screenHeight))) // 画面に触れられないようにするためのビュー
