//
//  DailyCheckInView.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 27/09/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct DailyCheckInView: View {
    
    @State private var current = 33.0
    @State private var minimum = 20.0
    @State private var maximum = 60.0
    var body: some View {
        VStack(spacing: .zero) {
            HStack {
                VStack {
                    Rectangle()
                        .frame(width: 60, height: 100)
                        .foregroundColor(Color.secondaryColor)
                    
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
            
            HStack {
                Text.Subtitle2("Mood")
                
                Spacer()

                HStack(spacing: .zero) {
                    ForEach(1..<11) { num in
                        Text("\(num)")
                            .frame(width: 30, height: 30, alignment: .center)
                            .background(Color.gray)
                            .cornerRadius(10)

                    }
                }
                
            }
            .frame(maxWidth: .infinity)
            .padding(.horizontal, 20)
            .background(Color.white)
            
            Spacer()
        }
        .frame(maxWidth: .infinity)
        .background(Color.red)
        .ignoresSafeArea()
    }
}

struct DailyCheckInView_Previews: PreviewProvider {
    static var previews: some View {
        DailyCheckInView()
    }
}
