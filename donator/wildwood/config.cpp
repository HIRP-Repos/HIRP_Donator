#define _ARMA_

class CfgPatches
{
	class HiddenIsles_Donator_Retextures_Wildwood
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
    class ALV_Beanie_Colorbase;
    class FOG_Bag_6ShTBag_ColorBase;
    class FOG_Bag_LBT1475A_ColorBase;
    class FOG_HalfMask_ColorBase;
    class FOG_Jacket_SoftShell_ColorBase;
    class FOG_Lerch_Boots_ColorBase;
    class FOG_Tactical_Fingerless_Gloves_ColorBase;

    class HiddenIsles_Donator_WildwoodArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Wildwood Armband";
		descriptionShort = "[DONATOR ITEM]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\wildwood\data\upgradedarmband_wildwood.paa"};
	};

	class HiddenIsles_Donator_WildwoodFlag: Flag_White
	{
		scope = 2;
		displayName = "Wildwood Flag";
		descriptionShort = "[DONATOR ITEM]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\wildwood\data\flag_wildwood.paa","HiddenIsles_Donator\donator\wildwood\data\flag_wildwood.paa","HiddenIsles_Donator\donator\wildwood\data\flag_wildwood.paa"};
	};

    class HiddenIsles_Donator_WildwoodHeadgear: ALV_Beanie_Colorbase
	{
		scope = 2;
        displayName = "Wildwood Cap";
		descriptionShort = "[DONATOR ITEM]";
		headSelectionsToHide[] = {"Clipping_baseballcap"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\wildwood\data\alv_beanie_Wildwood.paa"};
		hiddenSelectionsMaterials[] = {"ACO_Headgear\Characters\Headgear\Data\ALV_Beanie.rvmat"};
	};

    class HiddenIsles_Donator_WildwoodBag_6ShBagT: FOG_Bag_6ShTBag_ColorBase
	{
		scope = 2;
        displayName = "Wildwood 6ShBagT Bag";
		descriptionShort = "[DONATOR ITEM]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\wildwood\data\lbt_black_co_wildwood.paa"};
	};

    class HiddenIsles_Donator_WildwoodBag_LBT1475A: FOG_Bag_LBT1475A_ColorBase
	{
		scope = 2;
        displayName = "Wildwood LBT1475A Bag";
		descriptionShort = "[DONATOR ITEM]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\wildwood\data\lbt_black_co_wildwood.paa"};
	};

    class HiddenIsles_Donator_WildwoodMask: FOG_HalfMask_ColorBase
	{
		scope = 2;
        displayName = "Wildwood Mask";
		descriptionShort = "[DONATOR ITEM]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\wildwood\data\halfmask_black_wildwood.paa"};
	};

    class HiddenIsles_Donator_WildwoodJacket: FOG_Jacket_SoftShell_ColorBase
	{
		scope = 2;
        displayName = "Wildwood Jacket";
		descriptionShort = "[DONATOR ITEM]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\wildwood\data\fog_softshell_blk_Wildwood.paa"};
	};

    class HiddenIsles_Donator_WildwoodShoes: FOG_Lerch_Boots_ColorBase
	{
		scope = 2;
        displayName = "Wildwood Boots";
		descriptionShort = "[DONATOR ITEM]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\wildwood\data\lerchboots_black_Wildwood.paa"};
	};

    class HiddenIsles_Donator_WildwoodGloves: FOG_Tactical_Fingerless_Gloves_ColorBase
	{
		scope = 2;
        displayName = "Wildwood Gloves";
		descriptionShort = "[DONATOR ITEM]";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\wildwood\data\fingerless_tactical_black_Wildwood.paa",""};
	};
};
