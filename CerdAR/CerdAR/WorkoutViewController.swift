//
//  WorkoutViewController.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/03/01.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import UIKit
import HealthKit

class WorkoutViewController: UIViewController {
    
    @IBOutlet weak var workoutListview: UITableView!
    private var workouts: [HKWorkout]?
    override func viewDidLoad() {
        super.viewDidLoad()
        workoutListview.dataSource = self
        workoutListview.delegate = self
        workoutListview.backgroundColor = UIColor.clear
        workoutListview.backgroundView?.backgroundColor = UIColor.clear
        //        workoutListview.sectionHeaderHeight = 200
        
        workoutListview.register(UINib(nibName: "WorkoutCell", bundle: nil), forCellReuseIdentifier: "WorkoutCell")
        reloadWorkouts()
//        ExportWorkout.exportData()
        // Do any additional setup after loading the view.
    }
    
    
    /*
     // MARK: - Navigation
     
     // In a storyboard-based application, you will often want to do a little preparation before navigation
     override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
     // Get the new view controller using segue.destination.
     // Pass the selected object to the new view controller.
     }
     */
    @IBAction func tapDeteleButton(_ sender: Any) {
        self.dismiss(animated: false, completion: nil)
    }
    func reloadWorkouts() {
        WorkoutService.shared.getWorkoutList { (workouts, error) in
            self.workouts = workouts
            
            for item in workouts ?? [] {
                let export = ExportWorkout(workoutdata: item)
                export.exportData()
            }
            
            self.workoutListview.reloadData()
        }
    }
}
extension WorkoutViewController:UITableViewDataSource {
    func tableView(_ tableView: UITableView,
                   numberOfRowsInSection section: Int) -> Int {
        return workouts?.count ?? 0
    }
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        guard let cell = tableView.dequeueReusableCell(withIdentifier: "WorkoutCell", for: indexPath) as? WorkoutCell else {
            fatalError("The dequeued cell is not an instance of TableViewCell.")
        }
        guard let workouts = workouts else {
            fatalError("""
                   CellForRowAtIndexPath should \
                   not get called if there are no workouts
                   """)
        }
        cell.backgroundColor = UIColor.clear
        let workout = workouts[indexPath.row]
        cell.workout = workout
        cell.render()
        return cell
    }
//    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
//        guard let workouts = workouts else {
//            fatalError("""
//                   CellForRowAtIndexPath should \
//                   not get called if there are no workouts
//                   """)
//        }
//        let workout = workouts[indexPath.row]
//        let view = UIStoryboard(name: "WorkoutDetail", bundle: .main)
//        if let vc = view.instantiateInitialViewController() as? WorkoutDetaill {
////            navigationController?.pushViewController(vc, animated: true)
//            vc.workout = workout
//            vc.modalPresentationStyle = .fullScreen
//            self.present(vc, animated: true, completion: nil)
//        }
//        
//    }
}
extension WorkoutViewController:UITableViewDelegate {
    func tableView(_ tableView: UITableView, heightForRowAt indexPath: IndexPath) -> CGFloat {
        return 220
    }
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        guard let workouts = workouts else {
            fatalError("""
                   CellForRowAtIndexPath should \
                   not get called if there are no workouts
                   """)
        }
        let workout = workouts[indexPath.row]
        let view = UIStoryboard(name: "WorkoutDetail", bundle: .main)
        if let vc = view.instantiateInitialViewController() as? WorkoutDetaill {
//            navigationController?.pushViewController(vc, animated: true)
            vc.workout = workout
            vc.modalPresentationStyle = .fullScreen
            self.present(vc, animated: true, completion: nil)
        }
    }
}

