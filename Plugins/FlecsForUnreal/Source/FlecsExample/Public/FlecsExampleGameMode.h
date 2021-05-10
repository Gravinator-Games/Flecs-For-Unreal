#pragma once

#include "FlecsGameMode.h"
#include "FlecsExampleGameMode.generated.h"

UCLASS()
class FLECSEXAMPLE_API AFlecsExampleGameMode : public AFlecsGameMode
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFlecsExampleGameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
