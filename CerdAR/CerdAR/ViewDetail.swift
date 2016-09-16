//
//  ViewDetail.swift
//  CerdAR
//
//  Copyright (c) 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
//

import Foundation
import UIKit

class ViewDetail: UIViewController {
    
    let viewWid = CGFloat(screenWidth * 0.5)
    let viewHei = CGFloat(screenHeight * 0.5)
    let viewX = CGFloat(screenWidth * 0.05)
    let viewY = CGFloat(screenHeight * 0.25)
    
    func detailViewDisplay(view: UIView) {

        backgroundView.userInteractionEnabled = true
        
        detailView.backgroundColor = UIColor.whiteColor()
        
        // タイトルの挿入(画面上側)
        let detailBar = UILabel(frame: CGRect.init(x: 0, y: 0, width: dWid, height: dHei * 0.1))
        detailBar.text = pinData.name
        detailBar.textAlignment = NSTextAlignment.Center
        detailBar.font = UIFont.systemFontOfSize(30)
        detailBar.backgroundColor = UIColor.lightGrayColor()
        detailView.addSubview(detailBar)
        
        // 閉じるボタンの挿入(画面左上側)
        backBut.setTitle("＜ 戻る", forState: UIControlState.Normal) // 通常
        backBut.setTitleColor(UIColor.whiteColor(), forState: UIControlState.Normal)
        backBut.setTitle("＜ 戻る", forState: UIControlState.Highlighted) // ハイライト
        backBut.setTitleColor(UIColor.blackColor(), forState: UIControlState.Highlighted)
        backBut.layer.position = CGPoint(x: dWid * 0.05, y: dHei * 0.05)
        
        detailView.addSubview(backBut)

        
        // コメントの挿入(画面右側)
        let comment = UILabel(frame: CGRect.init(x: 0, y: 0, width: dWid * 0.4 * 0.99, height: dHei * 0.6))
        comment.font = UIFont.systemFontOfSize(20)
        comment.text = pinData.descript
        comment.numberOfLines = 0
        comment.sizeToFit()
        detailView.addSubview(comment)
        
        
        // スクロールビューの生成
        let scrollView = UIScrollView()
        scrollView.frame = CGRect.init(x: dWid * 0.55, y: dHei * 0.25, width: dWid * 0.4, height: dHei * 0.6)
        scrollView.addSubview(comment)
        scrollView.contentSize = CGSize.init(width: comment.frame.size.width, height: comment.frame.size.height)
        detailView.addSubview(scrollView)
        
        
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
                    detailView.addSubview(warnImageView)
                })
                task.resume()
                
            } else if pinData.picType == kMovie { // 動画
                
                let webview = UIWebView(frame: CGRect.init(x: CGFloat(dWid * 0.05), y: CGFloat(dHei * 0.3), width: CGFloat(dWid * 0.45), height: CGFloat(dHei * 0.5)))
                //webview.delegate = self
                //webview.scalesPageToFit = true
                //webview.scrollView.bounces = false
                detailView.addSubview(webview)
                
                url = NSURL(string : pinData.movie)
                req = NSURLRequest(URL: url!)
                webview.loadRequest(req)

                
                
            }
            
        } else if pinData.inforType == kDidWarn || pinData.inforType == kWarn { // 警告タグ
            let warnImageView = UIImageView(frame: CGRect.init(x: CGFloat(dWid * 0.8 * 0.05), y: CGFloat(dHei * 0.3), width: viewHei, height: viewHei))
            warnImageView.image = pinData.pinImage
            detailView.addSubview(warnImageView)
        }
        
        backgroundView.alpha = 0.5
        backgroundView.backgroundColor = UIColor.grayColor()
        view.addSubview(backgroundView)
        view.addSubview(detailView)

        
        
    }
    
    
}
