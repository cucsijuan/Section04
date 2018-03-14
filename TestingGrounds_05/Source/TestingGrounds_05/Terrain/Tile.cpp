// Fill out your copyright notice in the Description page of Project Settings.

#include "Tile.h"
#include "Public/Math/UnrealMathUtility.h"
#include "Engine/World.h"
#include "Public/WorldCollision.h"
#include "GameFramework/Actor.h"
#include "AI/Navigation/NavigationSystem.h"
#include "ActorPool.h"
#include "DrawDebugHelpers.h"

// Sets default values
ATile::ATile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	NavigationBoundsOffset = FVector(2000, 0, 0);

	MinExtent = FVector(0, -2000, 0);
	MaxExtent = FVector(4000, 2000, 0);
}

void ATile::SetPool(UActorPool * InPool)
{
	UE_LOG(LogTemp, Warning, TEXT("[%s]Setting pool: %s"), *(this->GetName()),*(InPool->GetName()))
	Pool = InPool;
	PositionNavMeshBoundsVolume();
}

void ATile::PositionNavMeshBoundsVolume()
{
	NavMeshBoundsvolume = Pool->Checkout();
	if (NavMeshBoundsvolume == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("[%s] Not enough actors in pool."), *GetName())
		return;
	}
	UE_LOG(LogTemp, Warning, TEXT("[%s] Checked out: {%s}"),*GetName(),*NavMeshBoundsvolume->GetName())
	NavMeshBoundsvolume->SetActorLocation(GetActorLocation());
	GetWorld()->GetNavigationSystem()->Build();
}

// Called when the game starts or when spawned
void ATile::BeginPlay()
{
	Super::BeginPlay();
}

void ATile::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Pool->Return(NavMeshBoundsvolume);
}

// Called every frame
void ATile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ATile::CanSpawnAtLocation(FVector Location, float Radius)
{
	FHitResult HitResult;
	FVector GlobalLocation = ActorToWorld().TransformPosition(Location);
	bool HasHit = GetWorld()->SweepSingleByChannel(
		HitResult,
		GlobalLocation,
		GlobalLocation,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel2,
		FCollisionShape::MakeSphere(Radius)
	);
	FColor ResultColor = HasHit?FColor::Red : FColor::Green;
	//DrawDebugCapsule(GetWorld(), GlobalLocation,0, Radius, FQuat::Identity, ResultColor, true, 100);
	return !HasHit;
}

void ATile::PlaceActors(TSubclassOf<AActor> ToSpawn, int32 MinSpawn, int32 MaxSpawn,float Radius,float MinScale, float MaxScale)
{
	int32 NumberToSpawn = FMath::RandRange(MinSpawn, MaxSpawn);
	for (size_t i = 0; i < NumberToSpawn; i++)
	{
		FVector SpawnPoint;
		float RandomScale = FMath::RandRange(MinScale, MaxScale);
		bool Found = FindEmptyLocation(SpawnPoint,Radius * RandomScale);
		if (Found)
		{
			float RandomRotation = FMath::RandRange(-180.f, 180.f);
			PlaceActor(ToSpawn, SpawnPoint, RandomRotation,RandomScale);
		}
	}
}

bool ATile::FindEmptyLocation(FVector & OutLocation, float Radius)
{
	
	FBox Bounds(MinExtent, MaxExtent);
	const int32 MAX_ATTEMPTS = 100;
	for (size_t i = 0; i < MAX_ATTEMPTS; i++)
	{
		FVector CandidatePoint = FMath::RandPointInBox(Bounds);
		if (CanSpawnAtLocation(CandidatePoint,Radius))
		{
			OutLocation = CandidatePoint;
			return true;
		}
	}
	return false;
}

void ATile::PlaceActor(TSubclassOf<AActor> ToSpawn, FVector SpawnPoint, float Rotation, float Scale)
{
	AActor * Spawned = GetWorld()->SpawnActor<AActor>(ToSpawn);
	Spawned->SetActorRelativeLocation(SpawnPoint);
	Spawned->AttachToActor(this, 
		FAttachmentTransformRules(EAttachmentRule::KeepRelative,false));
	Spawned->SetActorRotation(FRotator(0, Rotation, 0));
	Spawned->SetActorScale3D(FVector(Scale));
}

