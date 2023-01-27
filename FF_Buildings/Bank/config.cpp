class CfgPatches
{
	class FF_Bank
	{
		units[]={""};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class FF_Bank: HouseNoDestruct
	{
		scope = 1;
		model = "FF_Buildings\Bank\Bank_Main.p3d";
	};
	class FF_Bank_Proxy: HouseNoDestruct
	{
		scope = 0;
		model = "FF_Buildings\Bank\Bank_Proxy.p3d";
	};
};