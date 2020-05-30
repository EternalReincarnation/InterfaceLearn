// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyStruct.generated.h"
/**
 * 
 */
USTRUCT(BlueprintType)
struct  FMyStruct
{
    GENERATED_BODY()
public:
    FMyStruct();
protected:
    UPROPERTY(VisibleAnywhere,BlueprintReadWrite)
    FName name;

    UPROPERTY(VisibleAnywhere,BlueprintReadWrite)
    int32 id;
public:
    FName GetName();
    int32 GetId();
    void SetName(FName name);
    void SetId(int32 id);
};

/*
枚举定义，必须继承自uint8，MyPlayerState名字
可以随便取，在enum和名字之间加上class修饰，
枚举成员命名一般规则:E_XXX 
UMETA(DisplayName = "Idle")是为了在蓝图中显示更友好
*/
UENUM(BlueprintType)
enum class MyPlayerState : uint8
{
    E_Idle UMETA(DisplayName = "Idle"),
    E_Run UMETA(DisplayName = "Run"),
    E_Attack UMETA(DisplayName = "Attack")
};
