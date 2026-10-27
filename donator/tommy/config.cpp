#define _ARMA_

class CfgPatches
{
	class HiddenIsles_Donator_Retextures_Tommy
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HiddenIsles_Donator_Retextures"};
	};
};

class CfgVehicles
{
    class DarkMotoHelmet_Black;
    class DarkMotoHelmet_YellowScarred;
    class FOG_Shirt_UrbanUtilityJacket_Base;
    class FOG_HeavyRiders_Jacket_ColorBase;

    class HiddenIsles_Donator_TommyMotoHelm: DarkMotoHelmet_Black
	{
		scope = 2;
		displayName = "Tommy's Helmet";
		descriptionShort = "[DONATOR ITEM]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\tommy\data\MotoHelm_Tommy.paa","DZ\characters\headgear\data\MotoHelmetVisor_dark_co.paa"};
	};
	class HiddenIsles_Donator_TommyMotoHelm2: DarkMotoHelmet_YellowScarred
	{
		scope = 2;
		displayName = "Tommy's Helmet with Nails";
		descriptionShort = "[DONATOR ITEM]";
		itemSize[] = {2,2};
		hiddenSelectionsTextures[] = {"dz\characters\headgear\data\motohelmetvisor_dark_co.paa","dz\characters\headgear\data\motohelmetvisor_scarred_co.paa","HiddenIsles_Donator\donator\tommy\data\MotoHelm_Tommy.paa","HiddenIsles_Donator\donator\tommy\data\MotoHelm_Tommy.paa"};
	};

    class HiddenIsles_Donator_TommyJacket: FOG_Shirt_UrbanUtilityJacket_Base
	{
		scope = 2;
        displayName = "Tommy's Jacket";
		descriptionShort = "[DONATOR ITEM]";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\tommy\data\urban_utility_jacket_dark_Tommy.paa"};
	};

    class HiddenIsles_Donator_TommyJacketHeavyRiders: FOG_HeavyRiders_Jacket_ColorBase
	{
		scope = 2;
        displayName = "Tommy's Heavy Rider Jacket";
		descriptionShort = "[DONATOR ITEM]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\tommy\data\fog_heavyrider_Tommy.paa"};
	};
};

