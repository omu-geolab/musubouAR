//
//  InterfaceController.swift
//  CerdARWatch Extension
//
//  Created by 山根隆弘 on R 3/02/10.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import WatchKit
import Foundation
import WatchConnectivity
import HealthKit
import UserNotifications

class InterfaceController: WKInterfaceController {

    var timer : Timer?
    
    var isPaused = false
    
    @IBOutlet weak var caloLabel: WKInterfaceLabel!
    @IBOutlet weak var heartRateLabel: WKInterfaceLabel!
    @IBOutlet weak var runLabel: WKInterfaceLabel!
    @IBOutlet weak var actionButton: WKInterfaceButton!
    
    
    override func awake(withContext context: Any?) {
        // Configure interface objects here.
        super.awake(withContext: context)
        WorkoutManager.shared.delegate = self
        ParentConnector.shared.delegate = self
        ParentConnector.shared.send(key: "State", message: "awake")
    }
    
    override func willActivate() {
        super.willActivate()
    }
    
    override func willDisappear() {
        ParentConnector.shared.send(key: "State", message: "Suspended")
    }
    
    override func didDeactivate() {
        // This method is called when watch view controller is no longer visible
        super.didDeactivate()
    }
    
    @IBAction func tapActionButton() {
        if(!WorkoutManager.shared.running){
            WorkoutManager.shared.startWorkout()
            actionButton.setTitle("完了")
            ParentConnector.shared.send(key: "State", message: "Start")
        }else {
            WorkoutManager.shared.endWorkout()
            actionButton.setTitle("開始")
            ParentConnector.shared.send(key: "State", message: "End")
        }
    }
    @IBAction func tapState() {
        
        
    }
    func stringWithUUID() -> String {
      let uuidObj = CFUUIDCreate(nil)
      let uuidString = CFUUIDCreateString(nil, uuidObj)!
      return uuidString as String
     }


    func sendNotificationButton(title:String,message:String) {
      
        let content = UNMutableNotificationContent()
        content.title = title
        content.body = message
        content.sound = UNNotificationSound.default
        _ = UNTimeIntervalNotificationTrigger.init(
          timeInterval: 5,
          repeats: false)
      
        let identifier = self.stringWithUUID()
        let request = UNNotificationRequest.init(
          identifier: identifier,
          content: content,
          trigger: nil
        )
    
    
        UNUserNotificationCenter.current().add(
        request, withCompletionHandler: nil)
    
    }
    //    func updateState() {
    //        if let session = workoutSession {
    //            switch session.state {
    //
    //                case .running,.prepared:
    //                    setTitle("Active Workout")
    //                    ParentConnector.shared.send(state: "running")
    //                    pauseResumeButton.setTitle("Pause")
    //
    //                case .paused, .stopped:
    //                    setTitle("Paused Workout")
    //                    ParentConnector.shared.send(state: "paused")
    //                    pauseResumeButton.setTitle("Resume")
    //
    //                case .notStarted, .ended:
    //                    setTitle("Workout")
    //                    ParentConnector.shared.send(state: "ended")
    //
    //            @unknown default: break
    //                print("")
    //            }
    //        }
    //    }
    
    
}

extension InterfaceController: WorkoutManagerDelegate {
    func updateWorkout() {
        caloLabel.setText(String.init(format: "%.1fKCAL", WorkoutManager.shared.activeCalories))
        runLabel.setText(String.init(format: "%.1fM", WorkoutManager.shared.distance))
        heartRateLabel.setText(String.init(format: "%0.1fBPM", WorkoutManager.shared.heartrate))
        ParentConnector.shared.send(key: "heartrate",message: String.init(format: "%.f",
                                                                     WorkoutManager.shared.heartrate))
    }
}
extension InterfaceController: ParentConnectorDelegate {
    func messageFromIOS(message: String) {
        if(message.elementsEqual("start")){
            WorkoutManager.shared.startWorkout()
            actionButton.setTitle("完了")
        }else if(message.elementsEqual("end")){
            WorkoutManager.shared.endWorkout()
            actionButton.setTitle("開始")
            caloLabel.setText("--")
            runLabel.setText("--")
            heartRateLabel.setText("--")
        }
    }
    func notificationFromIOS(message: String) {
        ParentConnector.shared.send(key: "State",message: message)
//        NotificationWatch.showNotification(tilte: "報告", message: message)
        sendNotificationButton(title: "報告", message: message)
    }
}
