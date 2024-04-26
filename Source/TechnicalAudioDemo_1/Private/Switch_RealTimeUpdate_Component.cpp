// Fill out your copyright notice in the Description page of Project Settings.


#include "Switch_RealTimeUpdate_Component.h"

// Sets default values for this component's properties
USwitch_RealTimeUpdate_Component::USwitch_RealTimeUpdate_Component()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USwitch_RealTimeUpdate_Component::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USwitch_RealTimeUpdate_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
		/**
	 * Sets the active Switch for a given Switch Group, targeting the root component of a specified actor.
	 * @param SwitchGroup - Name of the Switch Group to be modified
	 * @param SwitchState - Name of the Switch to be made active
	 * @param Actor - Actor on which to set the switch
	 */
	///UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Audiokinetic|Actor", meta = (AdvancedDisplay = "2"))
	///static void SetSwitch(class UAkSwitchValue const* SwitchValue, class AActor* Actor, FName SwitchGroup, FName SwitchState);
	UAkGameplayStatics::SetSwitch(switchName, NULL, "", "");

}

