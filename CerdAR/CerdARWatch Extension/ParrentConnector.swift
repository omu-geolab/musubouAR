//
//  ParrentConnector.swift
//  CerdARWatch Extension
//
//  Created by 山根隆弘 on R 3/02/22.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import Foundation
import WatchConnectivity
protocol ParentConnectorDelegate {
    func messageFromIOS(message:String)
    func notificationFromIOS(message:String)
}

class ParentConnector : NSObject, WCSessionDelegate {
    // MARK: Properties
    
    var wcSession: WCSession?
    
    var statesToSend = Dictionary<String,String>()
    
    var messageFromIOS:String = ""
    
    var delegate:ParentConnectorDelegate?
    
    static var shared = ParentConnector()
    
    override init() {
        super.init()
        wcSession =  WCSession.default
        wcSession?.delegate = self
        wcSession?.activate()
    }
    
    // MARK: Utility methods
    
    func send(key:String,message: String) {
        if let session = wcSession {
            print(session.activationState)
            print(session.isReachable)
            if session.isReachable {
                session.sendMessage([key: message], replyHandler: nil)
            }else {
                wcSession =  WCSession.default
                wcSession?.delegate = self
                wcSession?.activate()
                statesToSend[key] = message
            }
        }
    }
    
    // MARK : WCSessionDelegate
    
    func session(_ session: WCSession, activationDidCompleteWith activationState: WCSessionActivationState, error: Error?) {
        if activationState == .activated {
            wcSession = session
            sendPending()
        }
    }
    
    func session(_ session: WCSession, didReceiveMessage message: [String : Any]) {
        if let messageString = message["message"] as? String {
            print(messageString)
            messageFromIOS = messageString
            self.delegate?.messageFromIOS(message: messageString)
        }
        if let notification = message["notification"] as? String {
            print(notification)
            self.delegate?.notificationFromIOS(message: notification)
        }
    }
    
    private func sendPending() {
        if let session = wcSession {
            if session.isReachable {
                for state in statesToSend {
                    session.sendMessage([state.key: state.value], replyHandler: nil)
                }
                statesToSend.removeAll()
            }
        }
    }
}
