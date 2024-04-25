// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "C:\Users\felip\OneDrive\Documents\Unreal Projects\TechnicalAudioDemo_1\Plugins\Wwise\Source\AkAudio\Classes\AkGameplayStatics.h"
#include "Components/ActorComponent.h"
#include "Wwise_PlayStopEvent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TECHNICALAUDIODEMO_1_API UWwise_PlayStopEvent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWwise_PlayStopEvent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere)
	class UAkAudioEvent* select_PlayEvent;

	UPROPERTY(EditAnywhere)
	class UAkAudioEvent* select_StopEvent;

	UPROPERTY(EditAnywhere)
	class UAkSwitchValue* select_Switch;

	UPROPERTY(EditAnywhere)
	class UAkGroupValue* switch_Group;

	UPROPERTY(EditAnywhere)
	class UAkRtpc* select_RTPC;

	float RTPC_Update_Value;

	float RTPC_Interp_Time;


	//FName select_Switch_Group;
	//FName select_switch_Name;



	int32 select_eventID;	// Reference to Wwise post_event function from UAkGampeplayStatics
	UFUNCTION(BlueprintCallable)
	void PlaySelectedEvent();
	UFUNCTION(BlueprintCallable)
	void StopSelectedEvent();
	UFUNCTION(BlueprintCallable)
	void setSelectedSwitch(const UAkSwitchValue* DefaultAkSwitchValue);
	UFUNCTION(BlueprintCallable)
	void setSelectedRTPC(UAkRtpc* DefaultRTPCValue, float Value, int32 InterpolationTimeMs);

	UFUNCTION(BlueprintCallable)
	void AllInOneFunction(UAkAudioEvent* play_thisevent, const UAkSwitchValue* DefaultAkSwitchValue,
		UAkRtpc* DefaultRTPCValue, float Value, int32 InterpolationTimeMs);

		
};
