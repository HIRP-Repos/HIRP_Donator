#define _ARMA_

class CfgPatches
{
	class HiddenIsles_Donator_Retextures_Obsidian
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

    class HiddenIsles_Donator_ObsidianArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "Obsidian Armband";
		descriptionShort = "[DONATOR ITEM]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ObsidianGuard\data\armband_obsidian_co.paa"};
	};

    class HiddenIsles_Donator_ObsidianFlag: Flag_White
	{
		scope = 2;
		displayName = "Obsidian Flag";
		descriptionShort = "[DONATOR ITEM]";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\ObsidianGuard\data\flag_obsidian_co.paa"};
	};
};