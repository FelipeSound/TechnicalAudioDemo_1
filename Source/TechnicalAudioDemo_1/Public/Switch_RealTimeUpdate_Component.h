// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AkGameplayStatics.h"
#include "Components/ActorComponent.h"
#include "Switch_RealTimeUpdate_Component.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TECHNICALAUDIODEMO_1_API USwitch_RealTimeUpdate_Component : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USwitch_RealTimeUpdate_Component();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	///SetSwitch(class UAkSwitchValue const* SwitchValue, class AActor* Actor, FName SwitchGroup, FName SwitchState)
			/**
	 * Sets the active Switch for a given Switch Group, targeting the root component of a specified actor.
	 * @param SwitchGroup - Name of the Switch Group to be modified
	 * @param SwitchState - Name of the Switch to be made active
	 * @param Actor - Actor on which to set the switch
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkSwitchValue const* switchName;


};
