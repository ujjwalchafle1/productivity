//
//  DaysRemainingCard.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 08/09/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct DaysRemainingCard: View {
    private let title: String
    
    
    init(title: String) {
        self.title = title
    }
    
    var body: some View {
        VStack {
            Text(title)
                .font(.system(size: 100, weight: .bold, design: .rounded))
                .foregroundColor(Color.primaryColor)
            Text("days left in 2022")
                .foregroundColor(Color.secondaryColor)
            Text("8 September 2022 - 1 January 2023")
                .foregroundColor(Color.secondaryColor)
        }
        .frame(maxWidth: .infinity, maxHeight: 200)
        .background(Color.secondaryBackground)
        .cornerRadius(16)
    }
}

struct DaysRemainingView_Previews: PreviewProvider {
    static var previews: some View {
        DaysRemainingCard(title: "123")
    }
}
