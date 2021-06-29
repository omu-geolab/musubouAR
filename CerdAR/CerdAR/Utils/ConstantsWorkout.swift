//
//  ConstantsWorkout.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/03/04.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import Foundation
import HealthKit
class ConstansWorkout {
    static let typeMap : [HKQuantityType:HKUnit] = [
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.bodyTemperature)! : HKUnit(from: "degC"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.stepCount)! : HKUnit(from: "count"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.distanceWalkingRunning)! : HKUnit(from: "m"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.basalEnergyBurned)! : HKUnit(from: "kcal"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.height)! : HKUnit(from: "m"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.heartRate)! : HKUnit(from: "count/min"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.bloodGlucose)! : HKUnit(from: "mg/dL"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.walkingHeartRateAverage)! : HKUnit(from: "count/min"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.bloodPressureSystolic)! : HKUnit(from: "mmHg"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.restingHeartRate)! : HKUnit(from: "count/min"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.bloodPressureDiastolic)! : HKUnit(from: "mmHg"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.oxygenSaturation)! : HKUnit(from: "%"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.numberOfTimesFallen)! : HKUnit(from: "count"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.heartRateVariabilitySDNN)! : HKUnit(from: "ms"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.activeEnergyBurned)! : HKUnit(from: "kcal"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.flightsClimbed)! : HKUnit(from: "count"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.bodyMass)! : HKUnit(from: "kg"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.bodyFatPercentage)! : HKUnit(from: "%"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.peripheralPerfusionIndex)! : HKUnit(from: "%"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.peakExpiratoryFlowRate)! : HKUnit(from: "L/min"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.respiratoryRate)! : HKUnit(from: "count/min"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.inhalerUsage)! : HKUnit(from: "count"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.forcedExpiratoryVolume1)! : HKUnit(from: "L"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.bodyMassIndex)! : HKUnit(from: "count"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.leanBodyMass)! : HKUnit(from: "kg"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.walkingSpeed)! : HKUnit(from: "m/s"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.walkingStepLength)! : HKUnit(from: "m"),
        HKObjectType.quantityType(forIdentifier: HKQuantityTypeIdentifier.basalBodyTemperature)! : HKUnit(from: "degC")]
}
