//
//  Vibration.swift
//  CerdAR
//
//  Copyright © 2017 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University). All rights reserved.
//

import UIKit
import AudioToolbox

/* 振動 */
class Vibration: NSObject {
    var timer:Timer? = nil
    var isVibration = false
    
    /* 初期化　*/
    override init() {
        
    }
    
    /* 近い場合 */
    func vibNearStart() {
        vibStart(timeInterval:3.0)
    }
    
    /* 遠い場合 */
    func vibIntrusionStart() {
        vibStart(timeInterval:5.0)
    }
    
    /* 開始 */
    private func vibStart(timeInterval:TimeInterval) {
        vibStop()
        timer = Timer.scheduledTimer(timeInterval: timeInterval, target: self, selector: #selector(self.vibrate), userInfo: nil, repeats: true)
        timer?.fire()
        isVibration = true
    }
    
    func vibrate(timer: Timer) {
        AudioServicesPlaySystemSound(kSystemSoundID_Vibrate)
    }
    
    /* 終了 */
    func vibStop() {
        if timer != nil && (timer?.isValid)! {
            timer?.invalidate()
            isVibration = false
        }
    }


}
