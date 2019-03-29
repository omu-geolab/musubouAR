//
//  MapboxARAnnotationManager.swift
//  CerdAR
//
//  Copyright (c) 2018 Apptec CO.,LTD., CERD (Osaka City University)
//

import ARKit
import CoreLocation
import GLKit

/// ARkitのアノテーションを管理する
public class MapboxARAnnotationManager {
    
    public var anchors = [ARAnchor]()
    private var anchorFace:ARAnchor?
    public var session: ARSession
    
    init(session: ARSession) {
        self.session = session
    }
    
    /// ARマープを作成する
    func addMapSurface(){
        // Add the anchor to the session
        anchorFace = ARAnchor(name: "map_surface",transform: matrix_identity_float4x4)
        session.add(anchor: anchorFace!)
        //anchors.append(anchor)
    }
    
    func addARAnnotation(startLocation: CLLocation, endLocation: CLLocation, tagData: TagData?) {
        let origin = matrix_identity_float4x4
        // 始点と終点の間の距離と方位を決定する
        var distance = Float(endLocation.distance(from: startLocation))
        if(tagData?.inforType == kWarn){
            distance = distance - Float((tagData?.range)!)
            if(distance < 0){
                distance = 0
            }
        }
        if(distance < Float(kCamDis)){//アノテーションの距離を判断する
            let bearingDegrees = startLocation.bearingTo(endLocation: endLocation)
            let bearing = GLKMathDegreesToRadians(bearingDegrees)
            
            //始点を中心にして、終点を移動して、回転する
            // the bearing of the end location and "push" it out the required distance
            let position = vector_float4(0.0, 0.0, -distance, 0.0)
            let translationMatrix = getTranslationMatrix(position)
            let rotationMatrix = getRotationAroundY(bearing)
            let transformMatrix = simd_mul(rotationMatrix, translationMatrix)
            let transform = simd_mul(origin, transformMatrix)
            
            // 変換した位置にMapbox ARアンカーアンカーを作成します
            let anchor_name = ((tagData?.inforType)!) + String(format:"_%d",(tagData?.pinNum)!)
            let anchor = MapboxARAnchor(name: anchor_name, transform: transform)
            
            tagData?.distance = Int(distance)
            
            anchor.tagData = tagData
            // Add the anchor to the session
            session.add(anchor: anchor)
            
            anchors.append(anchor)
        }
    }
    
    
    /// ARアノテーションを解除する
    func removeAllARAnchors() {
        for anchor in anchors {
            session.remove(anchor: anchor)
        }
        anchors.removeAll()
    }
    func removeFaceARAnchor() {
        if(anchorFace != nil){
            session.remove(anchor: anchorFace!)
        }
    }
    
}


extension MapboxARAnnotationManager {
    
    /// Y枠を回転する
    ///
    /// - Parameter radians: 角度
    /// - Returns: matrix 4x4
    private func getRotationAroundY(_ radians : Float) -> matrix_float4x4 {
        var m : matrix_float4x4 = matrix_identity_float4x4;
        
        m.columns.0.x = cos(radians);
        m.columns.0.z = -sin(radians);
        
        m.columns.2.x = sin(radians);
        m.columns.2.z = cos(radians);
        
        return m.inverse;
    }
    
    /// 位置を移動する
    ///
    /// - Parameter translation: matrix 4x4
    /// - Returns: matrix 4x4
    private func getTranslationMatrix(_ translation : vector_float4) -> matrix_float4x4 {
        var m : matrix_float4x4 = matrix_identity_float4x4
        m.columns.3 = translation
        return m
    }
}

private extension CLLocation {
    
    
    /// 2点間の方位を計算する     
    ///
    /// - Parameter endLocation: ２番目点
    /// - Returns: 角度
    func bearingTo(endLocation: CLLocation) -> Float {
        
        var bearing: Float = 0.0
        
        let latitudeStart = GLKMathDegreesToRadians(Float(coordinate.latitude))
        let longitudeStart = GLKMathDegreesToRadians(Float(coordinate.longitude))
        let latitudeEnd = GLKMathDegreesToRadians(Float(endLocation.coordinate.latitude))
        let longitudeEnd = GLKMathDegreesToRadians(Float(endLocation.coordinate.longitude))
        let longitudinalDistance = longitudeEnd - longitudeStart
        let y = sin(longitudinalDistance) * cos(latitudeEnd)
        let x = cos(latitudeStart) * sin(latitudeEnd) - sin(latitudeStart) * cos(latitudeEnd) * cos(longitudinalDistance)
        let radiansBearing = atan2(y, x)
        
        bearing = GLKMathRadiansToDegrees(radiansBearing)
        
        return bearing
    }
    
}
