//
//  Constant.swift
//  CerdAR
//
//  Copyright (c) 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
//

import Foundation

/* camera */
let kCamDis = 500 // 現在地からkCamDis(m)までのタグを表示する
let kCamAlpha = 0.3 // 警告モードのalpha値( 0(薄)<-->(濃)1 ) ※今は各災害同じalpha値で設定している


/* map */
let kInfoAnimation = 0.3 // 情報タグがタップされた時のアニメーション時間
let kWarnAnimation = 1.0 // 警告タグがタップされた時のアニメーション時間


/* 共通(camera,map,osm) */
let kNearMsg = 500 // 現在地から災害までがnearMsg(m)以内であれば、付近にいるメッセージを表示する
let kUpdateWarn = 60.0 // 災害情報の更新周期(災害円の拡大速度もここで行っている)
let kMsgAlpha = 0.6 // 警告メッセージのalpha値( 0(薄)<-->(濃)1 )


/* 共通(map,osm) */
let kTouchView = 1.0 // 詳細画面が閉じられてからkTouchView後に地図画面を触れるようになる
let kShowDetail = 0.4 // タグをタップしてからkShowDetail秒後に詳細画面を表示する
let kMapAlpha = 0.8 // 警告モードのalpha値( 0(濃)<-->(薄)1 ) ※地図画面を薄くしているため、薄すぎると地図が見えづらくなる
