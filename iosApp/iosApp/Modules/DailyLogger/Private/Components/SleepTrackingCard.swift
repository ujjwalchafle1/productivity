//
//  SleepTrackingCard.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 13/10/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct SleepTrackingCard: View {
    let action: () -> Void
    var body: some View {
        VStack(alignment: .leading, spacing: .zero) {
            Circle()
                .foregroundColor(.gray.opacity(0.1))
                .overlay {
                    Image(systemName: "clock.arrow.circlepath")
                        .font(.title)
                }
                .frame(width: 70, height: 70)
                .padding()
            
            
            Text.Subtitle1("Sleep Tracking")
                .padding(.horizontal)
                .foregroundColor(.black.opacity(0.6))
            
            HStack {
                Image(systemName: "bed.double")
                Text.Body2("10:30", color: .gray)
                Spacer()
                Image(systemName: "sun.max.fill")
                Text.Body2("10:30", color: .gray)
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
                        .foregroundColor(.green)
                }
                ProgressView(value: 0.85)
                    .tint(.green)
            }
            .padding(.horizontal)
            .padding(.bottom)
            
            .navigationBarHidden(true)

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

//struct SleepTrackingCard_Previews: PreviewProvider {
//    static var previews: some View {
//        SleepTrackingCard()
//    }
//}
