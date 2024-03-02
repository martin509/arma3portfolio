// Define a global variable to store the music handle
_music = nil;

// Define a global variable to store the cooldown time
_cooldown = 8 * 60; // 10 minutes in seconds

// Define a function to check if any player is known by at least 8 living OPFOR AIs
_checkPlayers = {
    // Loop through all players on the server
	
    {
		_thePlayer = _x;
		_knownBy = 0;
        // Get the number of OPFOR AIs that know this player
		{
			if((side _x == east) && ((_x knowsAbout _thePlayer) > 1)) then {
				//_x globalChat (format ["%1 knows about player %2!", _x, _thePlayer]);
				_knownBy = _knownBy + 1;
			
			};
		} forEach allUnits;
		_x globalChat (format ["knowsAbout: %1", _knownBy]);
        // If the number is at least 8, return true and exit the loop
        if (_knownBy >= 8) exitWith {
			if(_knownBy >= 24) then {
				sleep (random[8,10,12]);
				call _playIntenseMusic;
				sleep _cooldown;
				true;
			}else { 
				sleep (random[5,7,10]);
				call _playMusic;
				sleep _cooldown;
				true;
			};
			
		};
    } forEach allPlayers;

    // If no player is known by at least 8 OPFOR AIs, return false
    false;
};

// Define a function to play some tense music on all clients
_playMusic = {
    // Pick a random music track from the game's soundtrack
    _tracks = ["vn_cover_blown", "vn_enemy_territory", "vn_hell_on_earth", "vn_imminent_attack"];
	_track = selectRandom _tracks;
	[0.01, 0] remoteExec ["fadeMusic", 0];
	[5, 1] remoteExec ["fadeMusic", 0];
	_music = [_track] remoteExec ["playMusic", 0];
};

_playIntenseMusic = {
	// Play an extra intense song if it's a LOT of enemies
    _tracks = ["vn_contact", "vn_time_to_leave"];
    _track = selectRandom _tracks;
	[0.01, 0] remoteExec ["fadeMusic", 0];
	[5, 1] remoteExec ["fadeMusic", 0];
	_music = [_track] remoteExec ["playMusic", 0];
};

// Define a function to run the main logic on the server
_main = {
	call _checkPlayers;
	sleep 5;
	call _main;
};

// Run the main function on the server only
if (isServer) then {
    call _main;
};