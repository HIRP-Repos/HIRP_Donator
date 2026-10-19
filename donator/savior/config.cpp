class CfgPatches
{
	class HiddenIsles_Donator_Retextures_Savior
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HiddenIsles_Donator_Retextures"};
	};
};

class CfgVehicles
{
    class ALV_UpgradedArmband_Colorbase;
    class ALV_UpgradedArmband_Black;
    class Flag_Base;
    class FOG_Vest_Plateframe_ColorBase;
    class FOG_UFJ_Shirt_ColorBase;
    class FOG_L9_PatagoniaPants_ColorBase;
    class FOG_Helmet_Exfil_Base;
    class FOG_Ghost_Mask_New_ColorBase;
    class FOG_GunGloves_ColorBase;
    class JungleBoots_ColorBase;
    class FOG_Bag_6ShTBag_ColorBase;
    class Armband_ColorBase;


    class HiddenIsles_Donator_SaviorUpgradedArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Savior Upgraded Armband";
		descriptionShort = "[DONATOR ITEM] Savior";
		hiddenSelectionsTextures[] = {"\HiddenIsles_Donator\donator\savior\data\upgradedarmband_saviors.paa"};
	};

    class HiddenIsles_Donator_SaviorFlag: Flag_Base
	{
		scope = 2;
		displayName = "Savior Flag";
		descriptionShort = "[DONATOR ITEM] Savior";
        color="Savior";
        hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[] = {"\HiddenIsles_Donator\donator\savior\data\flag_saviors.paa"};
	};

    class HiddenIsles_Donator_SaviorArmband: Armband_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		color="Savior";
		hiddenSelectionsTextures[]= {"\HiddenIsles_Donator\donator\savior\data\flag_saviors.paa","\HiddenIsles_Donator\donator\savior\data\flag_saviors.paa","\HiddenIsles_Donator\donator\savior\data\flag_saviors.paa","\HiddenIsles_Donator\donator\savior\data\flag_saviors.paa","\HiddenIsles_Donator\donator\savior\data\flag_saviors.paa","\HiddenIsles_Donator\donator\savior\data\flag_saviors.paa","\HiddenIsles_Donator\donator\savior\data\flag_saviors.paa","\HiddenIsles_Donator\donator\savior\data\flag_saviors.paa","\HiddenIsles_Donator\donator\savior\data\flag_saviors.paa"};
	};

    class HiddenIsles_Donator_SaviorVest: FOG_Vest_Plateframe_ColorBase
    {
        scope = 2;
        displayName = "Savior Vest";
		descriptionShort = "[DONATOR ITEM] Savior";
        hiddenSelections[] = {"camo","camo_comms"};
		hiddenSelectionsTextures[] = {"\HiddenIsles_Donator\donator\savior\data\plateframe_savior_co.paa","\HiddenIsles_Donator\donator\savior\data\plateframecomms_savior_co.paa"};
    };

    class HiddenIsles_Donator_SaviorShirt: FOG_UFJ_Shirt_ColorBase
    {
        scope = 2;
        displayName = "Savior Shirt";
		descriptionShort = "[DONATOR ITEM] Savior";
        hiddenSelections[] = {"camo_base","camo_hood","camo_pads"};
		hiddenSelectionsTextures[] = {"\HiddenIsles_Donator\donator\savior\data\UFJ_savior_co.paa","FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Hood_Black_co.paa","FOG_MOD\Clothes\Shirts\FOG_Urban_Fighter\data\UFJ_Pads_Black_co.paa"};
    };

    class HiddenIsles_Donator_SaviorPants: FOG_L9_PatagoniaPants_ColorBase
    {
        scope = 2;
        displayName = "Savior Pants";
		descriptionShort = "[DONATOR ITEM] Savior";
        hiddenSelections[] = {"camo"};
        visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\HiddenIsles_Donator\donator\savior\data\Pants_Patagonia_savior_co.paa"};
    };

    class HiddenIsles_Donator_SaviorHeadgear: FOG_Helmet_Exfil_Base
    {
        scope = 2;
        displayName = "Savior HeadGear";
		descriptionShort = "[DONATOR ITEM] Savior";
        hiddenSelections[] = {"camo"}; 
        hiddenSelectionsTextures[] = {"\HiddenIsles_Donator\donator\savior\data\TW_Exfil_savior_co.paa"};
    };
    
    class HiddenIsles_Donator_SaviorMask: FOG_Ghost_Mask_New_ColorBase
    {
        scope = 2;
        displayName = "Savior Mask";
		descriptionShort = "[DONATOR ITEM] Savior";
		hiddenSelections[] = {"camo_balaclava","camo_head","camo_skull"};
        hiddenSelectionsMaterials[] = {"FOG_MOD\Gear\Masks\Ghost_Mask_New\data\balaclava.rvmat","FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask_cloth.rvmat","FOG_MOD\Gear\Masks\Ghost_Mask_New\data\skull_mask.rvmat"};
		hiddenSelectionsTextures[] = {"\HiddenIsles_Donator\donator\savior\data\balaclava_savior.paa","\HiddenIsles_Donator\donator\savior\data\skull_mask_savior.paa","\HiddenIsles_Donator\donator\savior\data\skull_mask_savior.paa"};
    };

    class HiddenIsles_Donator_SaviorGloves: FOG_GunGloves_ColorBase
    {
        scope = 2;
		visibilityModifier = 0.8;
        displayName = "Savior Gloves";
		descriptionShort = "[DONATOR ITEM] Savior";
        hiddenSelections[] = {"camo","personality"}; //personality chooses male vs female on equip
		hiddenSelectionsTextures[] = {"\HiddenIsles_Donator\donator\savior\data\gunglove_savior_co.paa"};
    };

    class HiddenIsles_Donator_SaviorShoes: JungleBoots_ColorBase
    {
        scope=2;
		visibilityModifier=0.69999999;
        displayName = "Savior Shoes";
		descriptionShort = "[DONATOR ITEM] Savior";
		hiddenSelectionsTextures[] = {"\HiddenIsles_Donator\donator\savior\data\jungleboots_savior_co.paa","HiddenIsles_Donator\donator\savior\data\jungleboots_savior_co.paa","HiddenIsles_Donator\donator\savior\data\jungleboots_savior_co.paa"};
    };

    class HiddenIsles_Donator_SaviorBag: FOG_Bag_6ShTBag_ColorBase
    {
        scope = 2;
        displayName = "Savior Bag";
		descriptionShort = "[DONATOR ITEM] Savior";
        hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"\HiddenIsles_Donator\donator\savior\data\6sh118T_savior_co.paa"};
    };

    /* 
    class ALV_Balaclava_Open_Colorbase;
    class ALV_Balaclava_Colorbase;
    class ALV_Balaclava_FaceCover_Colorbase;

    class HiddenIsles_Donator_SaviorScarf_Open: ALV_Balaclava_Open_Colorbase
    {
        scope = 2;
		color = "Savior";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"ACO_Core\Characters\Attachments\data\Pouches_CO.paa"};
    };

    class HiddenIsles_Donator_SaviorScarf: ALV_Balaclava_Colorbase
    {
        scope = 2;
		color = "Savior";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"ACO_Core\Characters\Attachments\data\Pouches_CO.paa"};
    };

    class HiddenIsles_Donator_SaviorScarf_FaceCover: ALV_Balaclava_FaceCover_Colorbase
    {
        scope = 2;
		color = "Savior";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"ACO_Core\Characters\Attachments\data\Pouches_CO.paa"};
    };
    */
};    