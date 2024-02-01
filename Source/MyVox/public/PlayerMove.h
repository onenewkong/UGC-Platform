// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerBaseComponent.h"
#include "PlayerMove.generated.h"

/**
 * 
 */
UCLASS()
class MYVOX_API UPlayerMove : public UPlayerBaseComponent
{
	GENERATED_BODY()
	
public:
	void Turn(float value);
	void LookUp(float value);

	virtual void SetupInputBinding(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(EditAnywhere, Category = PlayerSetting)
	float walkSpeed = 300;
	FVector direction;

	void InputHorizontal(float value);
	void InputVertical(float value);

	void InputJump();
	void Move();

public:
	UPlayerMove();

	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
