package com.uj.dashboard

import BaseViewModel
import ViewDataResource
import com.uj.dashboard.Model.DashboardViewData
import com.uj.dashboard.Model.ToolboxItem
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch
import kotlinx.datetime.*


class DashboardViewModel : BaseViewModel<ViewDataResource<DashboardViewData>>() {

    private val _viewData = MutableStateFlow<ViewDataResource<DashboardViewData>>(ViewDataResource.Empty())
    override val viewData: StateFlow<ViewDataResource<DashboardViewData>>
        get() = _viewData

    private val today = Clock.System.todayAt(TimeZone.currentSystemDefault())

    fun start() {
        backgroundScope.launch {
            _viewData.emit(
                ViewDataResource.Data(
                    DashboardViewData(
                        greetingLabel = "${greetingDuringDay()}!",
                        currentDateLabel = "${Clock.System.todayAt(TimeZone.currentSystemDefault())}",
                        daysRemainingInYear = "${daysUntilNewYear()}",
                        daysLeftLabel = "days left in \n${currentYear()}",
                        selfCheckInBtnLabel = "Today's self check-in",
                        toolboxHeader = "Toolbox",
                        toolboxItems = arrayListOf(ToolboxItem( image = "", name = "Notes"), ToolboxItem( image = "", name = "Tasks" ), ToolboxItem( image = "", name = "Routines"))
                    )
                )
            )
        }
    }

    private fun greetingDuringDay(): String {
        //Get the time of day

        val now: Instant = Clock.System.now()
        val thisTime: LocalTime = now.toLocalDateTime(TimeZone.currentSystemDefault()).time

        val hour: Int = thisTime.hour

        //Set greeting
        var greeting: String

        if(hour >= 12 && hour < 17) {
            greeting = "Good Afternoon"
        } else if(hour >= 17 && hour < 21) {
            greeting = "Good Evening"
        } else if(hour >= 21 && hour < 24) {
            greeting = "Good Night"
        } else {
            greeting = "Good Morning"
        }

        return greeting
    }

    private fun currentYear(): String {
        return "${today.year}"
    }

    private fun daysUntilNewYear(): Int {
        val closestNewYear = LocalDate(today.year + 1, 1, 1)
        return today.daysUntil(closestNewYear)
    }
}