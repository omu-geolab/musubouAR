//
//  TermsViewController.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/01/27.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import Foundation
import UIKit

class TermsViewController: UIViewController {
    
    @IBOutlet weak var continousButton: UIButton!
    @IBOutlet weak var cancelButton: UIButton!
    override func viewDidLoad() {
        super.viewDidLoad()
        // ボタンのアニメーションを開始する
        continousButton?.startAnimatingPressActions()
        cancelButton?.startAnimatingPressActions()
        // 続行ボタンのボーダーを設定する
        continousButton?.layer.borderColor = UIColor.black.cgColor
        continousButton?.layer.borderWidth = 3
    }
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
    }
    
    @IBAction func cancelApp(_ sender: Any) {
        exit(0) // アプリを終了する
    }
    @IBAction func continousApp(_ sender: Any) {
        // 現在のビューコントローラーを閉じる
        self.dismiss(animated: true) {
            // メインウィンドウを取得する
            if let window = UIApplication.shared.windows.first {
                // 新しいルートビューコントローラーを設定する
                let osmVC = osmViewController()
                window.rootViewController = osmVC
                window.makeKeyAndVisible()
            }
        }
    }
}
