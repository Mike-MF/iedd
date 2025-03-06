#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        author = ECSTRING(main,author);
        authors[] = {"Prisoner", "Lion"};
        name = COMPONENT_NAME;
        units[] = {QGVAR(multi)};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"iedd_main", "iedd_vbied"};
        url = "https://github.com/prisonerMO/iedd";
        VERSION_CONFIG;
    };
    class GVAR(ieds): ADDON {
        units[] = {
            QGVAR(ieds),
            QGVAR(decals),
            QGVAR(activate),
            QGVAR(explode),
            QGVAR(charge),
            QGVAR(suicide)
        };
    };
};

#include "Cfg3DEN.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "ui\zeusModulesRcs.hpp"
#include "CfgVehicles.hpp"
