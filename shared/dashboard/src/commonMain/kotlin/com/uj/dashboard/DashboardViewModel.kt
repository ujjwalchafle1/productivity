package com.uj.dashboard

import BaseViewModel
import ViewDataResource
import com.uj.dashboard.Model.DashboardViewData
import kotlinx.datetime.*
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch

class DashboardViewModel : BaseViewModel<ViewDataResource<DashboardViewData>>() {

    private val _viewData = MutableStateFlow<ViewDataResource<DashboardViewData>>(ViewDataResource.Empty())
    override val viewData: StateFlow<ViewDataResource<DashboardViewData>>
        get() = _viewData

    fun start() {
        backgroundScope.launch {
            _viewData.emit(
                ViewDataResource.Data(
                    DashboardViewData(
                        daysRemainingInYear = "${daysUntilNewYear()}"
                    )
                )
            )
        }
    }

    fun daysUntilNewYear(): Int {
        val today = Clock.System.todayAt(TimeZone.currentSystemDefault())
        val closestNewYear = LocalDate(today.year + 1, 1, 1)
        return today.daysUntil(closestNewYear)
    }

}