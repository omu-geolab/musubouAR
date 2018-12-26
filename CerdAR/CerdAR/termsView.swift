//
//  termsView.swift
//  CerdAR
//
//  Copyright (c) 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
//

import UIKit

@objc protocol termsViewDelegate {
    func termsViewfinish()
}

class termsView: UIView {
    
    weak var delegate: termsViewDelegate?
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        viewInit()
    }
    
    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        viewInit()
    }
    
    
    /*
     * 利用規約の表示
     */
    func viewInit() {
        
        // OKボタンの生成
        let okButton = UIButton(frame: CGRect(x: 0, y: 0, width: bounds.width * 0.8 * 0.45, height: bounds.height * 0.8 * 0.15))
        okButton.backgroundColor = UIColor.yellow
        okButton.layer.masksToBounds = true
        okButton.setTitle("同意してサービスを利用する", for: UIControlState())
        okButton.setTitleColor(UIColor.black, for: UIControlState())
        okButton.titleLabel!.font = UIFont.systemFont(ofSize: 25)
        okButton.titleLabel!.adjustsFontSizeToFitWidth = true
        okButton.layer.borderColor = UIColor.black.cgColor
        okButton.layer.borderWidth = 3
        okButton.layer.position = CGPoint(x: screenWidth * 0.58, y: screenHeight * 0.8 * 0.85)
        okButton.layer.cornerRadius = 20.0 // 枠線を角丸にする

        okButton.addTarget(self, action: #selector(termsView.onClick_Ok(_:)), for: .touchUpInside)
        
        // キャンセルボタンの生成
        let cancelButton = UIButton(frame: CGRect(x: 0, y: 0, width: bounds.width * 0.8 * 0.41, height: bounds.height * 0.8 * 0.15))
        cancelButton.backgroundColor = UIColor.gray
        cancelButton.layer.masksToBounds = true
        cancelButton.setTitle("同意せずアプリを閉じる", for: UIControlState())
        cancelButton.setTitleColor(UIColor.white, for: UIControlState())
        cancelButton.titleLabel!.font = UIFont.systemFont(ofSize: 25)
        cancelButton.titleLabel!.adjustsFontSizeToFitWidth = true
        cancelButton.layer.position = CGPoint(x: screenWidth * 0.2, y: screenHeight * 0.8 * 0.85)
        cancelButton.addTarget(self, action: #selector(termsView.onClick_Cancel(_:)), for: .touchUpInside)
        cancelButton.layer.cornerRadius = 20.0 // 枠線を角丸にする
        
        // アラートビューの生成
        let alertView = UIView(frame: CGRect(x: bounds.width * 0.1, y: bounds.height * 0.1, width: bounds.width * 0.8, height: bounds.height * 0.8))
        alertView.backgroundColor = UIColor.white
        
        // 利用規約ラベルの生成
        let termsLabel = UILabel(frame: CGRect(x: bounds.width * 0.8 * 0.05, y: bounds.height * 0.8 * 0.2 - bounds.height * 0.8 * 0.16 - ((screenHeight * 0.8 * 0.85 - (bounds.height * 0.8 * 0.15 / 2)) - ( bounds.height * 0.8 * 0.2 + bounds.height * 0.8 * 0.55 )), width: bounds.width * 0.8 * 0.3, height: bounds.height * 0.8 * 0.16))
        termsLabel.font = UIFont.systemFont(ofSize: 30)
        termsLabel.text = "利用規約"
        termsLabel.adjustsFontSizeToFitWidth = true

        
        //ロゴの作成
        logo(view: alertView)
        
        // スクロールビューの生成
        let scrollView = UIScrollView(frame: CGRect(x: bounds.width * 0.8 * 0.05, y: bounds.height * 0.8 * 0.2, width: bounds.width * 0.8 * 0.9, height: bounds.height * 0.8 * 0.55))
        scrollView.backgroundColor = UIColor(red: 0.9, green: 0.9, blue: 0.9, alpha: 1.0)
        
        // アラートラベルの生成
        let alertLabel = UILabel(frame: CGRect(x: bounds.width * 0.8 * 0.025, y: bounds.height * 0.8 * 0.05, width: bounds.width * 0.8 * 0.85, height: bounds.height * 0.8))
        alertLabel.backgroundColor = UIColor(red: 0.9, green: 0.9, blue: 0.9, alpha: 1.0)
        alertLabel.textColor = UIColor.black
        
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
        
        alertLabel.font = UIFont.systemFont(ofSize: 18)
        alertLabel.adjustsFontSizeToFitWidth = true
        alertLabel.numberOfLines = 0
        alertLabel.sizeToFit()
        
        // ビューへの追加
        
        //利用規約
        alertView.addSubview(termsLabel)
        
        //説明文
        scrollView.addSubview(alertLabel)
        scrollView.contentSize = CGSize(width: alertLabel.frame.size.width, height: alertLabel.frame.size.height)
        alertView.addSubview(scrollView)
        
        //ボタン
        alertView.addSubview(okButton)
        alertView.addSubview(cancelButton)
        
        addSubview(alertView)
    }
    
    /*
     * (利用規約)OKボタンをクリックした時
     */
    @objc func onClick_Ok(_ sender: UIButton) {
        delegate?.termsViewfinish()
    }
    
    /*
     * (利用規約)キャンセルボタンをクリックした時
     */
    @objc func onClick_Cancel(_ sender: UIButton) {
        exit(0) // アプリを終了する
    }
    
    /*
     * ロゴ表示
     * @param view ロゴを貼り付けるUIView
     */
    func logo(view: UIView) {
        
        // ロゴ画像(OCU)
        let ocuImage = UIImage(named: "logo_OCU.jpg")
        let logoOcuView = UIImageView(image: ocuImage)
        logoOcuView.frame = CGRect(x: bounds.width * 0.8 * 0.05 + 200, y: bounds.height * 0.8 * 0.02 + 19, width: (ocuImage?.size.width)! * 0.14, height: (ocuImage?.size.height)! * 0.14)
//        view.addSubview(logoOcuView)

        // ロゴ画像(CERD)
        let cerdImage = UIImage(named: "logo_CERD.jpg")
        let logoCerdView = UIImageView(image: cerdImage)
        var logoWidth = (cerdImage?.size.width)! * 0.16
        var logoHeight = (cerdImage?.size.height)! * 0.16
        if UIDevice.current.userInterfaceIdiom == .phone {
            logoWidth /= 2
            logoHeight /= 2
        }
        
        var logoCerdposY = bounds.height * 0.8 * 0.2 - bounds.height * 0.8 * 0.16 + bounds.height * 0.8 * 0.16 - logoHeight - ((screenHeight * 0.8 * 0.85 - (bounds.height * 0.8 * 0.15 / 2)) - (bounds.height * 0.8 * 0.2 + bounds.height * 0.8 * 0.55))
        if logoCerdposY < 0 {
            logoCerdposY = 0
        }
        logoCerdView.frame = CGRect(x: bounds.width * 0.8 * 0.05 + (bounds.width * 0.8 * 0.9 - logoWidth), y: logoCerdposY, width: logoWidth, height: logoHeight)
        view.addSubview(logoCerdView)
        
    }
    
}
