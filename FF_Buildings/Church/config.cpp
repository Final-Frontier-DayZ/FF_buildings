class CfgPatches
{
	class FF_Church
	{
		units[]={""};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class FF_Church: HouseNoDestruct
	{
		scope = 1;
		model = "FF_Buildings\Church\Church.p3d";
	};
};