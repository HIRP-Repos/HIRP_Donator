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
            "FOG_Shirts_FRACU_Top" // Matches the CfgPatches class name in FOG's config
        };
    };
};

class CfgVehicles
{
    class FOG_Shirt_FRACU_Top_ColorBase; 

    class FOGR_Shirt_FRACU_Top_310_CPT: FOG_Shirt_FRACU_Top_ColorBase
    {
        scope = 2;
        displayName = "310th Captain's USGI FRACU Top";
        descriptionShort = "A uniform top with the Insignia of the 310th Military Police Brigade a tag inside says [Property of the United States Army]";
		
		// Storage Size when stored inside another container/inventory (2x2 = 4 slots)
        itemSize[] = {2, 2};
		heatIsolation = 1.0; // Maximum insulation
        absorbency = 0.0;    // Will only get slightly Damp in rain and dries quickly
		itemsCargoSize[] = {8, 8}; // 8 x 8 = 64 inventory slots
		
        // You MUST map all three selections defined in the base class
        hiddenSelectionsTextures[] = 
        {
            "\GOBLIN_MOD\Clothes\shirts\fracu_top_310_loss\data\fracu_blouse_mc_310_loss_co.paa", // camo
            "",            // cuffs
            ""                                                                                  // personality (empty if not used)
        };

        hiddenSelectionsMaterials[] = 
        {
            "\FOG Mod pbo\FOG_MOD\Clothes\shirts\fracu_top\data\fracu_top.rvmat",      // camo material
            "",                        // cuffs material
            ""                                                                                  // personality material (empty)
        };
    };
};