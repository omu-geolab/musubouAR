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
    let aboutAppBut = UIButton(frame: CGRect.init(x: 0, y: 0, width: screenWidth / 3, height: screenHeight / 6))
    let deletebutton = UIButton(frame: CGRect.init(x: 0, y: 0, width: 30, height: 30))
//    var mapView = MGLMapView() // 地図画面
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
        let backgroundImage = UIImage(named: "info-bg")!
        var imageView : UIImageView!
        imageView = UIImageView(frame: self.bounds)
        imageView.contentMode =  UIView.ContentMode.scaleAspectFill
        imageView.image = backgroundImage
        self.addSubview(imageView)

        self.addSubview(changeMapBut2)
        self.addSubview(aboutAppBut)
        self.addSubview(gisInfoBut)
        load()
    }

    /*
     * 設定画面のパーツの準備
     */
    func load() {

//        self.sendSubviewToBack(imageView)

        
        // 「このアプリについて」ボタンの挿入(画面左上側)
        print(screenWidth)
        print(screenHeight)
        let height:CGFloat = 50.0
        let width:CGFloat = 200.0
        let buttonImage: UIImage = UIImage(named: "about-icon")!
        aboutAppBut.setImage(buttonImage, for: .normal)
//        aboutAppBut.titleLabel?.adjustsFontSizeToFitWidth = true
//        aboutAppBut.layer.position = CGPoint(x: screenWidth / 6, y: screenHeight / 3)
        aboutAppBut.addTarget(self, action: #selector(ConfigView.onClick_aboutApp(_:)), for: .touchUpInside)
        aboutAppBut.translatesAutoresizingMaskIntoConstraints = false
        let constraintsAbout = [
            aboutAppBut.centerYAnchor.constraint(equalTo: self.centerYAnchor,constant: -70),
            aboutAppBut.centerXAnchor.constraint(equalTo: self.centerXAnchor,constant: 0),
            aboutAppBut.heightAnchor.constraint(equalToConstant: height),
            aboutAppBut.widthAnchor.constraint(equalToConstant: width)
        ]
        NSLayoutConstraint.activate(constraintsAbout)
        
        let deleteImage: UIImage = UIImage(systemName: "xmark")!
        deletebutton.setImage(deleteImage, for: .normal)
        deletebutton.tintColor = .black
        
//        aboutAppBut.titleLabel?.adjustsFontSizeToFitWidth = true
//        deletebutton.layer.position = CGPoint(x: screenWidth / 6, y: screenHeight / 3)
        deletebutton.addTarget(self, action: #selector(ConfigView.onClick_back(_:)), for: .touchUpInside)
        self.addSubview(deletebutton)
        deletebutton.translatesAutoresizingMaskIntoConstraints = false
        let constraintsDelete = [
            deletebutton.topAnchor.constraint(equalTo: self.topAnchor,constant: 3),
            deletebutton.trailingAnchor.constraint(equalTo: self.trailingAnchor,constant: -3),
            deletebutton.heightAnchor.constraint(equalToConstant: 30),
            deletebutton.widthAnchor.constraint(equalToConstant: 30)
        ]
        NSLayoutConstraint.activate(constraintsDelete)


        if displayMode == mode.osm.rawValue  {
   
            changeMapBut2.isHidden = false
            let satelliteImage: UIImage = UIImage(named: "change-map-icon")!
            changeMapBut2.setImage(satelliteImage, for: .normal)
            
        } else if displayMode == mode.osmsat.rawValue {
            changeMapBut2.isHidden = false
            let generalImage: UIImage = UIImage(named: "change-general-map-icon")!
            changeMapBut2.setImage(generalImage, for: .normal)
            
        }
        
//        changeMapBut2.layer.position = CGPoint(x: screenWidth / 6, y: screenHeight / 2)
        changeMapBut2.translatesAutoresizingMaskIntoConstraints = false
        let constraintsMap = [
            changeMapBut2.centerYAnchor.constraint(equalTo: self.centerYAnchor,constant: 0),
            changeMapBut2.centerXAnchor.constraint(equalTo: self.centerXAnchor,constant: 0),
            changeMapBut2.heightAnchor.constraint(equalToConstant: height),
            changeMapBut2.widthAnchor.constraint(equalToConstant: width)
        ]
        NSLayoutConstraint.activate(constraintsMap)

        // 「GIS情報」ボタンの挿入

        gisInfoBut.layer.position = CGPoint(x: screenWidth / 6, y: screenHeight / 1.5)
        let gisImage: UIImage = UIImage(named: "change-gis-icon")!
        gisInfoBut.setImage(gisImage, for: .normal)
        gisInfoBut.translatesAutoresizingMaskIntoConstraints = false
        let constraintsGis = [
            gisInfoBut.centerYAnchor.constraint(equalTo: self.centerYAnchor,constant: 70),
            gisInfoBut.centerXAnchor.constraint(equalTo: self.centerXAnchor,constant: 0),
            gisInfoBut.heightAnchor.constraint(equalToConstant: height),
            gisInfoBut.widthAnchor.constraint(equalToConstant: width)
        ]
        NSLayoutConstraint.activate(constraintsGis)

        /*
         // 新方式
         if (rooVC is CerdAR.mapViewController){
            changeMapBut.setTitle("OpenStreetMapに切り替え", for: UIControlState()) // 通常
            changeMapBut.setTitle("OpenStreetMapに切り替え", for: UIControlState.highlighted) // ハイライト
            changeMapBut.layer.cornerRadius = 10
         
            changeMapBut2.isHidden = true
         
         } else if (rooVC is CerdAR.osmViewController)  {
            if (mbStyle == "mapbox://styles/mapbox/streets-v9" ) {
                print("mbStyle : \(mbStyle)")
         
                changeMapBut.setTitle("Appleマップに切り替え", for: UIControlState()) // 通常
                changeMapBut.setTitle("Appleマップに切り替え", for: UIControlState.highlighted) // ハイライト
                changeMapBut.layer.cornerRadius = 10
         
                changeMapBut2.isHidden = false
                changeMapBut2.setTitle("衛星画像に切り替え", for: UIControlState()) // 通常
                changeMapBut2.setTitle("衛星画像に切り替え", for: UIControlState.highlighted) // ハイライト
                changeMapBut2.layer.cornerRadius = 10
         
            } else if ( mbStyle == "mapbox://styles/mapbox/satellite-v9" )  {
                print("mbStyle : \(mbStyle)")
         
                changeMapBut.setTitle("Appleマップに切り替え", for: UIControlState()) // 通常
                changeMapBut.setTitle("Appleマップに切り替え", for: UIControlState.highlighted) // ハイライト
                changeMapBut.layer.cornerRadius = 10
         
                changeMapBut2.isHidden = false
                changeMapBut2.setTitle("標準地図に切り替え", for: UIControlState()) // 通常
                changeMapBut2.setTitle("標準地図に切り替え", for: UIControlState.highlighted) // ハイライト
                changeMapBut2.layer.cornerRadius = 10
         
            }
         
         }
         */



        
    }
    
    
    /*
     * (「戻る」または背景をタップする)
     * 表示されているパーツを破棄する
     */
    @objc func onClick_back(_ sender: UIButton) {
        self.removeFromSuperview()
        deleteConfigDisplay()
    }
    
    /*
     * (「このアプリについて」をタップする)
     * OSSのライセンス表記
     */
    @objc func onClick_aboutApp(_ sender: UIButton) {
        aboutAppBut.removeFromSuperview()
//        deletebutton.removeFromSuperview()
        changeMapBut2.isHidden = true
        gisInfoBut.removeFromSuperview()
        
        
        // コメントの挿入(画面右側)
        let comment = UILabel(frame: CGRect.init(x: 0, y: 0, width: 270, height: 270))
        comment.font = UIFont.systemFont(ofSize: 15)
        comment.text = "[SWIFTY JSON]" + "\n"
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
            + "OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE." + "\n\n"
        
        comment.text = comment.text! + "[Mapbox]" + "\n"
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
            + "SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE." + "\n\n"
        
        comment.text = comment.text! + "[Music is VFR]" + "\n"
            + "アプリの中で使用されている効果音素材はクリエイティブ・コモンズライセンス " + "\n"
            + "（CC BY 4.0）の下に提供されています。" + "\n"
            + "詳細および適用される最新のバージョンは Web サイト上にてご確認ください。 " + "\n"
            + "(http://musicisvfr.com/free/license.html)" + "\n\n"
        
        comment.text = comment.text!
            + "アプリで使用しているアイコン画像は" + "\n"
            + "はやし ひろふみ氏により作成され" + "\n"
            + "クリエイティブ・コモンズライセンス（CC BY 4.0）の下に提供されています。" + "\n\n"
        
        comment.text = comment.text! + "\n\n"
        comment.numberOfLines = 0
        comment.sizeToFit()
        comment.tintColor  = .black
        comment.textColor = .black
        
        // スクロールビューの生成
        let scrollView = UIScrollView()
        scrollView.frame = CGRect.init(x: 10, y: 10, width:280, height: 280)
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
