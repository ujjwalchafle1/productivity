package com.getdrivescore.common.core.utils

/**
 * Helper extension to make sure when statements are exhaustive at compile-time.
 * Add `.exhaustive` at the end of the `when` statement like in the example below:
 *
 * ```
 * when(value) {
 *      OPTION_1 -> { ... }
 *      ...
 * }.exhaustive
 * ```
 */
val <T> T.exhaustive: T
    get() = this
