class DemoCharge_F;
class GVAR(Charge):DemoCharge_F
{
    author = ECSTRING(main,author);
    mapSize = 0.01;
    _generalMacro = "DemoCharge_F";
    scope = 1;
    scopeCurator = 0;
    icon = "iconExplosiveGP";
    ammo = QGVAR(Charge_Ammo);
    defaultMagazine = QGVAR(Charge_Mag);
    displayName = CSTRING(Charge_DisplayName);

};
