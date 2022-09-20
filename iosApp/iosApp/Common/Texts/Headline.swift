//
//  Headline.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 20/09/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

extension Text {
    
    struct Headline1: View {
        private let content: String
        private let color: Color
        
        public init(_ content: String, color: Color = .black) {
            self.content = content
            self.color = color
        }
        
        public var body: some View {
            Text(content)
                .font(.bold(56))
                .foregroundColor(color)
        }
    }

    struct Headline2: View {
        private let content: String
        private let color: Color
        
        public init(_ content: String, color: Color = .black) {
            self.content = content
            self.color = color
        }
        
        public var body: some View {
            Text(content)
                .font(.bold(44))
                .foregroundColor(color)
        }
    }
    
    struct Headline3: View {
        private let content: String
        private let color: Color
        
        public init(_ content: String, color: Color = .black) {
            self.content = content
            self.color = color
        }
        
        public var body: some View {
            Text(content)
                .font(.semiBold(36))
                .foregroundColor(color)
        }
    }
    
    struct Headline4: View {
        private let content: String
        private let color: Color
        
        public init(_ content: String, color: Color = .black) {
            self.content = content
            self.color = color
        }
        
        public var body: some View {
            Text(content)
                .font(.semiBold(24))
                .foregroundColor(color)
        }
    }
    
    struct Headline5: View {
        private let content: String
        private let color: Color
        
        public init(_ content: String, color: Color = .black) {
            self.content = content
            self.color = color
        }
        
        public var body: some View {
            Text(content)
                .font(.semiBold(20))
                .foregroundColor(color)
        }
    }
}

struct Headline_Previews: PreviewProvider {
    static var previews: some View {
        VStack {
            Text.Headline1("Headline 1")
            Text.Headline2("Headline 2")
            Text.Headline3("Headline 3")
            Text.Headline4("Headline 4")
            Text.Headline5("Headline 5")
        }
        .frame(width: 400, height: 400)
    }
}
