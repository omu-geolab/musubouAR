//
//  WorkoutViewController.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/03/01.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import UIKit
import HealthKit
import Foundation
#if canImport(FoundationNetworking)
import FoundationNetworking
#endif

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
        let cell = tableView.dequeueReusableCell(withIdentifier: "WorkoutCell") as! WorkoutCell
        guard let workouts = workouts else {
            fatalError("""
                   CellForRowAtIndexPath should \
                   not get called if there are no workouts
                   """)
        }
        cell.backgroundColor = UIColor.clear
        let workout = workouts[indexPath.row]
        cell.workout = workout
        cell.delegate = self
        cell.setVisibleSendButton(isVisible: isLogin)
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
extension WorkoutViewController:WorkoutCellDelegate {
   
    func send(workout: HKWorkout) {
        let semaphore = DispatchSemaphore (value: 0)
        confirm(title: "送信", message: "MUSUBOUへデータを登録しますか？", okAction: {_ in
            let date = workout.startDate.toString(format: "yyyy-MM-dd HH-mm-ss Z") ?? ""
            let path = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask)[0].appendingPathComponent(date).appendingPathExtension("gpx").path
            do{
               

                let parameters = [
                  [
                    "key": "FILES",
                    "src": path,
                    "type": "file"
                  ],
                  [
                    "key": "apikey",
                    "value": "qsGYsX58fjPTXtfR4hP8BwXbxnn",
                    "type": "text"
                  ],
                  [
                    "key": "mail",
                    "value": email,
                    "type": "text"
                  ]] as [[String : Any]]

                let boundary = "Boundary-\(UUID().uuidString)"
                var body = ""
                var error: Error? = nil
                for param in parameters {
                  if param["disabled"] == nil {
                    let paramName = param["key"]!
                    body += "--\(boundary)\r\n"
                    body += "Content-Disposition:form-data; name=\"\(paramName)\""
                    if param["contentType"] != nil {
                      body += "\r\nContent-Type: \(param["contentType"] as! String)"
                    }
                    let paramType = param["type"] as! String
                    if paramType == "text" {
                      let paramValue = param["value"] as! String
                      body += "\r\n\r\n\(paramValue)\r\n"
                    } else {
                      let paramSrc = param["src"] as! String
                      let fileData = try NSData(contentsOfFile:paramSrc, options:[]) as Data
                      let fileContent = String(data: fileData, encoding: .utf8)!
                      body += "; filename=\"\(paramSrc)\"\r\n"
                        + "Content-Type: \"content-type header\"\r\n\r\n\(fileContent)\r\n"
                    }
                  }
                }
                body += "--\(boundary)--\r\n";
                let postData = body.data(using: .utf8)

                var request = URLRequest(url: URL(string: "https://apiq5vsy82wgdav.musubou.net/jsongetapi.php")!,timeoutInterval: Double.infinity)
                request.addValue("multipart/form-data; boundary=\(boundary)", forHTTPHeaderField: "Content-Type")

                request.httpMethod = "POST"
                request.httpBody = postData

                let task = URLSession.shared.dataTask(with: request) { data, response, error in
                  guard let data = data else {
                    print(String(describing: error))

                    semaphore.signal()
                      DispatchQueue.main.sync {
                          self.alert(title: "エラー", message: "データ登録が失敗しました。")
                      }
                    return
                  }
                  print(String(data: data, encoding: .utf8)!)

                  semaphore.signal()
                    DispatchQueue.main.sync {
                        self.alert(title: "成功", message: "MUSUBOUへデータを登録しました。")
                    }
                }

                task.resume()
                semaphore.wait()
            }catch{
                DispatchQueue.main.sync {
                    self.alert(title: "エラー", message: "データ登録が失敗しました。")
                }
                return
            }
        }, cancelAction:  {_ in })
    }
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

