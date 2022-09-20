//
//  DashboardViewData.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 05/09/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import Foundation


enum DashboardViewData {
    case empty
    case content(Content)
}


extension DashboardViewData {
    struct Content {
        let greetingLabel: String
        let currentDateLabel: String
        let daysRemainingInYear: String
        let daysLeftLabel: String
        
        // Self check-in section
        let selfCheckInBtnLabel: String
        
        // Toolbox section
        let toolboxHeader:String
        let toolboxItems: [ToolboxItem]
        
        
        struct ToolboxItem {
            let icon: String
            let name: String
        }
    }
    
}
