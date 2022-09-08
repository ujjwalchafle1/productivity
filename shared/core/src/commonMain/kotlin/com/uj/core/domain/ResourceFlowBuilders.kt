package com.getdrivescore.common.core.domain

import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.catch
import kotlinx.coroutines.flow.flow

inline fun <DBEntity, DTO, Data> networkBoundResource(
    crossinline fetchFromLocal: suspend () -> DBEntity?,
    crossinline shouldFetchFromRemote: (DBEntity?) -> Boolean = { true },
    crossinline fetchFromRemote: suspend () -> DTO,
    crossinline saveRemoteData: suspend (DBEntity) -> Unit = { },
    crossinline onFetchFailed: (Throwable) -> Unit = { },
    persistedRepositoryMapper: PersistedRepositoryMapper<DTO, DBEntity, Data>,
) = flow<Resource<Data>> {
    emit(Resource.Loading())
    val localData = fetchFromLocal()

    if (shouldFetchFromRemote(localData)) {
        fetchFromRemote().let(persistedRepositoryMapper::dtoToEntity).also {
            saveRemoteData(it)
            emit(Resource.Success(persistedRepositoryMapper.entityToData(it)))
        }
    } else {
        localData?.let {
            emit(Resource.Success(persistedRepositoryMapper.entityToData(it)))
        }
    }
}.catch {
    onFetchFailed(it)
    emit(Resource.Error(it))
}

inline fun <DTO, Data> remoteResource(
    crossinline fetchFromRemote: suspend () -> DTO?,
    repositoryMapper: RepositoryMapper<DTO, Data>,
): Flow<Resource<Data>> = flow {
    emit(Resource.Loading<Data>())

    val mappedData = fetchFromRemote()?.let(repositoryMapper::dtoToData)
    emit(Resource.Success(mappedData))
}.catch { emit(Resource.Error(it)) }
