//
//  RecordJournalCard.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 13/10/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

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

//struct RecordJournalCard_Previews: PreviewProvider {
//    static var previews: some View {
//        RecordJournalCard()
//    }
//}
