//
//  Notification.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/02/01.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import Foundation
import UIKit
class Notification {
    static func showNotification(tilte:String,message:String) {
        let content = UNMutableNotificationContent()
        content.title = tilte
        content.body = message
        content.sound = UNNotificationSound.default
        
        // 直ぐに通知を表示
        let request = UNNotificationRequest(identifier: "immediately", content: content, trigger: nil)
        UNUserNotificationCenter.current().add(request, withCompletionHandler: nil)
    }
}
