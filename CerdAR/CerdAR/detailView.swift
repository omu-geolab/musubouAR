//
//  detailView.swift
//  CerdAR
//
//  Copyright (c) 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
//

import Foundation
import UIKit

@objc protocol detailViewDelegate {
    func detailViewFinish()
}


class detailView: UIView {
    weak var delegate: detailViewDelegate?
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        viewInit()
        
    }
    
    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        viewInit()
    }
    
    /*
     * 詳細画面の表示
     */
    func viewInit() {
        
        //背景色
        backgroundColor = UIColor.white
        
        // 閉じるボタンの挿入(画面左上側)
        let backButton = UIButton(frame: CGRect.init(x: 0, y: 0, width: screenWidth * 0.8 * 0.1, height: dHei * 0.1))
        backButton.setTitle("＜ 戻る", for: UIControlState()) // 通常
        backButton.setTitleColor(UIColor.white, for: UIControlState())
        backButton.setTitle("＜ 戻る", for: UIControlState.highlighted) // ハイライト
        backButton.setTitleColor(UIColor.black, for: UIControlState.highlighted)
        backButton.titleLabel?.adjustsFontSizeToFitWidth = true
//        backButton.layer.position = CGPoint(x: dWid * 0.05, y: dHei * 0.05)
        backButton.addTarget(self, action: #selector(detailView.onClick_back(_:)), for:.touchUpInside)
        
        // タイトルの挿入(画面上側)
        let titlelBar = UILabel(frame: CGRect.init(x: screenWidth * 0.8 * 0.1, y: 0, width: dWid - (screenWidth * 0.8 * 0.1), height: dHei * 0.1))
        titlelBar.text = pinData.name
        titlelBar.textAlignment = NSTextAlignment.center
        titlelBar.font = UIFont.systemFont(ofSize: 30)
        backButton.titleLabel?.adjustsFontSizeToFitWidth = true
        
        let baseBar = UIView(frame: CGRect.init(x: 0, y: 0, width: dWid, height: dHei * 0.1))
        baseBar.backgroundColor = UIColor.lightGray
        baseBar.addSubview(titlelBar)
        baseBar.addSubview(backButton)
        self.addSubview(baseBar)
        
        // コメントの挿入(画面右側)
        let comment = UILabel(frame: CGRect.init(x: 0, y: 0, width: dWid * 0.4 * 0.99, height: dHei * 0.6))
        comment.font = UIFont.systemFont(ofSize: 20)
        comment.text = pinData.descript
        comment.numberOfLines = 0
        comment.sizeToFit()
        
        // スクロールビューの生成
        let scrollView = UIScrollView()
        scrollView.frame = CGRect.init(x: dWid * 0.55, y: dHei * 0.25, width: dWid * 0.4, height: dHei * 0.6)
        scrollView.addSubview(comment)
        scrollView.contentSize = CGSize.init(width: comment.frame.size.width, height: comment.frame.size.height)
        self.addSubview(scrollView)
        
        // 目的地までの距離の挿入(画面左下側)
        let distance = UILabel(frame: CGRect.init(x: dWid * 0.05, y: dHei * 0.85, width: dWid * 0.45, height: dHei * 0.1))
        distance.font = UIFont.systemFont(ofSize: 35)
        
        if pinData.inforType == kInfo {
            distance.text = "あと" + String(calcDistance(pinData.lat, lon: pinData.lon, uLat: userLat, uLon: userLon)) + "m"
            
        } else {
            var dst = calcDistance(pinData.lat, lon: pinData.lon, uLat: userLat, uLon: userLon) - Int(circleRadius[pinData.pinNum])
            if dst < 0 {
                dst = 0
            }
            distance.text = "あと" + String(dst) + "m"
        }
        
        distance.numberOfLines = 0
        distance.sizeToFit()
        self.addSubview(distance)
        
        
        // 画像・動画の挿入(画面左側)
        if pinData.inforType == kInfo {
            
            if pinData.picType == kPhoto { // 画像
                
                if pinData.photo != nil {
                    if pinData.photo.range(of: "jpg") == nil && pinData.photo.range(of: "png") == nil && pinData.photo.range(of: "JPG") == nil {
                        notFound()
                        
                    } else {
                        
                        let url = URL(string: pinData.photo)
                        let req = URLRequest(url: url!, cachePolicy: NSURLRequest(url: url!).cachePolicy, timeoutInterval: 5.0)
                        
                        let configuration = URLSessionConfiguration.default
                        let session = URLSession(configuration: configuration, delegate:nil, delegateQueue:OperationQueue.main)
                        
                        let task = session.dataTask(with: req, completionHandler: {
                            (data, response, error) -> Void in
                            
                            // urlが見つからない、またはタイムアウトしたとき
                            if error != nil {
                                self.notFound()
                                
                                // 成功したとき
                            } else {
                                let warnImageView = UIImageView(frame: CGRect(x: dWid * 0.05, y: dHei * 0.25, width: dWid * 0.45, height: dHei * 0.5))
                                
                                if let image = UIImage(data: data!) {
                                    warnImageView.image = image
                                } else {
                                    warnImageView.image = UIImage(named: "icon_notfound.png")
                                }
                                self.addSubview(warnImageView)
                            }
                        })
                        task.resume()
                    }
                    
                } else {
                    
                    let warnImageView = UIImageView(frame: CGRect(x: CGFloat(dWid * 0.8 * 0.15), y: CGFloat(dHei * 0.2), width: dHei * 0.4, height: dHei * 0.55))
                    if pinData.icon != "icon_infoTag.png" {
                        warnImageView.image = UIImage(named: pinData.icon)
                        self.addSubview(warnImageView)
                        
                    } else {
                        warnImageView.image = pinData.expandImage
                        self.addSubview(warnImageView)
                    }
                }
                
                
            } else if pinData.picType == kMovie { // 動画

                if !pinData.movie.hasPrefix("http://www.youtube.com/embed/") && !pinData.movie.hasPrefix("https://www.youtube.com/embed/") {
                    notFound()
                
                } else {
                    
                    let url = URL(string : pinData.movie)
                    let req = URLRequest(url: url!, cachePolicy: NSURLRequest(url: url!).cachePolicy, timeoutInterval: 5.0)
                    let configuration = URLSessionConfiguration.default
                    let session = URLSession(configuration: configuration, delegate:nil, delegateQueue:OperationQueue.main)
                    
                    let task = session.dataTask(with: req, completionHandler: {
                        (data, response, error) -> Void in
                        
                        // urlが見つからない、またはタイムアウトしたとき
                        if error != nil {
                            self.notFound()
                            
                            // 成功したとき
                        } else {
                            let webview = UIWebView(frame: CGRect.init(x: CGFloat(dWid * 0.05), y: CGFloat(dHei * 0.3), width: CGFloat(dWid * 0.45), height: CGFloat(dHei * 0.5)))
                            webview.scalesPageToFit = true
                            webview.scrollView.bounces = false
                            webview.loadRequest(req)
                            self.addSubview(webview)
                            
                        }
                    })
                    task.resume()
                }
            } else {   // その他の情報タグ画像
                let warnImageView = UIImageView(frame: CGRect.init(x: CGFloat(dWid * 0.8 * 0.08), y: CGFloat(dHei * 0.3), width: dHei * 0.35, height: dHei * 0.35))
                if pinData.icon != "icon_infoTag.png" {
                    warnImageView.image = UIImage(named: pinData.icon)
                    self.addSubview(warnImageView)
                    
                } else {
                    warnImageView.image = pinData.expandImage
                    self.addSubview(warnImageView)
                }
            }
            
            
            
        } else if pinData.inforType == kWarn { // 警告タグ
            let warnImageView = UIImageView(frame: CGRect.init(x: CGFloat(dWid * 0.8 * 0.05), y: CGFloat(dHei * 0.3), width: bounds.height * 0.5, height: bounds.height * 0.5))
            
            let warnImg: UIImage!
            var text: String!
            switch jsonDataManager.sharedInstance.warnBox[pinData.pinNum].riskType {
                
            case 0:
                text = "火災"
                warnImg = UIImage(named: "icon_warn0.png")!
            case 1:
                text = "水が流れています"
                warnImg = UIImage(named: "icon_warn1.png")!
            case 2:
                text = "土砂くずれ"
                warnImg = UIImage(named: "icon_warn2.png")!
            case 3:
                text = "橋がこわれています"
                warnImg = UIImage(named: "icon_warn3.png")!
            case 4:
                text = "家がこわれています"
                warnImg = UIImage(named: "icon_warn3.png")!
            case 5:
                text = "へいがこわれています"
                warnImg = UIImage(named: "icon_warn3.png")!
            case 6:
                text = "道路にあながあいています"
                //text = "通行禁止\n(コンテナ流入)"
                warnImg = UIImage(named: "icon_warn3.png")!
            default:
                text = "その他の災害"
                warnImg = UIImage(named: "icon_infoTagAR.png")!
            }
            
            let label = UILabel(frame: CGRect.init(x: 0.0, y: 0.0, width: warnImg!.size.width, height: warnImg!.size.height)) //ラベルサイズ
            
            label.text = text
            label.textColor = UIColor.black // 文字色
            label.textAlignment = NSTextAlignment.center // 中央揃え
            label.font = UIFont.systemFont(ofSize: 80) // 初期文字サイズ
            label.adjustsFontSizeToFitWidth = true // 文字の多さによってフォントサイズを調節する
            label.numberOfLines = 2 // ラベル内の行数
            
            let labelImg = label.getImage() as UIImage // UILabelをUIImageに変換する
            
            let tagRect = CGRect.init(x: 0.0, y: 0.0, width: warnImg!.size.width, height: warnImg!.size.height) // タグ画像のサイズと位置
            UIGraphicsBeginImageContext(warnImg!.size)
            warnImg!.draw(in: tagRect)
            
            let labelRect = CGRect.init(x: 40.0, y: 40.0, width: labelImg.size.width - 100, height: labelImg.size.height * 0.75) // ラベル画像のサイズと位置
            labelImg.draw(in: labelRect)
            
            // Context に描画された画像を新しく設定
            let newImage = UIGraphicsGetImageFromCurrentImageContext()
            
            // Context 終了
            UIGraphicsEndImageContext()
            
            warnImageView.image = getResizeImage(newImage!, newHeight: 500.0)
            
            self.addSubview(warnImageView)
            
        }
    }
    
    
    
    /*
     * ⚠︎画像を表示する
     */
    func notFound() {
        let warnImageView = UIImageView(frame: CGRect.init(x: CGFloat(dWid * 0.8 * 0.05), y: CGFloat(dHei * 0.3), width: bounds.height * 0.5, height: bounds.height * 0.5))
        warnImageView.image = UIImage(named: "icon_notfound.png")
        self.addSubview(warnImageView)
    }
    
    /*
     * 「戻る」をタップしたとき
     * 表示されているパーツを破棄する
     */
    func onClick_back(_ sender: UIButton) {
        deleteDetailView()
    }
    
    /*
     * 詳細画面を消去する
     */
    func deleteDetailView() {
        
        for view in self.subviews {
            view.removeFromSuperview()
        }
        backgroundView.removeFromSuperview()
        delegate?.detailViewFinish()
    }
    
    
    /*
     * 詳細画面の背景
     */
    static func makebackgroungView() -> UIImageView {
        let backgroundView = UIImageView(frame: CGRect.init(x: 0, y: 0, width: screenWidth, height: screenHeight))
        backgroundView.alpha = 0.5
        backgroundView.backgroundColor = UIColor.gray
        
        return backgroundView
    }
    
}
