import com.uj.core.viewmodel.BaseViewData

sealed class DashboardViewData : BaseViewData() {
    object Empty: DashboardViewData()

    data class Data(
        val daysRemainingInYear: String,
    ) : DashboardViewData()
}
