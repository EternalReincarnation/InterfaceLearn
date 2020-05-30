// Fill out your copyright notice in the Description page of Project Settings.


#include "BoxArea.h"
#include "Engine.h"

// Sets default values
ABoxArea::ABoxArea()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

void ABoxArea::SpawnTheActorBall_Implementation(bool isEnter)
{
	GetWorld()->SpawnActor<AActor>(ball,this->GetTransform());
}


