//
//  DailyJournalView.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 10/10/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI
import RealmSwift

struct DailyJournalView: View {
    @State private var isShowingDetailView = false
    @State private var isShowingSleepDetailView = false
    @State private var isShowingMoodDetailView = false

    var realm: Realm!
    @State var dailyCheckIn: DailyCheckIn?
    
    init() {
        // Open the local-only default realm
        realm = try! Realm()
    }
    
    var body: some View {
        ZStack(alignment: .bottom) {
            
            NavigationLink(destination: RecordJournalDetailsView(), isActive: $isShowingDetailView) { EmptyView() }
            
            NavigationLink(destination: SleepTrackerDetailsView(sleep: dailyCheckIn?.sleep), isActive: $isShowingSleepDetailView) { EmptyView() }
            
            NavigationLink(destination: MoodTrackerDetailsView(), isActive: $isShowingMoodDetailView) { EmptyView() }

            Color.primaryColor.opacity(0.03)
                .ignoresSafeArea()
            
            ScrollView {
                VStack(spacing: 20) {
                    HeaderView()
                    
                    HStack(alignment: .center, spacing: 20) {
                        EmotionView(image: "powersleep", emotion: "Sleep", isSelected: false) {
                            isShowingSleepDetailView = true
                        }
                        
                        EmotionView(image: "theatermasks.fill", emotion: "Mood", isSelected: false) {
                            isShowingMoodDetailView = true
                        }
                        
                        EmotionView(image: "fork.knife", emotion: "Meals", isSelected: false) {
                        }
                    }
                    .padding(.horizontal)
                    
                    RecordJournalCard() {
                        isShowingDetailView = true
                    }
                    .padding(.horizontal)
                    
                    HStack {
                        Text.SubtitleBold2("Routines")

                        Spacer()

                        Button {
                            //
                        } label: {
                            Text.SubtitleBold2("View All", color: .primaryColor)
                        }
                    }
                    .padding(.horizontal)
                    
                    // TODO: Routines view
//                    ScrollView(.horizontal, showsIndicators: false) {
//                        HStack {
//                            ForEach(0..<5) { num in
//                                RoutinesCard()
//                            }
//                        }
//                        .padding(.horizontal, 10)
//                        .padding(.vertical, 1)
//                    }
//                    .padding(.horizontal)
                    
                    Spacer()
                }
            }
            
            .navigationBarHidden(false)
            .navigationBarTitleDisplayMode(.inline)
        }
        .onDisappear {
            let dailyCheckIn = DailyCheckIn(
                sleep: .init(
                    bedTime: "11:30",
                    wakeupTime: "05:30",
                    sleepQuality: "Good",
                    notes: "xyz"
                ),
                mood: .init(
                    moodStates: "Good",
                    todaysMood: "Bad",
                    notes: "xyzßß"
                )
            )
            dailyCheckIn.date = "\(Date.getCurrentDate())"
//            let todo = Todo(name: "Do laundry")
//            todo.status = "InProgress"
            try! realm.write {
                realm.add(dailyCheckIn)
//                realm.add(todo)
            }
            
        }
        .onAppear {
            // Get all todos in the realm
            let dailyCheckIn = realm.objects(DailyCheckIn.self)
            print(Date.getCurrentDate())
            let todaysCheckIn = dailyCheckIn.where {
                $0.date == "\(Date.getCurrentDate())"
            }
            print("todaysCheckIn: \(todaysCheckIn)")
            
//            let todos = realm.objects(Todo.self)
//            
//            let todosInProgress = todos.where {
//                $0.status == "InProgress"
//            }
//            print("A list of all todos in progress: \(todosInProgress)")
        }
    }
}

struct DailyJournalView_Previews: PreviewProvider {
    static var previews: some View {
        DailyJournalView()
    }
}

struct HeaderView: View {
    var body: some View {
        VStack(alignment: .leading, spacing: 20) {
            Text.Headline4("Hi Ujjwal,")
            Text.Subtitle1("You are doing a great job logging your progress!")
            Text.Subtitle2("By checking in with ourselves regularly, we become more aware, intentional and grateful.")
                .font(.subheadline)
        }
        .foregroundColor(.black.opacity(0.6))
    }
}

extension View {
    func glow(color: Color = .red, radius: CGFloat = 20) -> some View {
        self
            .shadow(color: color, radius: radius / 3)
            .shadow(color: color, radius: radius / 3)
            .shadow(color: color, radius: radius / 3)
    }
}


class DailyCheckIn: Object {
    @Persisted(primaryKey: true) var _id: ObjectId
    @Persisted var date: String
    @Persisted var sleep: Sleep?
    @Persisted var mood: Mood?
////    @Persisted var meals: Meal
//    @Persisted var journal: Journal?
    
    convenience init(sleep: Sleep?, mood: Mood?) {
        self.init()
        self.sleep = sleep
        self.mood = mood
////        self.meals = meals
//        self.journal = journal
    }
}

class Sleep: Object {
    @Persisted(primaryKey: true) var _id: ObjectId
    
    @Persisted var bedTime: String
    @Persisted var wakeupTime: String
    @Persisted var sleepQuality: String
    @Persisted var notes: String
    
    convenience init(bedTime: String, wakeupTime: String, sleepQuality: String, notes: String) {
        self.init()
        self.bedTime = bedTime
        self.wakeupTime = wakeupTime
        self.sleepQuality = sleepQuality
        self.notes = notes
    }
}

class Mood: Object {
    @Persisted(primaryKey: true) var _id: ObjectId
    
    @Persisted var moodStates: String
    @Persisted var todaysMood: String
    @Persisted var notes: String
    
    convenience init(moodStates: String, todaysMood: String, notes: String) {
        self.init()
        self.moodStates = moodStates
        self.todaysMood = todaysMood
        self.notes = notes
    }
}

class Journal: Object {
    @Persisted(primaryKey: true) var _id: ObjectId
    
    @Persisted var notes: String
    
    convenience init(notes: String) {
        self.init()
        self.notes = notes
    }
}

extension Date {
    
    static func getCurrentDate() -> String {
        
        let dateFormatter = DateFormatter()
        
        dateFormatter.dateFormat = "dd/MM/yyyy HH:mm:ss"
        
        return dateFormatter.string(from: Date())
        
    }
}


class Todo: Object {
    @Persisted var name: String = ""
    @Persisted var status: String = ""
    @Persisted var ownerId: String
    convenience init(name: String) {
        self.init()
        self.name = name
    }
}
