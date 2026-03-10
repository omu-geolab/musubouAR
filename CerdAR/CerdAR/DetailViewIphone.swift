//
//  DetailViewIphone.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/01/28.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import UIKit
import WebKit
import MediaPlayer
import SafariServices // ★追加：これが必要です

@objc protocol detailViewIphoneDelegate {
    func detailViewIphoneFinish()
}

class DetailViewIphone: UIView {
    weak var delegate: detailViewIphoneDelegate?
    @IBOutlet weak var titleLabel: UILabel!
    @IBOutlet weak var distanceLabel: UILabel!
    @IBOutlet weak var detailText: UITextView!
    @IBOutlet weak var showView: UIView!
    @IBOutlet weak var deleteButton: UIButton!
    @IBOutlet weak var volumeSlider: UISlider!
    @IBOutlet weak var soundButton: UIButton!
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        loadNib()
    }
    
    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        loadNib()
    }
    
    private func loadNib() {
        
        if let view = Bundle.main.loadNibNamed(String(describing: type(of: self)), owner: self)?.first as? UIView {
            view.frame = self.bounds
            self.addSubview(view)
        }
    }
    /*
     * 「戻る」をタップしたとき
     * 表示されているパーツを破棄する
     */
    @IBAction func tapDeleteButton(_ sender: Any) {
        
        deleteDetailView()
    }
    @objc func onClick_back(_ sender: UIButton) {
        deleteDetailView()
    }
    
    
    /*
     * 詳細画面を消去する
     */
    func deleteDetailView() {
        // backgroundViewはグローバル変数のようなので ? なしでOK
        backgroundView.removeFromSuperview()
        delegate?.detailViewIphoneFinish()
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
    
    /*
     * 動画再生ボタンが押されたとき（アプリ内ブラウザ SFSafariViewController で開く）
     * 修正版：遷移直前に詳細画面を閉じる処理を追加
     */
    @objc func onClick_playVideo(_ sender: UIButton) {
        guard let data = pinData, let rawUrl = data.movie else { return }
        
        var videoId = ""
        
        // 1. 動画IDを抽出
        if rawUrl.contains("youtu.be/") {
            if let range = rawUrl.range(of: "youtu.be/") {
                let sub = rawUrl[range.upperBound...]
                videoId = String(sub).components(separatedBy: "?")[0]
            }
        } else if rawUrl.contains("v=") {
            if let range = rawUrl.range(of: "v=") {
                let sub = rawUrl[range.upperBound...]
                videoId = String(sub).components(separatedBy: "&")[0]
            }
        } else if rawUrl.contains("/embed/") {
            if let range = rawUrl.range(of: "/embed/") {
                let sub = rawUrl[range.upperBound...]
                videoId = String(sub).components(separatedBy: "?")[0]
            }
        }
        
        var finalUrlString = rawUrl
        if !videoId.isEmpty {
            // SafariViewControllerで開く場合も、普通のURL (watch?v=) にするのが正解です
            finalUrlString = "https://www.youtube.com/watch?v=" + videoId
        }
        
        // 2. SFSafariViewController (アプリ内ブラウザ) を起動
        if let url = URL(string: finalUrlString) {
            
            guard let parentVC = self.parentViewController() else { return }
            
            // ★追加1: Safariを開く前に「音をミュートして」という通知を全体に飛ばす
            NotificationCenter.default.post(name: Notification.Name("MuteBackgroundSound"), object: nil)
            
            // Safariを開く前に、詳細画面(自分)を閉じる
            self.deleteDetailView()
            
            let safariVC = SFSafariViewController(url: url)
            
            // ★追加2: Safariが閉じられたことを、親のViewControllerで検知できるようにする
            if let delegateVC = parentVC as? SFSafariViewControllerDelegate {
                safariVC.delegate = delegateVC
            }
            
            // 確保しておいた親VCを使って Safari View Controller を表示
            parentVC.present(safariVC, animated: true, completion: nil)
        }
    }
    
    /*
     *画面表示設定
     */
    func setView(){
        let vol = AVAudioSession.sharedInstance().outputVolume
        volumeSlider.setValue(vol, animated: false)
        if  vol == 0 {
            soundButton.setBackgroundImage(UIImage(systemName: "speaker.slash"), for: .normal)
        }else {
            soundButton.setBackgroundImage(UIImage(systemName: "speaker.wave.2"), for: .normal)
        }
        if let data = pinData {
            titleLabel.text = data.name
            detailText.text = data.descript
            if data.inforType == kInfo {
                distanceLabel.text = "あと" + String(calcDistance(data.lat, lon: data.lon, uLat: userLat, uLon: userLon)) + "m"
            } else {
                var dst = calcDistance(data.lat, lon: data.lon, uLat: userLat, uLon: userLon) - Int(circleRadius[pinData.pinNum])
                if dst < 0 {
                    dst = 0
                }
                distanceLabel.text = "あと" + String(dst) + "m"
            }
            // 画像・動画の挿入(画面左側)
            if pinData.inforType == kInfo {
                
                if pinData.picType == kPhoto { // 画像
                    
                    if pinData.photo != nil {
                        let photoStr = pinData.photo ?? ""
                        if photoStr.range(of: "jpg") == nil && photoStr.range(of: "png") == nil && photoStr.range(of: "JPG") == nil {
                            notFound()
                            
                        } else {
                            
                            let url = URL(string: photoStr)
                            let req = URLRequest(url: url!, cachePolicy: NSURLRequest(url: url!).cachePolicy, timeoutInterval: 5.0)
                            
                            let configuration = URLSessionConfiguration.default
                            let session = URLSession(configuration: configuration, delegate:nil, delegateQueue:OperationQueue.main)
                            
                            let task = session.dataTask(with: req, completionHandler: {
                                (data, response, error) -> Void in
                                
                                if error != nil {
                                    self.notFound()
                                } else {
                                    let warnImageView = UIImageView(frame: CGRect(x: 0, y: 0, width: self.showView.bounds.width, height:self.showView.bounds.height))
                                    
                                    if let image = UIImage(data: data!) {
                                        warnImageView.image = image
                                    } else {
                                        warnImageView.image = UIImage(named: "icon_notfound.png")
                                    }
                                    warnImageView.contentMode = .scaleAspectFill
                                    warnImageView.clipsToBounds = true
                                    self.showView.addSubview(warnImageView)
                                }
                            })
                            task.resume()
                        }
                        
                    } else {
                        
                        let warnImageView = UIImageView(frame: CGRect.init(x:0, y: 0, width: showView.bounds.width, height:showView.bounds.height))
                        if pinData.icon != "icon_infoTag.png" {
                            warnImageView.image = UIImage(named: pinData.icon)
                            warnImageView.contentMode = .scaleAspectFill
                            self.showView.addSubview(warnImageView)
                        } else {
                            warnImageView.image = pinData.expandImage
                            warnImageView.contentMode = .scaleAspectFill
                            self.showView.addSubview(warnImageView)
                        }
                    }
                    
                } else if pinData.picType == kMovie { // 動画
                    
                    let movieUrl = pinData.movie ?? ""
                    
                    if !movieUrl.hasPrefix("http://www.youtube.com/embed/") && !movieUrl.hasPrefix("https://www.youtube.com/embed/") &&
                        !movieUrl.hasPrefix("https://www.youtube-nocookie.com/embed/") &&
                        !movieUrl.hasPrefix("https://player.vimeo.com/video/"){
                        notFound()
                        
                    } else {
                        
                        let url = URL(string : movieUrl)
                        let req = URLRequest(url: url!, cachePolicy: NSURLRequest(url: url!).cachePolicy, timeoutInterval: 5.0)
                        let configuration = URLSessionConfiguration.default
                        let session = URLSession(configuration: configuration, delegate:nil, delegateQueue:OperationQueue.main)
                        
                        let task = session.dataTask(with: req, completionHandler: {
                            (data, response, error) -> Void in
                            
                            if error != nil {
                                self.notFound()
                            } else {
                                // ▼▼▼ 再生ボタン作成 ▼▼▼
                                let playButton = UIButton(frame: CGRect(x: 0, y: 0, width: self.showView.bounds.width, height: self.showView.bounds.height))
                                
                                if let thumbImage = UIImage(named: "youtube") {
                                    playButton.setImage(thumbImage, for: .normal)
                                    playButton.imageView?.contentMode = .scaleAspectFit
                                } else {
                                    playButton.backgroundColor = UIColor.black
                                    playButton.setTitle("▶︎ 再生", for: .normal)
                                    playButton.setTitleColor(.white, for: .normal)
                                }
                                
                                playButton.addTarget(self, action: #selector(self.onClick_playVideo(_:)), for: .touchUpInside)
                                playButton.clipsToBounds = true
                                
                                self.showView.addSubview(playButton)
                                // ▲▲▲ ここまで ▲▲▲
                            }
                        })
                        task.resume()
                    }
                } else {   // その他の情報タグ画像
                    let warnImageView = UIImageView(frame: CGRect.init(x: 0, y:0, width: self.showView.bounds.width, height:self.showView.bounds.height))
                    if pinData.icon != "icon_infoTag.png" {
                        
                        warnImageView.contentMode = .scaleAspectFill
                        self.showView.addSubview(warnImageView)
                        warnImageView.image = UIImage(named: pinData.icon)
                        
                        
                    } else {
                        
                        warnImageView.contentMode = .scaleAspectFill
                        self.showView.addSubview(warnImageView)
                        warnImageView.image = pinData.expandImage
                    }
                }
                
            } else if pinData.inforType == kWarn { // 警告タグ
                let warnImageView = UIImageView(frame: CGRect.init(x:0, y: 0, width: showView.bounds.width, height:showView.bounds.height))
                
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
                    warnImg = UIImage(named: "icon_warn3.png")!
                default:
                    text = "その他の災害"
                    warnImg = UIImage(named: "icon_infoTagAR.png")!
                }
                
                let label = UILabel(frame: CGRect.init(x: 0.0, y: 0.0, width: warnImg!.size.width, height: warnImg!.size.height))
                
                label.text = text
                label.textColor = UIColor.black
                label.textAlignment = NSTextAlignment.center
                label.font = UIFont.systemFont(ofSize: 80)
                label.adjustsFontSizeToFitWidth = true
                label.numberOfLines = 2
                
                let labelImg = label.getImage() as UIImage
                
                let tagRect = CGRect.init(x: 0.0, y: 0.0, width: warnImg!.size.width, height: warnImg!.size.height)
                UIGraphicsBeginImageContext(warnImg!.size)
                warnImg!.draw(in: tagRect)
                
                let labelRect = CGRect.init(x: 40.0, y: 40.0, width: labelImg.size.width - 100, height: labelImg.size.height * 0.75)
                labelImg.draw(in: labelRect)
                
                let newImage = UIGraphicsGetImageFromCurrentImageContext()
                UIGraphicsEndImageContext()
                
                warnImageView.image = getResizeImage(newImage!, newHeight: 500.0)
                warnImageView.contentMode = .scaleAspectFill
                self.showView.addSubview(warnImageView)
            }
        }
    }
    
    func notFound() {
        let warnImageView = UIImageView(frame: CGRect.init(x:0, y: 0, width: showView.bounds.width, height:showView.bounds.height))
        warnImageView.image = UIImage(named: "icon_notfound.png")
        warnImageView.contentMode = .scaleAspectFit
        showView.addSubview(warnImageView)
        warnImageView.translatesAutoresizingMaskIntoConstraints = false
        let constraints = [
            warnImageView.trailingAnchor.constraint(equalTo: self.showView.trailingAnchor,constant: 0),
            warnImageView.leadingAnchor.constraint(equalTo: self.showView.leadingAnchor,constant: 0),
            warnImageView.topAnchor.constraint(equalTo: self.showView.topAnchor,constant: 0),
            warnImageView.bottomAnchor.constraint(equalTo: self.showView.bottomAnchor,constant: 0),
        ]
        NSLayoutConstraint.activate(constraints)
    }
    
    @IBAction func volumeSliderChange(_ sender: Any) {
        let vol = volumeSlider.value
        MPVolumeView.setVolume(vol)
        if  vol == 0 {
            soundButton.setBackgroundImage(UIImage(systemName: "speaker.slash"), for: .normal)
        }else {
            soundButton.setBackgroundImage(UIImage(systemName: "speaker.wave.2"), for: .normal)
        }
    }
}

