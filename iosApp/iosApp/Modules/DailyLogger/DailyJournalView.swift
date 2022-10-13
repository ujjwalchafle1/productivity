//
//  DailyJournalView.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 10/10/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct DailyJournalView: View {
    @State private var isShowingDetailView = false
    @State private var isShowingSleepDetailView = false

    var body: some View {
        NavigationView {
            ZStack(alignment: .bottom) {
                
                NavigationLink(destination: RecordJournalDetailsView(), isActive: $isShowingDetailView) { EmptyView() }
                
                NavigationLink(destination: SleepTrackerDetailsView(), isActive: $isShowingSleepDetailView) { EmptyView() }
                                
                Color.primaryColor.opacity(0.03)
                    .ignoresSafeArea()
                
                ScrollView {
                    VStack(spacing: 20) {
                        HeaderView()
                        
                        HStack {
                            SleepTrackingCard() {
                                isShowingSleepDetailView = true

                            }
                            MoodTrackingCard() {
                                isShowingDetailView = true
                            }
                        }
                        
                        
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
                        
                        ScrollView(.horizontal, showsIndicators: false) {
                            HStack {
                                ForEach(0..<5) { num in
                                    RoutinesCard()
                                }
                            }
                            .padding(.horizontal, 10)
                            .padding(.vertical, 1)
                        }
                        
                        Spacer()
                    }
                }
            }
            .navigationBarHidden(true)
        }
        
    }
}

struct DailyJournalView_Previews: PreviewProvider {
    static var previews: some View {
        DailyJournalView()
    }
}

struct RecordJournalDetailsView: View {
    var body: some View {
            
            VStack(alignment: .leading, spacing: .zero) {
                Text("Let's get it out!")
                    .font(.title2)
                    .foregroundColor(.gray)
                    .padding()
                
                VStack(spacing: 2) {
                }
                .frame(height: 400)
                .frame(maxWidth: .infinity)
                .background(Color.white)
                .cornerRadius(3)
                .shadow(radius: 1)
                .padding()

                Spacer()
                
            }
            
        
    }
    
}

struct RecordJournalCard: View {
    let action: () -> Void
    var body: some View {
        VStack(spacing: 2) {
            Text.Body2("Journaling is the act of keeping a record of your personal thoughts, feelings, insights, and more.", color: .gray)
                .padding()
            
            Circle()
                .foregroundColor(.gray.opacity(0.1))
                .overlay {
                    Image(systemName: "brain.head.profile")
                        .font(.title)
                }
                .frame(width: 70, height: 70)
            
            Button {
                action()
            } label: {
                Text.Subtitle2("Start writing", color: .primaryColor)
            }
            .buttonStyle(.bordered)
            .padding()
        }
        .frame(maxWidth: .infinity)
        .background(Color.white)
        .cornerRadius(3)
        .shadow(radius: 1)
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

struct MoodTrackingCard: View {
    let action: () -> Void
    var body: some View {
        VStack(alignment: .leading, spacing: .zero) {
            Circle()
                .foregroundColor(.gray.opacity(0.1))
                .overlay {
                    Image(systemName: "face.smiling")
                        .font(.title)
                }
                .frame(width: 70, height: 70)
                .padding()
            
            
            Text.Subtitle1("Mood Tracking")
                .padding(.horizontal)
                .foregroundColor(.black.opacity(0.6))
            
            HStack {
                Image(systemName: "list.bullet.rectangle")
                Text.Body2("Check Insights", color: .black.opacity(0.6))
                Spacer()
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
                }
                ProgressView(value: 0.85)
                    .tint(.green)
            }
            .padding(.horizontal)
            .padding(.bottom)
            
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


extension View {
    func glow(color: Color = .red, radius: CGFloat = 20) -> some View {
        self
            .shadow(color: color, radius: radius / 3)
            .shadow(color: color, radius: radius / 3)
            .shadow(color: color, radius: radius / 3)
    }
}
