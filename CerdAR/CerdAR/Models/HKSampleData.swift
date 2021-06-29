//
//  HKSampleData.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/03/04.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import Foundation
import HealthKit

class HKSampleData:NSObject {
    var value:Double?
    var sdate:Date?
    var edate:Date?
    var unit:HKUnit?
    var type:HKQuantityType?
    init(data:HKSample,unit:HKUnit) {
        
    }
    func toString() -> String {
        let dic = [
            "value":value,
            "sdate":sdate?.toString(format: "yyyy-MM-dd HH:mm:ss Z"),
            "edate":edate?.toString(format: "yyyy-MM-dd HH:mm:ss Z"),
            "unit":unit?.unitString,
            "type":type?.description
        ]
        as [String : Any]
        
        return dic.toString()
    }
}
