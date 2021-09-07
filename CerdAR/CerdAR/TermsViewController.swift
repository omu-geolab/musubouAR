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
        continousButton.startAnimatingPressActions()
        cancelButton.startAnimatingPressActions()
        continousButton.layer.borderColor = UIColor.black.cgColor
        continousButton.layer.borderWidth = 3
    }
    override func viewWillDisappear(_ animated: Bool) {
        for view  in self.view.subviews{
            view.removeConstraints(view.constraints)
            view.removeFromSuperview()
        }
        view.removeFromSuperview()
    }
    
    @IBAction func cancelApp(_ sender: Any) {
        exit(0) // アプリを終了する
    }
    @IBAction func continousApp(_ sender: Any) {
        self.dismiss(animated: true, completion: nil)
        let osmVC = osmViewController()
        let appDelegate = UIApplication.shared.delegate as! AppDelegate
        appDelegate.window?.rootViewController = osmVC
    }
}

