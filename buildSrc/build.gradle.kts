import org.jetbrains.kotlin.gradle.tasks.KotlinCompile

plugins {
    kotlin("jvm") version System.getProperty("kotlinVersion", "1.7.0")
    `java-gradle-plugin`
}

repositories {
    google()
    mavenCentral()
    gradlePluginPortal()
}

gradlePlugin {
    plugins {
        create("DsConfigurationPlugin") {
            id = "ds-plugin"
            implementationClass = "com.getdrivescore.build.DsConfigurationPlugin"
        }
        create("DsMultiplatformPlugin") {
            id = "ds-kmm-plugin"
            implementationClass = "com.getdrivescore.build.DsMultiplatformPlugin"
        }
    }
}

sourceSets {
    main.configure {
        java.srcDir(project.file("$buildDir/generated/sources/version-templates/kotlin/main"))
    }
}

val copyVersionTemplatesProvider = tasks.register<Copy>("copyVersionTemplates") {
    val templatesMap = SharedBuildVersions.asTemplatesMap()
    inputs.property("buildversions", templatesMap.hashCode())
    from(layout.projectDirectory.dir("version-templates"))
    into(project.layout.buildDirectory.dir("generated/sources/version-templates/kotlin/main"))
    expand(templatesMap)
    filteringCharset = "UTF-8"
}

tasks.withType<KotlinCompile>().configureEach {
    dependsOn(copyVersionTemplatesProvider)
}

object SharedBuildVersions {
    const val agp = "7.2.1"

    val kotlin = System.getProperty("kotlinVersion", "1.7.0")
    private const val kotlinSerialization = "1.3.3"

    fun asTemplatesMap(): Map<String, String> {
        return mapOf(
            "agpVersion" to agp,
            "kotlinVersion" to kotlin,
            "kotlinSerialization" to kotlinSerialization,
        )
    }
}

dependencies {
    implementation("org.jetbrains.kotlin:kotlin-gradle-plugin:${SharedBuildVersions.kotlin}")
    implementation("com.android.tools.build:gradle:7.2.2")
}
