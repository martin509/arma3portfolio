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

tkPistolChance = 2;
tkLATChance = 1;
tkHelmetChance = 9;

tkUnitNames = [
	["Squad leader", "TL"],
	["Machinegunner", "MG"],
	["Automatic Rifleman", "MG"],
	["Marksman", "Sniper"],
	["AT Specialist", "AT"],
	["Rifleman (RPG-7)", "AT"],
	["Grenadier", "GL"],
	["Medic", "MED"],
	["Engineer", "ENG"],
	["AA Specialist", "AA"],
	["Asst. AT Rifleman", "ATAssist"],
	["Asst. Machinegunner", "MGAssist"],
	
	["Crewman", "LEAVE"],
	["Officer", "LEAVE"],
	["Pilot", "LEAVE"],
	["Sniper", "LEAVE"],
	["Sniper (KSVK)", "LEAVE"],
	["Sniper (night)", "LEAVE"],
	["Commander", "LEAVE"]
];

tkSVDScopes = [
	"CUP_optic_PSO_1", 7,
	"CUP_optic_PSO_1_open", 3
];

tkAKScopes = [
	"CUP_optic_PSO_1_AK", 10,
	"CUP_optic_PSO_1_AK_open", 3
];

tkPicaScopes = [
	"CUP_optic_SB_11_4x20_PM", 2,
	"CUP_optic_LeupoldMk4", 4
];

tkRPGScopes = [
	"cup_optic_pgo7v", 2,
	"cup_optic_pgo7v2", 1
];

tkAT = [
	["CUP_launch_RPG7V", "RPGScopes", 4], 1
];
tkATAmmo = [
	"CUP_OG7_M", 2,
	"CUP_PG7V_M", 2,
	"CUP_PG7VL_M", 1,
	"CUP_PG7VM_M", 2
];

tkLAT = [
	"CUP_RPG18", 1
];


tkAA = [
	"CUP_launch_9K32Strela", 2
];
tkGrenades = [
	"CUP_HandGrenade_RGD5", 6,
	"CUP_HandGrenade_RGO", 3,
	"CUP_HandGrenade_M67", 2
];
tkSmoke = [
	"SmokeShell", 1
];
tkColouredSmoke = [
	"SmokeShell", 0.75,
	"SmokeShellPurple", 1,
	"SmokeShellOrange", 2
];
tkExplosives = [
	"CUP_MineE_M", 1,
	"CUP_PipeBomb_M", 2
];

tkPistols = [
	"CUP_hgun_Makarov", 6,
	"CUP_hgun_TT", 3,
	"CUP_hgun_Browning_HP", 1.25,
	"CUP_hgun_CZ75", 0.75
];



tkUniforms = [
	"CUP_U_O_TK_Green", 2,
	"CUP_U_O_TK_MixedCamo", 1.5
];

tkVests = [
	"CUP_V_O_TK_Vest_1", 6,
	"CUP_V_O_SLA_M23_1_BRN", 2,
	"CUP_V_O_SLA_M23_1_OD", 2,
	"CUP_V_I_RACS_Carrier_Rig_wdl_2", 1,
	"CUP_V_B_PASGT_OD", 2
];


tkHelmets = [
	"CUP_H_TK_Helmet", 2,
	"CUP_H_SLA_Helmet_BLK", 0.75,
	"CUP_H_SLA_Helmet_BLK_worn", 1.25,
	"CUP_H_SLA_Helmet_DES", 1
];

tkHats = [
	"CUP_H_PMC_Cap_Tan", 1,
	"H_Cap_oli", 1.25,
	"usm_bdu_cap_taki", 0.75,
	"usm_bdu_cap_odg", 1,
	//caps: 4
	"H_Booniehat_khk", 4,
	"usm_bdu_boonie_odg", 2.25,
	"usm_bdu_boonie_taki", 1.75,
	//boonies: 8
	
	"usm_headwrap_odg1", 0.5,
	"usm_headwrap_odg2", 0.5
	//headwraps: 1 
];

tkBackpacks = [
	"CUP_B_CivPack_WDL", 2,
	"CUP_B_AlicePack_Bedroll", 0.5,
	"CUP_B_AlicePack_Khaki", 1
];

tkATBackpacks = [
	"CUP_B_RPGPack_Khaki", 1
];

tkMedBackpacks = [
	"CUP_B_TK_Medic_Desert", 1
];

tkBasicMedical = [ //avg 8 items per basic med
	"ACE_fieldDressing", 2,
	"ACE_elasticBandage", 1.75,
	"ACE_packingBandage", 1.75,
	"ACE_tourniquet", 1.5,
	"ACE_morphine", 0.75,
	"ACE_splint", 0.15,
	"ACE_salineIV_250", 0.1
];

tkAdvMedical = [ //for medics, who get.. let's say 20 items @ random
	//on average, 10 bandage, 2 blood, 2 splint, 4 tourniquet, 2 injectables
	"ACE_fieldDressing", 5,
	"ACE_elasticBandage", 2.5,
	"ACE_packingBandage", 2.5,
	"ACE_bloodIV_500", 0.5,
	"ACE_salineIV_500", 1,
	"ACE_bloodIV_250", 0.5,
	"ACE_tourniquet", 4,
	"ACE_splint", 2,
	"ACE_morphine", 1.25,
	"ACE_epinephrine", 0.75
];

tkLoadoutTypes = [//0 = soviet, 1 = western, etc
	0, 1.5,
	1, 1
];


//SOVIET WEAPONS
//**************************************

tkRifles_Soviet = [
	["CUP_arifle_AK47_Early", "", -1], 1,
	["CUP_arifle_TYPE_56_2_Early", "", -1], 4,
	["CUP_arifle_AKM_Early", "", -1], 6,
	["CUP_arifle_AKMS_Early", "", -1], 4,
	["CUP_arifle_Sa58P", "", -1], 0.5
];

tkTLRifles_Soviet = [
	["CUP_arifle_AK47_Early", "", -1], 0.5,
	["CUP_arifle_TYPE_56_2_Early", "", -1], 1,
	["CUP_arifle_AKM_Early", "", -1], 4,
	["CUP_arifle_AKMS_Early", "", -1], 2,
	["CUP_arifle_Sa58P", "", -1], 2
];

tkGLs_Soviet = [
	["CUP_arifle_AK47_GL", "", -1, "CUP_1Rnd_HE_GP25_M"], 0.5,
	["CUP_arifle_AKM_GL", "", -1, "CUP_1Rnd_HE_GP25_M"], 2.5
];

tkMGs_Soviet = [
	["CUP_lmg_pkm", "", -1], 5,
	["CUP_arifle_RPK74", "", -1], 3
];

tkSnipers_Soviet = [
	["CUP_srifle_SVD", "SVDScopes", 10], 6,
	["CUP_srifle_SVD_des", "SVDScopes", 10], 1,
	["CUP_arifle_AKM", "AKScopes", 10], 2,
	["CUP_arifle_Sa58Pi", "AKScopes", 10], 1
];



//**********************

//WESTERN WEAPONS
tkRifles_West = [
	["CUP_arifle_FNFAL", "", -1], 1,
	["CUP_arifle_FNFAL5060", "", -1], 2,
	["CUP_arifle_FNFAL5060_desert", "", -1], 0.2,
	["CUP_arifle_FNFAL5060_sand", "", -1], 0.2, 
	
	["CUP_arifle_FNFAL5061", "", -1], 0.5,
	//total FAL: 4

	["CUP_arifle_M16A1", "", -1], 6
];

tkTLRifles_West = [
	["CUP_arifle_FNFAL", "", -1], 1.5,
	["CUP_arifle_FNFAL5060", "", -1], 3,
	["CUP_arifle_FNFAL5060_desert", "", -1], 0.3,
	["CUP_arifle_FNFAL5060_sand", "", -1], 0.3, 
	
	["CUP_arifle_FNFAL5061", "", -1], 0.75,
	//total FAL: 6

	["CUP_arifle_M16A1", "", -1], 4
];

tkGLs_West = [
	["CUP_arifle_M16A1GL", "", -1, "CUP_1Rnd_HE_M203"], 7
];

tkMGs_West = [
	["CUP_lmg_pkm", "", -1], 5
];

tkSnipers_West = [
	["CUP_srifle_SVD", "SVDScopes", 10], 6,
	["CUP_srifle_SVD_des", "SVDScopes", 10], 1
];

//****************

loadoutObjTK = "Land_HelipadEmpty_F" createVehicle [0,0,0];

loadoutObjTK setVariable ["unitNames", createHashMapFromArray tkUnitNames, true];
loadoutObjTK setVariable ["loadoutTypes", tkloadoutTypes, true];

loadoutObjTK setVariable ["LATChance", tkLATChance, true];
loadoutObjTK setVariable ["pistolChance", tkPistolChance, true];
loadoutObjTK setVariable ["helmetChance", tkHelmetChance, true];

loadoutObjTK setVariable ["vests", tkVests, true];
loadoutObjTK setVariable ["uniforms", tkUniforms, true];
loadoutObjTK setVariable ["helmets", tkHelmets, true];
loadoutObjTK setVariable ["hats", tkHats, true];
loadoutObjTK setVariable ["backpacks", tkBackpacks, true];
loadoutObjTK setVariable ["ATbackpacks", tkATBackpacks, true];
loadoutObjTK setVariable ["medbackpacks", tkMedBackpacks, true];

loadoutObjTK setVariable ["SVDScopes", tkSVDScopes, true];
loadoutObjTK setVariable ["AKScopes", tkAKScopes, true];
loadoutObjTK setVariable ["PicaScopes", tkPicaScopes, true];
loadoutObjTK setVariable ["RPGScopes", tkRPGScopes, true];

loadoutObjTK setVariable ["medical", tkBasicMedical, true];
loadoutObjTK setVariable ["advmedical", tkAdvMedical, true];
loadoutObjTK setVariable ["grenades", tkGrenades, true];
loadoutObjTK setVariable ["smoke", tkSmoke, true];
loadoutObjTK setVariable ["colouredSmoke", tkColouredSmoke, true];
loadoutObjTK setVariable ["explosives", tkExplosives, true];
loadoutObjTK setVariable ["AT", tkAT, true];
loadoutObjTK setVariable ["ATAmmo", tkATAmmo, true];
loadoutObjTK setVariable ["AA", tkAA, true];
loadoutObjTK setVariable ["LAT", tkLAT, true];

loadoutObjTK setVariable ["pistols", tkPistols, true];
loadoutObjTK setVariable ["TLrifles", [tkTLRifles_Soviet, tkTLRifles_West], true];
loadoutObjTK setVariable ["rifles", [tkRifles_Soviet, tkRifles_West], true];
loadoutObjTK setVariable ["GLs", [tkGLs_Soviet, tkGLs_West], true];
loadoutObjTK setVariable ["MGs", [tkMGs_Soviet, tkMGs_West], true];
loadoutObjTK setVariable ["snipers", [tkSnipers_Soviet, tkSnipers_West], true];

factionLoadoutMap set ["CUP_O_TK", loadoutObjTK];