//
//  RecordJournalDetailsView.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 13/10/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

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
struct RecordJournalDetailsView_Previews: PreviewProvider {
    static var previews: some View {
        RecordJournalDetailsView()
    }
}
