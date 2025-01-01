//old way of doing things:

/*if (!isServer) exitWith {};
waitUntil {!isNil "LoadoutsLoaded"};
private "_this";
_this = _this select 0;
if( isPlayer _this) exitWith{};
_this setVariable ["ALiVE_OverrideLoadout", true]; //override Alive loadout!
private "_factionLoadout";
_factionRecognized  = 1;
_factionLoadout = factionLoadoutMap getOrDefaultCall [(faction _this), {_factionRecognized = -1}];

if(_factionRecognized != -1) then {
	[_this, _factionLoadout]  call (compile preprocessFileLineNumbers 'loadout\unit_loadout.sqf');
};*/

//new, cleaner way that handles locality better:

if (!isServer) then {
    [_this select 0] remoteExec ["martin_fnc_unitInit", 2];
    
}else {
	[_this select 0] call martin_fnc_unitInit;
};



