//
//  WorkoutService.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/02/19.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import Foundation
import UIKit
import HealthKit
import WatchConnectivity

protocol WorkoutServiceDelegate {
    func dataFromWatch(data:WorkoutData)
    func excuteFromWatch(active:Bool)
}
class WorkoutService: NSObject, WCSessionDelegate {
    
    var configuration : HKWorkoutConfiguration?
    let healthStore = HKHealthStore()
    static var shared = WorkoutService()
    var wcSessionActivationCompletion : ((WCSession)->Void)?
    var wcSession = WCSession.default
    var statesToSend = Dictionary<String,String>()
    var delegate:WorkoutServiceDelegate?
    var isActiveApp:Bool = false
    var messageTimer: Timer?
    var isRunWorkout:Bool = false
    override init() {
        super.init()
        messageTimer = Timer.scheduledTimer(timeInterval: 3, target: self, selector: #selector(self.sendPending), userInfo: nil, repeats: true)
        if WCSession.isSupported() {
            wcSession.delegate = self
            wcSession.activate()
        }
        else{
            // サポートされていない時の処理は省略
        }
    }
    func isSupport() -> Bool{
        return WCSession.isSupported() && wcSession.isWatchAppInstalled
    }
    
    func session(_ session: WCSession, activationDidCompleteWith activationState: WCSessionActivationState, error: Error?) {
        if activationState == .activated {
            print("activationDidCompleteWith")
            wcSession = session
            sendPending()
            if let activationCompletion = wcSessionActivationCompletion {
                activationCompletion(session)
                wcSessionActivationCompletion = nil
            }
        }
    }
    func sessionReachabilityDidChange(_ session: WCSession) {
        print("sessionReachabilityDidChange")
        sendPending()
    }
    func session(_ session: WCSession, didReceiveMessage message: [String : Any], replyHandler: @escaping ([String : Any]) -> Void) {
        isActiveApp = true
        if let state = message["State"] as? String {
            print("state"+state)
            if (state.elementsEqual("awake")){
                sendPending()
            }
            if state.elementsEqual("Start") {
                isRunWorkout = true
                delegate?.excuteFromWatch(active: true)
            }
            if state.elementsEqual("End") {
                isRunWorkout = false
                delegate?.excuteFromWatch(active: false)
            }
            if state.elementsEqual("Suspended") {
                isActiveApp = false
            }
        }
        if let state = message["heartrate"] as? String {
            let workout = WorkoutData()
            workout.heart = state
            delegate?.dataFromWatch(data: workout)
            if let heartRate = Int(state) {
                if heartRate > 90 {
                    send(key: "notification", message: "高心拍になっています")
                } else if heartRate < 80 {
                    send(key: "notification", message: "底心拍になっています")
                }
            }
        }
    }
     
    func session(_ session: WCSession, didReceiveMessage message: [String : Any]) {
        isActiveApp = true
        if let state = message["delegate"] as? String {
            print(state)
        }
        if let state = message["State"] as? String {
            print("state"+state)
            if (state.elementsEqual("awake")){
                sendPending()
            }
            if state.elementsEqual("Start") {
                isRunWorkout = true
                delegate?.excuteFromWatch(active: true)
            }
            if state.elementsEqual("End") {
                isRunWorkout = false
                delegate?.excuteFromWatch(active: false)
                ExpportAllWorkouts()
            }
            if state.elementsEqual("Suspended") {
                isActiveApp = false
            }
        }
        if let state = message["heartrate"] as? String {
            let workout = WorkoutData()
            workout.heart = state
            delegate?.dataFromWatch(data: workout)
            if let heartRate = Int(state) {
                if heartRate > 120 {
                    send(key: "notification", message: String.init(format: "高心拍になっています。(%dBPM)",heartRate))
                } else if heartRate < 50 {
                    send(key: "notification", message: String.init(format: "底心拍になっています。(%dBPM)",heartRate))
                }
            }
        }
    }
    
    func sessionWatchStateDidChange(_ session: WCSession) {
        print("sessionWatchStateDidChange")
        sendPending()
    }
    func sessionDidBecomeInactive(_ session: WCSession) {
        print("sessionDidBecomeInactive")
    }
    
    func sessionDidDeactivate(_ session: WCSession) {
        print("sessionDidDeactivate")
    }
    
    func send(key:String,message: String) {
        print(message)
        wcSession = WCSession.default
        if wcSession.isReachable {
            print(message)
            wcSession.sendMessage([key: message], replyHandler: nil)
        } else {
            self.wcSession = WCSession.default
            self.wcSession.activate()
            self.statesToSend[key] = message
        }
//        wcSession.sendMessage([key: message], replyHandler: nil, errorHandler: {error in
//            dump(error.localizedDescription)
//            dump(error)
//            self.wcSession = WCSession.default
//            self.wcSession.activate()
//            self.statesToSend[key] = message
//            if !self.isActiveApp{
//                self.startWatchApp()
//            }
//        })
    }
    func sendNotification(message: String) {
        print(message)
        if wcSession.isReachable {
            print(message)
            wcSession.sendMessage(["notification": message], replyHandler: nil)
        }
    }
    @objc private func sendPending() {
        if wcSession.isReachable {
            for state in statesToSend {
                wcSession.sendMessage([state.key: state.value], replyHandler: nil)
            }
            statesToSend.removeAll()
        }
    }
    
    
    func startWatchApp(completion: @escaping (Bool)->Void) {
        configuration = HKWorkoutConfiguration()
        configuration?.activityType = .walking
        configuration?.locationType = .outdoor
        guard let workoutConfiguration = configuration else { return }
        
        getActiveWCSession { (wcSession) in
            if wcSession.activationState != .notActivated && wcSession.isWatchAppInstalled {
                HKHealthStore().startWatchApp(with: workoutConfiguration, completion: { (success, error) in
                    completion(success)
                    self.isActiveApp = true
                    self.sendPending()
                })
            }
        }
    }
    func endWorkout() {
        self.send(key: "message", message: "end")
    }
    
    func getActiveWCSession(completion: @escaping (WCSession)->Void) {
        guard WCSession.isSupported() else { return }
        
        let wcSession = WCSession.default
        wcSession.delegate = self
        if wcSession.activationState == .activated || wcSession.activationState == .inactive {
            completion(wcSession)
        } else {
            wcSession.activate()
            wcSessionActivationCompletion = completion
        }
    }
    func getWorkoutList(completion:@escaping ([HKWorkout]?, Error?) -> Void){
        let workoutPredicate = HKQuery.predicateForWorkouts(with: .walking)
        
        //2. Get all workouts that only came from this app.
        let sourcePredicate = HKQuery.predicateForObjects(from: .default())
        
        //3. Combine the predicates into a single predicate.
        let compound = NSCompoundPredicate(andPredicateWithSubpredicates:
                                            [workoutPredicate, sourcePredicate])
        
        let sortDescriptor = NSSortDescriptor(key: HKSampleSortIdentifierEndDate,
                                              ascending: false)
        let query = HKSampleQuery(
            sampleType: .workoutType(),
            predicate: compound,
            limit: 0,
            sortDescriptors: [sortDescriptor]) { (query, samples, error) in
            DispatchQueue.main.async {
                guard
                    let samples = samples as? [HKWorkout],
                    error == nil
                else {
                    print(error.debugDescription)
                    completion(nil, error)
                    return
                }
                completion(samples, nil)
            }
        }
        
        HKHealthStore().execute(query)
    }
    func ExpportAllWorkouts() {
        getWorkoutList { (workouts, error) in
            for item in workouts ?? [] {
                let export = ExportWorkout(workoutdata: item)
                export.exportData()
            }
        }
    }
    
    
}
