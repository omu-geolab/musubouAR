//
//  ViewDetail.swift
//  CerdAR
//
//  Copyright (c) 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
//

import Foundation
import UIKit

class ViewDetail: UIViewController, UIWebViewDelegate {
    
    let comment = UILabel(frame: CGRect.init(x: screenWidth * 0.6, y: screenHeight * 0.25, width: screenWidth * 0.35, height: screenHeight * 0.8))
    let viewWid = CGFloat(screenWidth * 0.5)
    let viewHei = CGFloat(screenHeight * 0.5)
    let viewX = CGFloat(screenWidth * 0.05)
    let viewY = CGFloat(screenHeight * 0.25)
    
    // MARK: ライフサイクル
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // タップしたタグの場所名(画面上側)
        self.title = pinData.name
        
        // コメント(画面右側)
        comment.font = UIFont.systemFontOfSize(20)
        comment.text = pinData.descript
        comment.numberOfLines = 0
        comment.sizeToFit()
        view.addSubview(comment)
        
        // 画像・動画の挿入(画面左側)
        if pinData.inforType == kInfo {
            
            var url: NSURL!
            var req: NSURLRequest!
            
            if pinData.picType == kPhoto { // 画像
                
                let warnImageView = UIImageView(frame: CGRect.init(x: viewX, y: viewY, width: viewWid, height: viewHei))
                url = NSURL(string: pinData.photo)
                req = NSURLRequest(URL:url!)
                
                NSURLConnection.sendAsynchronousRequest(req, queue:NSOperationQueue.mainQueue()) { (res, data, err) in
                    let image = UIImage(data: data!)
                    warnImageView.image = image
                    self.view.addSubview(warnImageView)
                }
                
            } else if pinData.picType == kMovie { // 動画
                
                let webview = UIWebView(frame: CGRect.init(x: viewX, y: viewY, width: viewWid, height: viewHei))
                webview.scalesPageToFit = true
                webview.scrollView.bounces = false
                webview.delegate = self
                self.view.addSubview(webview)
                
                url = NSURL(string : pinData.movie)
                req = NSURLRequest(URL: url!)
                webview.loadRequest(req)
            }
            
            
        } else if pinData.inforType == kDidWarn || pinData.inforType == kWarn { // 警告タグ
            let warnImageView = UIImageView(frame: CGRect.init(x: viewX * 2, y: viewY, width: viewHei, height: viewHei))
            warnImageView.image = warnImageBox[pinData.pinNum].image
            self.view.addSubview(warnImageView)
            
        }
        
        self.view.backgroundColor = UIColor.whiteColor()
    }
    
    
    func webView(webView: UIWebView, shouldStartLoadWithRequest request: NSURLRequest, navigationType: UIWebViewNavigationType) -> Bool {
        return true
    }
    
    override func viewWillAppear(animated: Bool) {
        // NavigationBarを隠す処理
        self.navigationController?.setNavigationBarHidden(false, animated: true)
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
}
