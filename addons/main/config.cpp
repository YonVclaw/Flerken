#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {  };
        authors = {"YonV"}; // sub array of authors, considered for the specific addon
        author = "TAG Team"; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};

// information on the whole mod (only needed once)
class CfgMods {
    class PREFIX {
        dir = "@flerken";
        name = "flerken";
        
        author = "YonV";

        picture         = "newlogo_3_256.paa";       // Picture displayed from the expansions menu. Optimal size is 2048x1024
        logo            = "newlogo_3_256.paa";
        logoOver        = "newlogo_3_256_g.paa"
        hideName        = "false";              // Hide the extension name in main menu and extension menu
        hidePicture     = "false";              // Hide the extension picture in the extension menu

        action          = "https://www.ghostsofbattle.com/"; // Website URL, that can accessed from the expansions menu 
        actionName      = "Look out, behind you";              // label of button/tooltip in extension menu
        description     = "Ghosts of Battle Aegis-Vers ACE Extended Arsona"; // Probably in context with action

        // Color used for DLC stripes and backgrounds (RGBA)
        dlcColor[] =
        {
            1,
            0.0,
            0.86,
            1
        };
    };
};
// Configs go here
