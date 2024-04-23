// Fill out your copyright notice in the Description page of Project Settings.


#include "Wwise_PlayStopEvent.h"

// Sets default values for this component's properties
UWwise_PlayStopEvent::UWwise_PlayStopEvent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWwise_PlayStopEvent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWwise_PlayStopEvent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

