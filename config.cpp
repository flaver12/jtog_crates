#include "_macros.hpp"
/*
 * Author: [1st JTOG] flaver
 * All crates and stuff
 *
 */

//Patches class
class CfgPatches {

 	//Config for the addon
	class jtog_crates {
        units[] = {"jtog_grenade_crate", "jtog_fancy_crate", "jtog_erebos_crate", "jtog_misc_crate"};
        requiredVersion = 1.54;
        requiredAddons[] = {};
        version = 1.0;
        author = AUTHOR;
        authorUrl = "https://github.com/flaver12";
	};

};

#include "CfgVehicleClasses.hpp"
#include "CfgVehicles.hpp"
