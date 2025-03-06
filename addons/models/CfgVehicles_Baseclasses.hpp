class ThingX;
class IEDD_WireStraight_Base: ThingX {
    author = ECSTRING(main,author);
    scope = 0;
    scopecurator = 0;
    editorCategory = "IEDD_MAINCATEGORY";
    editorSubcategory = "IEDD_SMALLWIRES";
    vehicleClass = "IEDD_SMALLWIRES";
    editorPreview = QPATHTOF(preview\straightred.paa);
    icon = "iconObject_10x1";
    model = QPATHTOF(data\IEDD_Wire_Straight.p3d);
    displayName = "";
    faction = "Empty";
    hiddenSelections[] = {"Component01"};
    hiddenSelectionsTextures[] = {""};
};

// Thick Wires
class IEDD_WireThick1_Base: IEDD_WireStraight_Base {
    editorSubcategory = "IEDD_GROUNDWIRES";
    vehicleClass = "IEDD_GROUNDWIRES";
    editorPreview = QPATHTOF(preview\singlered.paa);
    model = QPATHTOF(data\IEDD_Wire_Thick1.p3d);
};
class IEDD_WireThick2_Base: IEDD_WireThick1_Base {
    model = QPATHTOF(data\IEDD_Wire_Thick2.p3d);
};
class IEDD_WireThick3_Base: IEDD_WireThick1_Base {
    model = QPATHTOF(data\IEDD_Wire_Thick3.p3d);
};

// Twist Wires
class IEDD_WireTwist1_Base: IEDD_WireThick1_Base {
    editorPreview = QPATHTOF(preview\twistred.paa);
    model = QPATHTOF(data\IEDD_Wire_Twist1.p3d);
};
class IEDD_WireTwist2_Base: IEDD_WireTwist1_Base {
    model = QPATHTOF(data\IEDD_Wire_Twist2.p3d);
};
class IEDD_WireTwist3_Base: IEDD_WireTwist1_Base {
    model = QPATHTOF(data\IEDD_Wire_Twist3.p3d);
};
class IEDD_WireTwist4_Base: IEDD_WireTwist1_Base {
    model = QPATHTOF(data\IEDD_Wire_Twist4.p3d);
};

// Small Wires
class IEDD_WireSmall_Base: IEDD_WireStraight_Base {
    editorPreview = QPATHTOF(preview\smallred.paa);
    model = QPATHTOF(data\IEDD_Wire_Small.p3d);
};

// L Wires?
class IEDD_WireL_Base: IEDD_WireStraight_Base {
    editorPreview = QPATHTOF(preview\lred.paa);
    model = QPATHTOF(data\IEDD_Wire_L.p3d);
};

// Corner Wires
class IEDD_WireCorner_Base: IEDD_WireStraight_Base {
    editorPreview = QPATHTOF(preview\cornerred.paa);
    model = QPATHTOF(data\IEDD_Wire_Corner.p3d);
};

// C Wires?
class IEDD_WireC_Base: IEDD_WireStraight_Base {
    editorPreview = QPATHTOF(preview\cred.paa);
    model = QPATHTOF(data\IEDD_Wire_C.p3d);
};
