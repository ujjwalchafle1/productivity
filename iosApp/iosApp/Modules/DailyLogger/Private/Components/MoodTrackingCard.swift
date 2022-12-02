//
//  MoodTrackingCard.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 13/10/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct MoodTrackingCard: View {
    let action: () -> Void
    var body: some View {
        VStack(alignment: .leading, spacing: .zero) {
            Circle()
                .foregroundColor(.gray.opacity(0.1))
                .overlay {
                    Image(systemName: "face.smiling")
                        .font(.title)
                }
                .frame(width: 70, height: 70)
                .padding()
            
            
            Text.Subtitle1("Mood Tracking")
                .padding(.horizontal)
                .foregroundColor(.black.opacity(0.6))
            
            HStack {
                Image(systemName: "list.bullet.rectangle")
                Text.Body2("Check Insights", color: .black.opacity(0.6))
                Spacer()
            }
            .foregroundColor(.gray)
            .padding(.top, 10)
            .padding(.horizontal)
            
            Divider()
                .padding()
            
            VStack {
                
                HStack {
                    Text.Body2("Quality")
                    
                    Spacer()
                    Text.Body2("Good", color: .green)
                }
                ProgressView(value: 0.85)
                    .tint(.green)
            }
            .padding(.horizontal)
            .padding(.bottom)
            
        }
        .frame(maxWidth: .infinity)
        .frame(width: 180, height: 230)
        .background(Color.white)
        .cornerRadius(3)
        .shadow(radius: 1)
        .onTapGesture {
            action()
        }
    }
}

//struct MoodTrackingCard_Previews: PreviewProvider {
//    static var previews: some View {
//        MoodTrackingCard()
//    }
//}
