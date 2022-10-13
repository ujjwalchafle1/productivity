//
//  DailyCheckInView.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 27/09/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct DailyCheckInView: View {
    
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
        VStack(spacing: .zero) {
            HStack {
                VStack {
                    Capsule()
                        .stroke(lineWidth: 3.0)
                        .frame(width: 50, height: 150)
                        .foregroundColor(Color.secondaryColor)
                        .padding(.top, -50)
                        
                    Spacer()
                }
                .padding(.leading, 20)
                
                VStack(alignment: .leading, spacing: 5) {
                    
                    HStack {
                        Text.Headline5("September 27, 2022")
                        
                        Spacer()
                        
                        Button(action: {
                            //
                        }, label: {
                            Image(systemName: "questionmark.circle")
                                .font(.title)
                                .foregroundColor(.black)
                        })
                    }
                    .padding(.bottom, 10)

                    .padding(.trailing, 30)
                }
                .padding(.top, 30)

            }
            .frame(height: 100)
            .frame(maxWidth: .infinity)
            .background(Color.white)
            
            HStack {
                HStack(spacing: 2){
                    Button {
                        //
                    } label: {
                        Image(systemName: "bed.double.circle.fill")
                            .font(.title)
                            .foregroundColor(.black)
                        Text.SubtitleBold2("11:00 PM")
                            .frame(width: 100, height: 30)
                            .background(Color.primaryColor)
                            .clipShape(RoundedRectangle(cornerRadius: 5))
                    }

                }
                
                Spacer(minLength: 30)
                
                HStack(spacing: 2){
                    Button {
                        //
                    } label: {
                        Image(systemName: "alarm.fill")
                            .font(.title)
                            .foregroundColor(.black)
                        Text.SubtitleBold2("07:00 AM")
                            .frame(width: 100, height: 30)
                            .background(Color.primaryColor)
                            .clipShape(RoundedRectangle(cornerRadius: 5))
                    }
                    
                }
            }
            .padding(.horizontal, 20)
            .padding(.vertical, 10)
            .background(Color.white)
            
            VStack(spacing: .zero) {
                
                HStack {
                    Text.Headline4("Mood")
                    Text.Headline3("\(moodState)")
                }
                
                                
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
                    
                    Slider(value: $mood, in: 0...100)
                        .opacity(0.05)
                        .padding()
                }
                .frame(maxHeight: 40)
                
                Spacer()
            }
            .frame(maxWidth: .infinity)
            .padding(.all, 20)
            .background(Color.white)
            
            Spacer()
        }
        .frame(maxWidth: .infinity)
        .background(Color.red)
        .ignoresSafeArea()
    }
    
//    private func getMoodEmoji() {
//        if mood < 33.33 {
//            moodState = "Bad"
//        } else if mood > 66.66 {
//            moodState = "Good"
//        } else {
//            moodState = "Ok"
//        }
//    }
}

struct DailyCheckInView_Previews: PreviewProvider {
    static var previews: some View {
        DailyCheckInView()
    }
}
