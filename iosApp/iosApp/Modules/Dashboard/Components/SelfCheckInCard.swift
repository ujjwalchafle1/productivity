//
//  SelfCheckInCard.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 08/09/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct SelfCheckInCard: View {
    var body: some View {
        HStack {
            Text("🧘🏻 Today's self check-in")
                .foregroundColor(Color.secondaryColor)
                .padding()
                .shadow(radius: 0.5)
            Spacer()
            Image(systemName: "chevron.forward")
                .padding()
        }
        .background(Color.secondaryBackground)
        .cornerRadius(10)
        .shadow(radius: 2)
    }
}

struct SelfCheckInCardView_Previews: PreviewProvider {
    static var previews: some View {
        SelfCheckInCard()
    }
}
