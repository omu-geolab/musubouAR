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
       
        let view = UIStoryboard(name: "WorkoutsView", bundle: .main)
        
        if let vc = view.instantiateInitialViewController() as? WorkoutViewController {
            vc.modalPresentationStyle = .fullScreen
            weak var pvc = self.presentingViewController
            self.dismiss(animated: false, completion: {
                pvc?.present(vc, animated: false, completion: nil)
            })
        }
    }
    
    @IBAction func loginStart(_ sender: Any) {
        
        let view = UIStoryboard(name: "LoginView", bundle: .main)
        if let vc = view.instantiateInitialViewController() as? LoginViewController {
            vc.modalPresentationStyle = .fullScreen
            weak var pvc = self.presentingViewController
            self.dismiss(animated: false, completion: {
                pvc?.present(vc, animated: false, completion: nil)
            })
        }
    }
}
