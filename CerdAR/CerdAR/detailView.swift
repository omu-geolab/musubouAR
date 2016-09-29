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
    
    //タイトル
    let titlelBar = UILabel(frame: CGRect.init(x: 0, y: 0, width: dWid, height: dHei * 0.1))
    
    //静止画
    let warnImageView = UIImageView(frame: CGRect.init(x: CGFloat(dWid * 0.05), y: CGFloat(dHei * 0.3), width: CGFloat(dWid * 0.45), height: CGFloat(dHei * 0.5)))
    
    //動画
    let webview = UIWebView(frame: CGRect.init(x: CGFloat(dWid * 0.05), y: CGFloat(dHei * 0.3), width: CGFloat(dWid * 0.45), height: CGFloat(dHei * 0.5)))
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        viewInit()
    }
    
    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        viewInit()
    }
    
    func viewInit() {
        
        //背景色
        backgroundColor = UIColor.white
        
        // タイトルの挿入(画面上側)
        titlelBar.text = pinData.name
        titlelBar.textAlignment = NSTextAlignment.center
        titlelBar.font = UIFont.systemFont(ofSize: 30)
        titlelBar.backgroundColor = UIColor.lightGray
        self.addSubview(titlelBar)
        
        // 閉じるボタンの挿入(画面左上側)
        let backButton = UIButton(frame: CGRect.init(x: 0, y: 0, width: screenWidth * 0.8 * 0.1, height: screenHeight * 0.8 * 0.1))
        backButton.setTitle("＜ 戻る", for: UIControlState()) // 通常
        backButton.setTitleColor(UIColor.white, for: UIControlState())
        backButton.setTitle("＜ 戻る", for: UIControlState.highlighted) // ハイライト
        backButton.setTitleColor(UIColor.black, for: UIControlState.highlighted)
        backButton.layer.position = CGPoint(x: dWid * 0.05, y: dHei * 0.05)
        backButton.addTarget(self, action: #selector(detailView.onClick_back(_:)), for:.touchUpInside)
        
        self.addSubview(backButton)
        
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
        
        // 画像・動画の挿入(画面左側)
        if pinData.inforType == kInfo {
            
            var url: URL!
            var req: URLRequest!
            
            if pinData.picType == kPhoto { // 画像
                
                let warnImageView = UIImageView(frame: CGRect.init(x: CGFloat(dWid * 0.05), y: CGFloat(dHei * 0.3), width: CGFloat(dWid * 0.45), height: CGFloat(dHei * 0.5)))
                url = URL(string: pinData.photo)
                req = URLRequest(url: url!)
                
                let configuration = URLSessionConfiguration.default
                let session = URLSession(configuration: configuration, delegate:nil, delegateQueue:OperationQueue.main)
                
                let task = session.dataTask(with: req, completionHandler: {
                    (data, response, error) -> Void in
                    let image = UIImage(data: data!)
                    warnImageView.image = image
                    self.addSubview(warnImageView)
                })
                task.resume()
                
            } else if pinData.picType == kMovie { // 動画
                
                let webview = UIWebView(frame: CGRect.init(x: CGFloat(dWid * 0.05), y: CGFloat(dHei * 0.3), width: CGFloat(dWid * 0.45), height: CGFloat(dHei * 0.5)))
                //webview.delegate = self
                //webview.scalesPageToFit = true
                //webview.scrollView.bounces = false
                self.addSubview(webview)
                
                url = URL(string : pinData.movie)
                req = URLRequest(url: url!)
                webview.loadRequest(req)
                
            }
            
        } else if pinData.inforType == kWarn { // 警告タグ
            let warnImageView = UIImageView(frame: CGRect.init(x: CGFloat(dWid * 0.8 * 0.05), y: CGFloat(dHei * 0.3), width: bounds.height * 0.5, height: bounds.height * 0.5))

            let warnImg: UIImage!
            var text: String!
            
            switch warnBox[pinData.pinNum].riskType {
                
            case 0:
                text = "火災"
                warnImg = UIImage(named: "icon_warn0.png")!
            case 1:
                text = "浸水"
                warnImg = UIImage(named: "icon_warn1.png")!
            case 2:
                text = "落橋"
                warnImg = UIImage(named: "icon_warn2.png")!
            case 3:
                text = "土砂崩れ"
                warnImg = UIImage(named: "icon_warn3.png")!
            default:
                text = "その他の災害"
                warnImg = UIImage(named: "icon_airtag.png")!
            }
            
            
            
            let label = UILabel(frame: CGRect.init(x: 0.0, y: 0.0, width: warnImage!.size.width, height: warnImage!.size.height)) //ラベルサイズ
            
            label.text = text
            label.textColor = UIColor.black // 文字色
            label.textAlignment = NSTextAlignment.center // 中央揃え
            label.font = UIFont.systemFont(ofSize: 100) // 初期文字サイズ
            label.adjustsFontSizeToFitWidth = true // 文字の多さによってフォントサイズを調節する
            label.numberOfLines = 3 // ラベル内の行数
            
            let labelImg = label.getImage() as UIImage // UILabelをUIImageに変換する
            
            let tagRect = CGRect.init(x: 0.0, y: 0.0, width: warnImg!.size.width, height: warnImg!.size.height) // タグ画像のサイズと位置
            UIGraphicsBeginImageContext(warnImg!.size)
            warnImg!.draw(in: tagRect)
            
            let labelRect = CGRect.init(x: 40.0, y: 40.0, width: labelImg.size.width - 80.0, height: labelImg.size.height - 100.0) // ラベル画像のサイズと位置
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
