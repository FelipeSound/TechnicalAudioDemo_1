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


void UWwise_PlayStopEvent::PlaySelectedEvent()
{
	FOnAkPostEventCallback nullCallback;

	UAkGameplayStatics::PostEvent(select_PlayEvent, GetOwner(), int32(0), nullCallback);
}
void UWwise_PlayStopEvent::StopSelectedEvent()
{
	FOnAkPostEventCallback nullCallback;

	UAkGameplayStatics::PostEvent(select_StopEvent, GetOwner(), int32(0), nullCallback);

}
/**
 * Sets the active Switch for a given Switch Group, targeting the root component of a specified actor.
 * @param SwitchGroup - Name of the Switch Group to be modified
 * @param SwitchState - Name of the Switch to be made active
 * @param Actor - Actor on which to set the switch
 */
void UWwise_PlayStopEvent::setSelectedSwitch(const UAkSwitchValue* DefaultAkSwitchValue)
{
	
}

void UWwise_PlayStopEvent::setSelectedRTPC(UAkRtpc* DefaultRTPCValue, float Value, int32 InterpolationTimeMs)
{


}
