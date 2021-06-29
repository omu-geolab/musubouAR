//
//  ExtensionDelegate.swift
//  CerdARWatch Extension
//
//  Created by 山根隆弘 on R 3/02/10.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import WatchKit
import HealthKit

class ExtensionDelegate: NSObject, WKExtensionDelegate {

    func applicationDidFinishLaunching() {
        // Perform any final initialization of your application.
    }

    func applicationDidBecomeActive() {
        // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
    }

    func applicationWillResignActive() {
        // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
        // Use this method to pause ongoing tasks, disable timers, etc.
    }
    
    func handle(_ workoutConfiguration: HKWorkoutConfiguration) {
//        WKInterfaceController.reloadRootControllers(withNames: ["WorkoutController"], contexts: [workoutConfiguration])
        ParentConnector.shared.send(key: "delegate", message: "workoutConfiguration")
//        WKInterfaceController.reloadRootControllers(withNames: ["InterfaceController"], contexts: nil)
        WKInterfaceController.reloadRootPageControllers(withNames:  ["InterfaceController"], contexts: [workoutConfiguration], orientation: .horizontal, pageIndex: 0)
    }

    func handle(_ backgroundTasks: Set<WKRefreshBackgroundTask>) {
        // Sent when the system needs to launch the application in the background to process tasks. Tasks arrive in a set, so loop through and process each one.
        for task in backgroundTasks {
            // Use a switch statement to check the task type
            switch task {
            case let backgroundTask as WKApplicationRefreshBackgroundTask:
                // Be sure to complete the background task once you’re done.
                ParentConnector.shared.send(key: "delegate", message: "backgroundTask")
                backgroundTask.setTaskCompletedWithSnapshot(false)
            case let snapshotTask as WKSnapshotRefreshBackgroundTask:
                // Snapshot tasks have a unique completion call, make sure to set your expiration date
                ParentConnector.shared.send(key: "delegate", message: "snapshotTask")
                snapshotTask.setTaskCompleted(restoredDefaultState: true, estimatedSnapshotExpiration: Date.distantFuture, userInfo: nil)
            case let connectivityTask as WKWatchConnectivityRefreshBackgroundTask:
                ParentConnector.shared.send(key: "delegate", message: "connectivityTask")
                // Be sure to complete the connectivity task once you’re done.
                connectivityTask.setTaskCompletedWithSnapshot(false)
            case let urlSessionTask as WKURLSessionRefreshBackgroundTask:
                ParentConnector.shared.send(key: "delegate", message: "urlSessionTask")
                // Be sure to complete the URL session task once you’re done.
                urlSessionTask.setTaskCompletedWithSnapshot(false)
            case let relevantShortcutTask as WKRelevantShortcutRefreshBackgroundTask:
                // Be sure to complete the relevant-shortcut task once you're done.
                ParentConnector.shared.send(key: "delegate", message: "relevantShortcutTask")
                relevantShortcutTask.setTaskCompletedWithSnapshot(false)
            case let intentDidRunTask as WKIntentDidRunRefreshBackgroundTask:
                ParentConnector.shared.send(key: "delegate", message: "intentDidRunTask")
                // Be sure to complete the intent-did-run task once you're done.
                intentDidRunTask.setTaskCompletedWithSnapshot(false)
            default:
                // make sure to complete unhandled task types
                ParentConnector.shared.send(key: "delegate", message: "default")
                task.setTaskCompletedWithSnapshot(false)
            }
        }
    }

}
