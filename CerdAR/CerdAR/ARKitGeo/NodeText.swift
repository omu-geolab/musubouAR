//
//  NodeText.swift
//  CerdAR
//
//  Created by 山根隆弘 on 2019/07/25.
//  Copyright © 2019 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.

import ARKit
import CoreLocation

public class NodeText: SCNNode {
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
