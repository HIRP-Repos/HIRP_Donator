////////////////////////////////////////////////////////////////////
//DeRap: clothing\donator\310\config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Tue Oct 06 19:35:38 2026 : 'file' last modified on Mon Oct 05 22:06:54 2026
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class 310_Retextures
	{
		units[] = {"310th_z_autumn_beret","310th_Z_Autumn_Pants","310th_Z_Autumn_Coat","FOG_Big_Patch_310th_CID","310th_custom_armband","310th_BDU","310th_pants","FOG_Big_Patch_310th","FOG_Big_Patch_310th_MP","FOG_Big_Patch_310th_Unit","FOG_Small_Patch_310th_CO","FOG_Small_Patch_310th_SL","FOG_Big_Patch_310th_MED","310th_Custom_beret_NCO","310th_Custom_Beret","310th_Custom_Beret_Officer","310th_FLAG","310th_Unite_FLAG","Custom_Berret_310th_CROW","310th_CROW_Jacket","310th_CROW_Pants","310th_Crow_gasmask","FOG_Big_Patch_310th_CROW"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Tops","DZ_Characters_Headgear","DZ_Characters_Backpacks","DZ_Characters_Glasses","DZ_Characters_Masks","DZ_Characters_Gloves","DZ_Characters_Shoes","DZ_Characters_Belts","DZ_Characters_Vests","DZ_Gear_Camping","DZ_Gear_Containers","DZ_Gear_Consumables","DZ_Gear_Drinks","DZ_Gear_Books","ACO_Headgear","ACO_Lower","ACO_Other","ACO_Upper","WindstrideClothing","FOG_Data_Patches","ACO_Core_Attachments","ACO_Headgear_Glasses","ACO_Headgear_Headgear","ACO_Headgear_Masks","ACO_Headgear_Scarves","ACO_Other_Armband","ACO_Other_Backpacks","ACO_Upper_Vests","ACO_Lower_Belts","ACO_Lower_Pants","ACO_Lower_Shoes","ACO_Other_Other","ACO_Upper_Gloves","ACO_Upper_Jackets","ACO_Upper_Tops"};
	};
};
class CfgVehicles
{
	class MilitaryBeret_Red;
	class NavyUniformPants;
	class Wool_Greatcoat_Navy;
	class Clothing;
	class ALV_HunterPants_Kneepads_Black;
	class ALV_Patch_USA;
	class Armband_ColorBase;
	class Flag_Base;
	class FOG_Big_Patch_Base;
	class AirborneMask;
	class BDUJacket;
	class ALV_Jeans_ColorBase_Kneepads;
	class ALV_Coat_Base;
	class ALV_Pants_Base;
	class ALV_Top_Base;
	class ALV_PCUL5Coat_ColorBase;
	class ALV_MechanicTop_Grey;
	class FOG_Small_Patch_Base;
	class FOG_SoftCap_MC;
	class ALV_UpgradedArmband_Black;
	class FOG_Vest_AVS_Base;
	class FOG_Vest_JPC2_Black;
	class ALV_TweedJacket_Grey;
	class ALV_SmartPants_Grey;
	class PoliceJacket;
	class ALV_Tie_Black;
	class FOG_Ghost_Mask_Black;
	class HiddenIsles_Donator_310th_z_autumn_beret: MilitaryBeret_Red
	{
		scope = 2;
		displayName = "Autumn Beret";
		descriptionShort = "[DONATOR ITEM] 310 - Black military beret with a blue flash... bearing a silver Colonel’s eagle. Tag inside says 'Z, Autumn'.";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Autumn\z_autumn_v2.paa"};
	};
	class HiddenIsles_Donator_310th_z_autumn_softcap: FOG_SoftCap_MC
	{
		scope = 2;
		displayName = "Autumn's Patrol Cap";
		descriptionShort = "[DONATOR ITEM] 310 - A weathered patrol cap bearing the single star of a brigadier general, with ‘AUTUMN’ stitched across the back like a final reminder that the old Army still stands.";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Autumn\softcap_Autumn.paa","HiddenIsles_Donator\donator\310\data\Autumn\softcap_Autumn.paa","HiddenIsles_Donator\donator\310\data\Autumn\softcap_Autumn.paa"};
	};
	class HiddenIsles_Donator_310th_Z_Autumn_Pants: NavyUniformPants
	{
		scope = 2;
		displayName = "Z Autumn Pants";
		descriptionShort = "[DONATOR ITEM] 310 - A Pristine Army Service Uniform set of Slacks";
		itemsCargoSize[] = {6,5};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Autumn\Z_autumn_pants_co.paa"};
	};
	class HiddenIsles_Donator_310th_Z_Autumn_Coat: Wool_Greatcoat_Navy
	{
		scope = 2;
		displayName = "Z Autumn's Coat";
		descriptionShort = "[DONATOR ITEM] 310 - A Black modified great coat with the Insignia of the Military Police General on it";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Autumn\Z_Autumn_coat_co.paa"};
	};
	class HiddenIsles_Donator_310th_McMannCap: FOG_SoftCap_MC
	{
		scope = 2;
		displayName = "Tyler McMann's Cap";
		descriptionShort = "[DONATOR ITEM] 310 - A weathered patrol cap";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\mcmann\softcap_mcmann.paa","HiddenIsles_Donator\donator\310\data\mcmann\softcap_mcmann.paa","HiddenIsles_Donator\donator\310\data\mcmann\softcap_mcmann.paa"};
	};
	class HiddenIsles_Donator_310th_McMann_Coat: Wool_Greatcoat_Navy
	{
		scope = 2;
		displayName = "Tyler McMann's Coat";
		descriptionShort = "[DONATOR ITEM] 310 - A Black modified great coat with the Insignia of the Military Police on it";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\mcmann\McMann_coat.paa","HiddenIsles_Donator\donator\310\data\mcmann\McMann_coat.paa","HiddenIsles_Donator\donator\310\data\mcmann\McMann_coat.paa"};
	};
	class HiddenIsles_Donator_310th_Jimmy_Cap: FOG_SoftCap_MC
	{
		scope = 2;
		displayName = "CSM. Jimmy Caldwell's Cap";
		descriptionShort = "[DONATOR ITEM] 310 - [DONATOR ITEM] Jimmy Caldwell";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Jimmy\softcap_caldwell.paa","HiddenIsles_Donator\donator\310\data\Jimmy\softcap_caldwell.paa","HiddenIsles_Donator\donator\310\data\Jimmy\softcap_caldwell.paa"};
	};
	class HiddenIsles_Donator_FOG_BigPatch_310th_Norway: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "Norway's Big Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch worn by Norway of the 310th.";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Norway\Bigpatch_FOG_Norway_co.paa"};
	};
	class HiddenIsles_Donator_FOG_SmallPatch_310th_Norway: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "Norway's Small Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch worn by Norway of the 310th.";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Norway\FOG_Small_patch_Norway_co.paa"};
	};
	class HiddenIsles_Donator_310th_BDU: BDUJacket
	{
		scope = 2;
		displayName = "310th MP BDU";
		descriptionShort = "[DONATOR ITEM] 310 - A Jacket with the Insignia of the 310th Military Police Brigade a tag inside says [Property of the United States Army]";
		heatIsolation = 0.9;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Clothing\310th_jacket_co.paa"};
	};
	class HiddenIsles_Donator_310th_pants: ALV_Jeans_ColorBase_Kneepads
	{
		scope = 2;
		displayName = "310th MP Pants";
		descriptionShort = "[DONATOR ITEM] 310 - A pair of pants worn by the 310th Military Police Brigade a tag inside says [Property of the United States Army]";
		itemsCargoSize[] = {6,5};
		heatIsolation = 0.9;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Clothing\310th_pants_co.paa"};
	};
	class HiddenIsles_Donator_310th_custom_armband: Armband_ColorBase
	{
		scope = 2;
		displayName = "310th Armband";
		descriptionShort = "[DONATOR ITEM] 310 - An Armband worn by the 310th Military Police Brigade, a unit of the United States Army. On the inside tag it reads, Property of 310th Military Police Brigade, United States Department of the Army.";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Clothing\310th_UpgradedArmband_co.paa"};
	};
	class HiddenIsles_Donator_310th_upgradedArmband: ALV_UpgradedArmband_Black
	{
		scope = 2;
		displayName = "310th Upgraded Armband";
		descriptionShort = "[DONATOR ITEM] 310 - An Armband worn by the 310th Military Police Brigade, a unit of the United States Army. On the inside tag it reads, Property of 310th Military Police Brigade, United States Department of the Army.";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Clothing\upgradedarmband_310th.paa","HiddenIsles_Donator\donator\310\data\Clothing\upgradedarmband_310th.paa","HiddenIsles_Donator\donator\310\data\Clothing\upgradedarmband_310th.paa"};
	};
	class HiddenIsles_Donator_FOG_BigPatch_310th: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "310th Flag Big Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with unique flag belonging to the 310th Army Unit";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Clothing\Bigpatch_FOG_310th_flag_co.paa"};
	};
	class HiddenIsles_Donator_FOG_BigPatch_310th_MP: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "310th MP Flag Big Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with unique flag belonging to the 310th Army Unit";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Clothing\Bigpatch_FOG_310th_MP_co.paa"};
	};
	class HiddenIsles_Donator_FOG_BigPatch_310th_Unit: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "310th Unit Flag Big Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with unique flag belonging to the 310th Army Unit";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Clothing\Bigpatch_FOG_310th_Unite_flag_co.paa"};
	};
	class HiddenIsles_Donator_FOG_SmallPatch_310th_CO: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "310th CO Small Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with the letter CO belonging to the 310th Army Unit";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Clothing\CO_FOG_Small_patch_co_template.paa"};
	};
	class HiddenIsles_Donator_FOG_SmallPatch_310th_SL: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "310th SL Small Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with the letter SL belonging to the 310th Army Unit";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Clothing\SL_FOG_Small_patch_co_template.paa"};
	};
	class HiddenIsles_Donator_310th_FOG_Vest_AVS_Black: FOG_Vest_AVS_Base
	{
		scope = 2;
		displayName = "310th Plate Carrier";
		descriptionShort = "[DONATOR ITEM] 310 - Black AVS plate carrier in serviceable condition, bearing a Military Police badge prominently on the chest for identification and authority. Simple, functional, and mission-ready.";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Clothing\310th_avs_co.paa","HiddenIsles_Donator\donator\310\data\Clothing\310th_avs_co.paa"};
	};
	class HiddenIsles_Donator_FOG_BigPatch_310th_MED: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "310th MED Big Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with the 310th Army Medical insignia on it";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Clothing\Bigpatch_FOG_MED_co.paa"};
	};
	class HiddenIsles_Donator_FOG_SmallPatch_310th_MED: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "310th MED Small Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with the 310th Army Medical insignia on it";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Clothing\FOG_Small_patch_MED_co.paa"};
	};
	class HiddenIsles_Donator_FOG_BigPatch_310th_LOG: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "310th LOG Big Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with the 310th Army Logistics insignia on it";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Clothing\Bigpatch_FOG_LOG_co.paa"};
	};
	class HiddenIsles_Donator_FOG_SmallPatch_310th_LOG: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "310th LOG Small Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with the 310th Army Logistics insignia on it";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Clothing\FOG_Small_patch_LOG_co.paa"};
	};
	class HiddenIsles_Donator_310th_Custom_beret_NCO: MilitaryBeret_Red
	{
		scope = 2;
		displayName = "310th Green beret";
		descriptionShort = "[DONATOR ITEM] 310 - Green military beret for the 310th";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Clothing\310th_militaryberet_green_co.paa"};
	};
	class HiddenIsles_Donator_310th_Custom_Beret: MilitaryBeret_Red
	{
		scope = 2;
		displayName = "310th Black Beret";
		descriptionShort = "[DONATOR ITEM] 310 - Black military beret for the 310th";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Clothing\310th_beret_black_co.paa"};
	};
	class HiddenIsles_Donator_310th_Custom_Beret_Officer: MilitaryBeret_Red
	{
		scope = 2;
		displayName = "310th Red Beret";
		descriptionShort = "[DONATOR ITEM] 310 - Red military beret for the 310th";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Clothing\310th_beret_red_co.paa"};
	};
	class HiddenIsles_Donator_310th_FLAG: Flag_Base
	{
		scope = 2;
		displayName = "310th Flag";
		descriptionShort = "[DONATOR ITEM] 310 - The Flag of 310th.";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Flags\310tn_FLAG_CO.paa"};
	};
	class HiddenIsles_Donator_310th_Unite_FLAG: Flag_Base
	{
		scope = 2;
		displayName = "310th Unit Flag";
		descriptionShort = "[DONATOR ITEM] 310 - The Unit Flag of the 310th.";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Flags\310tn_Unite_FLAG_CO.paa"};
	};
	class HiddenIsles_Donator_310th_DOA_FLAG: Flag_Base
	{
		scope = 2;
		displayName = "310th Department of the Army";
		descriptionShort = "[DONATOR ITEM] 310 - The Flag of the department of the Army.";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\CID\310tn_CID_1_CO.paa"};
	};
	class HiddenIsles_Donator_310th_General_FLAG: Flag_Base
	{
		scope = 2;
		displayName = "310th one star general flag";
		descriptionShort = "[DONATOR ITEM] 310 - A red command flag bearing the single white star of a brigadier general, flown as a quiet reminder that the Army’s authority still remains along the coast.";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\CID\310tn_CID_2_CO.paa"};
	};
	class HiddenIsles_Donator_Custom_Berret_310th_CROW: MilitaryBeret_Red
	{
		scope = 2;
		displayName = "C.R.O.W Beret";
		descriptionShort = "[DONATOR ITEM] 310 - A beret with unique insignia belonging to [Redacted] Army Unit";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Crow\310th_militaryberet_Crow_co.paa"};
	};
	class HiddenIsles_Donator_310th_CROW_Jacket: BDUJacket
	{
		scope = 2;
		displayName = "C.R.O.W Jacket";
		descriptionShort = "[DONATOR ITEM] 310 - A jacket with unique insignia belonging to a [Redacted] Army Unit";
		heatIsolation = 0.9;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Crow\CROW_Jacket_co.paa"};
	};
	class HiddenIsles_Donator_310th_CROW_Pants: ALV_HunterPants_Kneepads_Black
	{
		scope = 2;
		displayName = "C.R.O.W pants";
		descriptionShort = "[DONATOR ITEM] 310 - A pair of pants worn by a [Redacted] Army Unit";
		heatIsolation = 0.9;
		itemsCargoSize[] = {6,5};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Crow\Crow_pants_co.paa"};
	};
	class HiddenIsles_Donator_310th_Crow_gasmask: AirborneMask
	{
		scope = 2;
		displayName = "C.R.O.W Gas Mask";
		descriptionShort = "[DONATOR ITEM] 310 - A unique gas mask belonging to a [Redacted] Army Unit";
		model = "\DZ\characters\masks\airborne_mask_g.p3d";
		inventorySlot[] = {"Mask"};
		attachments[] = {"GasMaskFilter"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 2;
		weight = 700;
		itemSize[] = {3,4};
		varWetMax = 0.249;
		heatIsolation = 0.8;
		repairableWithKits[] = {8,6};
		repairCosts[] = {30,25};
		visibilityModifier = 0.9;
		noHelmet = 0;
		noEyewear = 1;
		headSelectionsToHide[] = {"Clipping_AirborneMask"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","camoFilter","camoGlass"};
		hiddenSelectionsTextures[] = {"\dz\characters\masks\data\airborne_mask_co.paa","\dz\characters\masks\data\airborne_mask_co.paa","\dz\characters\masks\data\airborne_mask_co.paa","\dz\characters\masks\data\gp5gasmask_white_co.paa","HiddenIsles_Donator\donator\310\data\Crow\CROW_Glass_ca.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"dz\characters\masks\data\airborne_mask.rvmat","dz\characters\masks\data\airborne_mask_glass.rvmat","dz\characters\masks\data\gp5gasmask.rvmat"}},{0.7,{}},{0.5,{"dz\characters\masks\data\airborne_mask_damage.rvmat","dz\characters\masks\data\airborne_mask_glass.rvmat","dz\characters\masks\data\gp5gasmask_damage.rvmat"}},{0.3,{}},{0,{"dz\characters\masks\data\airborne_mask_destruct.rvmat","dz\characters\masks\data\airborne_mask_glass.rvmat","dz\characters\masks\data\gp5gasmask_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\masks\airborne_mask_m.p3d";
			female = "\DZ\characters\masks\airborne_mask_f.p3d";
		};
		class Protection
		{
			biological = 1;
		};
		soundImpactType = "plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "DarkMotoHelmet_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "DarkMotoHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
		soundVoiceType = "gasmask";
		soundVoicePriority = 5;
	};
	class HiddenIsles_Donator_FOG_BigPatch_310th_CROW: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "Crow Big Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with unique insignia belonging to [Redacted] Army Unit";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Crow\Bigpatch_FOG_CROW_co.paa"};
	};
	class HiddenIsles_Donator_FOG_SmallPatch_310th_CROW: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "310th CROW Small Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with unique insignia belonging to [Redacted] Army Unit";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\Crow\FOG_Small_patch_CROW_co.paa"};
	};
	class HiddenIsles_Donator_FOG_BigPatch_310th_CID: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "CID Big Patch";
		descriptionShort = "[DONATOR ITEM] 310 - 310th Criminal Investigation Division patch.";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\CID\Bigpatch_FOG_CID_co.paa"};
	};
	class HiddenIsles_Donator_FOG_BigPatch_310th_SRT: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "310th SRT Big Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with the 310th Army SRT insignia on it";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\SRT\Bigpatch_FOG_SRT_co.paa"};
	};
	class HiddenIsles_Donator_FOG_SmallPatch_310th_SRT: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "310th SRT Small Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with the 310th Army SRT insignia on it";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\SRT\Small_FOG_patch_SRT_co.paa"};
	};
	class HiddenIsles_Donator_310th_CJVest: FOG_Vest_JPC2_Black
	{
		scope = 2;
		displayName = "CJ's JPC Vest";
		descriptionShort = "[DONATOR ITEM] 310 - An vest worn by CJ";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\CJ\jpc_2_vest_CJ.paa","HiddenIsles_Donator\donator\310\data\CJ\jpc_2_vest_CJ.paa","HiddenIsles_Donator\donator\310\data\CJ\jpc_2_vest_CJ.paa"};
	};
	class HiddenIsles_Donator_310th_CJSmartJacket: ALV_TweedJacket_Grey
	{
		scope = 2;
		displayName = "CJ's Navy Suit Jacket";
		descriptionShort = "[DONATOR ITEM] 310 - A suit jacket worn by CJ";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\CJ\smartjacket_CJ.paa","HiddenIsles_Donator\donator\310\data\CJ\smartjacket_CJ.paa","HiddenIsles_Donator\donator\310\data\CJ\smartjacket_CJ.paa"};
	};
	class HiddenIsles_Donator_310th_CJSmartPants: ALV_SmartPants_Grey
	{
		scope = 2;
		displayName = "CJ's Navy Suit Pants";
		descriptionShort = "[DONATOR ITEM] 310 - A pare of suit pants worn by CJ";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\CJ\smartpants_CJ.paa","HiddenIsles_Donator\donator\310\data\CJ\smartpants_CJ.paa","HiddenIsles_Donator\donator\310\data\CJ\smartpants_CJ.paa"};
	};
	class HiddenIsles_Donator_310th_310CIDJacket: PoliceJacket
	{
		scope = 2;
		displayName = "310th CID Jacket";
		descriptionShort = "[DONATOR ITEM] 310 - A jacket worn by the CID department of the 310th";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\CJ\310th_CID_Jacket.paa","HiddenIsles_Donator\donator\310\data\CJ\310th_CID_Jacket.paa","HiddenIsles_Donator\donator\310\data\CJ\310th_CID_Jacket.paa"};
	};
	class HiddenIsles_Donator_310th_CJTie: ALV_Tie_Black
	{
		scope = 2;
		displayName = "CJ's Tie";
		descriptionShort = "[DONATOR ITEM] 310 - A tie worn by CJ";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\CJ\tie_CJ.paa","HiddenIsles_Donator\donator\310\data\CJ\tie_CJ.paa","HiddenIsles_Donator\donator\310\data\CJ\tie_CJ.paa"};
	};
	class HiddenIsles_Donator_310th_CJTie_red: ALV_Tie_Black
	{
		scope = 2;
		displayName = "CJ's Tie";
		descriptionShort = "[DONATOR ITEM] 310 - A tie worn by CJ";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\CJ\tie_cj_Red.paa","HiddenIsles_Donator\donator\310\data\CJ\tie_cj_Red.paa","HiddenIsles_Donator\donator\310\data\CJ\tie_cj_Red.paa"};
	};
	class HiddenIsles_Donator_310th_CJSmartJacket_black: ALV_TweedJacket_Grey
	{
		scope = 2;
		displayName = "CJ's Black Suit Jacket";
		descriptionShort = "A suit jacket worn by CJ";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\CJ\310th_smartjacket_CJ_black_co.paa","HiddenIsles_Donator\donator\310\data\CJ\310th_smartjacket_CJ_black_co.paa","HiddenIsles_Donator\donator\310\data\CJ\310th_smartjacket_CJ_black_co.paa"};
	};
	class HiddenIsles_Donator_310th_CJSmartPants_Black: ALV_SmartPants_Grey
	{
		scope = 2;
		displayName = "CJ's black Suit Pants";
		descriptionShort = "A pare of suit pants worn by CJ";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\CJ\smartpants_CJ_Black_co.paa","HiddenIsles_Donator\donator\310\data\CJ\smartpants_CJ_Black_co.paa","HiddenIsles_Donator\donator\310\data\CJ\smartpants_CJ_Black_co.paa"};
	};
	class HiddenIsles_Donator_FOG_BigPatch_310th_ONI: FOG_Big_Patch_Base
	{
		scope = 2;
		displayName = "ONI Big Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with the ONI insignia on it";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\CJ\Bigpatch_FOG_ONI_co.paa"};
	};
	class HiddenIsles_Donator_FOG_SmallPatch_310th_ONI: FOG_Small_Patch_Base
	{
		scope = 2;
		displayName = "310th ONI Small Patch";
		descriptionShort = "[DONATOR ITEM] 310 - A patch with the ONI insignia on it";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\CJ\FOG_Small_patch_ONI_co.paa"};
	};
	class HiddenIsles_Donator_310th_ONI_FLAG: Flag_Base
	{
		scope = 2;
		displayName = "ONI flag";
		descriptionShort = "[DONATOR ITEM] 310 - Flag of the ONI.";
		hiddenSelectionsTextures[] = {"HiddenIsles_Donator\donator\310\data\CID\ONI_FLAG_CO.paa"};
	};
};
