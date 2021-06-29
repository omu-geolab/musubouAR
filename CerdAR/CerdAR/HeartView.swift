//
//  HeartView.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/03/10.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import UIKit

class HeartView: UIView {

    @IBOutlet weak var heartButton: UIButton!
    @IBOutlet weak var heartRateLabel: UILabel!
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
    func heartAnimation () {
        let beatLong: CABasicAnimation = CABasicAnimation(keyPath: "transform.scale")
        beatLong.fromValue = NSValue(cgSize: CGSize(width: 1, height: 1))
        beatLong.toValue = NSValue(cgSize: CGSize(width: 0.7, height: 0.7))
        beatLong.autoreverses = true
        beatLong.duration = 0.7
        beatLong.beginTime = 0.0
        beatLong.timingFunction = CAMediaTimingFunction(name: CAMediaTimingFunctionName.easeIn )
        beatLong.repeatCount = .infinity

//        let beatShort: CABasicAnimation = CABasicAnimation(keyPath: "transform.scale")
//        beatShort.fromValue = NSValue(cgSize: CGSize(width: 1, height: 1))
//        beatShort.toValue = NSValue(cgSize: CGSize(width: 0.5, height: 0.5))
//        beatShort.autoreverses = true
//        beatShort.duration = 0.7
//        beatShort.beginTime = beatLong.duration
//        beatLong.timingFunction = CAMediaTimingFunction(name: CAMediaTimingFunctionName.easeIn )

//        let heartBeatAnim: CAAnimationGroup = CAAnimationGroup()
//        heartBeatAnim.animations = [beatLong, beatShort]
//        heartBeatAnim.duration = beatShort.beginTime + beatShort.duration
//        heartBeatAnim.fillMode = CAMediaTimingFillMode.forwards
//        heartBeatAnim.isRemovedOnCompletion = false
//        heartBeatAnim.repeatCount = FLT_MAX
        self.heartButton.layer.add(beatLong, forKey: "heartAnimation")
    }

}
