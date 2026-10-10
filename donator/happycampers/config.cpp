////////////////////////////////////////////////////////////////////
//DeRap: clothing\donator\happycampers\config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Tue Oct 06 19:35:39 2026 : 'file' last modified on Mon Oct 05 22:06:54 2026
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class THC_Donation_Clothing
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"FOG_MOD_Pants_FieldShorts","FOG_Cronen_Shirt_Shit","FOG_Ronin_Hat_Stuff","FOG_MOD_Boots_Zypher","ACO_Other_Armband","DZ_Gear_Camping","DZ_Characters_Tops","FOG_Characters_Backpacks_LBT1475A","FOG_MOD_Vest_JPC2"};
	};
};
class CfgVehicles
{
	class Clothing;
	class FOG_FieldShorts_ColorBase;
	class FOG_Cronen_Shirt_ColorBase;
	class FOG_Ronin_Hat_ColorBase;
	class FOG_Zypher_Boots_Base;
	class ALV_UpgradedArmband_Colorbase;
	class Flag_Base;
	class FOG_Vest_JPC2_ColorBase;
	class FOG_Bag_LBT1475A_ColorBase;
	class HiddenIsles_Donator_ZypherBoots_Camper: FOG_Zypher_Boots_Base
	{
		scope = 2;
		displayName = "Happy Campers Zypher Boots";
		descriptionShort = "[DONATOR ITEM] Happy Campers / Lo";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\happycampers\zephyrboots_tan_co.paa","HiddenIsles_Donator\donator\happycampers\socks_whiteblue_co.paa"};
	};
	class HiddenIsles_Donator_CronenShirt_Camper: FOG_Cronen_Shirt_ColorBase
	{
		scope = 2;
		displayName = "Happy Campers Cronen Shirt";
		descriptionShort = "[DONATOR ITEM] Happy Campers / Lo";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\happycampers\cronen_shirt_BSBL_CampKodiak_co.paa",""};
	};
	class HiddenIsles_Donator_FieldShorts_Camper: FOG_FieldShorts_ColorBase
	{
		scope = 2;
		displayName = "Happy Campers Field Shorts";
		descriptionShort = "[DONATOR ITEM] Happy Campers / Lo";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\happycampers\FOG_FieldPants_THC_co.paa"};
	};
	class HiddenIsles_Donator_RoninHat_Camper: FOG_Ronin_Hat_ColorBase
	{
		scope = 2;
		displayName = "Happy Campers Ronin Hat";
		descriptionShort = "[DONATOR ITEM] Happy Campers / Lo";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\happycampers\ronin_hat_Campers.paa"};
	};
	class HiddenIsles_Donator_Flag_TheHappyCampers: Flag_Base
	{
		scope = 2;
		displayName = "Happy Campers Flag";
		descriptionShort = "[DONATOR ITEM] Happy Campers / Lo";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\happycampers\flag_CampKodiak_co.paa"};
	};
	class HiddenIsles_Donator_ALV_UpgradedArmband_Camper: ALV_UpgradedArmband_Colorbase
	{
		scope = 2;
		displayName = "Happy Campers Armband";
		descriptionShort = "[DONATOR ITEM] Happy Campers / Lo";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\happycampers\UpgradedArmband_Campers_CO.paa"};
	};
	class HiddenIsles_Donator_BagLBT1475A_Camper: FOG_Bag_LBT1475A_ColorBase
	{
		scope = 2;
		displayName = "Happy Campers LBT1475A Bag";
		descriptionShort = "[DONATOR ITEM] Happy Campers / Lo";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\happycampers\LBT1476A_Bag_Campers_co.paa"};
	};
	class HiddenIsles_Donator_VestJPC2_Camper: FOG_Vest_JPC2_ColorBase
	{
		scope = 2;
		displayName = "Happy Campers JPC2 Vest";
		descriptionShort = "[DONATOR ITEM] Happy Campers / Lo";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\happycampers\JPC_2_Vest_Camper_co.paa","HiddenIsles_Donator\donator\happycampers\JPC_2_MiscCommsAttachments_CB_co.paa"};
	};
};
