//
//  DashboardView.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 02/09/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI
import shared

struct DashboardView: View {
    @StateObject private var viewModelAdapter: DashboardViewModelAdapter
    
    init(viewModelAdapter: DashboardViewModelAdapter = DashboardViewModelAdapter()) {
       _viewModelAdapter = StateObject(wrappedValue: viewModelAdapter)
    }
    
    var body: some View {
        VStack {
            switch viewModelAdapter.viewData {
            case .empty:
                EmptyView()
            case .content(let viewData):
//                NavigationView {
//                    ZStack {
//                        Color.background.edgesIgnoringSafeArea(.all)
//
//                        VStack(alignment: .leading, spacing: 20)  {
//                            DaysRemainingCard(
//                                todaysDate: viewData.todayDateLabel,
//                                remainingDays: viewData.daysRemainingInYear,
//                                daysLeftLabel: viewData.daysLeftLabel
//                            )
//
//                            SelfCheckInCard()
//
//                            Text("Your Toolbox")
//                                .font(.system(size: 20, weight: .bold, design: .rounded))
//
//                            ToolboxView()
//                            .frame(maxWidth: .infinity)
//
//                            Spacer()
//                        }
//                        .padding()
//
//                    }
                    
                    HomeView()
//                    .navigationTitle("Good afternoon")
//                }
            }
        }
        .onAppear {
            viewModelAdapter.present()
        }
    }
}
