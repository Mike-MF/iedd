#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        author = ECSTRING(main,author);
        authors[] = {"Prisoner","Lion"};
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(Barrel),
            QGVAR(Barrel_Grey),
            QGVAR(Bucket),
            QGVAR(Bucket_Fake),
            QGVAR(CanisterPlastic),
            QGVAR(Cardboard),
            QGVAR(Cinder),
            QGVAR(CanisterFuel),
            QGVAR(Metal),
            QGVAR(Metal_English),
            QGVAR(Charge),
            QGVAR(Training_Barrel),
            QGVAR(Training_Barrel_Grey),
            QGVAR(Training_Bucket),
            QGVAR(Training_CanisterPlastic),
            QGVAR(Training_Cardboard),
            QGVAR(Training_Cinder),
            QGVAR(Training_CanisterFuel),
            QGVAR(Training_Metal),
            QGVAR(Training_Metal_English),
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"iedd_main"};
        url = "https://github.com/prisonerMO/iedd";
        VERSION_CONFIG;
    };
};
#include "CfgEventHandlers.hpp"
#include "CfgEden.hpp"
#include "CfgVehicles.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CfgSounds.hpp"
