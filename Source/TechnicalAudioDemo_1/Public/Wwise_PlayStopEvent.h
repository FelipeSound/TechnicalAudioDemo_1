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

	int32 select_eventID;	// Reference to Wwise post_event function from UAkGampeplayStatics
	UFUNCTION(BlueprintCallable)
	void PlaySelectedEvent();
	UFUNCTION(BlueprintCallable)
	void StopSelectedEvent();
		
};
