/*
 * Author: [1st JTOG] flaver
 * Vehicles config ect
 *
 */

 #define private 0
 #define protected 1
 #define public 2
 #define DEFAULT_COUNT 40
 #define DEFAULT_WEAPON_COUNT 10

 class CfgVehicles {

     //External classe
     class Box_NATO_Ammo_F;

     //Base class watch what you do here!
     class jtog_base_crate: Box_NATO_Ammo_F {
         scope = private;
         transportmaxmagazines = 128;
         transportmaxbackpacks = 0;
         maximumload = 2000;
         vehicleClass = "jtog_crates_cat";
         author = AUTHOR;
     };

     //Grenade crate
     class jtog_grenade_crate: jtog_base_crate {
         scope = public;
         displayName = "[1st JTOG] grenade crate";

         class TransportMagazines {};
         class TransportWeapons{};
         class TransportItems {
             class _xx_Hand_Grenade {
                 count = DEFAULT_COUNT;
                 name = "HandGrenade";
             };
             class _xx_Smoke_Shell {
                 count = DEFAULT_COUNT;
                 name = "SmokeShell";
             };
             class _xx_Smoke_Shell_Yellow {
                 count = DEFAULT_COUNT;
                 name = "SmokeShellYellow";
             };
             class _xx_Smoke_Shell_Green {
                 count = DEFAULT_COUNT;
                 name = "SmokeShellGreen";
             };
             class _xx_Smoke_Shell_Purple {
                 count = DEFAULT_COUNT;
                 name = "SmokeShellPurple";
             };
             class _xx_Smoke_Shell_Blue {
                 count = DEFAULT_COUNT;
                 name = "SmokeShellBlue";
             };
             class _xx_Smoke_Shell_Orange {
                 count = DEFAULT_COUNT;
                 name = "SmokeShellOrange";
             };
             class _xx_Smoke_Shell_Green {
                 count = DEFAULT_COUNT;
                 name = "SmokeShellGreen";
             };
         };
     };

     //This crate contains all the funny stuff
     //No fucking skull masks NO!
     class jtog_fancy_crate: jtog_base_crate {
         scope = public;
         displayName = "[1st JTOG] fancy crate";

         class TransportMagazines {};
         class TransportWeapons{};
         class TransportItems {
             class _xx_TRYK_SHUMAG_G {
                 count = DEFAULT_COUNT;
                 name = "TRYK_SHUMAG_G";
             };
             class _xx_TRYK_SHUMAG {
                 count = DEFAULT_COUNT;
                 name = "TRYK_SHUMAG";
             };
             class _xx_TRYK_SHUMAG_WH {
                 count = DEFAULT_COUNT;
                 name = "TRYK_SHUMAG_WH";
             };
             class _xx_G_mas_wpn_wrap_f {
                 count = DEFAULT_COUNT;
                 name = "G_mas_wpn_wrap_f";
             };
         };
     };

     //Crate for erebos
     class jtog_erebos_crate: jtog_base_crate {
         scope = public;
         displayName = "[1st JTOG] erebos gear";
         transportmaxbackpacks = 80;
         maximumload = 9000;

         class TransportMagazines {};
         class TransportWeapons {};
         class TransportItems {
             class _xx_JTOG_GhillieSuit_d {
                 count = DEFAULT_COUNT;
                 name = "JTOG_GhillieSuit_d";
             };
             class _xx_JTOG_GhillieSuit_w {
                 count = DEFAULT_COUNT;
                 name = "JTOG_GhillieSuit_w";
             };
             class _xx_B_UAV_01_backpack_F {
                 count = 20;
                 name = "B_UAV_01_backpack_F";
             };
             class _xx_B_UavTerminal {
                 count = 20;
                 name = "B_UavTerminal";
             };
             class _xx_optic_LRPS {
                 count = 10;
                 name = "optic_LRPS";
             };
             class _xx_optic_LRPS_NV {
                 count = 10;
                 name = "optic_LRPS_NV";
             };
             class _xx_RH_30Rnd_556x45_Mk262 {
                 count = DEFAULT_COUNT;
                 name = "RH_30Rnd_556x45_Mk262";
             };
             class _xx_Trixie_5x338_Mag {
                 count = DEFAULT_COUNT;
                 name = "Trixie_5x338_Mag";
             };
             class _xx_7Rnd_408_Mag {
                 count = DEFAULT_COUNT;
                 name = "7Rnd_408_Mag";
             };
             class _xx_RH_Mk12mod1 {
                 count = DEFAULT_WEAPON_COUNT;
                 name = "RH_Mk12mod1";
             };
             class _xx_RH_Mk12mod1_des {
                 count = DEFAULT_WEAPON_COUNT;
                 name = "RH_Mk12mod1_des";
             };
             class _xx_RH_Mk12mod1_tg {
                 count = DEFAULT_WEAPON_COUNT;
                 name = "RH_Mk12mod1_tg";
             };
             class _xx_hlc_rifle_awmagnum {
                 count = DEFAULT_WEAPON_COUNT;
                 name = "hlc_rifle_awmagnum";
             };
             class _xx_hlc_rifle_awmagnum_FDE {
                 count = DEFAULT_WEAPON_COUNT;
                 name = "hlc_rifle_awmagnum_FDE";
             };
             class _xx_srifle_LRR_camo_F {
                 count = DEFAULT_WEAPON_COUNT;
                 name = "srifle_LRR_camo_F";
             };
             class _xx_srifle_LRR_F {
                 count = DEFAULT_WEAPON_COUNT;
                 name = "srifle_LRR_F";
             };
         };
     };

     //Misc stuff
     class jtog_misc_crate: jtog_base_crate {
         scope = public;
         displayName = "[1st JTOG] misc crate";

         class TransportMagazines {};
         class TransportWeapons{};
         class TransportItems{
             //This we can remove, when we change to ACRE
             class _xx_tf_microdagr {
                 count = DEFAULT_COUNT;
                 name = "tf_microdagr";
             };
         };
    };

 };
