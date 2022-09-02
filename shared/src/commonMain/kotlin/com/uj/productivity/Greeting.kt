package com.uj.productivity

import kotlinx.datetime.*

class Greeting {
    fun greeting(): String {
        return "Hello, Ujjwal!" + "\nThere are only ${daysUntilNewYear()} days left in this year"
    }

    fun daysUntilNewYear(): Int {
        val today = Clock.System.todayAt(TimeZone.currentSystemDefault())
        val closestNewYear = LocalDate(today.year + 1, 1, 1)
        return today.daysUntil(closestNewYear)
    }

}