//
//  DateExtension.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/03/03.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import Foundation
import HealthKit
import MapKit
extension Date {
    func toString(format: String) -> String? {
        let dateFormatter = DateFormatter()
        dateFormatter.calendar = Calendar(identifier: .gregorian)
        dateFormatter.dateFormat = format
        return dateFormatter.string(from: self)
    }
}
extension Dictionary {
    func toString() -> String {
        do {
            let jsonData = try JSONSerialization.data(withJSONObject: self)
            let jsonStr = String(bytes: jsonData, encoding: .utf8)!
            return jsonStr
        } catch (let e) {
            print(self.description)
            print(e)
        }
        return ""
    }
}
extension HKQuantitySample {
    //    func toString(unit:HKUnit) -> Dictionary<String,Any> {
    //        let dic = [
    //            "value":quantity.doubleValue(for: unit),
    //            "sdate":startDate.toString(format: "yyyy-MM-dd'T'HH:mm:ss") ?? "",
    //            "edate":endDate.toString(format: "yyyy-MM-dd'T'HH:mm:ss") ?? "",
    //            "unit":unit.unitString,
    //            "type":quantityType.description,
    //            "description":quantity.description,
    //            "device":device?.description ?? ""
    //        ]
    //        as [String : Any]
    //
    //        return dic
    //    }
    func toString(unit:HKUnit) -> Dictionary<String,Any> {
        let dic = [
            "value":quantity.doubleValue(for: unit),
            "sdate":startDate.toString(format: "yyyy-MM-dd HH:mm:ss Z") ?? "",
            "edate":endDate.toString(format: "yyyy-MM-dd HH:mm:ss Z") ?? "",
            "unit":unit.unitString,
            "type":quantityType.description,
            "description":quantity.description,
            //            "device":device?.description ?? ""
        ]
        as [String : Any]
        
        return dic
    }
    func toHK(unit:HKUnit) -> Dictionary<String,Any> {
        let dic = [
            "value":quantity.doubleValue(for: unit),
            "sdate":startDate,
            "edate":endDate,
            "unit":unit.unitString,
            "type":quantityType.description,
            "description":quantity.description,
            //            "device":device?.description ?? ""
        ]
        as [String : Any]
        
        return dic
    }
}
extension Array {
    func toString(){
        func json() -> String {
            guard let data = try? JSONSerialization.data(withJSONObject: self, options: []) else {
                return ""
            }
            return String(data: data, encoding: .utf8) ?? ""
        }
    }
}
extension HKWorkout {
    func fetchLocations(completion: @escaping ([Dictionary<String,Any>]) -> Void)  {
        let workout = self
        
        // Step 1: Query for samples of type HKWorkoutRoute associated to your workout
        let workoutRouteType = HKSeriesType.workoutRoute()
        let workoutPredicate = HKQuery.predicateForObjects(from: workout)
        var totalWorkouts = [Dictionary<String,Any>]()
        
        let workoutRoutesQuery = HKSampleQuery(sampleType: workoutRouteType, predicate: workoutPredicate, limit: HKObjectQueryNoLimit, sortDescriptors: nil)
        { (query, sample, error) in
            guard let routeSamples = sample as? [HKWorkoutRoute] else {
                completion(totalWorkouts)
                return }
            if (routeSamples.count == 0) {
                completion(totalWorkouts)
            }
            
            for routeSample in routeSamples {
                
                let locationQuery = HKWorkoutRouteQuery(route: routeSample) {
                    (routeQuery, location, done, error) in
                    for item in location! {
//                        if item.speed != -1 {
                            totalWorkouts.append(item.toDictionary())
//                        }
                        
                    }
                    
                    if done {
                        completion(totalWorkouts)
                    }
                }
                HKHealthStore().execute(locationQuery)
            }
        }
        
        HKHealthStore().execute(workoutRoutesQuery)
    }
    func fetchCLLocations(completion: @escaping ([CLLocation]) -> Void)  {
        let workout = self
        
        // Step 1: Query for samples of type HKWorkoutRoute associated to your workout
        let workoutRouteType = HKSeriesType.workoutRoute()
        let workoutPredicate = HKQuery.predicateForObjects(from: workout)
        var totalWorkouts = [CLLocation]()
        
        let workoutRoutesQuery = HKSampleQuery(sampleType: workoutRouteType, predicate: workoutPredicate, limit: HKObjectQueryNoLimit, sortDescriptors: nil)
        { (query, sample, error) in
            guard let routeSamples = sample as? [HKWorkoutRoute] else {
                completion(totalWorkouts)
                return }
            if (routeSamples.count == 0) {
                completion(totalWorkouts)
            }
            
            for routeSample in routeSamples {
                
                let locationQuery = HKWorkoutRouteQuery(route: routeSample) {
                    (routeQuery, location, done, error) in
                    for item in location! {
//                        if item.speed != -1 {
                            totalWorkouts.append(item)
//                        }
                        
                    }
                    
                    if done {
                        completion(totalWorkouts)
                    }
                }
                HKHealthStore().execute(locationQuery)
            }
        }
        
        HKHealthStore().execute(workoutRoutesQuery)
    }
}
extension CLLocation {
    func toDictionary() -> Dictionary<String,Any>{
        let dic = [
            "altitude":self.altitude,
            "latitude":self.coordinate.latitude,
            "longitude":self.coordinate.longitude,
            "speed":self.speed,
            "time":self.timestamp.toString(format: "yyyy-MM-dd HH:mm:ss Z") ?? ""
        ] as [String : Any]
        return dic
    }
}
extension UIButton {
    
    func startAnimatingPressActions() {
        addTarget(self, action: #selector(animateDown), for: [.touchDown, .touchDragEnter])
        addTarget(self, action: #selector(animateUp), for: [.touchDragExit, .touchCancel, .touchUpInside, .touchUpOutside])
    }
    
    @objc private func animateDown(sender: UIButton) {
        animate(sender, transform: CGAffineTransform.identity.scaledBy(x: 0.95, y: 0.95))
    }
    
    @objc private func animateUp(sender: UIButton) {
        animate(sender, transform: .identity)
    }
    
    private func animate(_ button: UIButton, transform: CGAffineTransform) {
        UIView.animate(withDuration: 0.4,
                       delay: 0,
                       usingSpringWithDamping: 0.5,
                       initialSpringVelocity: 3,
                       options: [.curveEaseInOut],
                       animations: {
                        button.transform = transform
            }, completion: nil)
    }
    
}
extension UIButton {
    override public func awakeFromNib() {
        super.awakeFromNib()
        self.tintColorDidChange()
    }
}
