//
//  LocationExtension.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 4/06/24.
//  Copyright © Reiwa 4 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import Foundation
import CoreLocation
import CoreMedia

extension CLLocation{
    func toPointGPX(heartRate:Double) -> GPX.WptType{
        let ex = GPX.TrackPointExtension(speed: self.speed, course: self.course, hAcc: self.horizontalAccuracy, vAcc: self.verticalAccuracy, heartRate: heartRate)
        return GPX.WptType.init(ele: self.altitude, time: self.timestamp, link:[],extensions:ex, lat: self.coordinate.latitude, lon: self.coordinate.longitude)
    }
}
