if (!isServer) exitWith {};
//[min, max] format
_radiusRange = [450, 250];
_patrolNumRange = [6, 9];
_patrolSizeRange = [2, 5];

tension = 0; //0 to 1
fnc_getTension = {
	private _theTension = 0;
	{
		private _groupLeader = (leader _x);
		private _nearEnemy = (_groupLeader) findNearestEnemy (_groupLeader);
		if (!(isNull _nearEnemy) && !({ alive _x } count units _x == 0)) then {
			private _addedTension = (_groupLeader knowsAbout _nearEnemy) * 0.05;
			_theTension = _theTension + _addedTension;
			_groupLeader globalChat (format ["Added %1 tension for %2 total tension", _addedTension, _theTension]);
		}
	} foreach thePatrols;
	if(_theTension > 1) then{ _theTension = 1;};
	_theTension;
};

fnc_interpolate = {
	params["_array", "_range"];
	_x = _array select 0;
	_y = _array select 1;
	private _rangeCopy = _range;
	 if (_range < 0) then {
		_rangeCopy = 0;
	 };
	 if (_range > 1) then {
		_rangeCopy = 1;
	 };
	 _result = _x + ((_y - _x) * _rangeCopy);
	 _result;
};
// Create an array to store the patrol groups
thePatrols = [];
while{true} do {

	_tempTension = call fnc_getTension;
	if(_tempTension > tension) then{
		tension = tension + (_tempTension - tension)* 0.1;
		if(tension < 0.2) then { tension = 0.2; };
	}else {
		tension = tension * 0.95;
	};
	if (tension > 1) then { tension = 1;};
	
	thePlayer globalChat (format ["Tension: %1", tension]);
	
	if(tension > 0 && maxTrackers == 0) then { maxTrackers = 1;};
	if(tension > 0.5 && maxTrackers == 1) then {maxTrackers = 2;};
	
	_radiusResult = [_radiusRange, tension] call fnc_interpolate;
	_patrolNumResult = round ([_patrolNumRange, tension] call fnc_interpolate);
	_patrolSizeResult = round ([_patrolSizeRange, tension] call fnc_interpolate);
	thePlayer globalChat (format ["Radius: %1, Number: %2, Size: %3", _radiusResult, _patrolNumResult, _patrolSizeResult]);
	[_radiusResult, 
	_patrolNumResult, 
	_patrolSizeResult, 
	group thePlayer] execVM "ai_patrol_spawner.sqf";
	sleep 10;

};