if(isServer) then {
	factionLoadoutMap = createHashMap;
	
	call (compile preprocessFileLineNumbers 'loadout\tk_loadout.sqf');
	call (compile preprocessFileLineNumbers 'loadout\tagheer_loadout.sqf');
	
	LoadoutsLoaded = 1;
	
};