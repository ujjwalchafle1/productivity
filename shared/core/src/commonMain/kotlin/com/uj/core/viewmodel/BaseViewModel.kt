
import com.uj.core.viewmodel.BaseViewData
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.flow.StateFlow

@Suppress("EmptyDefaultConstructor")
expect abstract class BaseViewModel<ViewData : BaseViewData>() {
    abstract val viewData: StateFlow<ViewData>?

    var testScope: CoroutineScope?
    val scope: CoroutineScope
    val backgroundScope: CoroutineScope
    protected open fun onCleared()
}
