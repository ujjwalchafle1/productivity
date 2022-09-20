//
//  Body.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 20/09/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

extension Text {
    struct Body1: View {
        private let content: String
        private let color: Color
        
        public init(_ content: String, color: Color = .black) {
            self.content = content
            self.color = color
        }
        
        public var body: some View {
            Text(content)
                .font(.medium(16))
                .foregroundColor(color)
        }
    }
    
    struct Body2: View {
        private let content: String
        private let color: Color
        
        public init(_ content: String, color: Color = .black) {
            self.content = content
            self.color = color
        }
        
        public var body: some View {
            Text(content)
                .font(.medium(14))
                .foregroundColor(color)
        }
    }
}

struct Body_Previews: PreviewProvider {
    static var previews: some View {
        VStack {
            Text.Body1("Body 1")
            Text.Body2("Body 2")
        }
        .frame(width: 400, height: 400)
    }
}
