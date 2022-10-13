//
//  SelfCheckInView.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 07/10/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct SelfCheckInView: View {
    var body: some View {
        ZStack {
            VStack {
                SelfCheckInHeaderView()
                
                HStack(spacing: 40) {
                    SleepCardView(title: "Sleep", subtitle: "Average sleep: 8 hrs")
                    SleepCardView(title: "Mood", subtitle: "I am Happy")
                }
                .padding(.top, 20)
                
                JournalCardView()
                    .padding(20)
                
                Spacer()
                
//                Routines()
            }
        }
        .ignoresSafeArea()
    }
    
}

struct SelfCheckInView_Previews: PreviewProvider {
    static var previews: some View {
        //this is sleep card
        SelfCheckInView()
        
    }
}

struct Routines: View {
    var body: some View {
        VStack {
            HStack(spacing: 40) {
                SleepCardView(title: "Morning", subtitle: "Average sleep: 8 hrs")
                SleepCardView(title: "Night", subtitle: "I am Happy")
            }
        }
        .frame(height: 300)
        .frame(maxWidth: .infinity)
        .background(Color.gray.opacity(0.1))
        .cornerRadius(35)
    }
}

struct SelfCheckInHeaderView: View {
    var body: some View {
        HStack {
            VStack(alignment: .leading, spacing: 10) {
                Text.Headline5("Hi Ujjwal,", color: .white)
                Text.Headline5("You are doing a great job logging your progress!", color: .white)
                Text.Subtitle2("By checking in with ourselves regularly, we become more aware, intentional and grateful.", color: .white)
            }
            .frame(height: 150)
            .frame(maxWidth: .infinity)
            .padding()
            .padding(.top, 20)
            
            Spacer()
        }
        .background(Color.primaryColor)
        .cornerRadius(35)
    }
}

struct JournalCardView: View {
    var body: some View {
        HStack {
            HStack {
                VStack(alignment: .leading, spacing: 20) {
                    Text.Headline4("Today's Journal")
                    Text.Subtitle2("Journaling is the act of keeping a record of your personal thoughts, feelings, insights, and more.")
                }
                Spacer()
            }
            .padding(10)
            .background(.white)
            .cornerRadius(15)
            .shadow(radius: 10)
            
            Image(systemName: "pencil")
                .frame(width: 50)
                .font(.title)
        }
        .background(Color.primaryColor)
        .cornerRadius(15)
        .shadow(radius: 10)
    }
}

struct SleepCardView: View {
    
    var title: String
    var subtitle: String?
    
    var body: some View {
        VStack {
            VStack(spacing: 10) {
                Circle()
                    .stroke()
                    .overlay {
                        Text.Headline5("8 hrs", color: Color.primaryColor)
                    }
                    .foregroundColor(Color.primaryColor)
                    .frame(width: 70)
                
                if let subtitle = subtitle {
                    Text.SubtitleBold2(subtitle)
                        .padding(5)
                }
                
                Spacer()
                
            }
            .frame(width: 150)
            .background(.white)
            .cornerRadius(15)
            .shadow(radius: 10)
            
            Text(title)
                .padding(10)
        }
        .frame(width: 150, height: 200)
        .background(Color.primaryColor)
        .cornerRadius(15)
        .shadow(radius: 10)
        
    }
}
