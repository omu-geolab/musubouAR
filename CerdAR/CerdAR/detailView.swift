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
        backgroundColor = UIColor.whiteColor()
        
        // タイトルの挿入(画面上側)
        titlelBar.text = pinData.name
        titlelBar.textAlignment = NSTextAlignment.Center
        titlelBar.font = UIFont.systemFontOfSize(30)
        titlelBar.backgroundColor = UIColor.lightGrayColor()
        self.addSubview(titlelBar)
        
        // 閉じるボタンの挿入(画面左上側)
        let backButton = UIButton(frame: CGRect.init(x: 0, y: 0, width: screenWidth * 0.8 * 0.1, height: screenHeight * 0.8 * 0.1))
        backButton.setTitle("＜ 戻る", forState: UIControlState.Normal) // 通常
        backButton.setTitleColor(UIColor.whiteColor(), forState: UIControlState.Normal)
        backButton.setTitle("＜ 戻る", forState: UIControlState.Highlighted) // ハイライト
        backButton.setTitleColor(UIColor.blackColor(), forState: UIControlState.Highlighted)
        backButton.layer.position = CGPoint(x: dWid * 0.05, y: dHei * 0.05)
        backButton.addTarget(self, action: #selector(detailView.tapped(_:)), forControlEvents:.TouchUpInside)
        
        self.addSubview(backButton)
        
        // コメントの挿入(画面右側)
        let comment = UILabel(frame: CGRect.init(x: 0, y: 0, width: dWid * 0.4 * 0.99, height: dHei * 0.6))
        comment.font = UIFont.systemFontOfSize(20)
        comment.text = pinData.descript
        comment.numberOfLines = 0
        comment.sizeToFit()
        //        self.addSubview(comment)
        
        // スクロールビューの生成
        let scrollView = UIScrollView()
        scrollView.frame = CGRect.init(x: dWid * 0.55, y: dHei * 0.25, width: dWid * 0.4, height: dHei * 0.6)
        scrollView.addSubview(comment)
        scrollView.contentSize = CGSize.init(width: comment.frame.size.width, height: comment.frame.size.height)
        self.addSubview(scrollView)
        
        // 画像・動画の挿入(画面左側)
        if pinData.inforType == kInfo {
            
            var url: NSURL!
            var req: NSURLRequest!
            
            if pinData.picType == kPhoto { // 画像
                
                let warnImageView = UIImageView(frame: CGRect.init(x: CGFloat(dWid * 0.05), y: CGFloat(dHei * 0.3), width: CGFloat(dWid * 0.45), height: CGFloat(dHei * 0.5)))
                url = NSURL(string: pinData.photo)
                req = NSURLRequest(URL: url!)
                
                let configuration = NSURLSessionConfiguration.defaultSessionConfiguration()
                let session = NSURLSession(configuration: configuration, delegate:nil, delegateQueue:NSOperationQueue.mainQueue())
                
                let task = session.dataTaskWithRequest(req, completionHandler: {
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
                
                url = NSURL(string : pinData.movie)
                req = NSURLRequest(URL: url!)
                webview.loadRequest(req)
                
            }
            
        } else if /*pinData.inforType == kDidWarn || */pinData.inforType == kWarn { // 警告タグ
            let warnImageView = UIImageView(frame: CGRect.init(x: CGFloat(dWid * 0.8 * 0.05), y: CGFloat(dHei * 0.3), width: bounds.height * 0.5, height: bounds.height * 0.5))
            warnImageView.image = pinData.pinImage
            self.addSubview(warnImageView)
        }
        
    }
    
    func tapped(sender: UIButton) {
        //表示されているパーツを破棄する
        for view in self.subviews {
            view.removeFromSuperview()
        }
        
        delegate?.detailViewFinish()
        
    }
    
    static func makebackgroungView() -> UIView {
        let backgroundView = UIView(frame: CGRect.init(x: 0, y: 0, width: screenWidth, height: screenHeight))
        backgroundView.alpha = 0.5
        backgroundView.backgroundColor = UIColor.grayColor()
        return backgroundView
    }   
    
}
