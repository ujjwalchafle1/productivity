package com.uj.dashboard.Model

import com.uj.core.viewmodel.BaseViewData

data class DashboardViewData (
    val todayDateLabel: String,
    val daysRemainingInYear: String,
    val daysLeftLabel: String
) : BaseViewData()

