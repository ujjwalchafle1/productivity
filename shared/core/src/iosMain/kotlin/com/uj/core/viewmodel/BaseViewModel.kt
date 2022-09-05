
import com.uj.core.viewmodel.BaseViewData
import kotlinx.coroutines.*
import kotlinx.coroutines.flow.*

actual abstract class BaseViewModel<ViewData : BaseViewData> {

    private val viewModelJob = SupervisorJob()
    private val viewModelScope: CoroutineScope = CoroutineScope(
        Dispatchers.Main + viewModelJob
    )

    actual var testScope: CoroutineScope? = null
    actual val scope: CoroutineScope
        get() = testScope ?: viewModelScope
    actual val backgroundScope: CoroutineScope
        get() = testScope ?: (scope + Dispatchers.Default)

    actual abstract val viewData: StateFlow<ViewData>?

    protected actual open fun onCleared() {
        viewModelJob.cancelChildren()
    }

    fun observeViewData(onViewData: (ViewData) -> Unit) {
        viewData
            ?.onEach { onViewData(it) }
            ?.launchIn(viewModelScope)
    }

//    fun observeViewEvent(onViewEvent: (ViewEvent) -> Unit) {
//        viewEvent?.map { it.consume() }
//            ?.filterNotNull()
//            ?.onEach { onViewEvent(it) }
//            ?.launchIn(viewModelScope)
//    }
}
