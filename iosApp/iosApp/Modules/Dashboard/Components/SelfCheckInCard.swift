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
        VStack {
            
            HStack {
                Image(systemName:"text.book.closed")
                    .font(.title)
                    .foregroundColor(.gray)
                
                Text.Subtitle1("Today's Self check-in")
                
                Spacer()
                
                Image(systemName: "chevron.forward")
            }
            .padding()
            
            Divider()
                .padding(.horizontal)
            
            HStack {
                Circle()
                    .frame(width: 30)
                    .foregroundColor(.primaryColor)
                    .overlay {
                        Text.SubtitleBold2("M", color: .white)
                    }
                    .shadow(radius: 1)
                Circle()
                    .frame(width: 30)
                    .foregroundColor(.primaryColor)
                    .overlay {
                        Text.SubtitleBold2("T", color: .white)
                    }
                    .shadow(radius: 1)
                Circle()
                    .frame(width: 30)
                    .foregroundColor(.primaryColor)
                    .overlay {
                        Text.SubtitleBold2("W", color: .white)
                    }
                    .shadow(radius: 1)
                Circle()
                    .frame(width: 30)
                    .foregroundColor(.primaryColor)
                    .overlay {
                        Text.SubtitleBold2("T", color: .white)
                    }
                    .shadow(radius: 1)
                Circle()
                    .frame(width: 30)
                    .foregroundColor(.gray)
                    .overlay {
                        Text.SubtitleBold2("F", color: .white)
                    }
                    .shadow(radius: 1)
                
                Circle()
                    .frame(width: 30)
                    .foregroundColor(.gray)
                    .overlay {
                        Text.SubtitleBold2("S", color: .white)
                    }
                    .shadow(radius: 1)
                Circle()
                    .frame(width: 30)
                    .foregroundColor(.gray)
                    .overlay {
                        Text.SubtitleBold2("S", color: .white)
                    }
                    .shadow(radius: 1)
            }
            .padding()
        }
        .frame(height: 150)
        .frame(maxWidth: .infinity)
        .background(Color.white)
        .cornerRadius(3)
        .shadow(radius: 1)
        .padding()

        
    }
}

struct SelfCheckInCardView_Previews: PreviewProvider {
    static var previews: some View {
        SelfCheckInCard()
    }
}
