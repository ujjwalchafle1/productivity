package com.uj.dashboard.Model

import com.uj.core.viewmodel.BaseViewData

data class DashboardViewData (
    // Header section
    var greetingLabel: String,
    val currentDateLabel: String,
    val daysRemainingInYear: String,
    val daysLeftLabel: String,

    // Self check-in section
    var selfCheckInBtnLabel: String,

    // Toolbox section
    var toolboxHeader:String,
    val toolboxItems: List<ToolboxItem>

) : BaseViewData()

data class ToolboxItem(
    var image: String,
    var name: String
)
