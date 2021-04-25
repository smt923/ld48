// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ld48 : ModuleRules
{
	public ld48(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
