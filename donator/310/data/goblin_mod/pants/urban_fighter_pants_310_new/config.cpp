////////////////////////////////////////////////////////////////////
//DeRap: goblin_mod\clothes\pants\urban_fighter_pants_310_new\config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Tue Oct 06 19:35:51 2026 : 'file' last modified on Mon Oct 05 22:06:57 2026
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class GOBLIN_MOD_Clothes_Patch
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Scripts","FOG_UFP_Pants_Shit"};
	};
};
class CfgVehicles
{
	class FOG_UFP_Pants_ColorBase;
	class HiddenIsles_Donator_FOGR_UFP_Pants_310_v2: FOG_UFP_Pants_ColorBase
	{
		scope = 2;
		displayName = "310th's Urban Fighter Pants v.2";
		hiddenSelectionsTextures[] = {"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Black_co.paa","FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa","HiddenIsles_Donator\donator\310\data\goblin_mod\pants\urban_fighter_pants_310_new\data\310_new_camo_pants.paa"};
		hiddenSelectionsMaterials[] = {"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\belt.rvmat","FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad.rvmat","FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP.rvmat"};
	};
};
