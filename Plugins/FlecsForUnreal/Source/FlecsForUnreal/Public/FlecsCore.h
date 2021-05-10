// Copyright Gravinator Games. All Rights Reserved.

#pragma once

//#include "ThirdParty/Flecs/Public/flecs.h"
#include "FlecsCore.generated.h"

// Flecs bridge in UE4 style

DECLARE_STATS_GROUP(TEXT("Flecs"), STATGROUP_Flecs, STATCAT_Advanced);
DECLARE_CYCLE_STAT(TEXT("Flecs: Total System Update"), STAT_TotalUpdate, STATGROUP_Flecs);

USTRUCT()
struct FSystem
{
	GENERATED_BODY()

	UPROPERTY()
	FString Name;

	virtual ~FSystem() = default;
	virtual void Initialize() {};
	virtual void Update(float DeltaTime) {};
};
