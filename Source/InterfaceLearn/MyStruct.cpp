// Fill out your copyright notice in the Description page of Project Settings.


#include "MyStruct.h"

FMyStruct::FMyStruct()
{
	name = TEXT("LZH");
	id = 10;
}

FName FMyStruct::GetName()
{
	return name;
}

int32 FMyStruct::GetId()
{
	return id;
}

void FMyStruct::SetName(FName name)
{
	this->name = name;
}

void FMyStruct::SetId(int32 id)
{
	this->id = id;
}
