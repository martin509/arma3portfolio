_music = nil;
_medianCalmChecks = (8 * 60) /5; //8 minutes in seconds, divided by 1 check every 5 seconds
_calmCheckCap = random[_medianCalmChecks * 0.8, _medianCalmChecks, _medianCalmChecks * 1.2];
calmCheckCounter = 0;

_COOLDOWN = 5 * 60; //5 minutes
_REGULARCAP = 6; //6 enemies
_INTENSECAP = 12; //12+ enemies
_DISTANCE = 300; //count enemies within this distance

_calmTracks = ["CUP_A2_PMC_Ghosttown", "Track_C_02", "CUP_A1QG_Mission_04", "CUP_A1QG_Mission_06", "OFP_Dark_Side", "Wasteland", "SkyNet"];
_combatTracks = ["CUP_A1QG_Mission_03_outro", "CUP_A1QG_Mission_04_outro", "CUP_A1_Flashpoint_Rearmed", "OFP_Decisions", "CUP_A2OA_Iron_Mountain_D1", "CUP_A2OA_Iron_Mountain_D2"];
_intenseTracks = ["CUP_A2OA_Crude_Oil", "CUP_A1_Arma_Vera", "CUP_A1QG_Mission_02_outro", "CUP_A2OA_Arrowhead_D"];

// Define a function to check if any player is known by at least 8 living OPFOR AIs
_checkPlayers = {
    // Loop through all players on the server
	_knownCount = 0;
	
    {
		_thePlayer = _x;
		_knownBy = 0;
        // Get the number of OPFOR AIs that know this player
		{
			if(([side _x, side _thePlayer] call BIS_fnc_sideIsEnemy) && ((_x knowsAbout _thePlayer) > 3) && (alive _x) && ((_x distance2D _thePlayer) < _DISTANCE)) then {
				_knownBy = _knownBy + 1;
				//_x globalChat (format ["%1 knows about player %2, knowsAbout %3", _x, _thePlayer, _knownBy]);
			};
		} forEach allUnits;
		_knownCount = (_knownBy max _knownCount);
		//_x globalChat (format ["knownBy: %1", _knownBy]);
        // If the number is at least 8, return true and exit the loop
    } forEach allPlayers;

    if (true) exitWith {_knownCount;};
};

//play some calm music
_playCalmMusic = {

	_track = selectRandom _calmTracks;
	[3, 0] remoteExecCall ["fadeMusic", 0];
	sleep 3;
	_music = [_track] remoteExecCall ["playMusic", 0];
	[5, 0.5] remoteExecCall ["fadeMusic", 0];
};
// play some tense music on all clients
_playMusic = {
	sleep (random[10,15,20]);
	_calmTrack = selectRandom _calmTracks;
	_track = selectRandom _combatTracks;
	_track = selectRandomWeighted[ _track, 0.5, _calmTrack, 0.2, "", 0.3]; //30% of the time, silence
	[3, 0] remoteExecCall ["fadeMusic", 0];
	sleep 5;
	_music = [_track] remoteExecCall ["playMusic", 0];
	[5, 0.5] remoteExecCall ["fadeMusic", 0];
	sleep _COOLDOWN;
};
// Play an extra intense song if it's a LOT of enemies
_playIntenseMusic = {
	sleep (random[10,15,20]);
    _track = selectRandom _intenseTracks;
	_combatTrack = selectRandom _combatTracks;
	_track = selectRandomWeighted[ _track, 0.4, _combatTrack, 0.2, "", 0.4]; //60% of the time, just silence
	[3, 0] remoteExecCall ["fadeMusic", 0];
	sleep 30;
	_music = [_track] remoteExecCall ["playMusic", 0];
	[5, 0.5] remoteExecCall ["fadeMusic", 0];
	sleep _COOLDOWN;
};



// Define a function to run the main logic on the server
_main = {
	_count = call _checkPlayers;
	if(_count == 0) then {
		calmcheckCounter = calmcheckCounter + 1;
		
		if(calmcheckCounter >= _calmCheckCap) then {
			_calmCheckCap = random[_medianCalmChecks * 0.8, _medianCalmChecks, _medianCalmChecks * 1.2];
			calmcheckCounter = 0;
			call _playCalmMusic;
			true;
		};
	} else {
		calmcheckCounter = 0;
		if (_count >= _INTENSECAP) then {
			call _playIntenseMusic;
		} else {
		if (_count >= _REGULARCAP) then {
			_count = call _checkPlayers;
			if(_count >= _INTENSECAP) then {
				call _playIntenseMusic;
			} else {
				call _playMusic;
			};
		};
		};
	};
	
	sleep 5;
	call _main;
};

// Run the main function on the server only
if (isServer) then {
    call _main;
};