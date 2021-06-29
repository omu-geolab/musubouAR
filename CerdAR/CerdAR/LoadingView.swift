//
//  LoadingView.swift
//  CerdAR
//
//  Created by 山根隆弘 on R 3/01/19.
//  Copyright © Reiwa 3 CERD (Osaka City University),  APPLIED TECHNOLOGY CO.,LTD., BRILLIANTSERVICE CO.,LTD.,. All rights reserved.
//

import SwiftUI

struct LoadingView: View {
    @State var rotation = 0.0
    var body: some View {
        
        VStack {
            
            Spacer()
            Text("Hi there!")
            Image("logo-launch")
                .rotationEffect(.degrees(rotation))
                .animation(Animation.easeInOut(duration: 3).delay(10))
                .onTapGesture {
                                self.rotation += 360
                            }
            Spacer()
            Text("Hi there!")

            Text("Hi there!")

        }
        .background(Color.white)
    }
}

struct LabelView: View {
    var body: some View {
        Text("Hi there!")
            .padding(10)
            .font(.title)
            .foregroundColor(.white)
            .background(RoundedRectangle(cornerRadius: 8).fill(Color.green).shadow(color: .gray, radius: 3))
    }
}
struct LoadingView_Previews: PreviewProvider {
    static var previews: some View {
        LoadingView()
    }
}
