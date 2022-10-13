//
//  RoutinesCard.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 13/10/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct RoutinesCard: View {
    var body: some View {
        VStack(alignment: .leading, spacing: .zero) {
            Circle()
                .foregroundColor(.gray.opacity(0.1))
                .overlay {
                    Image(systemName: "cloud.sun.fill")
                        .font(.title)
                }
                .frame(width: 70, height: 70)
                .padding()
            
            
            Text.Subtitle1("Morning Routine")
                .padding(.horizontal)
            
            HStack {
                Image(systemName: "list.bullet")
                Text.Body2("4/5", color: .gray)
            }
            .foregroundColor(.gray)
            .padding(.top, 10)
            .padding(.horizontal)
            
            Divider()
                .padding()
            
            VStack {
                
                HStack {
                    Text.Body2("Progress")
                    
                    Spacer()
                    Text.Body2("55%", color: .red)
                }
                ProgressView(value: 0.55)
                    .tint(.red)
            }
            .padding(.horizontal)
            .padding(.bottom)
            
        }
        .padding(.vertical)
        .frame(maxWidth: .infinity)
        .frame(width: 200, height: 230)
        .background(Color.white)
        .cornerRadius(3)
        .shadow(radius: 1)
    }
}
struct RoutinesCard_Previews: PreviewProvider {
    static var previews: some View {
        RoutinesCard()
    }
}
