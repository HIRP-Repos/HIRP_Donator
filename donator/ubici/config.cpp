#define _ARMA_

class CfgPatches
{
	class HiddenIsles_Donator_Ubici
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HiddenIsles_Donator_Retextures"};
	};
};
class CfgVehicles
{
    class ALV_UpgradedArmband_Black;
    class Flag_White;
    class FOG_UFP_Pants_Urban;
    class FOG_Vest_MMAC_CB;
    class FOG_Jacket_ArcteryxGryphon_Black;
    class CombatBoots_Black;
    class FOG_MechanixGloves_Black_Words;
    class GorkaHelmet_Green;
    class FOG_Pouch_Admin_Small_RG;
    class ALV_Pouch_Utility_Black;
    class ALV_Smersh_Black;
    class FOG_Bag_Trizip_Black;
    

    class HiddenIsles_Donator_UbiciArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Ubici Armband";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\Data\upgradedarmband_Ubici.paa"};
	};

	class HiddenIsles_Donator_UbiciFlag: Flag_White
	{
		scope = 2;
		displayName = "Ubici Flag";
		descriptionShort = "[DONATOR ITEM] Ubici ";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\Data\flag_Ubici.paa","HiddenIsles_Donator\donator\ubici\Data\flag_Ubici.paa","HiddenIsles_Donator\donator\ubici\flag_Ubici.paa"};
	};

	class HiddenIsles_Donator_Ubici_PantsGreen: FOG_UFP_Pants_Urban
	{
		scope = 2;
		displayName = "Ubici UFP Pants";
		descriptionShort = "[DONATOR ITEM] Ubici ";
		hiddenSelectionsTextures[] = {"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Black_co.paa","FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa","HiddenIsles_Donator\donator\ubici\Data\ufp_black_Ubici.paa"};
	};

    class HiddenIsles_Donator_UbiciJacketGreen: FOG_Jacket_ArcteryxGryphon_Black
	{
		scope = 2;
		displayName = "Ubici's Arcteryx Jacket";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\Data\arcteryx_gryphon_Ubici.paa","HiddenIsles_Donator\donator\ubici\Data\arcteryx_gryphon_Ubici.paa","HiddenIsles_Donator\donator\ubici\Data\arcteryx_gryphon_Ubici.paa"};
	};

	class HiddenIsles_Donator_Ubici_PantsGrey: FOG_UFP_Pants_Urban
	{
		scope = 2;
		displayName = "Ubici UFP Pants";
		descriptionShort = "[DONATOR ITEM] Ubici ";
		hiddenSelectionsTextures[] = {"FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Black_co.paa","FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa","HiddenIsles_Donator\donator\ubici\Data\UbiciPantsGrey.paa"};
	};

    class HiddenIsles_Donator_UbiciJacketGrey: FOG_Jacket_ArcteryxGryphon_Black
	{
		scope = 2;
		displayName = "Ubici's Arcteryx Jacket";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\Data\UbiciShirtGrey.paa","HiddenIsles_Donator\donator\ubici\Data\UbiciShirtGrey.paa","HiddenIsles_Donator\donator\ubici\Data\UbiciShirtGrey.paa"};
	};

	class HiddenIsles_Donator_UbiciVest: FOG_Vest_MMAC_CB
	{
		scope = 2;
		displayName = "Ubici's MMAC Vest";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\Data\mmac_black_co_olive.paa","HiddenIsles_Donator\donator\ubici\Data\mmac_black_co_olive.paa","HiddenIsles_Donator\donator\ubici\Data\mmac_black_co_olive.paa"};
	};
	
	class HiddenIsles_Donator_UbiciHeadgear: GorkaHelmet_Green
	{
		scope=2;
		displayName = "Ubici's Gorka Helmet";
		descriptionShort = "[DONATOR ITEM] Ubici";
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{"HiddenIsles_Donator\donator\ubici\Data\maska_co_olive.paa","HiddenIsles_Donator\donator\ubici\Data\maska_co_olive.paa","HiddenIsles_Donator\donator\ubici\Data\maska_co_olive.paa"};
	};

	class HiddenIsles_Donator_UbiciAdminPouch: FOG_Pouch_Admin_Small_RG
	{
		scope = 2;
		displayName = "Ubici's Admin Pouch";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\Data\pouch_small_ronin_black_co_olive.paa"};
	};

	class HiddenIsles_Donator_UbiciUtilityPouch: ALV_Pouch_Utility_Black
	{
		scope = 2;
		displayName = "Ubici's Utility Pouch";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\Data\spritus_pouches_black_co_olive.paa"};
	};

	class HiddenIsles_Donator_UbiciBelt: ALV_Smersh_Black
	{
		scope = 2;
		displayName = "Ubici's Belt";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\Data\smersh_olive_co.paa","HiddenIsles_Donator\donator\ubici\Data\Pouches_Olive_CO.paa","HiddenIsles_Donator\donator\ubici\Data\Dropleg_Belt_Olive_CO.paa"};
	};	

	class HiddenIsles_Donator_UbiciBag: FOG_Bag_Trizip_Black
	{
		scope = 2;
		displayName = "Ubici's Trizip Bag";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\Data\trizip_black_co_olive.paa"};
	};

	/*class HiddenIsles_Donator_UbiciBoots: CombatBoots_Black
	{
		scope = 2;
		displayName = "Ubici's Combat Boots";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\combatboots_Ubici.paa","HiddenIsles_Donator\donator\ubici\combatboots_Ubici.paa","HiddenIsles_Donator\donator\ubici\combatboots_Ubici.paa"};
	};

	class HiddenIsles_Donator_UbiciGloves: FOG_MechanixGloves_Black_Words
	{
		scope = 2;
		displayName = "Ubici's Mechanix Gloves";
		descriptionShort = "[DONATOR ITEM] Ubici";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ubici\gloves_black_Ubici.paa","HiddenIsles_Donator\donator\ubici\gloves_black_Ubici.paa","HiddenIsles_Donator\donator\ubici\gloves_black_Ubici.paa"};
	};*/
};    