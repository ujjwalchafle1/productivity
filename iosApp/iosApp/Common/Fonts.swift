//
//  Fonts.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 20/09/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import SwiftUI

extension Font {
    
    static func light(_ size: CGFloat = Defaults.defaultSize) -> Font {
        return Defaults.font(for: .light, size: size)
    }
    
    static func regular(_ size: CGFloat = Defaults.defaultSize) -> Font {
        return Defaults.font(for: .regular, size: size)
    }
    
    static func medium(_ size: CGFloat = Defaults.defaultSize) -> Font {
        return Defaults.font(for: .medium, size: size)
    }
    
    static func semiBold(_ size: CGFloat = Defaults.defaultSize) -> Font {
        return Defaults.font(for: .semiBold, size: size)
    }
    
    static func bold(_ size: CGFloat = Defaults.defaultSize) -> Font {
        return Defaults.font(for: .bold, size: size)
    }
    
    static func extraBold(_ size: CGFloat = Defaults.defaultSize) -> Font {
        return Defaults.font(for: .extraBold, size: size)
    }
}

extension Font {
    private enum Defaults {
        static let defaultSize: CGFloat = 14
        static let fontFamily = "Comfortaa"//"OpenSans"
        
        enum Weight {
            case light
            case regular
            case medium
            case semiBold
            case bold
            case extraBold
            
            var stringName: String {
                return String(describing: self).capitalized
            }
        }
        
        static func font(for weight: Weight, size: CGFloat) -> Font {
            let fontFamilyName = fontFamily + "-" + weight.stringName
            return .custom(fontFamilyName, size: size)
        }
        
    }
}

