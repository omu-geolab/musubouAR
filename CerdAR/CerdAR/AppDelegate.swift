//
//  AppDelegate.swift
//  CerdAR
//
//  Copyright (c) 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
//

import UIKit
import GoogleSignIn
//import CoreData
//import SwiftUI

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {
    
    var window: UIWindow?
    private(set) var launchOptions: [UIApplication.LaunchOptionsKey: Any]?
    //var myNavigationController: UINavigationController?
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        UNUserNotificationCenter.current().requestAuthorization(
            options: [.alert, .sound, .badge]){
            (granted, _) in
            if granted{
                UNUserNotificationCenter.current().delegate = self
            }
        }
       
//        GIDSignIn.sharedInstance.delegate = self
//        GIDSignIn.sharedInstance?.restorePreviousSignIn()
        self.launchOptions = launchOptions
        let viewController: UIViewController = loadViewController()
        self.window = UIWindow(frame: UIScreen.main.bounds)
        self.window?.backgroundColor = UIColor.white
        self.window?.rootViewController = viewController
//        self.window?.rootViewController = UIHostingController(rootView: LoadingView())
//        let navigationController = UINavigationController(rootViewController: viewController)
//             window = UIWindow(frame: UIScreen.main.bounds)
//             if let window = window {
//               window.rootViewController = navigationController
//               window.makeKeyAndVisible()
//             }
        self.window?.makeKeyAndVisible()
        Unity.shared.setHostMainWindow(window)
        GIDSignIn.sharedInstance.restorePreviousSignIn { user, error in
            if error != nil || user == nil {
              // Show the app's signed-out state.
            } else {
              // Show the app's signed-in state.
            }
          }

        return true
    }
    
    func applicationWillResignActive(_ application: UIApplication) {
        // Sent when the application is about to move from active to inactive state.
        // This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message)
        // or when the user quits the application and it begins the transition to the background state.
        // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
    }
    
    func applicationDidEnterBackground(_ application: UIApplication) {
        // Use this method to release shared resources, save user data, invalidate timers,
        // and store enough application state information to restore your application to its current state in case it is terminated later.
        // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
    }
    
    func applicationWillEnterForeground(_ application: UIApplication) {
        // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
    }
    
    func applicationDidBecomeActive(_ application: UIApplication) {
        // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
    }
    
    func applicationWillTerminate(_ application: UIApplication) {
        // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
        // Saves changes in the application's managed object context before the application terminates.
        /////self.saveContext()
        WorkoutService.shared.send(key: "message", message:"end")
    }
    func application(_ app: UIApplication,open url: URL, options: [UIApplication.OpenURLOptionsKey : Any] = [:]) -> Bool {
      var handled: Bool
      handled = GIDSignIn.sharedInstance.handle(url)
      if handled {
        return true
      }
      return false
    }
    
}

extension AppDelegate: UNUserNotificationCenterDelegate {
    func userNotificationCenter(
        _ center: UNUserNotificationCenter,
        willPresent notification: UNNotification,
        withCompletionHandler completionHandler: @escaping (UNNotificationPresentationOptions) -> Void)
    {
        // アプリ起動時も通知を行う
        completionHandler([ .badge, .sound, .banner ])
    }
}
