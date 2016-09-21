//
//  termsView.swift
//  CerdAR
//
//  Created by dogan hironori on 2016/09/20.
//  Copyright © 2016年 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University). All rights reserved.
//

import UIKit

@objc protocol termsViewDelegate {
    func termsViewfinish()
}

class termsView: UIView {
    weak var delegate: termsViewDelegate?
    
    /*
    // Only override drawRect: if you perform custom drawing.
    // An empty implementation adversely affects performance during animation.
    override func drawRect(rect: CGRect) {
        // Drawing code
    }
    */

    override init(frame: CGRect) {
        super.init(frame: frame)
        viewInit()
    }
    
    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        viewInit()
    }

    func viewInit() {
        // OKボタンの生成
        let okButton = UIButton(frame: CGRect(x: 0, y: 0, width: bounds.width * 0.8 * 0.45, height: bounds.height * 0.8 * 0.15))
        okButton.backgroundColor = UIColor.yellowColor()
        okButton.layer.masksToBounds = true
        okButton.setTitle("同意してサービスを利用する", forState: UIControlState.Normal)
        okButton.setTitleColor(UIColor.blackColor(), forState: UIControlState.Normal)
        okButton.titleLabel!.font = UIFont.systemFontOfSize(27)
        okButton.layer.borderColor = UIColor.blackColor().CGColor
        okButton.layer.borderWidth = 5
        okButton.layer.position = CGPoint(x: screenWidth * 0.58, y: screenHeight * 0.8 * 0.85)
        okButton.addTarget(self, action: #selector(termsView.onClick_Ok(_:)), forControlEvents: .TouchUpInside)
        
        // キャンセルボタンの生成
        let cancelButton = UIButton(frame: CGRect(x: 0, y: 0, width: bounds.width * 0.8 * 0.4, height: bounds.height * 0.8 * 0.15))
        cancelButton.backgroundColor = UIColor.grayColor()
        cancelButton.layer.masksToBounds = true
        cancelButton.setTitle("同意せずアプリを閉じる", forState: UIControlState.Normal)
        cancelButton.setTitleColor(UIColor.whiteColor(), forState: UIControlState.Normal)
        cancelButton.titleLabel!.font = UIFont.systemFontOfSize(25)
        cancelButton.layer.position = CGPoint(x: screenWidth * 0.2, y: screenHeight * 0.8 * 0.85)
        cancelButton.addTarget(self, action: #selector(termsView.onClick_Cancel(_:)), forControlEvents: .TouchUpInside)
        
        // アラートビューの生成
        let alertView = UIView(frame: CGRect(x: bounds.width * 0.1, y: bounds.height * 0.1, width: bounds.width * 0.8, height: bounds.height * 0.8))
        alertView.backgroundColor = UIColor.whiteColor()
        
        // 利用規約ラベルの生成
        let termsLabel = UILabel(frame: CGRect(x: bounds.width * 0.8 * 0.2, y: bounds.height * 0.8 * 0.02, width: 300, height: 100))
        termsLabel.font = UIFont.systemFontOfSize(60)
        termsLabel.text = "利用規約"
        
        // スクロールビューの生成
        let scrollView = UIScrollView(frame: CGRect(x: bounds.width * 0.8 * 0.05, y: bounds.height * 0.8 * 0.2, width: bounds.width * 0.8 * 0.9, height: bounds.height * 0.8 * 0.5))
        scrollView.backgroundColor = UIColor(red: 0.9, green: 0.9, blue: 0.9, alpha: 1.0)
        
        // アラートラベルの生成
        let alertLabel = UILabel(frame: CGRect(x: bounds.width * 0.8 * 0.025, y: bounds.height * 0.8 * 0.05, width: bounds.width * 0.8 * 0.85, height: bounds.height * 0.8))
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
        alertView.addSubview(termsLabel)
        scrollView.addSubview(alertLabel)
        scrollView.contentSize = CGSize(width: alertLabel.frame.size.width, height: alertLabel.frame.size.height)
        alertView.addSubview(scrollView)
        alertView.addSubview(okButton)
        alertView.addSubview(cancelButton)
        addSubview(alertView)
    }
    
    /* (利用規約)OKボタンをクリックした時 */
    func onClick_Ok(sender: UIButton) {
        delegate?.termsViewfinish()
    }
    
    /* (利用規約)キャンセルボタンをクリックした時 */
    func onClick_Cancel(sender: UIButton) {
        exit(0) // アプリを終了する
    }
    
}
