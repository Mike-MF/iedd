#include "script_component.hpp"
class CfgPatches {

    class ADDON {
        author = ECSTRING(main,author);
        authors[] = {"Prisoner","Lion","Antihilator"};
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"iedd_main"};
        url = "https://github.com/prisonerMO/iedd";
        VERSION_CONFIG;
    };
};
#include "CfgEventHandlers.hpp"
#include "ACE_zeusActions.hpp"
#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"
#include "BaseControls.hpp"
#include "Notebook.hpp"
#include "EdenMenu.hpp"
