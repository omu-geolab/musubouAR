//
//  WorkoutManager.swift
//  CerdARWatch Extension
//
//  Created by 山根隆弘 on R 3/02/24.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import Foundation
import WatchKit
import Foundation
import HealthKit
import Combine

protocol WorkoutManagerDelegate {
    func updateWorkout()
}
class WorkoutManager: NSObject, HKWorkoutSessionDelegate, HKLiveWorkoutBuilderDelegate {
    var delegate: WorkoutManagerDelegate?
    static var shared = WorkoutManager()
    let healthStore = HKHealthStore()
    var session: HKWorkoutSession!
    var builder: HKLiveWorkoutBuilder!
    var routeBuilder:HKWorkoutRouteBuilder!
    var locationManager: CLLocationManager = CLLocationManager()
    
    var activeDataQueries = [HKQuery]()
    
    var workoutStartDate : Date?
    
    var workoutEndDate : Date?
    
    var totalEnergyBurned = HKQuantity(unit: HKUnit.kilocalorie(), doubleValue: 0)
    
    var totalDistance = HKQuantity(unit: HKUnit.meter(), doubleValue: 0)
    
    var workoutEvents = [HKWorkoutEvent]()
    
    var metadata = [String: AnyObject]()
    
    var timer : ResumableTimer?
    
    var isPaused = false
    var heartrate: Double = 0
    var activeCalories: Double = 0
    var distance: Double = 0
    var elapsedSeconds: Int = 0
    var running: Bool = false
    /// - Tag: TimerSetup
    // The cancellable holds the timer publisher.
    var start: Date = Date()
    var accumulatedTime: Int = 0
    
    override init() {
        super.init()
       
    }

    func workoutSession(_ workoutSession: HKWorkoutSession, didChangeTo toState: HKWorkoutSessionState, from fromState: HKWorkoutSessionState, date: Date) {
        if toState == .ended {
            print("The workout has now ended.")
            locationManager.stopUpdatingLocation()
            exit(0)
        }
        if toState == .running {
            print("The workout has now running.")
            locationManager.delegate = self
            locationManager.desiredAccuracy = kCLLocationAccuracyBest
            locationManager.distanceFilter = 5
            locationManager.allowsBackgroundLocationUpdates = true
            locationManager.requestWhenInUseAuthorization()
            
            if CLLocationManager.locationServicesEnabled() {
                locationManager.startUpdatingLocation()
            }
        }
    }
    
    func workoutSession(_ workoutSession: HKWorkoutSession, didFailWithError error: Error) {
 
    }
    
    func workoutBuilder(_ workoutBuilder: HKLiveWorkoutBuilder, didCollectDataOf collectedTypes: Set<HKSampleType>) {
        for type in collectedTypes {
            guard let quantityType = type as? HKQuantityType else {
                return // Nothing to do.
            }
            
            /// - Tag: GetStatistics
            let statistics = workoutBuilder.statistics(for: quantityType)
            
            // Update the published values.
            updateForStatistics(statistics)
        }
    }
    
    func workoutBuilderDidCollectEvent(_ workoutBuilder: HKLiveWorkoutBuilder) {
        
    }
    
    
    func startTimer() {
        timer = ResumableTimer(interval: 1.0) { [weak self] in
            
        }
        timer?.start()
    }
    
    func stopTimer() {
        timer?.pause()
    }


    func workoutConfiguration() -> HKWorkoutConfiguration {
        
        let configuration = HKWorkoutConfiguration()
        configuration.activityType = .walking
        configuration.locationType = .outdoor
        
        return configuration
    }
    func startWorkout() {
        // Start the timer.
        startTimer()
        self.running = true
        
        // Create the session and obtain the workout builder.
        do {
            session = try HKWorkoutSession(healthStore: healthStore, configuration: self.workoutConfiguration())
            builder = session.associatedWorkoutBuilder()
        } catch {
            // Handle any exceptions.
            return
        }
        
        // Setup session and builder.
        session.delegate = self
        builder.delegate = self

        routeBuilder = HKWorkoutRouteBuilder(healthStore: healthStore, device: .local())
        
       

        
        // Set the workout builder's data source.
        self.builder.dataSource = HKLiveWorkoutDataSource(healthStore: self.healthStore,
                                                          workoutConfiguration: self.workoutConfiguration())

        for quantity in healthKitQuantityTypes {
            self.builder.dataSource?.enableCollection(for: quantity, predicate: nil)
        }
        if #available(watchOSApplicationExtension 7.0, *) {
            self.builder.dataSource?.enableCollection(for: HKQuantityType.quantityType(forIdentifier: .walkingSpeed)!, predicate: nil)
            self.builder.dataSource?.enableCollection(for: HKQuantityType.quantityType(forIdentifier: .walkingAsymmetryPercentage)!, predicate: nil)
            self.builder.dataSource?.enableCollection(for: HKQuantityType.quantityType(forIdentifier: .walkingDoubleSupportPercentage)!, predicate: nil)
            self.builder.dataSource?.enableCollection(for: HKQuantityType.quantityType(forIdentifier: .walkingStepLength)!, predicate: nil)
        
        } else {
            // Fallback on earlier versions
        }

        
        // Start the workout session and begin data collection.
        session.startActivity(with: Date())
        builder.beginCollection(withStart: Date()) { (success, error) in
            guard success == true else {
                   return
               }
        

        }
        locationManager.delegate = self
        locationManager.desiredAccuracy = kCLLocationAccuracyBest
        locationManager.allowsBackgroundLocationUpdates = true
        locationManager.distanceFilter = 10
        locationManager.requestWhenInUseAuthorization()
        
        if CLLocationManager.locationServicesEnabled() {
            locationManager.startUpdatingLocation()
        }
    }
    func togglePause() {
        // If you have a timer, then the workout is in progress, so pause it.
        if running == true {
            self.pauseWorkout()
        } else {// if session.state == .paused { // Otherwise, resume the workout.
            resumeWorkout()
        }
    }
    
    func pauseWorkout() {
        // Pause the workout.
        session.pause()
        // Stop the timer.
        stopTimer()
        // Save the elapsed time.
        accumulatedTime = elapsedSeconds
        running = false
    }
    
    func resumeWorkout() {
        // Resume the workout.
        session.resume()
        // Start the timer.
        timer?.resume()
        running = true
    }
    
    func endWorkout() {
        // End the workout session.
        
        guard session.state == .running else {
            return
        }
        running = false
        builder.endCollection(withEnd: Date()) { (success, error) in
            self.builder.finishWorkout {(workout, error) in
                // Optionally display a workout summary to the user.
                guard let workout = workout, error == nil else {
                    self.session.end()
                    return
                }
                self.routeBuilder.finishRoute(with: workout
                                              , metadata: nil) { (newRoute, error) in
                    self.session.end()
                    guard newRoute != nil else {
                        // Handle any errors here.
                        return
                    }
                    
                    // Optional: Do something with the route here.
                }
                self.resetWorkout()
            }
        }
      
        timer?.invalidate()
    }
    func resetWorkout() {
        // Reset the published values.
        DispatchQueue.main.async {
            self.elapsedSeconds = 0
            self.activeCalories = 0
            self.heartrate = 0
            self.distance = 0
        }
    }
    func updateForStatistics(_ statistics: HKStatistics?) {
        guard let statistics = statistics else { return }
        
        DispatchQueue.main.async {
            switch statistics.quantityType {
            case HKQuantityType.quantityType(forIdentifier: .heartRate):
                /// - Tag: SetLabel
                let heartRateUnit = HKUnit.count().unitDivided(by: HKUnit.minute())
                let value = statistics.mostRecentQuantity()?.doubleValue(for: heartRateUnit)
                let roundedValue = Double( round( 1 * value! ) / 1 )
                self.heartrate = roundedValue
            case HKQuantityType.quantityType(forIdentifier: .activeEnergyBurned):
                let energyUnit = HKUnit.kilocalorie()
                let value = statistics.sumQuantity()?.doubleValue(for: energyUnit)
                self.activeCalories = Double( round( 1 * value! ) / 1 )
                return
            case HKQuantityType.quantityType(forIdentifier: .distanceWalkingRunning):
                let meterUnit = HKUnit.meter()
                let value = statistics.sumQuantity()?.doubleValue(for: meterUnit)
                let roundedValue = Double( round( 1 * value! ) / 1 )
                self.distance = roundedValue
                return
            default:
                return
            }
            self.delegate?.updateWorkout()
        }
    }
}
//extension  WorkoutManager: GPSServiceDelegate  {
//    func updateLocation(location: [CLLocation]) {
//        ParentConnector.shared.send(state: "updateLocation")
//        if running {
//            routeBuilder.insertRouteData(location) { (success, error) in
//                if !success {
//                    ParentConnector.shared.send(state: "error")
//                    // Handle any errors here.
//                }
//            }
//        }
//    }
//}
extension  WorkoutManager: CLLocationManagerDelegate  {
    func locationManager(_ manager: CLLocationManager, didUpdateLocations locations: [CLLocation]) {
      
        if running {
            let filteredLocations = locations.filter { (location: CLLocation) -> Bool in
                location.horizontalAccuracy <= 30.0
            }
            guard !filteredLocations.isEmpty else { return }
            routeBuilder.insertRouteData(filteredLocations) { (success, error) in
                if !success {
                    // Handle any errors here.
                }
            }
        }
    }
    func locationManager(_ manager: CLLocationManager, didFailWithError error: Error) {
       print(manager.activityType.rawValue)
    }
}
let healthKitQuantityTypes: Set<HKQuantityType> = Set(arrayLiteral:
    // Body Measurements
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.bodyMassIndex)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.bodyFatPercentage)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.height)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.bodyMass)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.leanBodyMass)!,
    // Fitness
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.stepCount)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.distanceWalkingRunning)!,
//    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.walkingSpeed)!,
//    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.walkingStepLength)!,
//
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.distanceCycling)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.basalEnergyBurned)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.activeEnergyBurned)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.flightsClimbed)!,
    // Vitals
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.heartRate)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.bodyTemperature)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.basalBodyTemperature)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.bloodPressureSystolic)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.bloodPressureDiastolic)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.respiratoryRate)!,
    // Results
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.oxygenSaturation)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.peripheralPerfusionIndex)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.bloodGlucose)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.numberOfTimesFallen)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.electrodermalActivity)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.inhalerUsage)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.bloodAlcoholContent)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.forcedVitalCapacity)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.forcedExpiratoryVolume1)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.peakExpiratoryFlowRate)!,
    // Nutrition
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryFatTotal)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryFatPolyunsaturated)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryFatMonounsaturated)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryFatSaturated)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryCholesterol)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietarySodium)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryCarbohydrates)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryFiber)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietarySugar)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryEnergyConsumed)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryProtein)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryVitaminA)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryVitaminB6)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryVitaminB12)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryVitaminC)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryVitaminD)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryVitaminE)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryVitaminK)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryCalcium)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryIron)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryThiamin)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryRiboflavin)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryNiacin)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryFolate)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryBiotin)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryPantothenicAcid)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryPhosphorus)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryIodine)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryMagnesium)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryZinc)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietarySelenium)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryCopper)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryManganese)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryChromium)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryMolybdenum)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryChloride)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryPotassium)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryCaffeine)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.dietaryWater)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.uvExposure)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.heartRateVariabilitySDNN)!,
    HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.restingHeartRate)!
)
