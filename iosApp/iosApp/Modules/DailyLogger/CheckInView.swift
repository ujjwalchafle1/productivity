//
//  CheckInView.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 05/10/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI



struct CheckInView: View {
    @State private var mood = 50.0

    private var moodState: String {
        withAnimation(.easeInOut(duration: 0.5)) {
            if mood < 10.0 {
                return "😭"
            }
            else if mood < 20.0 {
                return "😢"
            }
            else if mood < 33.33 {
                return "☹️"
            }
            else if mood > 66.66 && mood < 80.0{
                return "😃"
            }
            else if mood > 80.0 {
                return "🥳"
            }
            else {
                return "😐"
            }
        }
    }
    
    var body: some View {
        ZStack {
            VStack {
                Text.Headline4("Octomber 05, 2022")
                
                // wake up time view
                HStack {
                    Button {
                        //
                    } label: {
                        VStack {
                            Image(systemName: "bed.double.circle.fill")
                                .font(.title)
                                .foregroundColor(.black)
                            Text.SubtitleBold2("11:00 PM")
                                .shadow(radius: 10)
                                .frame(width: 100, height: 30)
                                .background(Color.gray.opacity(0.2))
                                .clipShape(RoundedRectangle(cornerRadius: 5))
                        }
                        
                    }
                    
                    Spacer()
                    
                    Button {
                        //
                    } label: {
                        VStack {
                            Image(systemName: "alarm.fill")
                                .font(.title)
                                .foregroundColor(.black)
                            Text.SubtitleBold2("07:00 AM")
                                .shadow(radius: 10)
                                .frame(width: 100, height: 30)
                                .background(Color.gray.opacity(0.2))
                                .clipShape(RoundedRectangle(cornerRadius: 5))

                        }
                    }
                }
                .frame(maxWidth: .infinity)
                .padding()
                
                // mood view
                Group {
                    ZStack {
                        
                        Circle()
                            .shadow(radius: 10)
                            .frame(width: 100, height: 100)
                            .padding(.top, -160)
                            .foregroundColor(Color.white)
                        
                        ZStack {
                            Color.white
                                .cornerRadius(10)
                                .padding()
                                .padding(.top, -50)
                            ZStack {
                                LinearGradient(colors: [.red, .orange, .yellow, .yellow, .green, .green], startPoint: .leading, endPoint: .trailing)
                                    .mask {
                                        Slider(value: $mood, in: 0...100)
                                        {
                                            Text("Slider")
                                        } minimumValueLabel: {
                                            Text("Bad").font(.subheadline).fontWeight(.medium).foregroundColor(.red)
                                        } maximumValueLabel: {
                                            Text("Good").font(.subheadline).fontWeight(.medium).foregroundColor(.green)
                                        }
                                    }
                                    .padding(.horizontal, 30)
                                
                                Slider(value: $mood, in: 0...100)
                                    .opacity(0.05)
                                    .padding(.horizontal, 30)
                            }
                            .padding(.top, -50)
                        }
                        .frame(maxWidth: .infinity)
                        .frame(height: 60)
                        .shadow(radius: 20)
                        
                        Circle()
                            .overlay {
                                Text.Headline2("\(moodState)")
                                    .shadow(radius: 10)
                            }
                            .frame(width: 100, height: 100)
                            .padding(.top, -160)
                            .foregroundColor(Color.white)
                        
                    }
                    .frame(height: 150)
                }

                Spacer()
            }
            .padding(.top, 48)
        }
        .ignoresSafeArea()
       
    }
}

struct CheckInView_Previews: PreviewProvider {
    static var previews: some View {
        CheckInView()
    }
}
