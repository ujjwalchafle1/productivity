//
//  DashboardViewModelAdapter.swift
//  iosApp
//
//  Created by Ujjwal Chafle on 05/09/2022.
//  Copyright © 2022 orgName. All rights reserved.
//

import Foundation
import shared

class DashboardViewModelAdapter: ObservableObject {
    @Published var viewData: DashboardViewData
    private let shared: shared.DashboardViewModel
    
    init(viewData: DashboardViewData = .empty) {
        self.viewData = viewData
        self.shared = DashboardViewModel()
    }
    
    func present() {
        shared.observeViewData { [weak self] viewData in
            guard let self = self else {
                return
            }
            self.makeViewData(from: viewData)
        }
        shared.start()
    }
}

extension DashboardViewModelAdapter {
    func makeViewData(from model: shared.ViewDataResource<shared.DashboardViewData>) {
        switch model {
        case let data as shared.ViewDataResourceData<shared.DashboardViewData>:
            guard let data = data.viewData else {
                break
            }
            viewData = .content(
                .init(
                    todayDateLabel: data.todayDateLabel,
                    daysRemainingInYear: data.daysRemainingInYear,
                    daysLeftLabel: data.daysLeftLabel
                )
            )
        default:
            assertionFailure("Unrecognised viewState")
        }
    }
}
