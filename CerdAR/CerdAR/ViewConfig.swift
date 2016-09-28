//
//  ViewConfig.swift
//  CerdAR
//
//  Copyright (c) 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
//

import Foundation
import UIKit

@objc protocol configViewDelegate {
    func configViewFinish()
}

class ViewConfig: UIView {
    
    weak var delegate: configViewDelegate?
    let aboutAppBut = UIButton(frame: CGRect.init(x: 0, y: 0, width: screenWidth * 0.8 * 0.5, height: screenHeight * 0.8 * 0.2))
    let backBut = UIButton(frame: CGRect.init(x: 0, y: 0, width: screenWidth * 0.8 * 0.1, height: screenHeight * 0.8 * 0.1))
    
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        setup()
    }
    
    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
    }
    
    
    func setup() {
        self.addSubview(changeMapBut)
        self.addSubview(backBut)
        self.addSubview(aboutAppBut)
        load()
    }
    
    
    func load() {

        self.backgroundColor = UIColor.whiteColor()
        
        // 「このアプリについて」ボタンの挿入(画面左上側)
        aboutAppBut.setTitle("このアプリについて", forState: UIControlState.Normal) // 通常
        aboutAppBut.setTitleColor(UIColor.whiteColor(), forState: UIControlState.Normal)
        aboutAppBut.setTitle("このアプリについて", forState: UIControlState.Highlighted) // ハイライト
        aboutAppBut.setTitleColor(UIColor.blackColor(), forState: UIControlState.Highlighted)
        aboutAppBut.layer.position = CGPoint(x: screenWidth * 0.3, y: screenHeight * 0.3)
        aboutAppBut.backgroundColor = UIColor.grayColor()
        aboutAppBut.addTarget(self, action: #selector(ViewConfig.onClick_aboutApp(_:)), forControlEvents: .TouchUpInside)
        
        // 「地図切り替え」ボタンの挿入(画面左上側)
        changeMapBut.setTitle("いれかえ", forState: UIControlState.Normal) // 通常
        changeMapBut.setTitleColor(UIColor.whiteColor(), forState: UIControlState.Normal)
        changeMapBut.setTitle("いれかえ", forState: UIControlState.Highlighted) // ハイライト
        changeMapBut.setTitleColor(UIColor.blackColor(), forState: UIControlState.Highlighted)
        changeMapBut.layer.position = CGPoint(x: screenWidth * 0.3, y: screenHeight * 0.6)
        changeMapBut.backgroundColor = UIColor.grayColor()
        

        // 閉じるボタンの挿入(画面左上側)
        backBut.setTitle("＜ 閉じる", forState: UIControlState.Normal) // 通常
        backBut.setTitleColor(UIColor.whiteColor(), forState: UIControlState.Normal)
        backBut.setTitle("＜ 閉じる", forState: UIControlState.Highlighted) // ハイライト
        backBut.setTitleColor(UIColor.blackColor(), forState: UIControlState.Highlighted)
        backBut.layer.position = CGPoint(x: 50, y: 50)
        backBut.backgroundColor = UIColor.blueColor()
        backBut.addTarget(self, action: #selector(ViewConfig.onClick_back(_:)), forControlEvents: .TouchUpInside)        
    }
    
    
    /*
     * (「戻る」または背景をタップする)
     * 表示されているパーツを破棄する
     */
    func onClick_back(sender: UIButton) {
        self.removeFromSuperview()
        deleteConfigDisplay()
    }
    
    /*
     * (「このアプリについて」をタップする)
     * 表示されているパーツを破棄する
     */
    func onClick_aboutApp(sender: UIButton) {
        changeMapBut.removeFromSuperview()
        aboutAppBut.removeFromSuperview()
        
        
        let aboutAppLabel = UILabel(frame: CGRect(x: screenWidth * 0.8 * 0.15, y: screenHeight * 0.8 * 0.2, width: screenWidth * 0.8 * 0.7, height: screenHeight * 0.8 * 0.7))
        aboutAppLabel.backgroundColor = UIColor.grayColor()
        aboutAppLabel.font = UIFont.systemFontOfSize(20)
        aboutAppLabel.text = "このアプリについてこのアプリについてこのアプリについてこのアプリについてこのアプリについてこのアプリについてこのアプリについて" + "\n"
                                + "このアプリについてこのアプリについてこのアプリについてこのアプリについてこのアプリについてこのアプリについて" + "\n"
                                + "このアプリについてこのアプリについてこのアプリについてこのアプリについてこのアプリについてこのアプリについてこのアプリについて" + "\n"
                                + "このアプリについてこのアプリについてこのアプリについて" + "\n"

        aboutAppLabel.textAlignment = NSTextAlignment.Center
        aboutAppLabel.numberOfLines = 0
        aboutAppLabel.sizeToFit()
        
        self.addSubview(aboutAppLabel)
        
    }
    
    /*
     * 設定画面を閉じる
     */
    func deleteConfigDisplay() {
        for view in self.subviews {
            view.removeFromSuperview()
        }
        backgroundView.removeFromSuperview()
        delegate?.configViewFinish()
    }
    
}
