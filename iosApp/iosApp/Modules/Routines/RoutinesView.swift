//
//  RoutinesView.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 02/09/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct RoutinesView: View {
    var body: some View {
        NavigationView {
            ZStack {
                VStack(alignment: .leading) {
                    HStack {
                        Circle()
                            .foregroundColor(.gray.opacity(0.1))
                            .overlay {
                                Image(systemName: "alarm.fill")
                                    .font(.title)
                            }
                            .frame(width: 70, height: 70)
                        
                        
                        Text("Sleep Tracking")
                            .font(.title3)
                            .fontWeight(.bold)
                            .padding(.horizontal)
                            .foregroundColor(.black.opacity(0.6))
                    }

                    Spacer()
                }
            }
            .navigationTitle("Routines")
            .navigationBarTitleDisplayMode(.inline)
        }
        
    }
}

struct RoutinesView_Previews: PreviewProvider {
    static var previews: some View {
        RoutinesView()
    }
}
