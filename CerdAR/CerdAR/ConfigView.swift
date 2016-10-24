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
    
    /*
     * 設定画面の表示
     */
    func setup() {
        self.addSubview(changeMapBut)
        self.addSubview(aboutAppBut)
        load()
    }
    
    
    
    /*
     * 設定画面のパーツの準備
     */
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
     * OSSのライセンス表記
     */
    func onClick_aboutApp(_ sender: UIButton) {
        changeMapBut.removeFromSuperview()
        aboutAppBut.removeFromSuperview()
        
        // コメントの挿入(画面右側)
        let comment = UILabel(frame: CGRect.init(x: 0, y: 0, width: screenWidth / 3 - 60, height: dHei * 0.6))
        comment.font = UIFont.systemFont(ofSize: 15)
        comment.text = "[SWIFTY JSON]" + "\n\n"
        comment.text = comment.text! + "The MIT License (MIT)" + "\n"
            + "\n"
            + "Copyright (c) 2016 Ruoyu Fu" + "\n"
            + "\n"
            + "Permission is hereby granted, free of charge, to any person obtaining a copy" + "\n"
            + "of this software and associated documentation files (the \"Software\"), to deal" + "\n"
            + "in the Software without restriction, including without limitation the rights" + "\n"
            + "to use, copy, modify, merge, publish, distribute, sublicense, and/or sell" + "\n"
            + "copies of the Software, and to permit persons to whom the Software is" + "\n"
            + "furnished to do so, subject to the following conditions:" + "\n"
            + "\n"
            + "The above copyright notice and this permission notice shall be included in" + "\n"
            + "all copies or substantial portions of the Software." + "\n"
            + "\n"
            + "THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR" + "\n"
            + "IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY," + "\n"
            + "FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE" + "\n"
            + "AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER" + "\n"
            + "LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM," + "\n"
            + "OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN" + "\n"
            + "THE SOFTWARE."
        
        
        comment.text = comment.text! + "[mapbox]" + "\n\n"
        comment.text = comment.text! + "mapbox-gl-native copyright (c) 2014-2016 Mapbox." + "\n"
            + "\n"
            + "Redistribution and use in source and binary forms, with or without" + "\n"
            + "modification, are permitted provided that the following conditions are" + "\n"
            + "met:"
            + "\n"
            + "* Redistributions of source code must retain the above copyright" + "\n"
            + "notice, this list of conditions and the following disclaimer." + "\n"
            + "* Redistributions in binary form must reproduce the above copyright" + "\n"
            + "notice, this list of conditions and the following disclaimer in" + "\n"
            + "the documentation and/or other materials provided with the" + "\n"
            + "distribution." + "\n"
            + "\n"
            + "THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS \"AS" + "\n"
            + "IS\" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO," + "\n"
            + "THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR" + "\n"
            + "PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR" + "\n"
            + "CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL," + "\n"
            + "EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO," + "\n"
            + "PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR" + "\n"
            + "PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF" + "\n"
            + "LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING" + "\n"
            + "NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS" + "\n"
            + "SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
        
        comment.text = comment.text! + "\n\n"
        comment.numberOfLines = 0
        comment.sizeToFit()
        
        // スクロールビューの生成
        let scrollView = UIScrollView()
        scrollView.frame = CGRect.init(x: 20, y: screenHeight * 0.05, width: screenWidth / 3 - 50, height: screenHeight * 0.9)
        scrollView.addSubview(comment)
        scrollView.contentSize = CGSize.init(width: comment.frame.size.width, height: comment.frame.size.height)
        self.addSubview(scrollView)
        
        
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
