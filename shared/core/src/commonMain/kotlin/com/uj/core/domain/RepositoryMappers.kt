package com.getdrivescore.common.core.domain

interface PersistedRepositoryMapper<in DTO, Entity, out Data> {

    fun dtoToEntity(dto: DTO): Entity

    fun entityToData(entity: Entity): Data
}

interface RepositoryMapper<in DTO, out Data> {

    fun dtoToData(dto: DTO): Data
}
