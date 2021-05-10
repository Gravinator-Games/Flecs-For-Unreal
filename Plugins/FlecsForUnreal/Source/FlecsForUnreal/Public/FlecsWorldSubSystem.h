// Copyright Gravinator Games. All Rights Reserved.

#pragma once

#include "FlecsCore.h"
#include "FlecsWorldSubSystem.generated.h"

/**
 * A world subsystem providing an interface to the Flecs framework
 */
UCLASS()
class FLECSFORUNREAL_API UFlecsWorldSubSystem final : public UWorldSubsystem
{
	GENERATED_BODY()

	// ==================================================
	// UWorldSubsystem
	// ==================================================
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;

	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

protected:
	virtual bool DoesSupportWorldType(EWorldType::Type WorldType) const override;

	// ==================================================
	// Flecs
	// ==================================================
public:
//	FRegistry* GetRegistry() { return &Registry; }
//
//	void InitializeSystems();
//
//	void UpdateSystems(float DeltaTime);
//
//	template<typename T>
//	FSystem* CreateAndRegisterSystem(FString Name);
//
//	template<typename T>
//	FSystem* CreateAndRegisterSystem();
//
//	void RegisterSystem(FSystem* NewSystem, FString Name);
//	
//	FSystem* GetSystem(FString Name);
//
//	void UpdateSystem(FString Name, float DeltaTime);
//
//	EEntity NewEntity();
//
//	void DestroyEntity(EEntity Entity);
//	
private:
//	FRegistry Registry;
//	TMap<FString, FSystem*> NamedSystems;
//	std::vector<FSystem*> Systems;
};

//template <typename T>
//FSystem* UFlecsWorldSubSystem::CreateAndRegisterSystem(const FString Name)
//{
//	FSystem* System = static_cast<FSystem*>(new T());
//
//	if (System)
//	{
//		System->Name = Name;
//		Systems.push_back(System);
//		NamedSystems.Add(Name, System);
//	}
//	return System;
//}
//
//template <typename T>
//FSystem* UFlecsWorldSubSystem::CreateAndRegisterSystem()
//{
//	FSystem* System = static_cast<FSystem*>(new T());
//
//	if (System)
//	{
//		System->Name = "Unnamed";
//		Systems.push_back(System);
//	}
//	return System;
//}

