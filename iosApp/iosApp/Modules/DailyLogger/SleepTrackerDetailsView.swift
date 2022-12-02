//
//  SleepTrackerDetailsView.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 11/10/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI
import RealmSwift

struct SleepTrackerDetailsView: View {
    @State var text: String = "Notes"
    @State var sleepQuality: String = ""
    @State var bedTime = Date()
    @State var wakeupTime = Date()
    
    var realm: Realm!
    @State var sleep : Sleep?

    init(sleep : Sleep?) {
        // Open the local-only default realm
        realm = try! Realm()
        self.sleep = sleep
    }
    
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
                
                HStack(alignment: .center, spacing: 20) {
                    EmotionView(emoji: "☹️", emotion: "Poor", isSelected: sleepQuality == "Poor") {
                        sleepQuality = "Poor"
                    }
                    
                    EmotionView(emoji: "🙂", emotion: "Average", isSelected: sleepQuality == "Average") {
                        sleepQuality = "Average"
                    }
                    
                    EmotionView(emoji: "😀", emotion: "Good", isSelected: sleepQuality == "Good") {
                        sleepQuality = "Good"
                    }
                }
                
                Divider()
                    .padding()
                
                TextEditorView()
                
                Spacer()
            }
            .padding()
        }
        .navigationBarTitleDisplayMode(.inline)
        .onAppear {
            sleepQuality = sleep?.sleepQuality ?? "Good"

//            let dailyCheckIn = realm.objects(DailyCheckIn.self)
//
//            let todaysCheckIn = dailyCheckIn.where {
//                $0.date == "\(Date.getCurrentDate())"
//            }
//            if  todaysCheckIn.count > 0 {
//                sleep = todaysCheckIn.first?.sleep
//            }
//            print("todaysCheckIn: \(todaysCheckIn)")
        }
        .onDisappear {
            if let sleep = sleep {
                sleep.sleepQuality = sleepQuality
                try! realm.write {
                    realm.add(sleep)
                }
            }
        }
    }
}

struct SleepTrackerDetailsView_Previews: PreviewProvider {
    static var previews: some View {
        SleepTrackerDetailsView(sleep: .init(bedTime: "12:39", wakeupTime: "09:30", sleepQuality: "Average", notes: "xyz"))
    }
}

struct TextEditorView: View {
    @State var text: String = "Notes"
    var body: some View {
        VStack(spacing: 2) {
            TextEditor(text: $text)
                .padding()
                .font(.headline)
                .foregroundColor(Color.primaryColor)
            
        }
        .frame(height: 400)
        .frame(maxWidth: .infinity)
        .background(Color.white)
        .cornerRadius(10)
        .shadow(radius: 2)
        .padding()
    }
}
