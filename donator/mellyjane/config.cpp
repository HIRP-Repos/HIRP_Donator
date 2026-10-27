#define _ARMA_

class CfgPatches
{
	class HiddenIsles_Donator_Retextures_Mellyjane
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
	class FOG_MechanixGloves_ColorBase;
	class ALV_Duster_Colorbase;
	class FOG_Bag_BlackJack_ColorBase;

    class HiddenIsles_Donator_MellyjaneArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Mellyjane Armband";
		descriptionShort = "[DONATOR ITEM]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\mellyjane\data\armband_mellyjane_co.paa"};
	};

    class HiddenIsles_Donator_MellyjaneFlag: Flag_White
	{
		scope = 2;
		displayName = "Mellyjane Flag";
		descriptionShort = "[DONATOR ITEM]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\mellyjane\data\Flag_mellyjane_co.paa"};
	};

	class HiddenIsles_Donator_MellyjaneGloves: FOG_MechanixGloves_ColorBase
	{
		scope = 2;
		displayName = "Mellyjane Gloves";
		descriptionShort = "[DONATOR ITEM]";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\mellyjane\data\Glove_mellyjane.paa"};
	};

	class HiddenIsles_Donator_MellyjaneDuster: ALV_Duster_Colorbase
	{
		scope = 2;
		displayName = "Mellyjane Duster";
		descriptionShort = "[DONATOR ITEM]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\mellyjane\data\Duster_mellyjane.paa"};
		hiddenSelectionsMaterials[] = {"ACO_Upper\Characters\Jackets\Data\Duster.rvmat"};
	};

	class HiddenIsles_Donator_MellyjaneBag: FOG_Bag_BlackJack_ColorBase
	{
		scope = 2;
		displayName = "Mellyjane Bag";
		descriptionShort = "[DONATOR ITEM]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\mellyjane\data\Mysterybag_Mellyjane.paa"};
	};
};