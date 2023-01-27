class CfgPatches
{
    class FF_Buildings
    {
		units[]={};
		weapons[]={};
        requiredAddons[] = {"DZ_Data"};
    };
};
class CfgMods
{
	class FF_Buildings
	{	
		dir = "FF_Buildings";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "FF_Buildings";
		author = "CanadianSniper";
		authorID = "2039448058";
		version = "1.0";
		extra = 0;
		
		type = "mod";
		dependencies[]=
		{
			"Game",
			"World"
		};
		
		class defs
		{
			class gameScriptModule
            {
                value = "";
                files[] = {"FF_Buildings/Scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"FF_Buildings/Scripts/4_World"};
			};
		};
	};
};
