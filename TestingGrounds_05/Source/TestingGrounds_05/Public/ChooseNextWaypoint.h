// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ChooseNextWaypoint.generated.h"


/**
 * 
 */
UCLASS()
class TESTINGGROUNDS_05_API UChooseNextWaypoint : public UBTTaskNode
{
	GENERATED_BODY()
	
private:

protected:
	virtual EBTNodeResult::Type ExecuteTask(class UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	struct FBlackboardKeySelector IndexKey;
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	struct FBlackboardKeySelector WaypointKey;
};
