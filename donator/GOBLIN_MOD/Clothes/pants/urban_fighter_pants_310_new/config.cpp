class CfgPatches
{
    class GOBLIN_MOD_Clothes_Patch 
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data",
            "DZ_Characters",
            "DZ_Scripts",
            "FOG_UFP_Pants_Shit" // Matches the CfgPatches class name in FOG's config
        };
    };
};

class CfgVehicles
{
    class FOG_UFP_Pants_ColorBase; 

    class FOGR_UFP_Pants_310_v2: FOG_UFP_Pants_ColorBase
    {
        scope = 2;
        displayName = "310th's Urban Fighter Pants v.2";
        
		// Storage Size when stored inside another container/inventory (2x2 = 4 slots)
        itemSize[] = {2, 2};
		heatIsolation = 1.0; // Maximum insulation
        absorbency = 0.0;    // Will only get slightly Damp in rain and dries quickly
		itemsCargoSize[] = {8, 8}; // 8 x 8 = 64 inventory slots
		
        // You MUST map all three selections defined in the base class
        hiddenSelectionsTextures[] = 
        {
            "FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\G3_Belt_Black_co.paa", // camo_belt
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad_black_co.paa", // camo_kneepads
            "\GOBLIN_MOD\Clothes\pants\urban_fighter_pants_310_new\data\310_new_camo_pants.paa"  // camo_pants (empty if not used)
        };

        hiddenSelectionsMaterials[] = 
        {
            "FOG_MOD\Clothes\Pants\FOG_Crye_G3Pants\Data\belt.rvmat",  // camo belt
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\hero_kneepad.rvmat",  // camo_kneepads
            "FOG_MOD\Clothes\Pants\Urban_Fighter_pants\data\UFP.rvmat"  // camo_pants (empty if not used)
        };
    };
};