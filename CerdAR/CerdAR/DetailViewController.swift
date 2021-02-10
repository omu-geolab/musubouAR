//
//  DetailViewController.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/01/27.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import UIKit

class DetailViewController: UIView {

    /*
    // Only override draw() if you perform custom drawing.
    // An empty implementation adversely affects performance during animation.
    override func draw(_ rect: CGRect) {
        // Drawing code
    }
    */
    @IBOutlet weak var tilte: UILabel!
    override init(frame: CGRect) {
           super.init(frame: frame)
           loadNib()
       }

       required init?(coder aDecoder: NSCoder) {
           super.init(coder: aDecoder)
//           loadNib()
       }

       func loadNib() {
        print(String(describing: type(of: self)))
        if let view = Bundle(for: type(of: self)).loadNibNamed("DetailView", owner: self, options: nil)?.first as? UIView {
                    view.frame = self.bounds
            view.autoresizingMask = [.flexibleHeight, .flexibleWidth]
                    self.addSubview(view)
                }
       }

}
