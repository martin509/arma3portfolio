params ["_unit", "_loadout"];

if (!isServer) exitWith {};

//because some aspects of Arma script commands are local-only when they really shouldn't (such as adding items to inventories), we have to make absolutely sure we rehome the unit to the server
if(!(local _unit)) then {
	diag_log (format ["Unit %1 not local, changing locality attempt 1", _unit]);
	_success = ((group _unit) setGroupOwner 2); 
	if(!_success) then {
		diag_log (format ["Attempt failed, retrying"]);
		waitUntil {sleep 0.1; _success = ((group _unit) setGroupOwner 2); (_success || (local _unit));};
	};
	diag_log (format ["Locality change successful"]);
};
_unit setVariable ["ALiVE_OverrideLoadout", true]; //doing it TWICE, for GOOD MEASURE

_weapon = "";
_unitType = "Rifle";

//next, lookup the faction in the hashTable (use a gamelogic object?)

//faction object makeup:
// series of array variables (e.g. `rifles`)
// each array variable has a sub-array for each set of equipment
// the sub-array is selected by _loadoutType, which is the index of the *real* array

_unitType = (_loadout getVariable "unitNames") getOrDefault [(getText (configFile >> "CfgVehicles" >> (typeOf _unit) >> "displayName")), "Rifle"] ;
_unitName = (getText (configFile >> "CfgVehicles" >> (typeOf _unit) >> "displayName"));

if(_unitType == "LEAVE") exitWith {};

_loadoutType = ((group _unit) getVariable ["loadoutType", -1]);
if (_loadoutType == -1) then {
	// set loadoutType
	_loadoutType = selectRandomWeighted (_loadout getVariable "loadoutTypes");
	(group _unit) setVariable ["loadoutType", _loadoutType, true];
};

removeAllWeapons _unit;
clearAllItemsFromBackpack _unit;
removeBackpackGlobal _unit;
_uniform = selectRandomWeighted (_loadout getVariable "uniforms");
diag_log (format ["Unit %1, uniform chosen: %2", _unitName, _uniform]);
_unit forceAddUniform (_uniform);

//vests
switch(_unitType) do {
	case "MG": {_unit addVest (selectRandomWeighted (_loadout getVariable ["mgvests", _loadout getVariable "vests"]));};
	case "MED": {_unit addVest (selectRandomWeighted (_loadout getVariable ["medvests", _loadout getVariable "vests"]))};
	case "ENG": {_unit addVest (selectRandomWeighted (_loadout getVariable ["engvests", _loadout getVariable "vests"]))};
	case "Sniper": {_unit addVest (selectRandomWeighted (_loadout getVariable ["snipervests", _loadout getVariable "vests"]))};
	case "GL": {_unit addVest (selectRandomWeighted (_loadout getVariable ["glvests", _loadout getVariable "vests"]))};
	case "TL": {_unit addVest (selectRandomWeighted (_loadout getVariable ["tlvests", _loadout getVariable "vests"]))};
	default {_unit addVest (selectRandomWeighted (_loadout getVariable "vests"));};
};

//select headgear
_helmetChance = _loadout getVariable "helmetChance"; //if you want 100% helmets, set it to 30
switch(_unitType) do {
	case "Sniper": {_helmetChance = _helmetChance / 3;};
	case "MED": {_helmetChance = _helmetChance / 2;};
};
if(random 10 < _helmetChance) then {
	_unit addHeadgear (selectRandomWeighted (_loadout getVariable "helmets"));
}else {
	_unit addHeadgear (selectRandomWeighted (_loadout getVariable "hats"));
};

//backpacks
switch(_unitType) do { 
	case "MG": {_unit addBackpackGlobal (selectRandomWeighted (_loadout getVariable "backpacks"));};
	case "AT": {_unit addBackpackGlobal (selectRandomWeighted (_loadout getVariable ["ATbackpacks", _loadout getVariable "backpacks"]));};
	case "MED": {_unit addBackpackGlobal (selectRandomWeighted (_loadout getVariable ["medbackpacks", _loadout getVariable "backpacks"]));};
	case "ENG": {_unit addBackpackGlobal (selectRandomWeighted (_loadout getVariable ["engbackpacks", _loadout getVariable "backpacks"]));};
	
	//dealing with ammo bearers:
	case "ATAssist": {
		_unit addBackpackGlobal (selectRandomWeighted (_loadout getVariable ["ATbackpacks", _loadout getVariable "backpacks"]));
		
		_nAt = floor random[1,2,4];
		_magazine = (selectRandomWeighted (_loadout getVariable "ATAmmo"));
		for "_i" from 1 to _nAt do { [_unit, _magazine] remoteExec["addItemToBackpack", _unit];};
		_nAt = floor random[1,2,3];
		_magazine = (selectRandomWeighted (_loadout getVariable "ATAmmo"));
		for "_i" from 1 to _nAt do {[_unit, _magazine] remoteExec["addItemToBackpack", _unit];};	
		//_unit addItemToBackpack _magazine ;
	};
	case "MGAssist": {
		_unit addBackpackGlobal (selectRandomWeighted (_loadout getVariable "backpacks"));
		//_unit globalChat (format ["backpack added: %1", backpack _unit]);
		_nMags = floor random[3,3,5];
		_weapon = selectRandomWeighted ((_loadout getVariable "MGs") select _loadoutType);
		_magazine = (getArray (configFile >> "CfgWeapons" >> (_weapon select 0) >> "magazines")) select 0;
		for "_i" from 1 to _nMags do {[_unit, _magazine] remoteExec["addItemToBackpack", _unit];};
	};
	case "RTO": {
		_unit addBackpackGlobal (selectRandomWeighted (_loadout getVariable "RTObackpacks"));
	};
};

//select weapon
switch(_unitType) do {
	case "TL": {
		_weapon = selectRandomWeighted ((_loadout getVariable "TLrifles") select _loadoutType);
		_GLChance = _loadout getVariable ["TLGLChance", 0];
		if(random 10 < _GLChance) then {
			_weapon = selectRandomWeighted ((_loadout getVariable "GLs") select _loadoutType);
		};
	};
	case "MG": {_weapon = selectRandomWeighted ((_loadout getVariable "MGs") select _loadoutType);};
	case "GL": {_weapon = selectRandomWeighted ((_loadout getVariable "GLs") select _loadoutType);};
	case "Sniper": {_weapon = selectRandomWeighted ((_loadout getVariable "snipers") select _loadoutType);};
	case "MED": {_weapon = selectRandomWeighted ((_loadout getVariable ["carbines", _loadout getVariable "rifles"]) select _loadoutType);};
	default {_weapon = selectRandomWeighted ((_loadout getVariable "rifles") select _loadoutType);};
};

_magazine = (getArray (configFile >> "CfgWeapons" >> (_weapon select 0) >> "magazines")) select 0;

//magazine exceptions
if(_magazine == "CUP_20Rnd_556x45_Stanag") then{
	_magazine = "CUP_30Rnd_556x45_Stanag";
};
if(_magazine == "vn_kbkg_mag") then {
	_magazine = "vn_type56_mag";
};
_ammoMultiplier = _loadout getVariable ["ammoMultiplier", 1];
_medicalMultiplier = _loadout getVariable ["medicalMultiplier", 1];
_magSize = getNumber (configFile >> "CfgMagazines" >> _magazine >> "count" );

_magCount = (3 + (180/_magSize)/2) max 4; 
//aim for higher mag counts with smaller mags, e.g.:
//10rnd: 12 mags, roundcount 120
//20rnd: 7.5 mags, roundcount 150
//30rnd: 6 mags, roundcount 180
//for 20rnd mags, avg of 7.5; for 71rnd mags, avg of 4.25

_nMags = floor (random[_magCount * 0.65,_magCount,_magCount * 1.35] * _ammoMultiplier);

switch(_unitType) do{
	case "TL": {
		_nGrenades = floor (random [2,2,5] * _ammoMultiplier); //add coloured smoke grenades
		_grenades = _loadout getVariable "colouredSmoke";
		for "_i" from 1 to (_nGrenades) do {[_unit, (selectRandomWeighted _grenades)] remoteExec["addItemToVest", _unit];};
		if((count _weapon) > 3) then {
			_nGL = floor (random [5,7,10] * _ammoMultiplier);
			for "_i" from 1 to (_nGL) do { [_unit, (_weapon select 3)] remoteExec["addItemToVest", _unit];};
		};
	};
	case "MG": {
		_magCount = (2.5 + (500/_magSize)/2) max 3.5; //for 45rnd mags, avg of 8.05, for 200rnd, avg of 3.75
		_nMags = floor (random[_magCount * 0.75 ,_magCount,_magCount * 1.4] * _ammoMultiplier);
	};
	case "GL": {
		_nGL = floor (random [5,7,10] * _ammoMultiplier);
		for "_i" from 1 to (_nGL) do {[_unit, (_weapon select 3)] remoteExec["addItemToVest", _unit];};
	};
	case "AT": {
		//todo: redo this to instead target a certain weight of AT rockets instead of a number (so lightweight HE rockets show up more often)
		_at = selectRandomWeighted (_loadout getVariable "AT");
		_nAt = floor (random[1,2,4] * _ammoMultiplier);
		_ATmagazine = (selectRandomWeighted (_loadout getVariable "ATAmmo"));
		for "_i" from 1 to _nAt do { [_unit, _ATmagazine] remoteExec["addItemToBackpack", _unit];};
		_nAt = floor (random[1,2,3] * _ammoMultiplier);
		_ATmagazine = (selectRandomWeighted (_loadout getVariable "ATAmmo"));
		for "_i" from 1 to _nAt do {[_unit, _ATmagazine] remoteExec["addItemToBackpack", _unit];};	
		_unit addWeaponGlobal (_at select 0);
		
		if((_at select 2) > (random 10)) then { 
			_scope = selectRandomWeighted (_loadout getVariable (_at select 1));
			[_unit, _scope] remoteExec["addSecondaryWeaponItem", _unit];
		};
	};
	case "AA": {
		_aa = selectRandomWeighted (_loadout getVariable "AA");
		_nAa = floor (random[2,3,4] * _ammoMultiplier);
		_aaMagazine = (getArray (configFile >> "CfgWeapons" >> _aa >> "magazines")) select 0;
		for "_i" from 1 to _nAa do {[_unit, _aaMagazine] remoteExec["addItemToBackpack", _unit];};
		_unit addWeaponGlobal _aa;
	};
	case "MED": {
		_nMed = floor (random[16,20,23] * _medicalMultiplier);
		_medical = _loadout getVariable "advmedical";
		for "_i" from 1 to _nMed do { [_unit, (selectRandomWeighted _medical)] remoteExec["addItemToBackpack", _unit];};
	};
	case "ENG": {
		[_unit, "ToolKit"] remoteExec["addItemToBackpack", _unit];
		_nEng = floor (random[2,3,5] * _ammoMultiplier);
		for "_i" from 1 to _nEng do {[_unit, (selectRandomWeighted (_loadout getVariable "explosives"))] remoteExec["addItemToBackpack", _unit];};
	};
	case "Rifle": {
		if ((random 10) < (_loadout getVariable "LATChance")) then {
			_lat = selectRandomWeighted (_loadout getVariable "LAT");
			_unit addWeaponGlobal _lat;
		};
	};
};

//first aid
_nMed = floor (random[6,8,13] * _medicalMultiplier); //6-12
_medical = _loadout getVariable "medical";
for "_i" from 1 to _nMed do { [_unit, (selectRandomWeighted _medical)] remoteExec["addItemToUniform", _unit];};

//adding grenades
_grenade = selectRandomWeighted (_loadout getVariable ("smoke"));
_nNades = floor (random[0,1,3] * _ammoMultiplier);

for "_i" from 1 to (_nNades) do { _unit addMagazineGlobal _grenade;};

_grenade = selectRandomWeighted (_loadout getVariable ("grenades"));
_nNades = floor (random[1,2,3] * _ammoMultiplier);
for "_i" from 1 to (_nNades) do {[_unit, _grenade] remoteExec["addItemToVest", _unit];};
_grenade = selectRandomWeighted (_loadout getVariable ("grenades"));
_nNades = floor (random[1,1,3] * _ammoMultiplier);
for "_i" from 1 to (_nNades) do { [_unit, _grenade] remoteExec["addItemToVest", _unit];};

//adding ammo
if(_unitType == "MG") then {
	for "_i" from 1 to (_nMags) do { _unit addMagazineGlobal _magazine;};
} else {
	_nPocketMags = (_nMags) min (floor random [1,2,3]);
	for "_i" from 1 to (_nPocketMags) do {_unit addMagazineGlobal _magazine;};
	for "_i" from 1 to (_nMags - _nPocketMags) do {
		if(loadVest _unit > 0.9) then{ //is the vest full?
			if(backpack _unit == "") then {
				_unit addBackpackGlobal (selectRandomWeighted (_loadout getVariable "backpacks"));
			};
			_unit addMagazineGlobal _magazine;
		} else {
			[_unit, _magazine] remoteExec["addItemToVest", _unit];
		};
	};
};

_unit addWeaponGlobal (_weapon select 0);

//adding scopes
_scope = "";
if((_weapon select 2) > (random 10)) then { 
	_scope = selectRandomWeighted (_loadout getVariable (_weapon select 1));
	[_unit, _scope] remoteExec ["addPrimaryWeaponItem", _unit];

};

//adding pistols
_pistolChance = _loadout getVariable "pistolChance";
switch (_unitType) do {
	case "TL": {_pistolChance = _pistolChance*4;};
	case "MG": {_pistolChance = _pistolChance*3;};
	case "MED": {_pistolChance = _pistolChance*2;};
	case "Sniper": {_pistolChance = _pistolChance*4;};
};
if(_pistolChance > (random 10)) then {
	_nMags = floor (random [2,2,4] * _ammoMultiplier);
	_weapon = selectRandomWeighted (_loadout getVariable "pistols");
	_magazine = (getArray (configFile >> "CfgWeapons" >> (_weapon) >> "magazines")) select 0;
	for "_i" from 1 to (_nMags) do { _unit addMagazineGlobal _magazine;};
	_unit addWeaponGlobal _weapon;
};
