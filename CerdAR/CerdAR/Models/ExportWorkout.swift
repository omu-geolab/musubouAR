//
//  ExportWorkout.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/03/03.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import UIKit
import HealthKit
import SwiftUI
import Foundation
import CoreLocation
import XMLCoder
//import HealthKitSampleGenerator

class ExportWorkout:NSObject {
    var workout:HKWorkout?
    init(workoutdata:HKWorkout) {
        workout = workoutdata
    }
    let dispatchGroup = DispatchGroup()
    func exportData() {
        guard let workout = workout else {
            return
        }
        let formatterDate = ISO8601DateFormatter()
        var dic:Dictionary<String,Any>=[:]
        var workoutExtension = GPX.WorkoutExtension()
        workoutExtension.totalDistance = workout.totalDistance?.doubleValue(for: .meterUnit(with: .kilo))
        workoutExtension.totalEnergyBurned = workout.totalEnergyBurned?.doubleValue(for: .kilocalorie())
        workoutExtension.duration = workout.duration
        workoutExtension.workoutActivityType = Int(workout.workoutActivityType.rawValue)
        workoutExtension.sdate = formatterDate.string(from: workout.startDate)
        workoutExtension.edate =  formatterDate.string(from: workout.endDate)
        workoutExtension.device = workout.device?.description
        workoutExtension.uuid = workout.uuid.uuidString
        
        
        _ = workout.uuid.uuidString
        let dateStart = formatterDate.string(from: workout.startDate)
        let dir = FileManager.default.urls(
            for: .documentDirectory,
               in: .userDomainMask
        ).first!
        let fileUrl = dir.appendingPathComponent(String.init(format: "%@.gpx",dateStart ))
        if FileManager.default.fileExists(atPath: fileUrl.path){
           return
        }
        
        for ( type, unit) in ConstansWorkout.typeMap {
            dispatchGroup.enter()
            getHKSampleDatas(type: type,unit: unit, completion: {
                (type,data) in
                DispatchQueue.main.async{
                    dic[type.description] = data
                    self.dispatchGroup.leave()
                }
                
            })
        }
        dispatchGroup.enter()
        
        workout.fetchCLLocations(completion: {
            data in
            dic["locations"] = data
            self.dispatchGroup.leave()
        })
        
        
        dispatchGroup.notify(queue: .main, execute: {
            //            var dicMerge  = Dictionary<String,Any>()
            //            for (key,value) in dic {
            //                if key == "locations" {
            //                    continue
            //                }
            //                if value is Array<Dictionary<String,Any>>{
            //                    let lsData = value as! Array<Dictionary<String,Any>>
            //                    for (_,item) in lsData.enumerated() {
            //                        let itemDic = item
            //                        let sDate = itemDic["sdate"] as! String
            //                        let eDate = itemDic["edate"] as! String
            //                        let keyDate = sDate + "_" + eDate
            //                        if dicMerge[keyDate] != nil {
            //                            if dicMerge[keyDate] is Dictionary<String,Any> {
            //                                var qty = dicMerge[keyDate] as! Dictionary<String,Any>
            //                                qty[key] = itemDic["value"]
            //                                dicMerge[keyDate] = qty
            //                            }
            //                        }else {
            //                            var qty = Dictionary<String,Any>()
            //                            qty[key] = itemDic["value"]
            //                            qty["sdate"] = sDate
            //                            qty["edate"] = eDate
            //                            dicMerge[keyDate] = qty
            //
            //                        }
            //
            //                    }
            //                }
            //            }
            let heartRateType = HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.heartRate)!.description
            var heartRateArr = Array<HKQuantitySample>()
            var heartRateData = Dictionary<String,Double>()
            if dic[heartRateType] != nil {
                heartRateArr = dic[heartRateType] as! [HKQuantitySample]
                heartRateData = self.interpolateHeartRateData(heartArr: heartRateArr)
            }
            if dic["locations"] != nil {
                let locations = dic["locations"] as! [CLLocation]
                let meta = GPX.MetadataType.init(link: [], time: Date())
                var point:[GPX.WptType] = []
                
                for location in locations {
                    if let timeKey = location.timestamp.toString(format: "yyyyMMdd HHmmss"),let item = heartRateData[timeKey] {
                        point.append(location.toPointGPX(heartRate: item))
                    }else{
                        point.append(location.toPointGPX(heartRate: 0.0))
                    }
                }
                let seg = GPX.TrksegType(trkpt: point)
                let trk = GPX.TrkType( link: [],  trkseg: [seg])
                
                let gpx = GPX(metadata: meta, wpt: [], rte: [], trk: [trk],  extensions: workoutExtension, version: "", creator:"")
                let encoder = XMLEncoder()
                encoder.outputFormatting = [.prettyPrinted, .sortedKeys]
                encoder.dateEncodingStrategy = .iso8601
                do {
                    
                    let data = try encoder.encode(gpx,withRootKey: "gpx", rootAttributes: [
                        "xmlns":"http://www.topografix.com/GPX/1/1",
                        "xmlns:xsi":"http://www.w3.org/2001/XMLSchema-instance",
                        "xsi:schemaLocation":"http://www.topografix.com/GPX/1/1 http://www.topografix.com/GPX/1/1/gpx.xsd"
                    ],header: XMLHeader(version: 1.0, encoding: "UTF-8"))
                    let str: String? = String(data: data, encoding: .utf8)
                    try str?.write(to: fileUrl, atomically: false, encoding: .utf8)
                    print(str ?? "")
                } catch {
                    // エラーが発生した場合の処理
                }
            }
        })
    }
    func getHKSampleDatas(type: HKQuantityType,unit:HKUnit, completion: @escaping (HKQuantityType, Array<HKQuantitySample>) -> Void)  {
        guard let workout = workout else {
            return
        }
        let workoutPredicate = HKQuery.predicateForObjects(from: workout)
        
        let query = HKSampleQuery(sampleType: type, predicate: workoutPredicate, limit: Int(HKObjectQueryNoLimit), sortDescriptors: nil) { (query, results, error) -> Void in
            if(error != nil){
                completion(type, [])
            }else{
                if let results = results {
                    var arrayData:Array<HKQuantitySample> = []
                    for item in results {
                        guard let currData:HKQuantitySample = item as? HKQuantitySample else { continue }
                        arrayData.append(currData)
                    }
                    completion(type, arrayData)
                }else{
                    completion(type, [])
                }
            }
            
        }
        
        HKHealthStore().execute(query)
    }
    func interpolateHeartRateData(heartArr: [HKQuantitySample]) -> Dictionary<String,Double> {
        var heartRateData: Dictionary<String,Double> = Dictionary<String,Double>()
        
        for (index, item) in heartArr.enumerated() {
            
            let itemSample = item
            
            let currentValue = itemSample.quantity.doubleValue(for: HKUnit(from: "count/min"))
            
            if (index != 0) {
                
                let intervalTime = round(item.startDate.timeIntervalSince(heartArr[index-1].startDate))
                let previousItem = heartArr[index-1]
                let previousValue = previousItem.quantity.doubleValue(for: HKUnit(from: "count/min"))
                let manipulationHeartBeatValue = (currentValue - previousValue)/intervalTime
                var manipulationHeartBeatValueVariation = manipulationHeartBeatValue
                let calendar = Calendar.current
                var i = 1
                while (i < Int(intervalTime)) {
                    let newDate = calendar.date(byAdding: .second, value: i, to: previousItem.startDate)
                    heartRateData[newDate!.toString(format: "yyyyMMdd HHmmss")!] = previousValue + manipulationHeartBeatValueVariation
                    manipulationHeartBeatValueVariation += manipulationHeartBeatValue
                    i+=1
                }
                
            }
            
            heartRateData[item.startDate.toString(format: "yyyyMMdd HHmmss")!] = currentValue
        }
        
        return heartRateData
    }
    
}
