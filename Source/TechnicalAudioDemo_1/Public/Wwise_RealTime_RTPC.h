// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AkGameplayStatics.h"
#include "Components/ActorComponent.h"
#include "Wwise_RealTime_RTPC.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TECHNICALAUDIODEMO_1_API UWwise_RealTime_RTPC : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWwise_RealTime_RTPC();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	


	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	

	UPROPERTY(EditAnywhere)
	UAkRtpc* RTPCname;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float update_RTPC_Value;

};
