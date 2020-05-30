// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interface.h"
#include "MyInterface.generated.h"
/**
 * 
 */
UINTERFACE(BlueprintType)
class UMyInterface:public UInterface
{
    GENERATED_BODY()
};

class IMyInterface
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnTheActorBall(bool isEnter);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnActor_Imp(bool isEnter);
};
