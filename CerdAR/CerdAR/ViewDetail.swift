//
//  ViewDetail.swift
//  CerdAR
//
//  Copyright (c) 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University)
//

import Foundation
import UIKit

class ViewDetail: UIViewController {
    
    var leftBarButton: UIBarButtonItem!
    var rightBarButton: UIBarButtonItem!

    override func viewDidLoad() {
        super.viewDidLoad()

        self.title = "detail" //jsonからデータが取れるようになったら

        self.view.backgroundColor = UIColor.whiteColor()
    }
    


    override func viewWillAppear(animated: Bool) {
        // NavigationBarを隠す処理
        self.navigationController?.setNavigationBarHidden(false, animated: true)
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }







}
