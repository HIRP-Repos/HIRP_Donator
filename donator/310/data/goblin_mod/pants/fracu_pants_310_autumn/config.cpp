////////////////////////////////////////////////////////////////////
//DeRap: goblin_mod\clothes\pants\fracu_pants_310_autumn\config.bin
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
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Scripts","FOG_Pants_FRACU"};
	};
};
class CfgVehicles
{
	class FOG_Pants_FRACU_ColorBase;
	class HiddenIsles_Donator_FOGR_Pants_FRACU_310: FOG_Pants_FRACU_ColorBase
	{
		scope = 2;
		displayName = "310th Brigadier General's USGI FRACU Trousers";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\goblin_mod\pants\fracu_pants_310_autumn\data\fracu_trousers_mc_310_autumn_co.paa","",""};
		hiddenSelectionsMaterials[] = {"\FOG_MOD\Clothes\pants\fracu_pants\data\fracu_pants.rvmat","",""};
	};
};
