//
//  Subtitle.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 20/09/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

extension Text {
    struct Subtitle1: View {
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
    
    struct Subtitle2: View {
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
    
    struct SubtitleBold2: View {
        private let content: String
        private let color: Color
        
        public init(_ content: String, color: Color = .black) {
            self.content = content
            self.color = color
        }
        
        var body: some View {
            Text(content)
                .font(.bold(14))
                .foregroundColor(color)
        }
    }
}

struct Subtitle_Previews: PreviewProvider {
    static var previews: some View {
        VStack {
            Text.Subtitle1("Subtitle 1")
            Text.Subtitle2("Subtitle 2")
            Text.SubtitleBold2("Subtitle bold 2")
        }
        .frame(width: 400, height: 400)
    }
}
