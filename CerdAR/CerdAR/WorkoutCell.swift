//
//  WorkoutCell.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/03/01.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import UIKit
import MapKit
import HealthKit

class WorkoutCell: UITableViewCell {
    var workout:HKWorkout?
    @IBOutlet weak var mapView: MKMapView!
    @IBOutlet weak var timeLabel: UILabel!
    @IBOutlet weak var totalTimeLabel: UILabel!
    @IBOutlet weak var heartRateLabel: UILabel!
    @IBOutlet weak var distanceLabel: UILabel!
    @IBOutlet weak var kaloLabel: UILabel!
    @IBOutlet weak var paceLbabel: UILabel!
    @IBOutlet weak var stackView: UIStackView!
    @IBOutlet weak var containView: UIView!
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
        print("awakeFromNib")
//        containView.layer.shadowColor = UIColor.black.cgColor //影の色を決める
//        containView.layer.shadowOpacity = 1 //影の色の透明度
//        containView.layer.shadowRadius = 8 //影のぼかし
//        containView.layer.shadowOffset = CGSize(width: 4, height: 4)
//        containView.layer.masksToBounds = true
//        containView.layer.cornerRadius = 20
    }
    
    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)
        
        // Configure the view for the selected state
    }
    
    override func layoutSubviews() {
        super.layoutSubviews()
              let bottomSpace: CGFloat = 20.0 // Let's assume the space you want is 10
              self.contentView.frame = self.contentView.frame.inset(by: UIEdgeInsets(top: 5, left: 5, bottom: bottomSpace, right: 5))
    }
    
    @objc func tapped(_ sender: UITapGestureRecognizer){
        if sender.state == .ended {
            print("タップ")
        }
    }
    func render(){
        guard let workout = workout else {
            return
        }
        containView.layer.cornerRadius = 20
        containView.layer.masksToBounds = false
        self.layer.shadowColor = UIColor.black.cgColor //影の色を決める
        self.layer.shadowOpacity = 0.1//影の色の透明度
        self.layer.shadowRadius = 5 //影のぼかし
        self.layer.shadowOffset = CGSize(width: 0, height: 3)

//        let tapGesture:UITapGestureRecognizer = UITapGestureRecognizer(
//                       target: self,
//                       action: #selector(WorkoutCell.tapped(_:)))
//        self.addGestureRecognizer(tapGesture)
        DispatchQueue.main.async { [self] in
            self.mapView.removeOverlays(self.mapView.overlays)
            let span = MKCoordinateSpan(latitudeDelta: 20.0, longitudeDelta: 20.0)
            let tokyoStation = CLLocationCoordinate2DMake(35.681236, 139.767125)
            let region = MKCoordinateRegion(center: tokyoStation, span: span)
            mapView.region = region
            self.timeLabel.text = self.dateFormatter.string(from: workout.startDate)
            //4. Show the Calorie burn in the lower label
            if let caloriesBurned =
                workout.totalEnergyBurned?.doubleValue(for: .kilocalorie()) {
                let formattedCalories = String(format: "%.1fKCAL",
                                               caloriesBurned)
                
                self.kaloLabel.text = formattedCalories
            } else {
                self.kaloLabel.text = nil
            }
            if let distance =
                workout.totalDistance?.doubleValue(for:.meter()){
                let formattedDistance = String(format: "%.fM",
                                               distance)
                
                self.distanceLabel.text = formattedDistance
                let paceforKilo = Int(workout.duration*1000/distance)
                let paceString = String.init(format: "%d'%d\"/KM",paceforKilo/60,paceforKilo%60)
                self.paceLbabel.text = paceString
                
            } else {
                self.distanceLabel.text = nil
                self.paceLbabel.text = nil
            }
            
            let durationFormatter = DateComponentsFormatter()
            durationFormatter.unitsStyle = .brief
            self.totalTimeLabel.text = String.init(format: "合計時間：　%@",durationFormatter.string(from: workout.duration) ?? "")
            self.getHeartRateAverage()
            self.fetchLocations()
        }
        
      
    }
    
    func getHeartRateAverage(){
        
        guard let workout = workout else {
            return
        }
        let healthStore:HKHealthStore = HKHealthStore()
        
        let walkingHeartRateAverage = HKQuantityType.quantityType(forIdentifier: HKQuantityTypeIdentifier.heartRate)
        
        
        let sumOption = HKStatisticsOptions.discreteAverage
        
        
        let statisticsSumQuery = HKStatisticsQuery(quantityType: walkingHeartRateAverage!, quantitySamplePredicate: HKQuery.predicateForObjects(from: workout),options: sumOption)
        {  (query, result, error) in
            DispatchQueue.main.async {
                if  let quantity = result?.averageQuantity() {
                    
                    let heartRate = quantity.doubleValue(for: HKUnit.count().unitDivided(by:HKUnit.minute()))
                    self.heartRateLabel.text = String.init(format: "%.fBPM", heartRate)
                    
                }else{
                    self.heartRateLabel.text = ""
                }
            }
        }
        
        healthStore.execute(statisticsSumQuery)
        
        
    }
    func fetchLocations()  {
        guard let workout = workout else {
            return
        }
        // Step 1: Query for samples of type HKWorkoutRoute associated to your workout
        let workoutRouteType = HKSeriesType.workoutRoute()
        let workoutPredicate = HKQuery.predicateForObjects(from: workout)
        var totalWorkouts = [CLLocation]()
        
        let workoutRoutesQuery = HKSampleQuery(sampleType: workoutRouteType, predicate: workoutPredicate, limit: HKObjectQueryNoLimit, sortDescriptors: nil)
        { (query, sample, error) in
            guard let routeSamples = sample as? [HKWorkoutRoute] else {
                return }
            if (routeSamples.count == 0) {
                
            }
            // Step 2: Query for location data from the samples
            for routeSample in routeSamples {
                
                let locationQuery = HKWorkoutRouteQuery(route: routeSample) {
                    (routeQuery, location, done, error) in
                    for item in location! {
                        if(item.speed != -1){
                            totalWorkouts.append(item)
                        }
                    }
                    
                    if done {
                        // The query returned all the location data associated with the route.
                        // Do something with the complete data set.
                                                  dump(totalWorkouts.count)
                        if(totalWorkouts.count > 0){
                            let runRoute = GradientPolyline(locations: totalWorkouts)
                            DispatchQueue.main.async {
                                self.mapView.delegate = self
                                self.mapView.addOverlay(runRoute)
                                self.zoom(for: runRoute)
                            }
                        }
                    }
                }
                HKHealthStore().execute(locationQuery)
            }
        }
        
        HKHealthStore().execute(workoutRoutesQuery)
    }
    
    lazy var dateFormatter: DateFormatter = {
        let formatter = DateFormatter()
        formatter.timeStyle = .short
        formatter.dateStyle = .medium
        return formatter
    }()
    let insets = UIEdgeInsets(top: 5, left: 5, bottom: 5, right: 5)

    func zoom(for overlay: MKOverlay) {
        mapView.setVisibleMapRect(overlay.boundingMapRect, edgePadding: insets, animated: false)
        mapView.isPitchEnabled = false
        mapView.isZoomEnabled = false
        mapView.isScrollEnabled = false
        mapView.isRotateEnabled = false
    }
    
}
extension WorkoutCell: MKMapViewDelegate {
    func mapView(_ mapView: MKMapView, rendererFor overlay: MKOverlay) -> MKOverlayRenderer {
        if overlay is GradientPolyline {
            let polyLineRender = GradidentPolylineRenderer(overlay: overlay)
            polyLineRender.lineWidth = 10
            polyLineRender.lineDashPhase = 10
            polyLineRender.lineDashPattern = [0.01, 5]
            return polyLineRender
        }
        return MKOverlayRenderer()
        
    }
   
}
