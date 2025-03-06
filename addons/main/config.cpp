#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = ECSTRING(main,author);
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main", "ace_common"};
        url = "https://github.com/prisonerMO/iedd";
        VERSION_CONFIG;
    };
};

#include "CfgSettings.hpp"
#include "CfgEditorCategories.hpp"
#include "CfgVehicleClasses.hpp"
#include "CfgEden.hpp"
