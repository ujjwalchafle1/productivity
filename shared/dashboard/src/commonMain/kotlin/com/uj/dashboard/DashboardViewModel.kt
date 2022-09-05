package com.uj.dashboard

import BaseViewModel
import DashboardViewData
import kotlinx.datetime.*
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch

class DashboardViewModel : BaseViewModel<DashboardViewData>() {

    private val _viewData = MutableStateFlow<DashboardViewData>(DashboardViewData.Empty)
    override val viewData: StateFlow<DashboardViewData>
        get() = _viewData

    fun start() {
        backgroundScope.launch {
                _viewData.value = DashboardViewData.Data (
                    daysRemainingInYear = "${daysUntilNewYear()}"
                )
        }
    }

    fun daysUntilNewYear(): Int {
        val today = Clock.System.todayAt(TimeZone.currentSystemDefault())
        val closestNewYear = LocalDate(today.year + 1, 1, 1)
        return today.daysUntil(closestNewYear)
    }

}