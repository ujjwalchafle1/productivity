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
        ScrollView {
            VStack(alignment: .leading, spacing: .zero) {
                HStack {
                    Image(systemName: "magazine")
                        .font(.title)
                        .frame(width: 40, height: 40)
                        .padding()
                    
                    Text.Headline5("Let's get it out!")
                }
                
                TextEditorView(text: "Start Simple!")
                
                Spacer()
                
            }
        }
    }
}
struct RecordJournalDetailsView_Previews: PreviewProvider {
    static var previews: some View {
        RecordJournalDetailsView()
    }
}
