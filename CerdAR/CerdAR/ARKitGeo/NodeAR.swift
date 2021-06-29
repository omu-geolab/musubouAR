//
//  NodeAR.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/03/19.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import UIKit
import ARKit

class NodeAR: SCNNode {
    var data: TagData?
    init(geometry: SCNGeometry) {
        super.init()
        self.geometry = geometry
    }
    /* Xcode required this */
    required init(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
}
