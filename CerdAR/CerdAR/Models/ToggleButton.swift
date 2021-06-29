//
//  ToggleButton.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/03/10.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import UIKit

import UIKit
class ToggleButton: UIButton {
    @IBInspectable var highlightedSelectedImage:UIImage?
    @IBInspectable var normalSelectedImage:UIImage?
    func initToggleButton() {
        self.addTarget(self, action: #selector(btnClicked(_:)),
                       for: .touchUpInside)
        //    self.setImage(highlightedSelectedImage,
        //                  for: [.highlighted, .selected])
    }
    @objc func btnClicked (_ sender:UIButton) {
        isSelected.toggle()
        if isSelected {
            self.setImage(highlightedSelectedImage,
                          for: UIControl.State())
        }else{
            self.setImage(normalSelectedImage,
                          for: UIControl.State())
        }
    }
     func setClicked (isSelect:Bool) {
        isSelected = isSelect
        if isSelected {
            self.setImage(highlightedSelectedImage,
                          for: UIControl.State())
        }else{
            self.setImage(normalSelectedImage,
                          for: UIControl.State())
        }
    }
}
