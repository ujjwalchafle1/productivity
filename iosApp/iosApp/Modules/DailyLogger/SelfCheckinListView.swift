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
                Section(header: Text("Check-ins")) {
                    ForEach(0..<4) { index in
                        ZStack(alignment: .leading) {
                            NavigationLink(
                                destination: DailyJournalView()) {
                                    EmptyView()
                                }
                                .opacity(0)
                            
                            SelfCheckinCell()
                        }
                    }
                    .listRowBackground(Color.clear)
                    .listRowSeparator(.hidden)
                }
                .headerProminence(.increased)
            }
            .listStyle(.grouped)
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
    let images = ["powersleep", "theatermasks.fill", "fork.knife", "magazine"]

    var body: some View {
        VStack(alignment: .leading, spacing: 10) {
            
            Text.Subtitle1("12th Octomber, 2022")
            
            Divider()
            
            HStack {
                ForEach(0..<4) { num in
                    Circle()
                        .foregroundColor(.gray.opacity(0.1))
                        .overlay {
                            Image(systemName: images[num])
                                .resizable()
                                .scaledToFit()
                                .frame(width: 20, height: 20)
                                .foregroundColor(.primaryColor)
                        }
                        .frame(width: 40, height: 40)
                        .padding(.horizontal)
                        .padding(.vertical, 10)

                }
            }
        }
        .frame(maxWidth: .infinity)
        .padding()
        .background(Color.white)
        .cornerRadius(10)
        .shadow(radius: 1)
        
    }
}
