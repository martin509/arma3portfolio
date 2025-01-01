/*switch(_unitName) do {
	case "Commander": {_unitType = "TL"; _weapon = selectRandomWeighted insTLGuns;};
	case "Machine Gunner": {	_unitType = "MG"; _weapon = selectRandomWeighted insMGs;};
	case "Autorifleman": {	_unitType = "MG"; _weapon = selectRandomWeighted insMGs;};
	case "Sniper": {_unitType = "Sniper"; _weapon = selectRandomWeighted insSnipers;};
	case "AT Specialist": {_unitType = "AT"; _weapon = selectRandomWeighted insRifles;};
	case "Grenadier": {_unitType = "GL"; _weapon = selectRandomWeighted insGLs;};
	case "Medic": {_unitType = "MED"; _weapon = selectRandomWeighted insRifles;};
	case "Engineer": { _unitType = "ENG"; _weapon = selectRandomWeighted insRifles;};
	case "AA Specialist": {_unitType = "AA"; _weapon = selectRandomWeighted insRifles;};
	default {_unitType = "Rifle"; _weapon = selectRandomWeighted InsRifles;};
};*/

napaPistolChance = 4;
napaLATChance = 1;
napaHelmetChance = 2;

napaUnitNames = [
	["Commander", "TL"],
	["Machinegunner", "MG"],
	["Autorifleman", "MG"],
	["Hunter", "Sniper"],
	["AT Specialist", "AT"],
	["Grenadier", "GL"],
	["Medic", "MED"],
	["Engineer", "ENG"],
	["Saboteur (Explosives)", "ENG"],
	["Sapper", "ENG"],
	["AA Specialist", "AA"],
	["Ammo Bearer", "MGAssist"],
	
	["Crewman", "LEAVE"],
	["Officer", "LEAVE"],
	["Pilot", "LEAVE"],
	["Boss", "LEAVE"],
	["Insurgent", "LEAVE"]
];

napaSVDScopes = [
	"CUP_optic_PSO_1", 7,
	"CUP_optic_PSO_1_open", 3
];

napaAKScopes = [
	"CUP_optic_PSO_1_AK", 5,
	"CUP_optic_PSO_1_AK_open", 3
];

napaPicaSights = [
	"CUP_optic_Aimpoint_5000", 1,
	"CUP_optic_CompM4", 2,
	"CUP_optic_ZDDot", 1,
	"CUP_optic_HensoldtZO", 0.5
];

napaPicaScopes = [
	"CUP_optic_HensoldtZO", 1,
	"CUP_optic_LeupoldMk4", 0.75
];

napaNagantScope = [
	"CUP_optic_PEM", 1
];

napaAKSights = [
	"CUP_optic_1p63", 4,
	"CUP_optic_OKP_7", 2,
	"CUP_optic_ekp_8_02", 2,
	"CUP_optic_kobra", 4
];

napaRPGScopes = [
	"cup_optic_pgo7v", 2,
	"cup_optic_pgo7v2", 1
];

napaAT = [
	["CUP_launch_RPG7V", "RPGScopes", 3], 1
];
napaATAmmo = [
	"CUP_OG7_M", 2,
	"CUP_PG7V_M", 1,
	"CUP_PG7VL_M", 1,
	"CUP_PG7VM_M", 2
];

napaLAT = [
	"CUP_launch_RPG18", 1
];

napaAA = [
	"CUP_launch_9K32Strela", 2
];

napaGrenades = [
	"CUP_HandGrenade_RGD5", 2,
	"CUP_HandGrenade_RGO", 1,
	"CUP_HandGrenade_M67", 0.5
];
napaSmoke = [
	"SmokeShell", 1
];
napaColouredSmoke = [
	"SmokeShell", 1,
	"SmokeShellGreen", 1.5,
	"SmokeShellYellow", 1.5
];
napaExplosives = [
	"CUP_MineE_M", 1,
	"CUP_IED_V1_M", 2,
	"CUP_IED_V3_M", 2,
	"CUP_PipeBomb_M", 2
];

napaPistols = [
	"CUP_hgun_Makarov", 3,
	"CUP_hgun_TT", 2,
	"CUP_hgun_Browning_HP", 1.5,
	"CUP_hgun_CZ75", 2
];

napaUniforms = [
	"CUP_U_I_GUE_Anorak_01", 1,
	"CUP_U_I_GUE_Anorak_02", 1,
	"CUP_U_I_GUE_Anorak_03", 1,
	"CUP_U_I_GUE_WorkU_01", 1,
	"CUP_U_I_GUE_WorkU_02", 1,
	"CUP_U_I_GUE_WorkU_03", 1,
	"CUP_U_I_GUE_Flectarn", 1,
	"CUP_U_I_GUE_Flectarn2", 1,
	"CUP_U_I_GUE_Flectarn3", 1,
	"CUP_U_I_GUE_Flectarn4", 1,
	"CUP_U_I_GUE_Woodland1", 1,
	"CUP_U_C_Woodlander_01", 1,
	"CUP_U_C_Woodlander_02", 1,
	"CUP_U_C_Woodlander_03", 1,
	"CUP_U_C_Woodlander_04", 1
];

napaVests = [
	"CUP_V_I_RACS_Carrier_Rig_2", 1,
	"CUP_V_I_RACS_Carrier_Rig_3", 1,
	"CUP_V_I_RACS_Carrier_Rig_wdl_2", 1,
	"CUP_V_I_RACS_Carrier_Rig_wdl_3", 1,
	
	"V_BandollierB_oli", 1,
	"V_BandollierB_cbr", 1,
	
	"CUP_V_O_SLA_M23_1_OD", 2,
	"CUP_V_O_SLA_M23_1_BRN", 2,
	"CUP_V_O_SLA_Carrier_Belt02", 2,
	
	"CUP_V_I_Guerilla_Jacket", 5,
	"CUP_V_I_Carrier_Belt", 4,

	"CUP_V_B_GER_Tactical_Fleck", 3,
	"V_I_G_resistanceLeader_F", 3,
	"V_TacVest_oli", 3,
	"V_TacVest_blk", 3,
	"CUP_V_I_RACS_Carrier_Vest_wdl_3", 1,
	"CUP_V_I_RACS_Carrier_Vest_wdl", 1
	//Total of non-armoured vests: 15, total armoured: 12
];


napaHelmets = [
	"usm_helmet_pasgt_ce_wdl", 2,
	"usm_helmet_pasgt_ce_odg", 1,
	
	"CUP_H_WZ67", 1.5,
	
	"CUP_H_SLA_Helmet", 4,
	"CUP_H_SLA_Helmet_BLK_worn", 2,
	//total: 6
	
	"CUP_H_Ger_M92_RGR", 0.5,
	"CUP_H_Ger_M92", 0.5,
	"CUP_H_Ger_M92_Black", 0.4
	
];

napaHats = [
	"CUP_H_Ger_Boonie2_Flecktarn", 1.5,
	"CUP_H_USA_Cap_M81", 1,
	"CUP_H_FR_BandanaWdl", 1.5,
	"CUP_H_FR_BandanaGreen", 2,
	"CUP_H_PMC_Cap_Tan", 1.5,
	"H_Cap_oli", 1.5,
	"usm_bdu_cap_odg", 0.75,
	"usm_bdu_cap_wdl", 0.75,
	"usm_bdu_boonie_wdl", 1,
	"usm_bdu_boonie_erdl", 0.5,
	"usm_bdu_boonie_odg", 1.5,
	"", 7
	
];

napaBackpacks = [
	"CUP_B_CivPack_WDL", 1,
	"CUP_B_HikingPack_Civ", 1,
	"CUP_B_AlicePack_OD", 1
];

napaATBackpacks = [
	"CUP_B_RPGPack_Khaki", 1
];


napaBasicMedical = [ //4 items per FAK, 2 bandage, 1 tourniquet, 1 morphine
	"ACE_fieldDressing", 2.5,
	"ACE_elasticBandage", 1.5,
	"ACE_packingBandage", 1.5,
	"ACE_tourniquet", 1.25,
	"ACE_morphine", 0.25
];

napaAdvMedical = [ //for medics, who get.. let's say 20 items @ random
	//on average, 10 bandage, 2 blood, 2 splint, 4 tourniquet, 2 injectables
	"ACE_fieldDressing", 5,
	"ACE_elasticBandage", 2.5,
	"ACE_packingBandage", 2.5,
	"ACE_salineIV_500", 1,
	"ACE_tourniquet", 4,
	"ACE_splint", 2,
	"ACE_morphine", 1.75,
	"ACE_epinephrine", 1.25
];

napaLoadoutTypes = [//0 = soviet, 1 = western, etc
	0, 1
];


//SOVIET WEAPONS
//**************************************

napaRifles_Soviet = [
	["CUP_arifle_AK47", "AKSights", 0.5], 2,
	["CUP_arifle_AKM", "AKSights", 1], 12,
	["CUP_arifle_AKMS", "AKSights", 1], 10,
	["CUP_SKS", "", -1], 3,
	//total AKM: 24
	
	["CUP_arifle_Sa58P", "", -1], 3,
	["CUP_arifle_Sa58P_wood", "", -1], 1,
	["CUP_arifle_Sa58P_woodland", "", -1], 0.75,
	["CUP_arifle_Sa58V", "", -1], 2.25,
	["CUP_arifle_Sa58V_wood", "", -1], 0.75,
	["CUP_arifle_Sa58V_woodland", "", -1], 0.5,
	//total Sa58: 9

	["CUP_arifle_AK74", "AKSights", 1], 6,
	["CUP_arifle_AKS74", "AKSights", 1], 3,
	["CUP_arifle_AKS74U", "AKSights", 1], 3,
	//total AK74: 12
	
	//total NATO:
	["CUP_arifle_G3A3_ris", "PicaSights", 2], 2.25,
	["CUP_arifle_G3A3_ris_black", "PicaSights", 2], 0.75,
	//total G3: 3
	["CUP_arifle_M16A1", "", -1], 3,
	["CUP_arifle_M16A2", "", -1], 0.75,
	["CUP_arifle_Colt727", "", -1], 0.25,
	//total M16: 4
	["CUP_arifle_FNFAL5060", "", -1], 2,
	["CUP_arifle_FNFAL5060_woodland", "", -1], 0.25,
	["CUP_arifle_FNFAL", "", -1], 1,
	["CUP_arifle_FNFAL_woodland", "", -1], 0.25,
	//total FAL: 3.5
	["CUP_arifle_G36C", "PicaSights", 2], 2,
	["CUP_arifle_G36C_VFG", "PicaSights", 4], 0.5,
	["CUP_arifle_G36C_wdl", "PicaSights", 3], 0.5,
	["CUP_arifle_G36C_VFG_wdl", "PicaSights", 5], 0.1
	//total G36C: 3.1
];

napaTLRifles_Soviet = [
	["CUP_arifle_AK47", "AKSights", 0.5], 2,
	["CUP_arifle_AKM", "AKSights", 1], 12,
	["CUP_arifle_AKMS", "AKSights", 1], 10,
	//total AKM: 24
	
	["CUP_arifle_Sa58P", "", -1], 3,
	["CUP_arifle_Sa58P_wood", "", -1], 1,
	["CUP_arifle_Sa58P_woodland", "", -1], 0.75,
	["CUP_arifle_Sa58V", "", -1], 2.25,
	["CUP_arifle_Sa58V_wood", "", -1], 0.75,
	["CUP_arifle_Sa58V_woodland", "", -1], 0.5,
	//total Sa58: 9

	["CUP_arifle_AK74", "AKSights", 1], 6,
	["CUP_arifle_AKS74", "AKSights", 1], 3,
	["CUP_arifle_AKS74U", "AKSights", 0.5], 3,
	//total AK74: 12
	
	//total NATO: 13.6
	["CUP_arifle_G3A3_ris", "PicaSights", 3], 3,
	["CUP_arifle_G3A3_ris_black", "PicaSights", 3], 1,
	//total G3: 3
	["CUP_arifle_M16A1", "", -1], 3.5,
	["CUP_arifle_M16A2", "", -1], 1,
	["CUP_arifle_Colt727", "", -1], 0.5,
	//total M16: 4
	["CUP_arifle_FNFAL5060", "", -1], 2.5,
	["CUP_arifle_FNFAL5060_woodland", "", -1], 0.5,
	["CUP_arifle_FNFAL", "", -1], 1.5,
	["CUP_arifle_FNFAL_woodland", "", -1], 0.5,
	//total FAL: 3.5
	["CUP_arifle_G36C", "PicaSights", 4], 3,
	["CUP_arifle_G36C_VFG", "PicaSights", 6], 0.75,
	["CUP_arifle_G36C_wdl", "PicaSights", 5], 0.75,
	["CUP_arifle_G36C_VFG_wdl", "PicaSights", 7], 0.25
	//total G36C: 3.1
];

napaGLs_Soviet = [
	["CUP_arifle_AKM_GL", "AKSights", 1, "CUP_1Rnd_HE_GP25_M"], 8,
	["CUP_arifle_AKMS_GL", "AKSights", 0.75, "CUP_1Rnd_HE_GP25_M"], 4,
	["CUP_arifle_AK74_GL", "AKSights", 2, "CUP_1Rnd_HE_GP25_M"], 3,
	["CUP_arifle_AKS74_GL", "AKSights", 1.5, "CUP_1Rnd_HE_GP25_M"], 1.5,
	["CUP_arifle_M16A1GL", "", -1, "CUP_1Rnd_HE_M203"], 3
];

napaMGs_Soviet = [
	["CUP_lmg_pkm", "", -1], 6,
	["CUP_arifle_RPK74_45", "", -1], 4,
	["CUP_arifle_RPK74", "", -1], 2
];

napaSnipers_Soviet = [
	["CUP_srifle_SVD", "SVDScopes", 10], 2,
	["CUP_arifle_AKM", "AKScopes", 10], 1.5,
	["CUP_arifle_AK74", "AKScopes", 10], 1.5,
	["CUP_srifle_CZ550", "", -1], 1,
	["CUP_srifle_Mosin_Nagant", "NagantScope", 10], 0.5,
	["CUP_arifle_G3A3_ris", "PicaScopes", 10], 0.75
];



//**********************

loadoutObjnapa = "Land_HelipadEmpty_F" createVehicle [0,0,1];

loadoutObjnapa setVariable ["unitNames", createHashMapFromArray napaUnitNames, true];
loadoutObjnapa setVariable ["loadoutTypes", napaloadoutTypes, true];

loadoutObjnapa setVariable ["LATChance", napaLATChance, true];
loadoutObjnapa setVariable ["pistolChance", napaPistolChance, true];
loadoutObjnapa setVariable ["helmetChance", napaHelmetChance, true];

loadoutObjnapa setVariable ["vests", napaVests, true];
loadoutObjnapa setVariable ["uniforms", napaUniforms, true];
loadoutObjnapa setVariable ["helmets", napaHelmets, true];
loadoutObjnapa setVariable ["hats", napaHats, true];
loadoutObjnapa setVariable ["backpacks", napaBackpacks, true];
loadoutObjnapa setVariable ["ATbackpacks", napaATBackpacks, true];

loadoutObjnapa setVariable ["SVDScopes", napaSVDScopes, true];
loadoutObjnapa setVariable ["AKScopes", napaAKScopes, true];
loadoutObjnapa setVariable ["PicaSights", napaPicaSights, true];
loadoutObjnapa setVariable ["PicaScopes", napaPicaScopes, true];
loadoutObjnapa setVariable ["NagantScope", napaNagantScope, true];
loadoutObjnapa setVariable ["RPGScopes", napaRPGScopes, true];

loadoutObjnapa setVariable ["medical", napaBasicMedical, true];
loadoutObjnapa setVariable ["advmedical", napaAdvMedical, true];
loadoutObjnapa setVariable ["grenades", napaGrenades, true];
loadoutObjnapa setVariable ["smoke", napaSmoke, true];
loadoutObjnapa setVariable ["colouredSmoke", napaColouredSmoke, true];
loadoutObjnapa setVariable ["explosives", napaExplosives, true];
loadoutObjnapa setVariable ["AT", napaAT, true];
loadoutObjnapa setVariable ["ATAmmo", napaATAmmo, true];
loadoutObjnapa setVariable ["AA", napaAA, true];
loadoutObjnapa setVariable ["LAT", napaLAT, true];

loadoutObjnapa setVariable ["pistols", napaPistols, true];
loadoutObjnapa setVariable ["TLrifles", [napaTLRifles_Soviet], true];
loadoutObjnapa setVariable ["rifles", [napaRifles_Soviet], true];
loadoutObjnapa setVariable ["GLs", [napaGLs_Soviet], true];
loadoutObjnapa setVariable ["MGs", [napaMGs_Soviet], true];
loadoutObjnapa setVariable ["snipers", [napaSnipers_Soviet], true];

factionLoadoutMap set ["CUP_I_NAPA", loadoutObjnapa];