@file:Suppress("SpellCheckingInspection")

import com.getdrivescore.build.SharedBuildVersions

object Versions {
    const val compileSdk = 32
    const val targetSdk = 30
    const val minSdk = 26

    const val constraintLayout = "2.1.4"
    const val supportTest = "1.4.0"
    const val testExt = "1.1.3"
    const val archLifecycle = "2.5.0"
    const val blueshift = "3.2.3" // DO NOT UPDATE - new versions breaks push notifications, CS app is waiting for a fix
    const val branch = "5.0.15"
    const val uiAutomator = "2.2.0"
    const val agp = SharedBuildVersions.agp
    const val annotation = "1.3.0"
    const val coreTesting = "2.1.0"
    const val preferenceKtx = "1.2.0"
    const val appCompat = "1.4.2"
    const val cardView = "1.0.0"
    const val material = "1.6.1"
    const val gridLayout = "1.0.0"
    const val browser = "1.4.0"
    const val biometric = "1.1.0"
    const val workManager = "2.7.1"

    const val espresso = "3.4.0"
    const val hamcrest = "1.3"
    const val firebaseBom = "30.3.0"
    const val playServicesAuth = "19.2.0"
    const val playServicesAds = "20.5.0"
    const val playServicesBase = "17.6.0"
    const val playServicesMeasurement = "20.0.0"
    const val playServicesMaps = "18.1.0"
    const val playServicesAdsIdentifier = "17.1.0" // Used by BranchIO.
    const val mapsUtils = "2.3.0"
    const val mapsKtx = "3.4.0"
    const val junit = "4.13.2"
    const val kotlin = SharedBuildVersions.kotlin
    const val navComponent = "2.5.0"
    const val okhttp = "4.9.3"
    const val recyclerView = "1.2.1"
    const val segment = "4.10.4"
    const val leakCanary = "2.9.1"
    const val playCore = "1.10.2"
    const val flipper = "0.154.0"
    const val soloader = "0.10.4"
    const val ktlint = "0.40.0" // Newer versions are failing - require more time to investigate
    const val coroutines = "1.6.4"
    const val lottie = "5.2.0"
    const val securityCrypto = "1.0.0"
    const val cmt = "cmt-sdk-v11.1.0-rc12309-5a1cc3c43"
    const val trustKit = "1.1.5"
    const val coil = "2.1.0"
    const val detekt = "1.21.0"
    const val paging = "3.1.1"
    const val markwon = "4.6.2"
    const val mokoResources = "0.20.1"
    const val koin = "3.2.0"
    const val multiplatformSettings = "0.9"
    const val kermit = "1.1.3"
    const val compose = "1.2.0-rc03"
    const val composeCompiler = "1.2.0"
    const val composeActivity = "1.5.0"
    const val composeViewModel = "2.5.0"
    const val buildKonfig = "0.12.0"
    const val ktor = "2.0.3"
    const val datetime = "0.4.0"
    const val crashkios = "0.6.0"
    const val turbine = "0.8.0"
    const val realm = "1.1.0"
}

object Deps {
    // region Kotlin.
    const val kotlin = "org.jetbrains.kotlin:kotlin-stdlib-jdk7:${SharedBuildVersions.kotlin}"
    const val coroutines = "org.jetbrains.kotlinx:kotlinx-coroutines-core:${Versions.coroutines}"
    const val coroutinesRx = "org.jetbrains.kotlinx:kotlinx-coroutines-rx2:${Versions.coroutines}"
    const val coroutinesTest = "org.jetbrains.kotlinx:kotlinx-coroutines-test:${Versions.coroutines}"
    const val datetime = "org.jetbrains.kotlinx:kotlinx-datetime:${Versions.datetime}"
    // endregion.

    // region Testing.
    const val junit = "junit:junit:${Versions.junit}"
    const val kotlinTest = "org.jetbrains.kotlin:kotlin-test-junit:${SharedBuildVersions.kotlin}"
    const val supportAnnotations = "androidx.annotation:annotation:${Versions.annotation}"
    const val supportTestRunner = "androidx.test:runner:${Versions.supportTest}"
    const val supportTestRules = "androidx.test:rules:${Versions.supportTest}"
    const val orchestrator = "androidx.test:orchestrator:${Versions.supportTest}"
    const val espresso = "androidx.test.espresso:espresso-core:${Versions.espresso}"
    const val espressoContrib = "androidx.test.espresso:espresso-contrib:${Versions.espresso}"
    const val espressoWeb = "androidx.test.espresso:espresso-web:${Versions.espresso}"
    const val espressoIntents = "androidx.test.espresso:espresso-intents:${Versions.espresso}"
    const val archCoreTesting = "androidx.arch.core:core-testing:${Versions.coreTesting}"
    const val testExt = "androidx.test.ext:junit:${Versions.testExt}"
    const val uiAutomator = "androidx.test.uiautomator:uiautomator:${Versions.uiAutomator}"
    const val turbine = "app.cash.turbine:turbine:${Versions.turbine}"
    const val hamcrestCore = "org.hamcrest:hamcrest-core:${Versions.hamcrest}"
    const val hamcrestIntegration = "org.hamcrest:hamcrest-integration:${Versions.hamcrest}"
    const val hamcrestLibrary = "org.hamcrest:hamcrest-library:${Versions.hamcrest}"

    // endregion.

    // region Play Services.
    const val playServicesBase = "com.google.android.gms:play-services-base:${Versions.playServicesBase}"
    const val playServicesAuth = "com.google.android.gms:play-services-auth:${Versions.playServicesAuth}"
    const val playServicesAds = "com.google.android.gms:play-services-ads:${Versions.playServicesAds}"
    const val playServicesMeasurement =
        "com.google.android.gms:play-services-measurement:${Versions.playServicesMeasurement}"
    const val playServicesMaps = "com.google.android.gms:play-services-maps:${Versions.playServicesMaps}"
    const val playServicesAdsIdentifier =
        "com.google.android.gms:play-services-ads-identifier:${Versions.playServicesAdsIdentifier}"
    const val mapsKtx = "com.google.maps.android:maps-ktx:${Versions.mapsKtx}"
    const val mapsUtils = "com.google.maps.android:android-maps-utils:${Versions.mapsUtils}"
    const val mapsUtilsKtx = "com.google.maps.android:maps-utils-ktx:${Versions.mapsKtx}"
    const val playCore = "com.google.android.play:core:${Versions.playCore}"
    // endregion.

    // region Firebase.
    const val firebaseBom = "com.google.firebase:firebase-bom:${Versions.firebaseBom}"
    const val firebaseMessaging = "com.google.firebase:firebase-messaging"
    const val firebaseCrashlytics = "com.google.firebase:firebase-crashlytics-ktx"
    const val firebaseAnalytics = "com.google.firebase:firebase-analytics-ktx"
    const val firebaseIid = "com.google.firebase:firebase-iid"
    const val firebaseAppIndexing = "com.google.firebase:firebase-appindexing"
    // endregion.

    // region database
    const val realm = "io.realm.kotlin:library-base:${Versions.realm}"
    // endregion.

    // region Compose.
    const val composeUi = "androidx.compose.ui:ui:${Versions.compose}"
    const val composeUiTooling = "androidx.compose.ui:ui-tooling:${Versions.compose}"
    const val composeRuntime = "androidx.compose.runtime:runtime:${Versions.compose}"
    const val composeDesign = "androidx.compose.material:material:${Versions.compose}"
    const val composeDesignIcons = "androidx.compose.material:material-icons-core:${Versions.compose}"
    const val composeDesignIconsExtended = "androidx.compose.material:material-icons-extended:${Versions.compose}"
    const val composeActivity = "androidx.activity:activity-compose:${Versions.composeActivity}"
    const val composeViewModel = "androidx.lifecycle:lifecycle-viewmodel-compose:${Versions.composeViewModel}"
    const val composeLiveData = "androidx.compose.runtime:runtime-livedata:${Versions.compose}"
    // endregion.

    // region AndroidX Libs.
    const val supportPreferences = "androidx.preference:preference-ktx:${Versions.preferenceKtx}"
    const val appcompat = "androidx.appcompat:appcompat:${Versions.appCompat}"
    const val cardview = "androidx.cardview:cardview:${Versions.cardView}"
    const val design = "com.google.android.material:material:${Versions.material}"
    const val constraintLayout = "androidx.constraintlayout:constraintlayout:${Versions.constraintLayout}"
    const val supportGridLayout = "androidx.gridlayout:gridlayout:${Versions.gridLayout}"
    const val recyclerView = "androidx.recyclerview:recyclerview:${Versions.recyclerView}"
    const val customTabs = "androidx.browser:browser:${Versions.browser}"
    const val biometrics = "androidx.biometric:biometric:${Versions.biometric}"
    const val securityCrypto = "androidx.security:security-crypto:${Versions.securityCrypto}"
    const val paging = "androidx.paging:paging-runtime:${Versions.paging}"
    const val workManager = "androidx.work:work-runtime-ktx:${Versions.workManager}"
    // endregion.

    // region Android Jetpack.
    const val lifecycleCommonJava8 = "androidx.lifecycle:lifecycle-common-java8:${Versions.archLifecycle}"
    const val lifecycleViewModel = "androidx.lifecycle:lifecycle-viewmodel-ktx:${Versions.archLifecycle}"
    const val lifecycleLiveData = "androidx.lifecycle:lifecycle-livedata-ktx:${Versions.archLifecycle}"
    const val lifecycleViewModelSavedState =
        "androidx.lifecycle:lifecycle-viewmodel-savedstate:${Versions.archLifecycle}"
    const val navigationFragmentKtx = "androidx.navigation:navigation-fragment-ktx:${Versions.navComponent}"
    const val navigationUiKtx = "androidx.navigation:navigation-ui-ktx:${Versions.navComponent}"
    // endregion.

    const val okHttpLogger = "com.squareup.okhttp3:logging-interceptor:${Versions.okhttp}"
    // endregion.

    // region Analytics.
    const val segment = "com.segment.analytics.android:analytics:${Versions.segment}"
    const val blueshift = "com.blueshift:android-sdk-x:${Versions.blueshift}"
    const val branch = "io.branch.sdk.android:library:${Versions.branch}"
    // endregion.

    // region CMT.
    const val cmt = "com.cmtelematics.sdk:model:${Versions.cmt}"
    const val trustKit = "com.datatheorem.android.trustkit:trustkit:${Versions.trustKit}"
    // endregion.

    // region Misc.
    const val coil = "io.coil-kt:coil:${Versions.coil}"
    const val coilCompose = "io.coil-kt:coil-compose:${Versions.coil}"
    const val coilSvg = "io.coil-kt:coil-svg:${Versions.coil}"
    const val leakCanary = "com.squareup.leakcanary:leakcanary-android:${Versions.leakCanary}"
    const val flipper = "com.facebook.flipper:flipper:${Versions.flipper}"
    const val flipperNetworkPlugin = "com.facebook.flipper:flipper-network-plugin:${Versions.flipper}"
    const val soloader = "com.facebook.soloader:soloader:${Versions.soloader}"
    const val ktlint = "com.pinterest:ktlint:${Versions.ktlint}"
    const val ktlintCore = "com.pinterest.ktlint:ktlint-core:${Versions.ktlint}"
    const val ktlintTest = "com.pinterest.ktlint:ktlint-test:${Versions.ktlint}"
    const val lottie = "com.airbnb.android:lottie:${Versions.lottie}"
    const val pagerIndicator = "com.tbuonomo.andrui:viewpagerdotsindicator:4.1.2"
    const val markwon = "io.noties.markwon:core:${Versions.markwon}"
    // endregion.

    const val mokoResources = "dev.icerock.moko:resources:${Versions.mokoResources}"
    const val koinCore = "io.insert-koin:koin-core:${Versions.koin}"
    const val koinTest = "io.insert-koin:koin-test:${Versions.koin}"
    const val koinAndroid = "io.insert-koin:koin-android:${Versions.koin}"
    const val koinAndroidWorkManager = "io.insert-koin:koin-androidx-workmanager:${Versions.koin}"
    const val multiplatformSettings = "com.russhwolf:multiplatform-settings:${Versions.multiplatformSettings}"
    const val multiplatformSettingsTest = "com.russhwolf:multiplatform-settings-test:${Versions.multiplatformSettings}"
    const val kermitLogger = "co.touchlab:kermit:${Versions.kermit}"
    const val buildKonfigPluginClasspath =
        "com.codingfeline.buildkonfig:buildkonfig-gradle-plugin:${Versions.buildKonfig}"
    const val ktorCore = "io.ktor:ktor-client-core:${Versions.ktor}"
    const val ktorSerialization = "io.ktor:ktor-client-serialization:${Versions.ktor}"
    const val ktorLogging = "io.ktor:ktor-client-logging:${Versions.ktor}"
    const val ktorIos = "io.ktor:ktor-client-darwin:${Versions.ktor}"
    const val ktorAndroidOkhttp = "io.ktor:ktor-client-okhttp:${Versions.ktor}"
    const val ktorClientMock = "io.ktor:ktor-client-mock:${Versions.ktor}"
    const val ktorClientAuth = "io.ktor:ktor-client-auth:${Versions.ktor}"
    const val ktorClientContentNegation = "io.ktor:ktor-client-content-negotiation:${Versions.ktor}"
    const val ktorSerializationKotlinxJson = "io.ktor:ktor-serialization-kotlinx-json:${Versions.ktor}"
    const val crashkios = "co.touchlab:crashkios:${Versions.crashkios}"
}
