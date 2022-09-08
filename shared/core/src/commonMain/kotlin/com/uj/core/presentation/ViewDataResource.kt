
import com.getdrivescore.common.core.domain.Resource
import com.getdrivescore.common.core.utils.exhaustive
import com.uj.core.viewmodel.BaseViewData

suspend fun <DomainData, ViewData> Resource<DomainData>.toViewDataResource(
    mapper: suspend (DomainData) -> ViewData,
    onError: ((errorData: Resource.Error<DomainData>?) -> ViewData?)? = null
): ViewDataResource<ViewData> {
    return when (this) {
        is Resource.Error -> {
            val errorViewData = onError?.invoke(this)
            ViewDataResource.Error(errorViewData)
        }
        is Resource.Loading -> {
            ViewDataResource.Loading()
        }
        is Resource.Success -> {
            if (this.data == null || (this.data as? Collection<*>)?.isEmpty() == true) {
                ViewDataResource.Empty()
            } else {
                runCatching {
                    val mappedViewData = mapper(this.data!!)
                    ViewDataResource.Data(mappedViewData)
                }.getOrElse {
                    val mappingErrorViewData = onError?.invoke(null)
                    ViewDataResource.Error(mappingErrorViewData)
                }
            }
        }
    }.exhaustive
}

sealed class ViewDataResource<T> : BaseViewData() {
    class Loading<T> : ViewDataResource<T>()
    class Empty<T> : ViewDataResource<T>()
    data class Data<T>(val viewData: T) : ViewDataResource<T>()
    data class Error<T>(val errorViewData: T? = null) : ViewDataResource<T>()
}

interface ViewDataResourceObserver<ViewData> {
    suspend fun onData(viewData: ViewData)
    suspend fun onEmpty()
    suspend fun onLoading()
    suspend fun onError(errorViewData: ViewData?)
}
