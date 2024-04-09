// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DarkColosus3d : ModuleRules
{
	public DarkColosus3d(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
