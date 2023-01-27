class CfgPatches
{
	class FF_Store
	{
		units[]={""};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class FF_Store: HouseNoDestruct
	{
		scope = 1;
		model = "FF_Buildings\Store\Store.p3d";
	};
	class FF_Store_01: HouseNoDestruct
	{
		scope = 1;
		model = "FF_Buildings\Store\Store_01.p3d";
	};
};