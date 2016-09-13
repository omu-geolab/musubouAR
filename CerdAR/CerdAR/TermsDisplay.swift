//
//  TermsDisplay.swift
//  CerdAR
//
//  Copyright © 2016年 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University). All rights reserved.
//

import Foundation
import UIKit


var clearView = UIView() // アラート画面が出ている間は地図画面に触れないようにするためのビュー

/* アプリを開いた時に出る注意書き */
// TODO: マジックナンバー
func termsOfService(view: UIView) {
    let scrollView = UIScrollView()
    var alertLabel = UILabel()
    var alertView = UIView()
    var termsLabel = UILabel()
    let okButton = UIButton()
    let cancelButton = UIButton()
    
    // アラートビューのサイズ
    let alertX = CGFloat(screenWidth) * 0.1
    let alertY = CGFloat(screenHeight) * 0.1
    let alertWidth = CGFloat(screenWidth) * 0.8
    let alertHeight = CGFloat(screenHeight) * 0.8
    
    clearView = UIView(frame: CGRect.init(x: kZero, y: kZero, width: CGFloat(screenWidth), height: CGFloat(screenHeight)))
    
    // OKボタンの生成
    okButton.frame = CGRect.init(x: 0, y: 0, width: alertWidth * 0.45, height: alertHeight * 0.15)
    okButton.backgroundColor = UIColor.yellowColor()
    okButton.layer.masksToBounds = true
    okButton.setTitle("同意してサービスを利用する", forState: UIControlState.Normal)
    okButton.setTitleColor(UIColor.blackColor(), forState: UIControlState.Normal)
    okButton.titleLabel!.font = UIFont.systemFontOfSize(27)
    okButton.layer.borderColor = UIColor.blackColor().CGColor
    okButton.layer.borderWidth = 5
    okButton.layer.position = CGPoint(x: screenWidth * 0.58, y: screenHeight * 0.8 * 0.85)
    okButton.addTarget(ViewMap(), action: #selector(ViewMap.onClickOkButton(_:)), forControlEvents: .TouchUpInside)
    
    // キャンセルボタンの生成
    cancelButton.frame = CGRect.init(x: 0, y: 0, width: alertWidth * 0.4, height: alertHeight * 0.15)
    cancelButton.backgroundColor = UIColor.grayColor()
    cancelButton.layer.masksToBounds = true
    cancelButton.setTitle("同意せずアプリを閉じる", forState: UIControlState.Normal)
    cancelButton.setTitleColor(UIColor.whiteColor(), forState: UIControlState.Normal)
    cancelButton.titleLabel!.font = UIFont.systemFontOfSize(25)
    cancelButton.layer.position = CGPoint(x: screenWidth * 0.2, y: screenHeight * 0.8 * 0.85)
    cancelButton.addTarget(ViewMap(), action: #selector(ViewMap.onClickCancelButton(_:)), forControlEvents: .TouchUpInside)
    
    // アラートビューの生成
    alertView = UIView(frame: CGRect.init(x: alertX, y: alertY, width: alertWidth, height: alertHeight))
    alertView.backgroundColor = UIColor.whiteColor()
    
    // 利用規約ラベルの生成
    termsLabel = UILabel(frame: CGRect.init(x: alertWidth * 0.2, y: alertHeight * 0.02, width: 300, height: 100))
    termsLabel.font = UIFont.systemFontOfSize(60)
    termsLabel.text = "利用規約"
    
    // スクロールビューの生成
    scrollView.frame = CGRect.init(x: Double(alertWidth) * 0.05, y: Double(alertHeight) * 0.2, width: Double(alertWidth) * 0.9, height: Double(alertHeight) * 0.5)
    scrollView.backgroundColor = UIColor(red: 0.9, green: 0.9, blue: 0.9, alpha: 1.0)
    
    // アラートラベルの生成
    alertLabel = UILabel(frame: CGRect.init(x: alertWidth * 0.025, y: alertHeight * 0.05, width: alertWidth * 0.85, height: alertHeight))
    alertLabel.backgroundColor = UIColor(red: 0.9, green: 0.9, blue: 0.9, alpha: 1.0)
    alertLabel.textColor = UIColor.blackColor()
    
    alertLabel.text = "大阪市立大学 都市防災教育研究センター(CERD)が提供するiOS端末用アプリ「CERD-AR」の利用について、以下の通りに定めます。" + "\n\n"
        + "本規約に同意頂くことにより、本アプリを利用することができます。" + "\n"
        + "なお、本アプリの使用を開始した時点をもって、本規約に同意したものとみなします。" + "\n\n"
        + "（１）当センターは、本アプリおよび本利用規約を、利用者への事前通知および承諾なく変更、追加又は削除する事ができるものとします。" + "\n\n"
        + "（２）本アプリのご利用には、電気通信事業者の定めるところに従い、別途通信料等がかかる場合があります。通信料は、利用者のご負担になります。" + "\n\n"
        + "（３）本アプリの使用は、利用者自身の責任において行うものとします。当センターは利用者に対し、本アプリの不具合等がないこと、および特定の目的や機器に対する適応性に対し、なんら保証せず、また、利用者が本アプリを使用したこと、または使用できなかったことに起因して、利用者または第三者が被った直接的または間接的な損害について、一切責任を負いません。"
        + "\n\n"
        + "・ご利用にあたって" + "\n"
        + "移動中は本アプリを含め端末の操作、および表示画面の注視をしないでください。" + "\n"
        + "必ず安全な場所に停止してから、周囲の安全を十分に確認してから操作および画面の確認を行ってください。" + "　\n　\n　\n　\n　\n　\n"
    
    alertLabel.font = UIFont.systemFontOfSize(18)
    alertLabel.numberOfLines = 0
    alertLabel.sizeToFit()
    
    // ビューへの追加
    view.addSubview(clearView)
    alertView.addSubview(termsLabel)
    scrollView.addSubview(alertLabel)
    scrollView.contentSize = CGSize.init(width: alertLabel.frame.size.width, height: alertLabel.frame.size.height)
    alertView.addSubview(scrollView)
    alertView.addSubview(okButton)
    alertView.addSubview(cancelButton)
    clearView.addSubview(alertView)
}
