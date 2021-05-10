
#include "FlecsExampleGameMode.h"

#include "FlecsSystems.h"
#include "FlecsWorldSubSystem.h"

// Sets default values
AFlecsExampleGameMode::AFlecsExampleGameMode()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFlecsExampleGameMode::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AFlecsExampleGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
