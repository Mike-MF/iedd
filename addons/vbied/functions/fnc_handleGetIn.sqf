#include "..\script_component.hpp"
params ["_vehicle", "_role", "_unit", "_turret"];
private _attachedObjects = attachedObjects _vehicle;
private _index = _attachedObjects findIf {typeOf _x == QGVAR(box)};
TRACE_3("GetIn State",_vehicle,_index,_unit);
if (_index > -1) then {
    private _bombObj = _attachedObjects select _index;
    if (isNull _bombObj) exitWith {};
    private _isBomb = _bombObj getVariable [QEGVAR(ied,bomb), false];
    if (!_isBomb) exitWith {};
    [QEGVAR(ied,explosion), [_bombObj]] call CBA_fnc_serverEvent;
};
