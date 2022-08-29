//
//  OptionViewController.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 4/03/17.
//  Copyright © Reiwa 4 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import UIKit

class OptionViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
    }
    override func viewWillDisappear(_ animated: Bool) {
        for view  in self.view.subviews{
            view.removeConstraints(view.constraints)
            view.removeFromSuperview()
        }
        view.removeFromSuperview()
    }
    @IBAction func appStart(_ sender: Any) {
        self.dismiss(animated: true, completion: nil)
        let osmVC = osmViewController()
        let appDelegate = UIApplication.shared.delegate as! AppDelegate
        appDelegate.window?.rootViewController = osmVC
    }
    
    @IBAction func loginStart(_ sender: Any) {
        self.dismiss(animated: true, completion: nil)
        let view = UIStoryboard(name: "LoginView", bundle: .main)
        if let vc = view.instantiateInitialViewController() as? LoginViewController {
            let appDelegate = UIApplication.shared.delegate as! AppDelegate
            let window = appDelegate.window
            if let window = window {
              window.rootViewController = vc
              window.makeKeyAndVisible()
            }
        }
    }
}
