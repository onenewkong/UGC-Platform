// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyPlayer.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PlayerBaseComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYVOX_API UPlayerBaseComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerBaseComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	virtual void SetupInputBinding(class UInputComponent* PlayerInputComponent){};

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UPROPERTY()
	AMyPlayer* me;
	UPROPERTY()
	UCharacterMovementComponent* moveComp;
		
};
