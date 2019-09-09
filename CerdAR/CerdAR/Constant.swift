//
//  Constant.swift
//  CerdAR
//
//  Copyright (c) 2018 APPLIED TECHNOLOGY CO.,LTD., 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
//

import Foundation

/* camera */
let kCamDis = 100 // 現在地からkCamDis(m)までのタグを表示する
let kCamAlpha = 0.3 // 警告モードのalpha値( 0(薄)<-->(濃)1 ) ※今は各災害同じalpha値で設定している
let kTagUpdateTime = 0.01 // kTagUpdateTime秒ごとにタグ表示を更新する
let kDiff = 0.1 // kTagUpdateTime秒前と比較して -kDiff ~ kDiff度の変化があるときのみ処理をする(手ぶれ補正)

/* map */
let kInfoAnimation = 0.1 // 情報タグがタップされた時のアニメーション時間
let kWarnAnimation = 0.1 // 警告タグがタップされた時のアニメーション時間

/* 共通(camera,map,osm) */
let kNearMsg = 50 // 現在地から災害までがnearMsg(m)以内であれば、付近にいるメッセージを表示する
let kUpdateWarn = 5.0 // 災害情報の更新周期（倍速）※災害円の拡大速度もここで行っている
let kUpdateMM = 2.0 // 警告メッセージと警告モードの更新周期
let kMsgAlpha = 0.6 // 警告メッセージのalpha値( 0(薄)<-->(濃)1 )

/* 共通(map,osm) */
let kTouchView = 0.1 // 詳細画面が閉じられてからkTouchView後に地図画面を触れるようになる
let kShowDetail = 0.1 // タグをタップしてからkShowDetail秒後に詳細画面を表示する
let kMapAlpha = 0.8 // 警告モードのalpha値( 0(濃)<-->(薄)1 ) ※地図画面を薄くしているため、薄すぎると地図が見えづらくなる

/* 共通(AR) */
//let serverName = "https://www.cerd.osaka-cu.ac.jp:8443/styles/positron/{z}/{x}/{y}.png"
//let serverName = "https://www.cerd.osaka-cu.ac.jp/cerd-ar_tiles/sinsui/{z}/{x}/{y}.png"
var serverName = "https://cyberjapandata.gsi.go.jp/xyz/lcmfc2/{z}/{x}/{y}.png"


let scaleAR = Float(0.02)//AR拡大縮小
var adjustHeightAR = Float(1.5)//AR高さし調整
let heightARModel = Float(40.0)
let kUpdateFace = 5.0//一定時平面図更新
let fileName = "third_party_vector_style.json"
let heightMapAR = 200.0
let widthMapAR = 200.0
let kMapARAlpha = Float(0.9)
