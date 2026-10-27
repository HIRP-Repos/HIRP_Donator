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
            "FOG_Pants_FRACU" // Matches the CfgPatches class name in FOG's config
        };
    };
};

class CfgVehicles
{
    class FOG_Pants_FRACU_ColorBase; 

    class FOGR_Pants_FRACU_310: FOG_Pants_FRACU_ColorBase
    {
        scope = 2;
        displayName = "310th Brigadier General's USGI FRACU Trousers";
        
		// Storage Size when stored inside another container/inventory (2x2 = 4 slots)
        itemSize[] = {2, 2};
		heatIsolation = 0.69999999; // Maximum insulation
        absorbency = 0.0;    // Will only get slightly Damp in rain and dries quickly
		itemsCargoSize[] = {6, 5}; // 8 x 8 = 64 inventory slots
		
        // You MUST map all three selections defined in the base class
        hiddenSelectionsTextures[] = 
        {
            "HiddenIsles_Donator\donator\GOBLIN_MOD\Clothes\pants\fracu_pants_310_autumn\data\fracu_trousers_mc_310_autumn_co.paa", // camo
            "",            // cuffs
            ""                                                                                  // personality (empty if not used)
        };

        hiddenSelectionsMaterials[] = 
        {
            "\FOG_MOD\Clothes\pants\fracu_pants\data\fracu_pants.rvmat",      // camo material
            "",                        // cuffs material
            ""                                                                                  // personality material (empty)
        };
    };
};
