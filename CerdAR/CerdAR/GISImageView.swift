//
//  GISImageView.swift
//  CerdAR
//
//  Copyright © 2017年 2016 BRILLIANTSERVICE CO.,LTD., CERD (Osaka City University). All rights reserved.
//

import UIKit
import CoreLocation
import MapKit

struct GISBBox {
    var minX : Double
    var minY : Double
    var maxX : Double
    var maxY : Double
}

class GISImageView: UIImageView {
    var orgImage: UIImage?
    var angle: Double?
    
    /// Synchronize load GIS Image
    ///
    /// - Parameters:
    ///   - bbox: bbox parameter
    ///   - size: image size
    func refreshImage (bbox : GISBBox, size : CGSize) {
        guard let wmsUrl = wmsUrl
            , var urlComponent = URLComponents(string: wmsUrl) else {
            return
        }

        urlComponent.queryItems = [
            URLQueryItem(name: "SERVICE", value: "WMS"),
            URLQueryItem(name: "REQUEST", value: "GetMap"),
            URLQueryItem(name: "FORMAT", value: "image/png"),
            URLQueryItem(name: "LAYERS", value: "sakai_landc,shin-hinoodai"),
            URLQueryItem(name: "STYLES", value: "default"),
            URLQueryItem(name: "TRANSPARENT", value: "TRUE"),
            URLQueryItem(name: "CRS", value: "CRS:84"),
            URLQueryItem(name: "VERSION", value: "1.3.0"),
            URLQueryItem(name: "BBOX", value: "\(bbox.minX),\(bbox.minY),\(bbox.maxX),\(bbox.maxY)"),
            URLQueryItem(name: "WIDTH", value: "\(size.width)"),
            URLQueryItem(name: "HEIGHT", value: "\(size.height)"),
        ]
        
        guard let url = urlComponent.url else {
            return
        }

        guard let data = try? Data(contentsOf: url as URL) else {
            print("GISImageView:Error It can not get image data.");
            return
        }

        self.orgImage = UIImage(data: data)
        selfRotate()
    }

    private func selfRotate() {
        let exactAngle = self.angle == nil ? 0 : self.angle!
        rotate(angle: exactAngle)
    }
    
    //
    func rotate(angle: Double) {
        self.angle = angle
        self.image = orgImage?.rotate(angle: CGFloat(angle))
    }
}

extension MKMapPoint {
    /// 現在地から指定角度、距離移動した際の緯度経度を返す
    ///
    /// - Parameters:
    ///   - currentPoint: 現在地
    ///   - mapPointsPerMeter: 緯度単位のメーター
    ///   - angle: 角度
    ///   - distance: 距離
    /// - Returns: 移動後緯度経度
    func getLocationFromCurrentWithAngle(mapPointsPerMeter : Double, angle: Double, distance: Double) -> CLLocationCoordinate2D {
        let x : CLLocationDistance =  distance * sin(angle * (Double.pi / 180));
        let y : CLLocationDistance = -distance * cos(angle * (Double.pi / 180));
        let xPoint : Double = mapPointsPerMeter * x;
        let yPoint : Double = mapPointsPerMeter * y;
        let point : MKMapPoint = MKMapPoint(x: self.x + xPoint, y: self.y + yPoint);
        return point.coordinate;
    }
}

extension UIImage {
    /// 画像をを回転させる
    ///
    /// - Parameter angle: 回転角度(deg)
    /// - Returns: 回転された画像
    func rotate(angle: CGFloat) -> UIImage? {
        UIGraphicsBeginImageContextWithOptions(CGSize(width: self.size.width, height: self.size.height), false, 0.0)

        guard let context: CGContext = UIGraphicsGetCurrentContext() else {
            return nil
        }
        context.translateBy(x: self.size.width/2, y: self.size.height/2)
        context.scaleBy(x: 1.0, y: -1.0)
        
        let radian: CGFloat = angle * CGFloat.pi / 180.0
        context.rotate(by: radian)
        guard let image = cgImage else {
            UIGraphicsEndImageContext()
            return nil
        }
        context.draw(image, in: CGRect(x: -self.size.width/2, y: -self.size.height/2, width: self.size.width, height: self.size.height))
        
        guard let rotatedImage: UIImage = UIGraphicsGetImageFromCurrentImageContext() else {
            UIGraphicsEndImageContext()
            return nil
        }

        UIGraphicsEndImageContext()
        return rotatedImage
    }
}

