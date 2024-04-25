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
	
	

	/**
	* 
* Sets the value of a Game Parameter, optionally targeting the root component of a specified actor.
* @param RTPC - The name of the Game Parameter to set
* @param Value - The value of the Game Parameter
* @param InterpolationTimeMs - Duration during which the Game Parameter is interpolated towards Value (in ms)
* @param Actor - (Optional) Actor on which to set the Game Parameter value
*/

	//UPROPERTY(EditAnywhere)
	//UAkRtpc* updateValue;

	//UFUNCTION(BlueprintCallable)
	//void rtimeRTPC(UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs);

	UPROPERTY(EditAnywhere)
	UAkRtpc* RTPCname;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float updateValue;

	
	//UFUNCTION(BlueprintPure, Category = "RTPC updating")
	//UPARAM(DisplayName = "RTPC_values") float RTPC_updateValue;
		
		

		
};
