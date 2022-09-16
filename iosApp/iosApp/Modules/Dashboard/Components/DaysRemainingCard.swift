//
//  DaysRemainingCard.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 08/09/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct DaysRemainingCard: View {
    private let todaysDate: String
    private let remainingDays: String
    private let daysLeftLabel: String
    
    @State var shouldAnimate: Bool = false
    
    init(
        todaysDate: String,
        remainingDays: String,
        daysLeftLabel: String
    ) {
        self.todaysDate = todaysDate
        self.remainingDays = remainingDays
        self.daysLeftLabel = daysLeftLabel
    }
    
    var body: some View {
        VStack(spacing: 5) {
            Text(todaysDate)
                .foregroundColor(Color.secondaryColor)
            Text(remainingDays)
                .font(.system(size: 100, weight: .bold, design: .rounded))
                .foregroundColor(Color.primaryColor)
            Text(daysLeftLabel)
                .foregroundColor(Color.secondaryColor)
        }
        .frame(maxWidth: .infinity, maxHeight: 200)
        .background(Color.secondaryBackground)
        .cornerRadius(16)
        .shadow(radius: 2)
        .scaleEffect(shouldAnimate ? 1 : 0)
        .onAppear{
            withAnimation(.easeInOut(duration: 1)) {
                shouldAnimate = true
            }
        }
    }
}

struct DaysRemainingView_Previews: PreviewProvider {
    static var previews: some View {
        DaysRemainingCard(
            todaysDate: "8 Septmember 2022",
            remainingDays: "122",
            daysLeftLabel: "days left in 2022"
        )
    }
}
