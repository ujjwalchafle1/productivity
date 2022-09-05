package com.uj.core

class Greeting {
    fun greeting(): String {
        return "Hello, ${Platform().platform}!"
    }
}