// Fill out your copyright notice in the Description page of Project Settings.


#include "MultySwitch.h"

// Sets default values for this component's properties
UMultySwitch::UMultySwitch()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMultySwitch::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMultySwitch::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
void UMultySwitch::setSelectedSwitch(
	const UAkSwitchValue* DefaultAkSwitchValue1, 
	const UAkSwitchValue* DefaultAkSwitchValue2, 
	const UAkSwitchValue* DefaultAkSwitchValue3, 
	const UAkSwitchValue* DefaultAkSwitchValue4)
{
	UAkGameplayStatics::SetSwitch(DefaultAkSwitchValue1, NULL, "", "");
	UAkGameplayStatics::SetSwitch(DefaultAkSwitchValue2, NULL, "", "");
	UAkGameplayStatics::SetSwitch(DefaultAkSwitchValue3, NULL, "", "");
	UAkGameplayStatics::SetSwitch(DefaultAkSwitchValue4, NULL, "", "");
}


