#include "..\script_component.hpp"
if (EGVAR(ied,isBlockedRange) && {
	(ACE_player nearEntities [IEDD_CLASSES, 20]) isNotEqualTo []}) exitWith {
	false;
};
private _isSwimming = ACE_player call ace_common_fnc_isSwimming;
private _driving = (!isNull objectParent player && {driver objectParent ACE_player == ACE_player && {speed objectParent ACE_player != 0}});
if (QEGVAR(item,notebook) in items ACE_player && {
		!isNull (findDisplay 46) && {
		!visibleMap && {
		!_driving && {
		!_isSwimming && {
		cameraOn == vehicle ACE_player && {
		currentVisionMode ACE_player isEqualTo 0}}}}}}
	) exitWith {
	true;
};
false;


	