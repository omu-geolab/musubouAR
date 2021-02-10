//
//  PlaySound.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/02/05.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import Foundation
import AVFoundation

class PlaySound {
    
    static func playButtonSound() {
        var audioPlayer: AVAudioPlayer!
        if let soundURL = Bundle.main.url(forResource: "click", withExtension: "wav") {
            
            do {
                audioPlayer = try AVAudioPlayer(contentsOf: soundURL)
            }
            catch {
                print(error)
            }
            
            audioPlayer.play()
        }else{
            print("Unable to locate audio file")
        }
    }
}
