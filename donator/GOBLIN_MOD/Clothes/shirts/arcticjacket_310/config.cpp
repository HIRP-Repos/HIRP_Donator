class CfgPatches
{
    class GOBLIN_MOD_Clothes_Patch 
    {
        units[]=
		{
			"FOGR_Shirt_ArcticJacket_310"
		};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data",
            "DZ_Characters",
            "DZ_Characters_Tops",
			"FOG_Shirt_ArcticJacket_MC",
            "DZ_Scripts"
        };
    };
};

class CfgVehicles
{
    class FOG_Shirt_ArcticJacket_ColorBase; 

    class FOGR_Shirt_ArcticJacket_310: FOG_Shirt_ArcticJacket_ColorBase
    {
        scope = 2;
        displayName = "310th Winter Jacket";
        descriptionShort = "A military winter jacket with the Insignia of the 310th Military Police Brigade a tag inside says [Property of the United States Army]. Press and hold O to raise/lower the hood";
		
		// Storage Size when stored inside another container/inventory (2x2 = 4 slots)
        itemSize[] = {2, 2};
		heatIsolation = 1.0; // Maximum insulation
        absorbency = 0.0;    // Will only get slightly Damp in rain and dries quickly
		itemsCargoSize[] = {8, 8}; // 8 x 8 = 64 inventory slots
		
        // You MUST map all three selections defined in the base class
        hiddenSelectionsTextures[] = 
        {
            "HiddenIsles_Donator\donator\GOBLIN_MOD\Clothes\shirts\arcticjacket_310\data\arctic_jacket_310.paa", // camo
            "HiddenIsles_Donator\donator\GOBLIN_MOD\Clothes\shirts\arcticjacket_310\data\arctic_jacket_310.paa", // male
            "HiddenIsles_Donator\donator\GOBLIN_MOD\Clothes\shirts\arcticjacket_310\data\arctic_jacket_310.paa"  // female                                                                    // personality (empty if not used)
        };

        hiddenSelectionsMaterials[] = 
        {
            "HiddenIsles_Donator\donator\GOBLIN_MOD\Clothes\shirts\arcticjacket_310\data\arctic_jacket_310.rvmat",
            "HiddenIsles_Donator\donator\GOBLIN_MOD\Clothes\shirts\arcticjacket_310\data\arctic_jacket_310.rvmat",
            "HiddenIsles_Donator\donator\GOBLIN_MOD\Clothes\shirts\arcticjacket_310\data\arctic_jacket_310.rvmat"
        };
    };
};