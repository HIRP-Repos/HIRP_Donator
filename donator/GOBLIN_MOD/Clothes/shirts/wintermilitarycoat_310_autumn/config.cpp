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
            "DZ_Characters_Tops",
            "DZ_Scripts"
        };
    };
};

class CfgVehicles
{
    class WinterMilitaryCoat_ColorBase; 

    class WinterMilitaryCoat_310_autumn: WinterMilitaryCoat_ColorBase
    {
        scope = 2;
        displayName = "310th Winter Brigadier General's Coat";
        descriptionShort = "A military winter coat with the Insignia of the 310th Military Police Brigade a tag inside says [Property of the United States Army]";
		
		// Storage Size when stored inside another container/inventory (2x2 = 4 slots)
        itemSize[] = {2, 2};
        // You MUST map all three selections defined in the base class
		itemsCargoSize[]={6,5};
		heatIsolation = 1.0; // Maximum insulation
        absorbency = 0.0;    // Will only get slightly Damp in rain and dries quickly
		itemsCargoSize[] = {8, 8}; // 8 x 8 = 64 inventory slots
		
        hiddenSelectionsTextures[] = 
        {
            "\GOBLIN_MOD\Clothes\shirts\wintermilitarycoat_310_autumn\data\wintermilitarycoat_grey_310_co.paa", // camo
            "\GOBLIN_MOD\Clothes\shirts\wintermilitarycoat_310_autumn\data\wintermilitarycoat_grey_310_co.paa", // male
            "\GOBLIN_MOD\Clothes\shirts\wintermilitarycoat_310_autumn\data\wintermilitarycoat_grey_310_co.paa"  // female                                                                    // personality (empty if not used)
        };

        hiddenSelectionsMaterials[] = 
        {
            "\dz\characters\tops\data\wintermilitarycoat.rvmat", // Ground material (vanilla fallback)
            "\dz\characters\tops\data\wintermilitarycoat.rvmat", // Male material (vanilla fallback)
            "\dz\characters\tops\data\wintermilitarycoat.rvmat"  // Female material (vanilla fallback)
        };
    };
};