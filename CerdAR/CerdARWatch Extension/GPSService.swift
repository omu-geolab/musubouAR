//
//  GPSService.swift
//  CerdARWatch Extension
//
//  Created by 山根隆弘 on R 3/02/26.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import Foundation
import CoreLocation

protocol GPSServiceDelegate {
    func updateLocation(location:[CLLocation])
}

class GPSService: NSObject, CLLocationManagerDelegate {
    static var shared = GPSService()
    var locationManager: CLLocationManager = CLLocationManager()
    var delegate: GPSServiceDelegate?
    
    
    override init() {
        super.init()
//        ParentConnector.shared.send(state: "init")
//        setupLocationManager()
    }
    
    private func setupLocationManager() {

        locationManager.delegate = self
        locationManager.requestWhenInUseAuthorization()
        // 位置情報の取得精度を指定します
        locationManager.desiredAccuracy = kCLLocationAccuracyBest
        if CLLocationManager.locationServicesEnabled() {
            //位置情報の取得開始
            locationManager.startUpdatingLocation()
        }
    }
    
    
    func locationManager(_ manager: CLLocationManager, didUpdateLocations locations: [CLLocation]) {
//        let filteredLocations = locations.filter { (location: CLLocation) -> Bool in
//               location.horizontalAccuracy <= 50.0
//           }
//
//        guard !filteredLocations.isEmpty else { return }
        delegate?.updateLocation(location: locations)
        
    }
}
