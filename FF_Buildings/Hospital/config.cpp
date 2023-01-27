class CfgPatches
{
	class FF_Hospital
	{
		units[]={""};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class FF_Hospital: HouseNoDestruct
	{
		scope = 1;
		model = "FF_Buildings\Hospital\Hospital.p3d";
	};
};