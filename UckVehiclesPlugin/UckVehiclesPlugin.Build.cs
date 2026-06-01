// Some copyright should be here...

using UnrealBuildTool;

public class UckVehiclesPlugin : ModuleRules
{
	public UckVehiclesPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				"VehicleTemplate",
				"VehicleTemplate/SportsCar",
				"VehicleTemplate/OffroadCar",
				"VehicleTemplate/Variant_Offroad",
				"VehicleTemplate/Variant_TimeTrial",
				"VehicleTemplate/Variant_TimeTrial/UI"
            }
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "ChaosVehicles",
				"PhysicsCore"
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore"
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
