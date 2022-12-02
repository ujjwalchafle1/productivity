//
//  ToolboxView.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 08/09/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

enum ToolboxType: String {
    case notes
    case tasks
    case routines
}

struct ToolboxView: View {    
    var body: some View {
        HStack {
            toolboxCard(type: .notes)
            toolboxCard(type: .tasks)
            toolboxCard(type: .routines)
        }
    }
    
    func toolboxCard(type: ToolboxType) -> some View {
        VStack {
            Text("0")
                .padding(.top, 10)
                .padding(.bottom, 2)
            Text(type.rawValue.capitalized)
                .padding(.bottom, 10)
                .foregroundColor(Color.secondaryColor)
        }
        .frame(maxWidth: .infinity)
        .background(Color.secondaryBackground)
        .cornerRadius(10)
        .shadow(radius: 5)
    }
}

struct CardView: View {
    
    @State var index = 0
    
    var body: some View {
        
        HStack(spacing: 25) {
            
            VStack(spacing: 12) {
                
                Image(systemName: "book.fill")
                    .font(.title)
                    .foregroundColor(.black)
                    .padding()
                    .background(Color.white)
                    .clipShape(Circle())
                
                
                Text.Subtitle1("Notes")
                    .foregroundColor(self.index == 0 ? .white : .black)
            }
            .padding(.horizontal, 10)
            .padding(.vertical, 20)
            .background(self.index == 0 ? Color("Color1") : Color.black.opacity(0.06))
            .clipShape(Capsule())
            .onTapGesture {
                index = 0
            }
            
            VStack(spacing: 12) {
                
                Image(systemName: "checklist")
                    .font(.title)
                    .foregroundColor(.black)
                    .padding()
                    .background(Color.white)
                    .clipShape(Circle())
                
                
                Text.Subtitle1("Tasks")
                    .foregroundColor(self.index == 1 ? .white : .black)
            }
            .padding(.horizontal, 10)
            .padding(.vertical, 20)
            .background(self.index == 1 ? Color("Color1") : Color.black.opacity(0.06))
            .clipShape(Capsule())
            .onTapGesture {
                index = 1
            }
            
            VStack(spacing: 12) {
                
                Image(systemName: "pawprint.circle.fill")
                    .font(.title)
                    .foregroundColor(.black)
                    .padding()
                    .background(Color.white)
                    .clipShape(Circle())
                
                
                Text.Subtitle1("Routines")
                    .foregroundColor(self.index == 2 ? .white : .black)
            }
            .padding(.horizontal, 10)
            .padding(.vertical, 20)
            .background(self.index == 2 ? Color("Color1") : Color.black.opacity(0.06))
            .clipShape(Capsule())
            .onTapGesture {
                index = 2
            }
        }
        .padding(.horizontal, 10)
    }
}
