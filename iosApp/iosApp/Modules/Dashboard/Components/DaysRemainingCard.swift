//
//  DaysRemainingCard.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 08/09/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

struct DaysRemainingCard: View {
    
    var body: some View {
        VStack {
            HStack {
                Image(systemName: "calendar")
                    .resizable()
                    .frame(width: 100, height: 100)
                    .foregroundColor(.gray.opacity(0.5))
                    .overlay {
                        Text.Headline3("82", color: .black.opacity(0.7))
                            .padding(.top, 20)
                            .shadow(radius: 10)
                    }
                
                Text.Body2("There are still 82 days remaining in this year. \nKeep it up! \nSmash all your Goals!")
                    .padding()
                
                Spacer()
            }
            .padding()
            
        }
        .frame(maxWidth: .infinity)
        .background(Color.white)
        .cornerRadius(3)
        .shadow(radius: 1)
        .padding()
    }
}

struct DaysRemainingView_Previews: PreviewProvider {
    static var previews: some View {
        DaysRemainingCard()
    }
}
