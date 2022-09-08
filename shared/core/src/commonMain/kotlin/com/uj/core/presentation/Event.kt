package com.getdrivescore.common.core.presentation

data class Event<out T>(private val content: T) {

    var hasBeenHandled = false
        private set

    fun consume(): T? = content.takeUnless { hasBeenHandled }?.also { hasBeenHandled = true }

    fun peek(): T = content
}
