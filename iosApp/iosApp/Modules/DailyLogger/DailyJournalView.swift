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
            
            .navigationBarHidden(false)
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
