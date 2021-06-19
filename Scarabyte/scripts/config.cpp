class CfgPatches
{
    class DUG_Scarabyte_Scripts
    {
        units[]={
        	"LUG_Armband_Wolves"        	
        };
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DUG_Scarabyte_Skins",
			"DZ_Characters_Tops",
			"DZ_Characters",
			"DZ_Data"
        };
    };
};

class CfgMods
{
	class DUG_Scarabyte
	{
		dir = "DUG/Scarabyte";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "Scarabyte";
		credits = "Scarabyte, Jacob_Mango, Arkensor";
		creditsJson = "DUG/Scarabyte/Data/Credits.json";
		author = "Scarabyte";
		authorID = "0"; 
		version = "0.1"; 
		extra = 0;
		type = "mod";
		
		dependencies[] = { "Game", "World", "Mission" };
		
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = 
				{
					"DUG/Scarabyte/3_Game"
				};
			};
			class worldScriptModule
			{
				value = "";
				files[] = 
				{
					"DUG/Scarabyte/4_World"
				};
			};
			class missionScriptModule
			{
				value = "";
				files[] = 
				{
					"DUG/Scarabyte/5_Mission"
				};
			};
		};
	};
};

class cfgVehicles
{
	class Armband_ColorBase;
	class Armband_DUG: Armband_ColorBase
	{
		scope=0;
		visibilityModifier=0.85000002;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"camoMaleBig",
			"camoFemaleBig"
		};
	};
	class LUG_Armband_Wolves: Armband_DUG
	{
		displayName="The Wolves Armband";
		descriptionShort="Faction Armband for The Wolves on LUG.";
		scope=2;
		color="LUGArmbandWolves";
		hiddenSelectionsTextures[]=
		{
			"\DUG\Scarabyte\skins\data\armband_faction_the_wolves.paa",
            "\DUG\Scarabyte\skins\data\armband_faction_the_wolves.paa",
            "\DUG\Scarabyte\skins\data\armband_faction_the_wolves.paa",
            "\DUG\Scarabyte\skins\data\armband_faction_the_wolves.paa",
			"\DUG\Scarabyte\skins\data\armband_faction_the_wolves.paa"
		};
	};
};	

