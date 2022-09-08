package com.getdrivescore.common.core.utils

import kotlin.math.pow
import kotlin.math.roundToLong

fun Double.roundTo(decimalPlaces: Int): Double {
    val digits = 10.0.pow(decimalPlaces)
    return ((this * digits).roundToLong() / digits)
}
