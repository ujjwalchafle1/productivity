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
        .shadow(radius: 2)
    }
}

//
//struct ToolboxView_Previews: PreviewProvider {
//    static var previews: some View {
////        ToolboxView()
//    }
//}
