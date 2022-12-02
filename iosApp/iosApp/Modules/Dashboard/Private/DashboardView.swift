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
    @Binding var tabSelection: Int
    @StateObject private var viewModelAdapter: DashboardViewModelAdapter
    
    @State private var isShowingSelfCheckInView = false

    init(viewModelAdapter: DashboardViewModelAdapter = DashboardViewModelAdapter(), tabSelection: Binding<Int> = .constant(1)) {
       _viewModelAdapter = StateObject(wrappedValue: viewModelAdapter)
        self._tabSelection = tabSelection
    }
    
    var body: some View {
        NavigationView {
            ZStack {
                Color.primaryColor.opacity(0.03)
                    .ignoresSafeArea()
                
                NavigationLink(destination: DailyJournalView(), isActive: $isShowingSelfCheckInView) { EmptyView() }
                
                VStack(alignment: .leading) {
                    
                    Text.Headline5("Good Morning!")
                        .padding()
                    
                    DaysRemainingCard()
                    
                    SelfCheckInCard()
                        .onTapGesture {
//                            tabSelection = 2
                            isShowingSelfCheckInView = true
                        }
                    
                    Spacer()
                }
                .frame(maxWidth: .infinity)
                .padding()
            }
            
            .navigationBarHidden(true)
        }
    }
}

struct DashboardView_Previews: PreviewProvider {
    static var previews: some View {
        DashboardView()
    }
}

