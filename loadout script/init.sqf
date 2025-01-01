if(isServer) then {
	factionLoadoutMap = createHashMap;

	//do this for every [faction]_loadout.sqf that you want loaded	
	call (compile preprocessFileLineNumbers 'loadout\tk_loadout.sqf');
	call (compile preprocessFileLineNumbers 'loadout\tagheer_loadout.sqf'); 	
	
	LoadoutsLoaded = 1;
	
};