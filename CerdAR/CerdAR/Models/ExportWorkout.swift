//
//  ExportWorkout.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/03/03.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import UIKit
import HealthKit
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

        var dic:Dictionary<String,Any>=[:]
        dic["totalDistance"] = workout.totalDistance?.doubleValue(for: .meterUnit(with: .kilo))
        dic["totalEnergyBurned"] = workout.totalEnergyBurned?.doubleValue(for: .kilocalorie())
        dic["totalFlightsClimbed"] = workout.totalFlightsClimbed?.doubleValue(for: HKUnit(from: "count/min"))
        dic["totalSwimmingStrokeCount"] = workout.totalSwimmingStrokeCount?.doubleValue(for: HKUnit(from: "count/min"))
        dic["duration"] = workout.duration
        dic["workoutActivityType"] = workout.workoutActivityType.rawValue
        dic["sdate"] = workout.startDate.toString(format: "yyyy-MM-dd HH:mm:ss Z")
        dic["edate"] = workout.endDate.toString(format: "yyyy-MM-dd HH:mm:ss Z")
        dic["device"] = workout.device?.description
        dic["uuid"] = workout.uuid.uuidString
        let uuid = workout.uuid.uuidString
        let dateStart = workout.startDate.toString(format: "yyyy-MM-dd HH-mm-ss Z")
        let dir = FileManager.default.urls(
            for: .documentDirectory,
            in: .userDomainMask
        ).first!
        let fileUrl = dir.appendingPathComponent(String.init(format: "%@.json",dateStart ?? uuid))
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
        workout.fetchLocations(completion: {
            data in
            dic["locations"] = data
            self.dispatchGroup.leave()
        })
        dispatchGroup.notify(queue: .main, execute: {
            let text = dic.toString()
//            if !FileManager.default.fileExists(atPath: fileUrl.path) {
                // ファイルに書き込み
                do {
                    try text.write(to: fileUrl, atomically: false, encoding: .utf8)
                } catch {
                    print("Error: \(error)")
                }
//            }
            
        })
        
        
        
        //         // create a target for the export - all goes in a single json file
        //         let target          = JsonSingleDocAsFileExportTarget(outputFileName: outputFileName, overwriteIfExist:true)
        //
        //         // configure the export
        //        var configuration   = HealthDataFullExportConfiguration(profileName: "CerdAR", exportType: HealthDataToExportType.ADDED_BY_THIS_APP, startDate: startDate, endDate: endDate, shouldAuthorize: false) // if you have authorized using HealthKit in your app before, shouldAuthorize: must be false, otherwise true
        //         configuration.exportUuids = false //false is default - if true, all uuids will be exported too
        //         // create your instance of HKHeakthStore
        //         let healthStore     = HKHealthStore()
        //         // and pass it to the HealthKitDataExporter
        //         let exporter  = HealthKitDataExporter(healthStore: healthStore)
        
        // now start the import.
        //        exporter.export(
        //
        //            exportTargets: [target],
        //
        //            exportConfiguration: configuration,
        //
        //            onProgress: {
        //                (message: String, progressInPercent: NSNumber?) -> Void in
        //                // output progress messages
        //                print(message + " progress : " + String(Float(progressInPercent ?? -1)))
        //            },
        //
        //            onCompletion: {
        //                (error: Error?)-> Void in
        //                print(error.debugDescription)
        //                // output the result - if error is nil. everything went well
        ////                dispatch_async(dispatch_get_main_queue(), {
        ////                    if let exportError = error {
        ////                        print(exportError)
        ////                    }
        ////                })
        //            }
        //        )
    }
    func getHKSampleDatas(type: HKQuantityType,unit:HKUnit, completion: @escaping (HKQuantityType, Array<Dictionary<String,Any>>) -> Void)  {
        guard let workout = workout else {
            return
        }
        let workoutPredicate = HKQuery.predicateForObjects(from: workout)
        
        let query = HKSampleQuery(sampleType: type, predicate: workoutPredicate, limit: Int(HKObjectQueryNoLimit), sortDescriptors: nil) { (query, results, error) -> Void in
            if(error != nil){
                completion(type, [])
            }else{
                if let results = results {
                    var arrayData:Array<Dictionary<String,Any>> = []
                    for item in results {
                        guard let currData:HKQuantitySample = item as? HKQuantitySample else { continue }
                        arrayData.append(currData.toString(unit: unit))
                    }
                    completion(type, arrayData)
                }else{
                    completion(type, [])
                }
            }
            
        }
        
        HKHealthStore().execute(query)
    }
    
}
