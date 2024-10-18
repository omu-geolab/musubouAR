//
//  UnityViewController.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/06/30.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

//  UnityViewController.swift

import UIKit
import UnityFramework
struct UnityViewModelType {
    let title: String

    init(json: [String: Any]) {
        title = json["title"] as? String ?? ""
    }

    init() {
        title = ""
    }
}
final class UnityViewController: UIViewController {
   // MARK: - Property

   private var viewModel: UnityViewModelType?
   private var unityFramework: UnityFramework?
   /// Note: 一度UnityをQuitするとアプリ生存期間中に再度起動することはできないので、基本的にはQuitしません
   private var didQuit: Bool = false

   // MARK: - View LifeCycle

   override func viewDidLoad() {
       super.viewDidLoad()
       initUnityWindow()
       showUnity()
   }

   // MARK: - ViewFunctions

   func inject(viewModel: UnityViewModelType) {
       self.viewModel = viewModel
   }
}

// MARK: - UnityFrameworkListener

extension UnityViewController: UnityFrameworkListener {
   func unityDidUnload(_ notification: Notification!) {
       unityFramework?.unregisterFrameworkListener(self)
       unityFramework = nil
       hideUnity()
   }

   // UnityFramework.h にて　UnityFrameworkListenerとして宣言されているため実装するが、Quitしないので基本呼ばれない。
   func unityDidQuit(_ notification: Notification!) {
       unityFramework?.unregisterFrameworkListener(self)
       unityFramework = nil
       didQuit = true
       hideUnity()
   }
}

extension UnityViewController {
   func showUnity() {
       if !unityIsInitialized() {
           print("please init unity first")
           return
       }
       unityFramework?.showUnityWindow()
   }

   func hideUnity() {
       guard let delegate = UIApplication.shared.delegate as? AppDelegate else { return }
       delegate.window?.makeKeyAndVisible()
   }

   func unloadUnity() {
       if unityIsInitialized() {
        self.unityFramework?.unloadApplication()
       }
   }

   func initUnityWindow() {
       guard !unityIsInitialized(),
             let delegate = UIApplication.shared.delegate as? AppDelegate else {
           showUnity()
           return
       }
       unityFramework = loadUnityFramework()
       unityFramework?.setDataBundleId("com.unity3d.framework")
       unityFramework?.register(self)
//       NSClassFromString("FrameworkLibAPI")?.registerAPIforNativeCalls(self)
       unityFramework?.runEmbedded(withArgc: CommandLine.argc, argv: CommandLine.unsafeArgv, appLaunchOpts: delegate.launchOptions)
   }

   private func unityIsInitialized() -> Bool {
       unityFramework != nil && (unityFramework?.appController() != nil)
   }

   private func loadUnityFramework() -> UnityFramework? {
       let bundlePath: String = Bundle.main.bundlePath + "/Frameworks/UnityFramework.framework"
       let bundle = Bundle(path: bundlePath)
       if bundle?.isLoaded == false {
           bundle?.load()
       }
       let unityFramework = bundle?.principalClass?.getInstance()
       if unityFramework?.appController() == nil {
           let machineHeader = UnsafeMutablePointer<MachHeader>.allocate(capacity: 1)
           machineHeader.pointee = _mh_dylib_header
           unityFramework?.setExecuteHeader(machineHeader)
       }
       return unityFramework
   }
}

// MARK: - NativeCallsProtocol
//
// extension UnityViewController: NativeCallsProtocol {
//   func finishAr() {
//       hideUnity()
//       unloadUnity()
//   }
//
//
//   func sendMessage() {
//       unityFramework?.sendMessageToGO(withName: "LibraryHelper", functionName: "receiveMessage", message: "hello unity from nativeApp")
//   }
//}
