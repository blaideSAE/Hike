// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Hike : ModuleRules
{
	public Hike(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
