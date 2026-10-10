////////////////////////////////////////////////////////////////////
//DeRap: goblin_mod\clothes\shirts\fracu_top_310_autumn\config.bin
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
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Scripts","FOG_Shirts_FRACU_Top"};
	};
};
class CfgVehicles
{
	class FOG_Shirt_FRACU_Top_ColorBase;
	class HiddenIsles_Donator_FOGR_Shirt_FRACU_Top_310_BG: FOG_Shirt_FRACU_Top_ColorBase
	{
		scope = 2;
		displayName = "310th Brigadier General's USGI FRACU Top";
		descriptionShort = "A uniform top with the Insignia of the 310th Military Police Brigade a tag inside says [Property of the United States Army]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Retextures_files\clothing\donator\310\data\goblin_mod\shirts\fracu_top_310_autumn\data\fracu_blouse_mc_310_autumn_co_v2.paa","",""};
		hiddenSelectionsMaterials[] = {"\FOG Mod pbo\FOG_MOD\Clothes\shirts\fracu_top\data\fracu_top.rvmat","",""};
	};
};
