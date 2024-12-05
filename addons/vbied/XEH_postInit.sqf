#include "script_component.hpp"

["CBA_settingsInitialized", {
	diag_log format ["AFSIHASFPHIPAOSFH %1", time];
}] call CBA_fnc_addEventHandler;

[QGVAR(detachBox), {
    params ["_box","_vehicle","_player"];
		detach _box;
		private _relpos = player getRelPos [1, 0];
		_box setPosATL _pos;
		_box setVectorDirAndUp [[0,0,1],[0,1,0]];
	//[_object] call FUNC(removeEvents);
}] call CBA_fnc_addEventHandler;

if (isServer) then {
	[{
		time > 10 && !isNil QGVAR(bombs)},
	{
		INFO_1("Detect event called [Time: %1]",time);
		call FUNC(vbiedCheck);
	},
	[]] call CBA_fnc_waitUntilAndExecute;
};