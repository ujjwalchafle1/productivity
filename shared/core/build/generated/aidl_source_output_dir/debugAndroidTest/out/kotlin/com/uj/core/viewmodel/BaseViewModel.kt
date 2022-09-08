import com.uj.core.viewmodel.BaseViewData
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.flow.StateFlow

@Suppress("EmptyDefaultConstructor")
actual abstract class BaseViewModel<ViewData : BaseViewData> actual constructor() {
    actual abstract val viewData: StateFlow<ViewData>?
    actual var testScope: CoroutineScope?
        get() = TODO("Not yet implemented")
        set(value) {}
    actual val scope: CoroutineScope
        get() = TODO("Not yet implemented")
    actual val backgroundScope: CoroutineScope
        get() = TODO("Not yet implemented")

    protected actual open fun onCleared() {
    }

}