// Copyright Gravinator Games. All Rights Reserved.

#pragma once

#include "GameFramework/GameMode.h"
#include "FlecsGameMode.generated.h"

class UFlecsWorldSubSystem;

UCLASS()
class FLECSFORUNREAL_API AFlecsGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AFlecsGameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
	UFlecsWorldSubSystem* FlecsWorld;
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
