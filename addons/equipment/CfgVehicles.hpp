class CBA_Extended_EventHandlers;
class CfgVehicles {
    class Item_Base_F;
    class iedd_Item_Base: Item_Base_F {
        author = ECSTRING(main,author);
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
        editorCategory = "IEDD_MAINCATEGORY";
        editorSubcategory = "IEDD_ITEMS";
        vehicleClass = "IEDD_ITEMS";
    };
    class iedd_Item_Notebook: iedd_Item_Base {
        type = 1;
        scope = 2; //Scope 2 will show in editor
        scopeCurator = 2;
        displayName = ECSTRING(main,Category_Main);
        descriptionShort = CSTRING(descriptionShort);
        picture = QPATHTOEF(models,preview\notebook.paa); //Displays icon in your Inventory
        model = QPATHTOEF(models,data\IEDD_notebook.p3d);
        icon = QPATHTOEF(models,preview\notebook.paa); //Leave as is "iconObject_circle"
        editorPreview = QPATHTOEF(models,preview\notebook.paa);
        ace_dragging_canDrag = 0;
        ace_dragging_canCarry = 0;
        class TransportItems {
            IEDD_ADDITEM(iedd_item_notebook,1);
        };
        class ACE_Actions {
            class ACE_MainActions {
                displayName = CSTRING(PickUp);
                icon = "\a3\ui_f\data\igui\cfg\actions\take_ca.paa";
                distance = 2;
                position = "";
                condition = QUOTE(true);
                statement = QUOTE([ARR_2(_player,_target)] call EFUNC(notebook,pick));
            };
        };
        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers {};
        };
    };
};
