using System.IO;
using UnrealBuildTool;

public class Flecs: ModuleRules
{
    public Flecs(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "flecs", "include"));

		////The path for the header files
		//PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
		////The path for the source files
		//PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private"));

		//Important part because UBT has no idea what 'flecs_EXPORTS' is
		AppendStringToPublicDefinition("flecs_EXPORTS", "0");
	}
}