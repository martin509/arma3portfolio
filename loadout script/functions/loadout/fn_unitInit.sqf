params ["_unit"];
waitUntil {!isNil "LoadoutsLoaded"};

//_unit = _unit select 0;
if( isPlayer _unit) exitWith{};
_unit setVariable ["ALiVE_OverrideLoadout", true]; //override Alive loadout!
private "_factionLoadout";
_factionRecognized  = 1;
_factionLoadout = factionLoadoutMap getOrDefaultCall [(faction _unit), {_factionRecognized = -1}];


if(_factionRecognized != -1) then {
	[_unit, _factionLoadout]  call (compile preprocessFileLineNumbers 'loadout\unit_loadout.sqf');
};

