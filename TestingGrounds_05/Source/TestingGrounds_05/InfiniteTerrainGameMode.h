// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TestingGrounds_05GameMode.h"
#include "InfiniteTerrainGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TESTINGGROUNDS_05_API AInfiniteTerrainGameMode : public ATestingGrounds_05GameMode
{
	GENERATED_BODY()
	
public:

	AInfiniteTerrainGameMode();

	UFUNCTION(BLueprintcallable, Category = "Bounds pool")
	void PopulateBoundsVolumePool();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pool")
	class UActorPool * NavMeshBoundsVolumePool;
private:
	void AddToPool(class ANavMeshBoundsVolume * VolumeToAdd);

};
