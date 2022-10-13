//
//  SleepTrackerDetailsView.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 11/10/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct SleepTrackerDetailsView: View {
    
    @State var sleepQuality: String = ""
    @State var bedTime = Date()
    @State var wakeupTime = Date()
    
    var body: some View {
        ScrollView {
            VStack(alignment: .leading) {
                HStack {
                    VStack(spacing: 10) {
                        HStack {
                            Image(systemName: "bed.double")
                                .font(.title2)
                            
                            Text.Headline5("Sleep")
                            
                        }
                        HStack {
                            DatePicker("", selection: $bedTime, displayedComponents: .hourAndMinute)
                                .offset(x: -35)
                            
                        }
                    }
                    
                    
                    Spacer()
                    
                    Divider()
                        .frame(height: 70)
                    
                    VStack(spacing: 10) {
                        HStack {
                            Image(systemName: "sun.max.fill")
                                .font(.title2)
                            
                            Text.Headline5("Wake Up")
                            
                        }
                        HStack {
                            
                            DatePicker("", selection: $wakeupTime, displayedComponents: .hourAndMinute)
                                .offset(x: -35)
                            
                        }
                    }
                }
                .padding()
                
                Divider()
                    .padding()
                
                Text.Headline5("How was your sleep quality last night?")
                    .padding(.horizontal)
                
                HStack {
                    Text.Subtitle1("Quality:")
                    Text.Subtitle1(sleepQuality.isEmpty ? "Unknown": sleepQuality, color: sleepQuality.isEmpty ? .red : .green)
                    
                    Spacer()
                }
                .padding()
                
                HStack(alignment: .center, spacing: 20) {
                    Rectangle()
                        .frame(width: 100, height: 100)
                        .foregroundColor(.red.opacity(0.1))
                        .overlay {
                            VStack(spacing: .zero) {
                                if sleepQuality == "Poor" {
                                    withAnimation(.easeOut(duration: 0.2)) {
                                        HStack {
                                            Spacer()
                                            Image(systemName: "checkmark.square.fill")
                                                .padding(.horizontal, 5)
                                                .padding(.top, -15)
                                        }
                                    }
                                }
                                VStack(spacing: 10) {
                                    Text.Headline5("☹️")
                                    Text.Subtitle1("Poor")
                                }
                            }
                        }
                        .cornerRadius(5)
                        .onTapGesture {
                            withAnimation(.easeOut(duration: 0.5)) {
                                sleepQuality = "Poor"
                            }
                        }
                    
                    Rectangle()
                        .frame(width: 100, height: 100)
                        .foregroundColor(.gray.opacity(0.2))
                        .overlay {
                            VStack(spacing: .zero) {
                                if sleepQuality == "Average" {
                                    withAnimation(.easeOut(duration: 0.5)) {
                                        HStack {
                                            Spacer()
                                            Image(systemName: "checkmark.square.fill")
                                                .padding(.horizontal, 5)
                                                .padding(.top, -15)
                                        }
                                    }
                                }
                                VStack(spacing: 10) {
                                    Text.Headline5("😐")
                                    Text.Subtitle1("Average")
                                }
                            }
                        }
                        .cornerRadius(5)
                        .shadow(radius: 1)
                        .onTapGesture {
                            withAnimation(.easeOut(duration: 0.5)) {
                                sleepQuality = "Average"
                            }
                        }
                    Rectangle()
                        .frame(width: 100, height: 100)
                        .foregroundColor(.green.opacity(0.2))
                        .overlay {
                            VStack(spacing: .zero) {
                                if sleepQuality == "Good" {
                                    withAnimation(.easeOut(duration: 0.5)) {
                                        HStack {
                                            Spacer()
                                            Image(systemName: "checkmark.square.fill")
                                                .padding(.horizontal, 5)
                                                .padding(.top, -15)
                                        }
                                    }
                                }
                                VStack(spacing: 10) {
                                    Text.Headline5("😃")
                                    Text.Subtitle1("Good")
                                }
                            }
                        }
                        .cornerRadius(5)
                        .shadow(radius: 1)
                        .onTapGesture {
                            withAnimation(.easeOut(duration: 0.5)) {
                                sleepQuality = "Good"
                            }
                        }
                }
                
                Divider()
                    .padding()
                
                VStack(alignment: .leading) {
                    Text.Headline5("Notes:")
                        .padding(.horizontal)
                    
                    Rectangle()
                        .frame(height: 300)
                        .foregroundColor(.accentColor.opacity(0.1))
                        .cornerRadius(5)
                }
                
                Spacer()
            }
            .padding()
        }
    }
}

struct SleepTrackerDetailsView_Previews: PreviewProvider {
    static var previews: some View {
        SleepTrackerDetailsView()
    }
}
