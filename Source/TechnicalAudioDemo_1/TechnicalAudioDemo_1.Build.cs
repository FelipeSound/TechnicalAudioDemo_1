// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TechnicalAudioDemo_1 : ModuleRules
{
	public TechnicalAudioDemo_1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "AkAudio" });
	}
}
