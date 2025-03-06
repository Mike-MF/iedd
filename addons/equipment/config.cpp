#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        author = ECSTRING(main,author);
        authors[] = {"Prisoner","Lion"};
        name = COMPONENT_NAME;
        units[] = {
            "iedd_equipment_Base",
            "iedd_item_Base",
            "iedd_item_Notebook",
            "iedd_equipment_mine"
        };
        weapons[] = {
            "iedd_item_notebook"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"iedd_main"};
        url = "https://github.com/prisonerMO/iedd";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
