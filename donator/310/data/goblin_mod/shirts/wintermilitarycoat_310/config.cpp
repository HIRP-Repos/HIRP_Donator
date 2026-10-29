////////////////////////////////////////////////////////////////////
//DeRap: goblin_mod\clothes\shirts\wintermilitarycoat_310\config.bin
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
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Tops","DZ_Scripts"};
	};
};
class CfgVehicles
{
	class WinterMilitaryCoat_ColorBase;
	class HiddenIsles_Donator_WinterMilitaryCoat_310: WinterMilitaryCoat_ColorBase
	{
		scope = 2;
		displayName = "310th Winter Coat";
		descriptionShort = "A military winter coat with the Insignia of the 310th Military Police Brigade a tag inside says [Property of the United States Army]";
		itemsCargoSize[] = {6,5};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\goblin_mod\shirts\wintermilitarycoat_310\data\wintermilitarycoat_brown_310_co.paa","HiddenIsles_Donator\donator\310\data\goblin_mod\shirts\wintermilitarycoat_310\data\wintermilitarycoat_brown_310_co.paa","HiddenIsles_Donator\donator\310\data\goblin_mod\shirts\wintermilitarycoat_310\data\wintermilitarycoat_brown_310_co.paa"};
		hiddenSelectionsMaterials[] = {"\dz\characters\tops\data\wintermilitarycoat.rvmat","\dz\characters\tops\data\wintermilitarycoat.rvmat","\dz\characters\tops\data\wintermilitarycoat.rvmat"};
	};
};
