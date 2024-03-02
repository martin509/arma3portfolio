if (!isServer) exitWith {};
_unit = _this select 0;
_loadout = _this select 1;

_weapon = "";
_unitType = "Rifle";

//next, lookup the faction in the hashTable (use a gamelogic object?)

//faction object makeup:
// series of array variables (e.g. `rifles`)
// each array variable has a sub-array for each set of equipment
// the sub-array is selected by _loadoutType, which is the index of the *real* array

//_unit globalChat (format ["unitNames: %1", (_loadout getVariable "unitNames")]);
_unitType = (_loadout getVariable "unitNames") getOrDefault [(getText (configFile >> "CfgVehicles" >> (typeOf _unit) >> "displayName")), "Rifle"] ;

//_unitType = "LEAVE";

/*switch(_unitName) do { //todo: make this switch statement *not* hardcoded
	case "Squad leader": {_unitType = "TL"; _weapon = selectRandomWeighted insTLGuns;};
	case "Machinegunner": {	_unitType = "MG"; _weapon = selectRandomWeighted insMGs;};
	case "Automatic Rifleman": {	_unitType = "MG"; _weapon = selectRandomWeighted insMGs;};
	case "Marksman": {_unitType = "Sniper"; _weapon = selectRandomWeighted insSnipers;};
	case "AT Specialist": {_unitType = "AT"; _weapon = selectRandomWeighted insRifles; _unit removeWeapon "CUP_launch_Metis";};
	case "Rifleman (RPG-7)": {_unitType = "AT"; _weapon = selectRandomWeighted insRifles;};
	case "Grenadier": {_unitType = "GL"; _weapon = selectRandomWeighted insGLs;};
	case "Medic": {_unitType = "MED"; _weapon = selectRandomWeighted insRifles;};
	case "Engineer": { _unitType = "ENG"; _weapon = selectRandomWeighted insRifles;};
	case "AA Specialist": {_unitType = "AA"; _weapon = selectRandomWeighted insRifles;};
	
	case "Crewman": { _unitType = "LEAVE";}; //types loadout doesn't apply to
	case "Officer": { _unitType = "LEAVE";};
	case "Pilot": { _unitType = "LEAVE";};
	case "Sniper": { _unitType = "LEAVE";};
	case "Sniper (KSVK)": { _unitType = "LEAVE";};
	case "Sniper (night)": { _unitType = "LEAVE";};
	case "Commander": { _unitType = "LEAVE";};
	
	default {_unitType = "Rifle"; _weapon = selectRandomWeighted InsRifles;};
};*/

if(_unitType == "LEAVE") exitWith {};

_loadoutType = ((group _unit) getVariable ["loadoutType", -1]);
if (_loadoutType == -1) then {
	// set loadoutType
	_loadoutType = selectRandomWeighted (_loadout getVariable "loadoutTypes");
	(group _unit) setVariable ["loadoutType", _loadoutType, true];
	//_unit globalChat (format ["loadoutType chosen: %1", _loadoutType]);
};

removeAllWeapons _unit;
clearAllItemsFromBackpack _unit;
removeBackpack _unit;

_unit forceAddUniform (selectRandomWeighted (_loadout getVariable "uniforms"));

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
_helmetChance = _loadout getVariable "helmetChance"; //if you want 100% helmets, set it to 3
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
	case "MG": {_unit addBackpack (selectRandomWeighted (_loadout getVariable "backpacks"));};
	case "AT": {_unit addBackpack (selectRandomWeighted (_loadout getVariable ["ATbackpacks", _loadout getVariable "backpacks"]));};
	case "MED": {_unit addBackpack (selectRandomWeighted (_loadout getVariable ["medbackpacks", _loadout getVariable "backpacks"]));};
	case "ENG": {_unit addBackpack (selectRandomWeighted (_loadout getVariable ["engbackpacks", _loadout getVariable "backpacks"]));};
	//deal with assistants
	case "ATAssist": {
		_unit addBackpack (selectRandomWeighted (_loadout getVariable ["ATbackpacks", _loadout getVariable "backpacks"]));
		
		_nAt = floor random[1,2,4];
		_magazine = (selectRandomWeighted (_loadout getVariable "ATAmmo"));
		for "_i" from 1 to _nAt do { _unit addItemToBackpack _magazine ;};
		_nAt = floor random[1,2,3];
		_magazine = (selectRandomWeighted (_loadout getVariable "ATAmmo"));
		for "_i" from 1 to _nAt do { _unit addItemToBackpack _magazine ;};	
	};
	case "MGAssist": {
		_unit addBackpack (selectRandomWeighted (_loadout getVariable "backpacks"));
		//_unit globalChat (format ["backpack added: %1", backpack _unit]);
		_nMags = floor random[3,3,5];
		_weapon = selectRandomWeighted ((_loadout getVariable "MGs") select _loadoutType);
		_magazine = (getArray (configFile >> "CfgWeapons" >> (_weapon select 0) >> "magazines")) select 0;
		for "_i" from 1 to _nMags do { _unit addItemToBackpack  _magazine;};
	};
	case "RTO": {
		_unit addBackpack (selectRandomWeighted (_loadout getVariable "RTObackpacks"));
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
//_unit globalChat (format ["Weapon chosen: %1", _weapon]);

_magazine = (getArray (configFile >> "CfgWeapons" >> (_weapon select 0) >> "magazines")) select 0;

//STANAG EXCEPTION
if(_magazine == "CUP_20Rnd_556x45_Stanag") then{
	_magazine = "CUP_30Rnd_556x45_Stanag";
};
if(_magazine == "vn_kbkg_mag") then {
	_magazine = "vn_type56_mag";
};
_ammoMultiplier = _loadout getVariable ["ammoMultiplier", 1];
_medicalMultiplier = _loadout getVariable ["medicalMultiplier", 1];
_nMags = floor (random[4,6,8] * _ammoMultiplier);
switch(_unitType) do{
	case "TL": {_nGrenades = floor (random [2,2,5] * _ammoMultiplier); //add coloured smoke grenades
		_grenades = _loadout getVariable "colouredSmoke";
		for "_i" from 1 to (_nGrenades) do { _unit addItemToVest selectRandomWeighted _grenades;};
		if((count _weapon) > 3) then {
			_nGL = floor (random [5,7,10] * _ammoMultiplier);
			for "_i" from 1 to (_nGL) do { _unit addItemToVest (_weapon select 3);};
		};
	};
	case "MG": {_nMags = floor (random[4,5,7] * _ammoMultiplier);};
	case "GL": {
		_nGL = floor (random [5,7,10] * _ammoMultiplier);
		for "_i" from 1 to (_nGL) do { _unit addItemToVest (_weapon select 3);};
	};
	case "AT": { //add AT launcher
		_at = selectRandomWeighted (_loadout getVariable "AT");
		_nAt = floor (random[1,2,4] * _ammoMultiplier);
		_ATmagazine = (selectRandomWeighted (_loadout getVariable "ATAmmo"));
		for "_i" from 1 to _nAt do { _unit addItemToBackpack _ATmagazine ;};
		_nAt = floor (random[1,2,3] * _ammoMultiplier);
		_ATmagazine = (selectRandomWeighted (_loadout getVariable "ATAmmo"));
		for "_i" from 1 to _nAt do { _unit addItemToBackpack _ATmagazine ;};	
		_unit addWeapon (_at select 0);
		
		if((_at select 2) > (random 10)) then { 
			_scope = selectRandomWeighted (_loadout getVariable (_at select 1));
			_unit addSecondaryWeaponItem _scope;
		};
	};
	case "AA": {
		_aa = selectRandomWeighted (_loadout getVariable "AA");
		_nAa = floor (random[2,3,4] * _ammoMultiplier);
		_aaMagazine = (getArray (configFile >> "CfgWeapons" >> _aa >> "magazines")) select 0;
		for "_i" from 1 to _nAa do { _unit addItemToBackpack _aaMagazine;};
		_unit addWeapon _aa;
	};
	case "MED": {
		_nMed = floor (random[16,20,23] * _medicalMultiplier);
		_medical = _loadout getVariable "advmedical";
		for "_i" from 1 to _nMed do { _unit addItemToBackpack (selectRandomWeighted _medical);};
		//_unit addItemToBackpack "Medikit";
		//_nMed = random[6,8,10];
		//for "_i" from 1 to _nMed do { _unit addItemToBackpack "FirstAidKit";};
	};
	case "ENG": {
		_unit addItemToBackpack "ToolKit";
		_nEng = floor (random[2,3,5] * _ammoMultiplier);
		for "_i" from 1 to _nEng do { _unit addItemToBackpack (selectRandomWeighted (_loadout getVariable "explosives"));};
	};
	case "Rifle": {
		if ((random 10) < (_loadout getVariable "LATChance")) then {
			_lat = selectRandomWeighted (_loadout getVariable "LAT");
			_unit addWeapon _lat;
		};
	};
};

if(_unitType == "MG") then {
	for "_i" from 1 to (_nMags) do { _unit addMagazine _magazine;};
} else {
	_nPocketMags = (_nMags) min (floor random [1,2,3]);
	for "_i" from 1 to (_nPocketMags) do { _unit addItem _magazine;};
	for "_i" from 1 to (_nMags - _nPocketMags) do { _unit addItemToVest _magazine;};
};

_unit addWeapon (_weapon select 0);

//adding scopes
_scope = "";
if((_weapon select 2) > (random 10)) then { 
	//_unit globalChat (format ["Scope chosen: %1", (_weapon select 1)]);
	_scope = selectRandomWeighted (_loadout getVariable (_weapon select 1));
	_unit addPrimaryWeaponItem _scope;
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
	_magazine = (getArray (configFile >> "CfgWeapons" >> _weapon >> "magazines")) select 0;
	_unit addMagazines [_magazine, _nMags];
	_unit addWeapon _weapon;
};

//first aid
_nMags = floor (random[6,8,13] * _medicalMultiplier); //6-12
_medical = _loadout getVariable "medical";
for "_i" from 1 to _nMags do { _unit addItem (selectRandomWeighted _medical);};

//adding grenades
_grenade = selectRandomWeighted (_loadout getVariable ("smoke"));
_nMags = floor (random[0,1,3] * _ammoMultiplier);
_unit addMagazines[_grenade, _nMags];
_grenade = selectRandomWeighted (_loadout getVariable ("grenades"));
_nMags = floor (random[1,2,3] * _ammoMultiplier);
for "_i" from 1 to (_nMags) do { _unit addItemToVest _grenade;};
_grenade = selectRandomWeighted (_loadout getVariable ("grenades"));
_nMags = floor (random[1,1,3] * _ammoMultiplier);
for "_i" from 1 to (_nMags) do { _unit addItemToVest _grenade;};