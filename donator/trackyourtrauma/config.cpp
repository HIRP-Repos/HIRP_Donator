// Track Your Trauma - DayZ hoodie and jeans retextures
// Place this file in: P:\HIRP_Donator\donator\trackyourtrauma\config.cpp
// Texture files belong in the Textures subfolder.
//
// NOTE: Verify "WindstrideClothing" against the CfgPatches class in the
// Windstride PBO containing Shabby_Hoodie_ColorBase. The Workshop/mod folder
// name is not necessarily the CfgPatches dependency name.

class CfgPatches
{
    class HIRP_Donator_TrackYourTrauma
    {
        units[] =
        {
            "FENR_TrackYourTrauma_Hoodie",
            "FENR_TrackYourTrauma_Jeans"
        };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Characters_Pants",
            "WindstrideClothing"
        };
    };
};

class CfgVehicles
{
    class Jeans_ColorBase;
    class Shabby_Hoodie_ColorBase;

    class FENR_TrackYourTrauma_Hoodie: Shabby_Hoodie_ColorBase
    {
        scope = 2;
        displayName = "Track Your Trauma Hoodie";
        descriptionShort = "A heavily worn, dirty and bloodstained hoodie.";
        hiddenSelectionsTextures[] =
        {
            "HIRP_Donator\donator\trackyourtrauma\Textures\Dirty_Hoodie_co.paa", // zbytek: main hoodie
            "WindstrideClothing\Models\Shabby_Hoodie\data\skein_grey_ca.paa" // skein: original grey secondary texture
        };
    };

    class FENR_TrackYourTrauma_Jeans: Jeans_ColorBase
    {
        scope = 2;
        displayName = "Track Your Trauma Jeans";
        descriptionShort = "Grey jeans with grime and dried bloodstains.";
        hiddenSelectionsTextures[] =
        {
            "HIRP_Donator\donator\trackyourtrauma\Textures\jeans_grey_co.paa", // camoGround
            "HIRP_Donator\donator\trackyourtrauma\Textures\jeans_grey_co.paa", // camoMale
            "HIRP_Donator\donator\trackyourtrauma\Textures\jeans_grey_co.paa"  // camoFemale
        };
    };
};
