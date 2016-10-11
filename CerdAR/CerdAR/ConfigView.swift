//
//  ConfigView.swift
//  CerdAR
//
//  Copyright (c) 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
//

import Foundation
import UIKit

@objc protocol ConfigViewDelegate {
    func configViewFinish()
}

class ConfigView: UIView {
    
    weak var delegate: ConfigViewDelegate?
    let aboutAppBut = UIButton(frame: CGRect.init(x: 0, y: 0, width: screenWidth / 4, height: screenHeight / 8))
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        setup()
    }
    
    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
    }
    
    
    func setup() {
        self.addSubview(changeMapBut)
        self.addSubview(aboutAppBut)
        load()
    }
    
    
    func load() {
        
        self.backgroundColor = UIColor.white
        
        // 「このアプリについて」ボタンの挿入(画面左上側)
        aboutAppBut.setTitle("このアプリについて", for: UIControlState()) // 通常
        aboutAppBut.setTitleColor(UIColor.white, for: UIControlState())
        aboutAppBut.setTitle("このアプリについて", for: UIControlState.highlighted) // ハイライト
        aboutAppBut.setTitleColor(UIColor.black, for: UIControlState.highlighted)
        aboutAppBut.layer.position = CGPoint(x: screenWidth / 6, y: screenHeight / 3)
        aboutAppBut.backgroundColor = UIColor.gray
        aboutAppBut.addTarget(self, action: #selector(ConfigView.onClick_aboutApp(_:)), for: .touchUpInside)
        
        // 「地図切り替え」ボタンの挿入(画面左上側)
        if displayMode == mode.applemap.rawValue {
            changeMapBut.setTitle("OpenStreetMapsに切り替え", for: UIControlState()) // 通常
            changeMapBut.setTitle("OpenStreetMapsに切り替え", for: UIControlState.highlighted) // ハイライト
        } else if displayMode == mode.osm.rawValue {
            changeMapBut.setTitle("AppleMapsに切り替え", for: UIControlState()) // 通常
            changeMapBut.setTitle("AppleMapsに切り替え", for: UIControlState.highlighted) // ハイライト
        }
        
        changeMapBut.setTitleColor(UIColor.white, for: UIControlState())
        changeMapBut.setTitleColor(UIColor.black, for: UIControlState.highlighted)
        changeMapBut.layer.position = CGPoint(x: screenWidth / 6, y: screenHeight / 2)
        changeMapBut.backgroundColor = UIColor.gray
        
    }
    
    
    /*
     * (「戻る」または背景をタップする)
     * 表示されているパーツを破棄する
     */
    func onClick_back(_ sender: UIButton) {
        self.removeFromSuperview()
        deleteConfigDisplay()
    }
    
    /*
     * (「このアプリについて」をタップする)
     * 表示されているパーツを破棄する
     */
    func onClick_aboutApp(_ sender: UIButton) {
        changeMapBut.removeFromSuperview()
        aboutAppBut.removeFromSuperview()
        
        let aboutAppLabel = UILabel(frame: CGRect(x: 0, y: 0, width: screenWidth / 4, height: screenHeight / 8))
        aboutAppLabel.backgroundColor = UIColor.gray
        aboutAppLabel.font = UIFont.systemFont(ofSize: 20)
        aboutAppLabel.text = "Copyright (c) 2014 Ruoyu Fu, Pinglin Tang" + "\n"
            + "© OpenStreetMap contributors"
        
        aboutAppLabel.textAlignment = NSTextAlignment.center
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
