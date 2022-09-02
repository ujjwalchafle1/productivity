pluginManagement {
    repositories {
        google()
        gradlePluginPortal()
        mavenCentral()
    }
}

rootProject.name = "Productivity"
include(
    ":androidApp",
    ":shared",
    ":shared:dashboard"
)
include(":Notes")
include(":Dashboard")
include(":module")
