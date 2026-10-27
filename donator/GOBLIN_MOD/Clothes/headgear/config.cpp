class CfgPatches
{
	class 310_Retextures
	{
		units[]=
		{
			"310th_Custom_beret_CID",
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Characters_Tops",
			"DZ_Characters_Headgear",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Glasses",
			"DZ_Characters_Masks",
			"DZ_Characters_Gloves",
			"DZ_Characters_Shoes",
			"DZ_Characters_Belts",
			"DZ_Characters_Vests",
			"DZ_Gear_Camping",
			"DZ_Gear_Containers",
			"DZ_Gear_Consumables",
			"DZ_Gear_Drinks",
			"DZ_Gear_Books",
			"ACO_Headgear",
			"ACO_Lower",
			"ACO_Other",
			"ACO_Upper",
			"WindstrideClothing",
			"FOG_Data_Patches",
			"ACO_Core_Attachments",
			"ACO_Headgear_Glasses",
			"ACO_Headgear_Headgear",
			"ACO_Headgear_Masks",
			"ACO_Headgear_Scarves",
			"ACO_Other_Armband",
			"ACO_Other_Backpacks",
			"ACO_Upper_Vests",
			"ACO_Lower_Belts",
			"ACO_Lower_Pants",
			"ACO_Lower_Shoes",
			"ACO_Other_Other",
			"ACO_Upper_Gloves",
			"ACO_Upper_Jackets",
			"ACO_Upper_Tops"
		};
	};
};
class CfgVehicles
{
	class MilitaryBeret_Red;
	class FOG_SoftCap_MC;
	
	class HiddenIsles_Donator_310th_Custom_Beret_CID: MilitaryBeret_Red
	{
		scope=2;
		displayName="CID Beret";
		descriptionShort="[DONATOR ITEM] 310 - Black military beret with a stiched patch of Criminal Investigations Division.";
		
		// Storage Size when stored inside another container/inventory (2x2 = 4 slots)
        itemSize[] = {2, 2};
		heatIsolation = 1.0; // Maximum insulation
        absorbency = 0.0;    // Will only get slightly Damp in rain and dries quickly
		
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"GOBLIN_MOD\clothes\headgear\data\black_cid_beret\310th_beret_black_CID_co.paa"
		};
	};
	class HiddenIsles_Donator_310th_softcap: FOG_SoftCap_MC
	{
		scope=2;
		displayName="310th's Patrol Cap";
		descriptionShort="[DONATOR ITEM] 310 - A weathered patrol cap with the Insignia of the 310th Military Police Brigade a tag inside says [Property of the United States Army]";
		
		// Storage Size when stored inside another container/inventory (2x2 = 4 slots)
        itemSize[] = {2, 2};
		heatIsolation = 1.0; // Maximum insulation
        absorbency = 0.0;    // Will only get slightly Damp in rain and dries quickly
		
		hiddenSelectionsTextures[]=
		{
			"HiddenIsles_Donator\donator\GOBLIN_MOD\clothes\headgear\data\softcap_mc_310\softcap_mc_310th_co.paa",
			"HiddenIsles_Donator\donator\GOBLIN_MOD\clothes\headgear\data\softcap_mc_310\softcap_mc_310th_co.paa",
			"HiddenIsles_Donator\donator\GOBLIN_MOD\clothes\headgear\data\softcap_mc_310\softcap_mc_310th_co.paa"
		};
	};
		class HiddenIsles_Donator_310th_softcap_loss: FOG_SoftCap_MC
	{
		scope=2;
		displayName="310th Loss's Patrol Cap";
		descriptionShort="[DONATOR ITEM] 310 - A weathered patrol cap with the Insignia of the 310th Military Police Brigade a tag inside says [Property of the United States Army]";
		
		// Storage Size when stored inside another container/inventory (2x2 = 4 slots)
        itemSize[] = {2, 2};
		heatIsolation = 1.0; // Maximum insulation
        absorbency = 0.0;    // Will only get slightly Damp in rain and dries quickly
		
		hiddenSelectionsTextures[]=
		{
			"HiddenIsles_Donator\donator\GOBLIN_MOD\clothes\headgear\data\softcap_mc_310_loss\softcap_mc_310th_co.paa",
			"HiddenIsles_Donator\donator\GOBLIN_MOD\clothes\headgear\data\softcap_mc_310_loss\softcap_mc_310th_co.paa",
			"HiddenIsles_Donator\donator\GOBLIN_MOD\clothes\headgear\data\softcap_mc_310_loss\softcap_mc_310th_co.paa"
		};
	};
};
