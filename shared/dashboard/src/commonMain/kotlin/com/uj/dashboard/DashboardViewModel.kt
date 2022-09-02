package com.uj.dashboard

import com.uj.dashboard.Model.DashboardViewData
import kotlinx.datetime.*
import kotlinx.coroutines.flow.MutableStateFlow

class DashboardViewModel {

//    private val _viewData = MutableStateFlow<ViewDataResource<DashboardViewData>>(ViewDataResource.Empty())


    fun start(): String {
        return "${daysUntilNewYear()} days / 365"
    }

    fun daysUntilNewYear(): Int {
        val today = Clock.System.todayAt(TimeZone.currentSystemDefault())
        val closestNewYear = LocalDate(today.year + 1, 1, 1)
        return today.daysUntil(closestNewYear)
    }

}