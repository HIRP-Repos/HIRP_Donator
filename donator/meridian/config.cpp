#define _ARMA_

class CfgPatches
{
	class HiddenIsles_Donator_Retextures_Meridian
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
    class FOG_Vest_MMAC_Base;
    class FOG_Crye_G3_Shirt_ColorBase;
	class FOG_Tshirt_ColorBase;

    class HiddenIsles_Donator_MeridianArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Meridian Armband";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\meridian\Data\upgradedarmband_meridian.paa","HiddenIsles_Donator\donator\meridian\Data\upgradedarmband_meridian.paa","HiddenIsles_Donator\donator\meridian\Data\upgradedarmband_meridian.paa"};
	};

    class HiddenIsles_Donator_MeridianFlag: Flag_White
	{
		scope = 2;
		displayName = "Meridian Flag";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\meridian\Data\Flag_meridian.paa","HiddenIsles_Donator\donator\meridian\Data\Flag_meridian.paa","HiddenIsles_Donator\donator\meridian\Data\Flag_meridian.paa"};
	};

    class HiddenIsles_Donator_Meridian_Vest_Black: FOG_Vest_MMAC_Base
    {
		scope = 2;
        displayName = "Meridian Vest";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\meridian\Data\MMAC_Black_Meridian_co.paa","FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_CB_co.paa"};
	};

    class HiddenIsles_Donator_Meridian_Vest_Grey: FOG_Vest_MMAC_Base
    {
		scope = 2;
        displayName = "Meridian Vest";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\meridian\Data\MMAC_Grey_Meridian_co.paa","FOG_MOD\Vests\FOG_AVS\data\Radio_PTT_CB_co.paa"};
	};

	class HiddenIsles_Donator_Meridian_TShirt_Black: FOG_Tshirt_ColorBase
    {
		scope = 2;
        displayName = "Meridian Shirt";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\meridian\Data\fog_Tshirt_Black_Meridian.paa"};
	};

    class HiddenIsles_Donator_Meridian_TShirt_Grey: FOG_Tshirt_ColorBase
    {
		scope = 2;
        displayName = "Meridian Shirt";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\meridian\Data\fog_Tshirt_Grey_Meridian.paa"};
	};

    class HiddenIsles_Donator_Meridian_TShirt_White: FOG_Tshirt_ColorBase
    {
		scope = 2;
        displayName = "Meridian Shirt";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\meridian\Data\fog_Tshirt_White_Meridian.paa"};
	};

    class HiddenIsles_Donator_Meridian_TShirt_Red: FOG_Tshirt_ColorBase
    {
		scope = 2;
        displayName = "Meridian Shirt";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\meridian\Data\fog_Tshirt_Red_Meridian.paa"};
	};

    class HiddenIsles_Donator_Meridian_TShirt_Blue: FOG_Tshirt_ColorBase
    {
		scope = 2;
        displayName = "Meridian Shirt";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\meridian\Data\fog_Tshirt_Blue_Meridian.paa"};
	};

    /*class HiddenIsles_Donator_Meridian_TShirt_Black: FOG_Crye_G3_Shirt_ColorBase
    {
		scope = 2;
        displayName = "Meridian Shirt";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\meridian\Data\fog_g3_shirt_Black_Meridian.paa","FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_black_co.paa"};
	};

    class HiddenIsles_Donator_Meridian_TShirt_Grey: FOG_Crye_G3_Shirt_ColorBase
    {
		scope = 2;
        displayName = "Meridian Shirt";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\meridian\Data\fog_g3_shirt_Grey_Meridian.paa","FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_grey_co.paa"};
	};

    class HiddenIsles_Donator_Meridian_TShirt_White: FOG_Crye_G3_Shirt_ColorBase
    {
		scope = 2;
        displayName = "Meridian Shirt";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\meridian\Data\fog_g3_shirt_White_Meridian.paa","FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_white_co.paa"};
	};

    class HiddenIsles_Donator_Meridian_TShirt_Red: FOG_Crye_G3_Shirt_ColorBase
    {
		scope = 2;
        displayName = "Meridian Shirt";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\meridian\Data\fog_g3_shirt_Red_Meridian.paa","FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_red_co.paa"};
	};

    class HiddenIsles_Donator_Meridian_TShirt_Blue: FOG_Crye_G3_Shirt_ColorBase
    {
		scope = 2;
        displayName = "Meridian Shirt";
		descriptionShort = "[DONATOR ITEM] Meridian";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\meridian\Data\fog_g3_shirt_Blue_Meridian.paa","FOG_MOD\Clothes\Shirts\FOG_Crye_G3Shirt\Data\cuffs_blue_co.paa"};
	};*/
};