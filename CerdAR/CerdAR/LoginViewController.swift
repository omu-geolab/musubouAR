//
//  LoginViewController.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 4/03/17.
//  Copyright © Reiwa 4 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import UIKit
import GoogleSignIn

class LoginViewController: UIViewController {
    let signInConfig = GIDConfiguration.init(clientID: "58994390067-nm49a5nsa0aobbarufiu0pveqtac67ll.apps.googleusercontent.com")
    
    @IBOutlet weak var emailText: UITextField!
    @IBOutlet weak var passText: UITextField!
    
    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
    }
    

    @IBAction func loginMusubou(_ sender: Any) {
        if validateEmail(candidate: emailText.text ?? ""){
            email = emailText.text!
            isLogin = true
            self.dismiss(animated: true, completion: nil)
            let osmVC = osmViewController()
            let appDelegate = UIApplication.shared.delegate as! AppDelegate
            appDelegate.window?.rootViewController = osmVC
        }else{
            alert(title: "入力エラー", message: "メールアドレスの形式が合っていません。")
        }
       
    }
    @IBAction func signIn(_ sender: Any) {
        GIDSignIn.sharedInstance.signIn(with: signInConfig, presenting: self) { user, error in
            guard error == nil else { return }
            guard let user = user else { return }

            if let emailAddress = user.profile?.email {
                email = emailAddress
                isLogin = true
                self.dismiss(animated: true, completion: nil)
                let osmVC = osmViewController()
                let appDelegate = UIApplication.shared.delegate as! AppDelegate
                appDelegate.window?.rootViewController = osmVC
            }

          }
    }
    func validateEmail(candidate: String) -> Bool {
           let emailRegex = "[A-Z0-9a-z._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,6}"
           return NSPredicate(format: "SELF MATCHES %@", emailRegex).evaluate(with: candidate)
    }
    
    override func touchesBegan(_ touches: Set<UITouch>, with event: UIEvent?) {
        self.view.endEditing(true)
        
    }
}
