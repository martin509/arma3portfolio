params["_radius", "_maxpatrols", "_patrolSize", "_playerGroup"];

// Define some variables
 // The center of the player's group
_mindist = _radius * 0.5;
_despawnDistance = _radius * 1.5; // The distance from the center where patrols will despawn
_patrolSide = east; // The side of the patrol units

fnc_spawnNewGroup = {
	params["_randomPos"];
	_newPatrol = createGroup _patrolSide;
	
	private _totalCount = 0;
	if(_patrolSize > 3) then { //if greater than 3, then we have a TL
		_curUnit = _newPatrol createUnit [(selectRandomWeighted spawner_TLs), _randomPos, [], 0, "NONE"];
		[_curUnit] call martin_fnc_setSkill;
		_totalCount = _totalCount + 1;
	};
	private _specialCount = 0;
	if(_patrolSize > 2) then {
		_specialCount =  round (_patrolSize / 3);
	};
	private _specials = [];
	for "_i" from 1 to _specialCount do {
		private _added = 0;
		while{_added == 0} do {
			private _newSpecial = selectRandomWeighted spawner_specials;
			if(!(_newSpecial in _specials)) then {
				_specials pushBack _newSpecial;
				_added = 1;
			}
		};
	};
	{
		_curUnit = _newPatrol createUnit[_x, _randomPos, [], 0, "NONE"];
		[_curUnit] call martin_fnc_setSkill;
		_totalCount = _totalCount + 1;
	} forEach _specials;
	
	while{_totalCount < _patrolSize} do {
		_curUnit = _newPatrol createUnit[selectRandomWeighted spawner_riflemen, _randomPos, [], 0, "NONE"];
		[_curUnit] call martin_fnc_setSkill;
		_totalCount = _totalCount + 1;
	};
	_newPatrol;
};
	
_center = getPos (leader _playerGroup );
// Loop through each patrol group in the array
{
    // Get the current position of the patrol group leader
    _leaderPos = getPos (leader _x);
	_distance = _leaderPos distance2D _center;
    // Check if the patrol group leader is too far away from the center or dead
    if (_distance > _despawnDistance) then {
        // Delete all units in the patrol group and remove it from the array
        {
            deleteVehicle _x;
        } forEach units _x;
        deleteGroup _x;
        thePatrols deleteAt (_forEachIndex);
    };
	if !(_x getVariable 'martin_patrolling') then {
		[_x, _radius] call martin_fnc_setPatrolPattern;
		_x setVariable ['martin_patrolling', true];
	};
} forEach thePatrols;

//spawns patrols until the maximum number is reached
while {count thePatrols < _maxPatrols} do{
	// Pick a random position around the center within the radius
	_randomPos = [_center, _mindist, _radius] call BIS_fnc_findSafePos;

	// Spawn a patrol group at that position with random skill and side
	_patrolGroup = [_randomPos] call fnc_spawnNewGroup;
	_patrolGroup setVariable ['martin_patrolling', true];
	if (((random 1) > 0.80) && (trackerCount < maxTrackers)) then { //rare: tracker teams
		(leader _patrolGroup) globalChat "hunters spawned!";
		trackerCount = trackerCount + 1;
		[_patrolGroup, _radius * 2, 30, [], [], true, true] spawn lambs_wp_fnc_taskHunt;
	} else{
		[_patrolGroup, _radius] call martin_fnc_setPatrolPattern;
	};
	thePatrols pushBack _patrolGroup;
	sleep 0.1;
};
	
	
	


