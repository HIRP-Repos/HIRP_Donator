#define _ARMA_

class CfgPatches
{
	class HiddenIsles_Donator_Retextures_Dayton
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HiddenIsles_Donator_Retextures"};
	};
};

class CfgVehicles
{
    class FOG_M50_Gasmask_Base;

    class FOG_M50_Gasmask_Dayton: FOG_M50_Gasmask_Base
	{
		scope = 2;
        displayName = "Dayton Mask";
		descriptionShort = "[DONATOR ITEM]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\dayton\data\m50_Dayton_co.paa"};
	};
};
