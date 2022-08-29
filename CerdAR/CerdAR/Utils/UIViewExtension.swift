//
//  UIViewExtension.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 4/03/17.
//  Copyright © Reiwa 4 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import Foundation
import UIKit

extension UIViewController {
    func alert(title:String, message:String) {
        let alert = UIAlertController(title: title,
                                   message: message,
                                   preferredStyle: .alert)
        alert.addAction(UIAlertAction(title: "OK",
                                       style: .default,
                                       handler: nil))
        present(alert, animated: true)
    }

    func confirm(title:String, message:String, okAction: @escaping ((UIAlertAction) -> ()), cancelAction: @escaping ((UIAlertAction) -> ())) {
        let alert = UIAlertController(title: title,
                                   message: message,
                                   preferredStyle: .alert)
        alert.addAction(UIAlertAction(title: "OK",
                                       style: .default,
                                       handler: okAction))
        alert.addAction(UIAlertAction(title: "キャンセル",
                                       style: .cancel,
                                       handler: cancelAction))
        present(alert, animated: true)
    }
}
