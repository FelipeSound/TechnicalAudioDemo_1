// Fill out your copyright notice in the Description page of Project Settings.


#include "Wwise_RealTime_RTPC.h"

// Sets default values for this component's properties
UWwise_RealTime_RTPC::UWwise_RealTime_RTPC()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWwise_RealTime_RTPC::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWwise_RealTime_RTPC::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("This is an on screen message!"));

		UAkGameplayStatics::SetRTPCValue(RTPCname, updateValue, int32(0), NULL, "");
	//RTPC_updateValue;

	// ...

	
}

/*
void UWwise_RealTime_RTPC::rtimeRTPC(UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs)
{
	//FOnAkPostEventCallback nullCallback;

	//SetRTPCValue(class UAkRtpc const* RTPCValue, float Value, int32 InterpolationTimeMs, class AActor* Actor, FName RTPC);
	//UAkGameplayStatics::SetRTPCValue(RTPCname, updateValue, int32(0), NULL, "");
	
	// ...
}
*/
