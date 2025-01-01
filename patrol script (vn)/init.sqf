if (!isServer) exitWith {};
spawner_riflemen = ["vn_o_men_nva_02", 1, "vn_o_men_nva_03", 1, "vn_o_men_nva_04", 1, 
	"vn_o_men_nva_05", 1, "vn_o_men_nva_06", 1, "vn_o_men_nva_12", 1,"vn_o_men_nva_09", 1];
spawner_TLs =["vn_o_men_nva_01", 1, "vn_o_men_nva_13", 1];
spawner_specials = ["vn_o_men_nva_11", 0.6, "vn_o_men_nva_10", 0.2, "vn_o_men_nva_07", 0.4, "vn_o_men_nva_08", 0.2, "vn_o_men_nva_14", 0.2];
patrolSkill = [0.3, 0.35, 0.5];
martin_fnc_setSkill = {
	params["_unit"];
	_unit setSkill random [(patrolSkill select 0), (patrolSkill select 1), (patrolSkill select 2)];
};
trackerCount = 0;
maxTrackers = 0;

martin_fnc_getSinePattern = {
	//params ["_centre", "_radius", "_steps", "_amplitude", "_period", "_dir"];

    _centre = param [0,getPos player];
    _radius = param [1,300]; //radius in meters
    _steps = param [2,20]; //number of steps
    _amplitude = param [3,75]; //amplitude in meters
    _period = param [4,2]; //number of periods within radius
	_dir = param [5, random(360)];
	
	_positions = [];
    private _angleStep = (360 * _period) / _steps; // convert degrees to radians for sin function
	private _angle = 0;
	

    for "_i" from 0 to (_steps - 1) do {
        private _xOffset1 = _i * (_radius / _steps); // calculate x coordinate using cosine and sine functions
        private _yOffset1 = (sin _angle) * (_amplitude); // calculate y coordinate using sine and cosine functions
		private _xOffset2 = (_xOffset1 * (cos _dir)) - (_yOffset1 * (sin _dir));
		private _yOffset2 = (_xOffset1 * (sin _dir)) + (_yOffset1 * (cos _dir));
		_angle = _angle + _angleStep;
        private _position = [(_centre select 0) +_xOffset2, (_centre select 1) +_yOffset2]; // add offsets to centre position
		
        if (!(surfaceIsWater _position)) then { // check if position is on land
            _positions pushBack _position; // add position to array 
        };
	};
	_positions;
};

martin_fnc_setPatrolPattern = {
	params["_group", "_radius"];
	_patrolPattern = [];
	private _groupCenter = getPos (leader _group );
	switch (floor random 2) do
	{
		case 0: {
		_patrolPattern = [_groupCenter, _radius, 8] call VN_ms_fnc_tracker_getSpiralPositions;
		};
		case 1: {
		_patrolPattern = [_groupCenter, _radius * 2, 12] call martin_fnc_getSinePattern;
		
		};
		default {_patrolPattern = [_groupCenter, _radius, 8] call VN_ms_fnc_tracker_getSpiralPositions;};
	};
	private _wp1 = _group addWaypoint [_patrolPattern select 0, 0];
	_wp1 setWaypointType "MOVE";
	private _waypoints = [_wp1];
	
	
	{
		private _wp = _group addWaypoint [_x, 0];
		if(_forEachIndex == (count _patrolPattern - 1)) then {
			_wp setWaypointStatements ["true", "group this setVariable ['martin_patrolling', false]"];
		};
	}forEach _patrolPattern;

};
thePlayer call (compile preprocessFileLineNumbers 'player_loop.sqf');