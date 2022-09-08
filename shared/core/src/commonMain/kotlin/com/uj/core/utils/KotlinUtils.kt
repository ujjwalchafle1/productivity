package com.getdrivescore.common.core.utils

inline fun <R, T> Pair<T?, R?>.safeLet(action: (T, R) -> Unit) {
    this.first?.let { t ->
        this.second?.let { r ->
            action(t, r)
        }
    }
}
