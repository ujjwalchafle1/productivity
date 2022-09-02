package com.uj.dashboard

class Greeting {
    fun greeting(): String {
        return "Hello, ${Platform().platform}!"
    }
}