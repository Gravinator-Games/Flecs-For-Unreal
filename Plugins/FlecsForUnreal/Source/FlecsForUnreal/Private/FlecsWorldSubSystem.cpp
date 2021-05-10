// Copyright Gravinator Games. All Rights Reserved.

#include "FlecsWorldSubSystem.h"
#include "FlecsForUnreal.h"

void UFlecsWorldSubSystem::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOG(LogFlecsSystem, Log, TEXT("Initialized FlecsWorldSubSystem."))
}

void UFlecsWorldSubSystem::Deinitialize()
{
	//for (FSystem* System : Systems)
	//{
	//	delete System;
	//}
	
	UE_LOG(LogFlecsSystem, Log, TEXT("Deinitialized FlecsWorldSubSystem."))
}

bool UFlecsWorldSubSystem::ShouldCreateSubsystem(UObject* Outer) const
{
	return Super::ShouldCreateSubsystem(Outer);
}

bool UFlecsWorldSubSystem::DoesSupportWorldType(const EWorldType::Type WorldType) const
{
	return WorldType == EWorldType::Game || WorldType == EWorldType::PIE;
}

//void UFlecsWorldSubSystem::InitializeSystems()
//{
//	for (FSystem* System : Systems)
//	{
//		System->Initialize();
//	}
//}
//
//void UFlecsWorldSubSystem::UpdateSystems(const float DeltaTime)
//{
//	SCOPE_CYCLE_COUNTER(STAT_TotalUpdate)
//
//	for (FSystem* System : Systems)
//	{
//		System->Update(Registry, DeltaTime);
//	}
//}
//
//void UFlecsWorldSubSystem::RegisterSystem(FSystem* NewSystem, const FString Name)
//{
//	Systems.push_back(NewSystem);
//	NamedSystems[Name] = NewSystem;
//}
//
//FSystem* UFlecsWorldSubSystem::GetSystem(const FString Name)
//{
//	return NamedSystems[Name];
//}
//
//void UFlecsWorldSubSystem::UpdateSystem(const FString Name, const float DeltaTime)
//{
//	GetSystem(Name)->Update(Registry, DeltaTime);
//}
//
//EEntity UFlecsWorldSubSystem::NewEntity()
//{
//	return Registry.create();
//}
//
//void UFlecsWorldSubSystem::DestroyEntity(const EEntity Entity)
//{
//	Registry.destroy(Entity);
//}
