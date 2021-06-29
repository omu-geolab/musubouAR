//
//  WorkoutDetaill.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/03/05.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import UIKit
import MapKit
import HealthKit
class WorkoutDetaill: UIViewController, MKMapViewDelegate {

    @IBOutlet weak var mapView: MKMapView!
    var locations:[CLLocation]?
    var workout:HKWorkout?
    override func viewDidLoad() {
        super.viewDidLoad()
        workout?.fetchCLLocations(completion: {data in
            if data.count > 1 {
                self.locations = data
                let runRoute = GradientPolyline(locations: data)
                DispatchQueue.main.async {
                    self.mapView.delegate = self
                    self.mapView.addOverlay(runRoute)
                    self.zoom(for: runRoute)
                }
            }
        })
        
        // Do any additional setup after loading the view.
    }
    
    let insets = UIEdgeInsets(top: 5, left: 5, bottom: 5, right: 5)
    func zoom(for overlay: MKOverlay) {
        mapView.setVisibleMapRect(overlay.boundingMapRect, edgePadding: insets, animated: false)
        mapView.showsCompass = false

        let compassBtn = MKCompassButton(mapView:mapView)
        compassBtn.frame.origin = CGPoint(x: 20, y: 20)
        compassBtn.compassVisibility = .adaptive
        mapView.addSubview(compassBtn)
//        mapView.isPitchEnabled = false
//        mapView.isZoomEnabled = false
//        mapView.isScrollEnabled = false
//        mapView.isRotateEnabled = false
    }
    func mapView(_ mapView: MKMapView, rendererFor overlay: MKOverlay) -> MKOverlayRenderer {
        if overlay is GradientPolyline {
            let polyLineRender = GradidentPolylineRenderer(overlay: overlay)
            polyLineRender.lineWidth = 7
            return polyLineRender
        }
        return MKOverlayRenderer()
    }
    
    @IBAction func tapDeleteButton(_ sender: Any) {
        self.dismiss(animated: false, completion: nil)
    }
    
    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */

}
