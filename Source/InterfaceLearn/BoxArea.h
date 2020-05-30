// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyInterface.h"
#include "BoxArea.generated.h"

UCLASS()
class INTERFACELEARN_API ABoxArea : public AActor,public IMyInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoxArea();

	void SpawnTheActorBall_Implementation(bool isEnter);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> ball;
};
	

