if (isServer) then {
	execVM "music_loop.sqf";
};

ace_hearing_disableVolumeUpdate = true; //stop ACE from overriding fadeMusic