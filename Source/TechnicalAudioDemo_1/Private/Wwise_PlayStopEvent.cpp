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
/*
void UWwise_PlayStopEvent::setSelectedSwitch()
{
	FOnAkPostEventCallback nullCallback;

	UAkGameplayStatics::SetSwitch(select_Switch, GetOwner(), select_Switch_Group , select_switch_Name);

}
void UWwise_PlayStopEvent::setSelectedRTPC()
{
	FOnAkPostEventCallback nullCallback;
	SetRTPCValue(class UAkRtpc const* RTPCValue, float Value, int32 InterpolationTimeMs, GetOwner, FName RTPC);

}
*/