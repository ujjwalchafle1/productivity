//
//  SelfCheckinListView.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 13/10/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct SelfCheckinListView: View {
    @State private var isShowingDetailView = false

    var body: some View {
        NavigationView {
            List {
                Section(header: Text("All Checkins")) {
                    ForEach(0..<10) { num in
                        NavigationLink {
                            DailyJournalView()
                        } label: {
                            SelfCheckinCell()
                        }
                    }
                }
                .headerProminence(.increased)
            }
            .listStyle(.insetGrouped)
            
            .navigationBarHidden(true)
        }
    }
}

struct SelfCheckinListView_Previews: PreviewProvider {
    static var previews: some View {
        SelfCheckinListView()
    }
}

struct SelfCheckinCell: View {
    var body: some View {
        VStack(alignment: .leading, spacing: 20) {
            
            
            Text("12th Octomber, 2022")
            
            Divider()
            
            HStack {
                ForEach(0..<4) { num in
                    Circle()
                        .foregroundColor(.gray.opacity(0.1))
                        .overlay {
                            Image(systemName: "clock.arrow.circlepath")
                                .resizable()
                                .scaledToFit()
                                .frame(width: 25, height: 25)
                                .foregroundColor(.orange)
                        }
                        .frame(width: 45, height: 45)
                }
            }
        }
        .padding()
        
    }
}
