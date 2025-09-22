// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PJTask6 : ModuleRules
{
	public PJTask6(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
