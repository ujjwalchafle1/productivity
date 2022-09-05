
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.uj.core.viewmodel.BaseViewData
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.plus

actual abstract class BaseViewModel<ViewData : BaseViewData> : ViewModel() {

    actual var testScope: CoroutineScope? = null
    actual val scope: CoroutineScope
        get() = testScope ?: viewModelScope
    actual val backgroundScope: CoroutineScope
        get() = testScope ?: (scope + Dispatchers.Default)

    actual abstract val viewData: StateFlow<ViewData>?

    actual override fun onCleared() {
        super.onCleared()
    }
}
