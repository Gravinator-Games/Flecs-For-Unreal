// Copyright Gravinator Games. All Rights Reserved.

#include "FlecsGameMode.h"
#include "FlecsWorldSubSystem.h"

// Sets default values
AFlecsGameMode::AFlecsGameMode()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFlecsGameMode::BeginPlay()
{
	Super::BeginPlay();

	FlecsWorld = GetWorld()->GetSubsystem<UFlecsWorldSubSystem>();
}

// Called every frame
void AFlecsGameMode::Tick(const float DeltaTime)
{
	Super::Tick(DeltaTime);
}
