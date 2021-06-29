//
//  WorkoutJSON.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/03/03.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import Foundation
import MapKit
class WorkoutJSON {
    var createDate:Date = Date()
    var locations:[CLLocation]?
    var sdate:Date?
    var edate:Date?
    var workoutActivityType:String?
    var totalEnergyBurned:Double?
    var duration:TimeInterval?
    func toJson() -> String {
        let jsonDic = [
            "createDate":createDate.toString(format: "yyyy-MM-dd HH:mm:ss Z"),
            "sdate":sdate?.toString(format: "yyyy-MM-dd HH:mm:ss Z") ?? "",
            "edate":edate?.toString(format: "yyyy-MM-dd HH:mm:ss Z") ?? "",
            "workoutActivityType":workoutActivityType ?? "",
            "totalEnergyBurned":totalEnergyBurned ?? 0,
            "duration":duration,
            
        ] as [String : Any]
        do {
            let jsonData = try JSONSerialization.data(withJSONObject: jsonDic)
            let jsonStr = String(bytes: jsonData, encoding: .utf8)!
            print(jsonStr)
            return jsonStr
        } catch (let e) {
            print(e)
        }
        return ""
    }
}
