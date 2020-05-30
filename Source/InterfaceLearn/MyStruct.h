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
ö�ٶ��壬����̳���uint8��MyPlayerState����
�������ȡ����enum������֮�����class���Σ�
ö�ٳ�Ա����һ�����:E_XXX 
UMETA(DisplayName = "Idle")��Ϊ������ͼ����ʾ���Ѻ�
*/
UENUM(BlueprintType)
enum class MyPlayerState : uint8
{
    E_Idle UMETA(DisplayName = "Idle"),
    E_Run UMETA(DisplayName = "Run"),
    E_Attack UMETA(DisplayName = "Attack")
};
