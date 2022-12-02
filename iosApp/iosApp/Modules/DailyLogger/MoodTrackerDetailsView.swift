//
//  MoodTrackerDetailsView.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 13/10/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct MoodTrackerDetailsView: View {
    @State var text: String = "Notes"
    @State var selectedMood: String = "Great"
    
    var body: some View {
        ScrollView(showsIndicators: false) {
            VStack {
                Text.Headline4("How did you feel today ?")
                    .padding()
                
                VStack {
                    HStack {
                        EmotionView(emoji: "😀", emotion: "Great", isSelected: selectedMood == "Great") {
                            selectedMood = "Great"
                        }
                        
                        EmotionView(emoji: "😀", emotion: "Happy", isSelected: selectedMood == "Happy") {
                            selectedMood = "Happy"
                        }
                        
                        EmotionView(emoji: "😀", emotion: "Excited", isSelected: selectedMood == "Excited") {
                            selectedMood = "Excited"
                        }
                    }
                    
                    
                    HStack {
                        EmotionView(emoji: "😀", emotion: "Relaxed", isSelected: selectedMood == "Relaxed") {
                            selectedMood = "Relaxed"
                        }
                        
                        EmotionView(emoji: "😀", emotion: "Grateful", isSelected: selectedMood == "Grateful") {
                            selectedMood = "Grateful"
                        }
                        
                        EmotionView(emoji: "😀", emotion: "Unsure", isSelected: selectedMood == "Unsure") {
                            selectedMood = "Unsure"
                        }
                    }
                    
                    HStack {
                        EmotionView(emoji: "😀", emotion: "Distracted", isSelected: selectedMood == "Distracted") {
                            selectedMood = "Distracted"
                        }
                        
                        EmotionView(emoji: "😀", emotion: "Tired", isSelected: selectedMood == "Tired") {
                            selectedMood = "Tired"
                        }
                        
                        EmotionView(emoji: "😀", emotion: "Stressed", isSelected: selectedMood == "Stressed") {
                            selectedMood = "Stressed"
                        }
                    }
                    
                    HStack {
                        EmotionView(emoji: "😀", emotion: "Anxious", isSelected: selectedMood == "Anxious") {
                            selectedMood = "Anxious"
                        }
                        
                        EmotionView(emoji: "😀", emotion: "Upset", isSelected: selectedMood == "Upset") {
                            selectedMood = "Upset"
                        }
                        
                        EmotionView(emoji: "😀", emotion: "Sad", isSelected: selectedMood == "Sad") {
                            selectedMood = "Sad"
                        }
                    }
                }
                
                Divider()
                    .padding()
                
                TextEditorView()
                
                Spacer()
            }
            .padding()
        }
        .frame(maxWidth: .infinity)
       
        .navigationBarTitleDisplayMode(.inline)
    }
}

struct MoodTrackerDetailsView_Previews: PreviewProvider {
    static var previews: some View {
        MoodTrackerDetailsView()
    }
}

struct EmotionView: View {
    var image: String?
    var emoji: String?
    let emotion: String
    let isSelected: Bool
    let action: () -> Void
        
    var body: some View {
        VStack {
            Circle()
                .foregroundColor(.gray.opacity(0.1))
                .overlay {
                    if let emoji = emoji {
                        Text.Headline3(emoji)
                    }
                    if let image = image {
                        Image(systemName: image)
                            .font(.title)
                    }
                }
                .frame(width: 70, height: 70)
                .padding()
            Text.Subtitle1(emotion)
                .padding(.bottom, 5)
        }
        .background(Color.white)
        .cornerRadius(10)
        .shadow(radius: 1)
        .onTapGesture {
            action()
        }
        .overlay(
            RoundedRectangle(cornerRadius: 10)
                .stroke(isSelected ? Color.primaryColor : .clear, lineWidth: 2)
        )
    }
}
