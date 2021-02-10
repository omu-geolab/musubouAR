//
//  DetailViewIpad.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/01/28.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import UIKit
@objc protocol detailViewIpadDelegate {
    func detailViewIpadFinish()
}

class DetailViewIpad: UIView {
    weak var delegate: detailViewIpadDelegate?
    @IBOutlet weak var titleLabel: UILabel!
    @IBOutlet weak var distanceLabel: UILabel!
    @IBOutlet weak var detailText: UITextView!
    @IBOutlet weak var showView: UIView!
    @IBOutlet weak var deleteButton: UIButton!
    
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
        backgroundView.removeFromSuperview()
        delegate?.detailViewIpadFinish()
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
     *画面表示設定
     */
    func setView(){
        
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
                                    let warnImageView = UIImageView(frame: CGRect(x: 0, y: 0, width: self.showView.bounds.width, height:self.showView.bounds.height))

                                    if let image = UIImage(data: data!) {
                                        warnImageView.image = image
                                    } else {
                                        warnImageView.image = UIImage(named: "icon_notfound.png")
                                    }
                                    warnImageView.contentMode = .scaleAspectFit
                                    self.showView.addSubview(warnImageView)
                                }
                            })
                            task.resume()
                        }

                    } else {

                        let warnImageView = UIImageView(frame: CGRect.init(x:0, y: 0, width: showView.bounds.width, height:showView.bounds.height))
                        if pinData.icon != "icon_infoTag.png" {
                            warnImageView.image = UIImage(named: pinData.icon)
                            warnImageView.contentMode = .scaleAspectFit
                            self.showView.addSubview(warnImageView)
                        } else {
                            warnImageView.image = pinData.expandImage
                            warnImageView.contentMode = .scaleAspectFit
                            self.showView.addSubview(warnImageView)
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
                                
                                let webview = UIWebView(frame: CGRect.init(x:0, y: 0, width: self.showView.bounds.width, height:self.showView.bounds.height))
                                webview.scalesPageToFit = true
                                webview.scrollView.bounces = false
                                webview.loadRequest(req)
                                self.showView.addSubview(webview)

                            }
                        })
                        task.resume()
                    }
                } else {   // その他の情報タグ画像
                    let warnImageView = UIImageView(frame: CGRect.init(x: 0, y:0, width: self.showView.bounds.width, height:self.showView.bounds.height))
                    if pinData.icon != "icon_infoTag.png" {
                        warnImageView.image = UIImage(named: pinData.icon)
                        warnImageView.contentMode = .scaleAspectFit
                        self.showView.addSubview(warnImageView)

                    } else {
                        warnImageView.image = pinData.expandImage
                        warnImageView.contentMode = .scaleAspectFit
                        self.showView.addSubview(warnImageView)
                    }
                }

            } else if pinData.inforType == kWarn { // 警告タグ
                let warnImageView = UIImageView(frame: CGRect.init(x: 0, y: 0, width: self.showView.bounds.width, height:self.showView.bounds.height))

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
                warnImageView.contentMode = .scaleAspectFit
                self.showView.addSubview(warnImageView)

            }
        }
    }
    func notFound() {
        let warnImageView = UIImageView(frame: CGRect.init(x:0, y: 0, width: showView.bounds.width, height:showView.bounds.height))
        warnImageView.image = UIImage(named: "icon_notfound.png")
        warnImageView.contentMode = .scaleAspectFit
        showView.addSubview(warnImageView)
    }
    
}
