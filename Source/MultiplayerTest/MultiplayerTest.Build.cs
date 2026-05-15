// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MultiplayerTest : ModuleRules
{
	public MultiplayerTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"MultiplayerTest",
			"MultiplayerTest/Variant_Platforming",
			"MultiplayerTest/Variant_Platforming/Animation",
			"MultiplayerTest/Variant_Combat",
			"MultiplayerTest/Variant_Combat/AI",
			"MultiplayerTest/Variant_Combat/Animation",
			"MultiplayerTest/Variant_Combat/Gameplay",
			"MultiplayerTest/Variant_Combat/Interfaces",
			"MultiplayerTest/Variant_Combat/UI",
			"MultiplayerTest/Variant_SideScrolling",
			"MultiplayerTest/Variant_SideScrolling/AI",
			"MultiplayerTest/Variant_SideScrolling/Gameplay",
			"MultiplayerTest/Variant_SideScrolling/Interfaces",
			"MultiplayerTest/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
