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

chdkzPistolChance = 3;
chdkzLATChance = 1;
chdkzHelmetChance = 2;

chdkzUnitNames = [
	["Commander", "TL"],
	["Officer", "TL"],
	["Machine Gunner", "MG"],
	["Autorifleman", "MG"],
	["Sniper", "Sniper"],
	["AT Specialist", "AT"],
	["Grenadier", "GL"],
	["Medic", "MED"],
	["Engineer", "ENG"],
	["Saboteur (Explosives)", "ENG"],
	["Sapper", "ENG"],
	["AA Specialist", "AA"],
	["Ammo Bearer", "MGAssist"],
	
	["Crewman", "LEAVE"],
	["Pilot", "LEAVE"],
	["Boss", "LEAVE"],
	["Insurgent", "LEAVE"]
];

chdkzSVDScopes = [
	"CUP_optic_PSO_1", 7,
	"CUP_optic_PSO_1_open", 3
];

chdkzAKScopes = [
	"CUP_optic_PSO_1_AK", 10,
	"CUP_optic_PSO_1_AK_open", 3
];

chdkzAKSights = [
	"CUP_optic_1p63", 4,
	"CUP_optic_OKP_7", 2,
	"CUP_optic_ekp_8_02", 2,
	"CUP_optic_kobra", 4
];

chdkzRPGScopes = [
	"cup_optic_pgo7v", 1,
	"cup_optic_pgo7v2", 2
];

chdkzAT = [
	["CUP_launch_RPG7V", "RPGScopes", 5], 1
];
chdkzATAmmo = [
	"CUP_OG7_M", 2,
	"CUP_PG7V_M", 1,
	"CUP_PG7VL_M", 1,
	"CUP_PG7VM_M", 2
];

chdkzLAT = [
	"CUP_launch_RPG18", 5,
	"CUP_launch_RPG26", 1,
	"CUP_launch_RShG2", 0.25
];

chdkzAA = [
	"CUP_launch_9K32Strela", 2
];

chdkzGrenades = [
	"CUP_HandGrenade_RGD5", 2,
	"CUP_HandGrenade_RGO", 1
];
chdkzSmoke = [
	"SmokeShell", 1
];
chdkzColouredSmoke = [
	"SmokeShell", 1,
	"SmokeShellBlue", 1,
	"SmokeShellRed", 2
];
chdkzExplosives = [
	"CUP_MineE_M", 1,
	"CUP_PipeBomb_M", 2
];

chdkzPistols = [
	"CUP_hgun_Makarov", 7.5,
	"CUP_hgun_TT", 4,
	"CUP_hgun_PMM", 0.75,
	"CUP_hgun_Browning_HP", 0.75,
	"CUP_hgun_CZ75", 1.25
];



chdkzUniforms = [
	"CUP_U_O_CHDKZ_Kam_01", 1,
	"CUP_U_O_CHDKZ_Kam_02", 1,
	"CUP_U_O_CHDKZ_Kam_03", 1,
	"CUP_U_O_CHDKZ_Kam_04", 1,
	"CUP_U_O_CHDKZ_Kam_05", 1,
	"CUP_U_O_CHDKZ_Kam_07", 1,
	
	"CUP_U_O_RUS_Soldier_Reversible_Suit_6Sh122_Summer_1", 0.5,
	"CUP_U_O_RUS_Soldier_Reversible_Suit_6Sh122_Summer_2", 0.5,
	"CUP_U_O_RUS_Soldier_Reversible_Suit_6Sh122_Summer_3", 0.5,
	"CUP_U_O_RUS_Soldier_Reversible_Suit_6Sh122_Summer_4", 0.5,
	
	"CUP_U_O_Partisan_VSR_Mixed1", 1,
	
	"CFR_U_O_ChDKZ_Anorak_Gray_Jeans", 1,
	"CFR_U_O_ChDKZ_Anorak_Gray_Khaki", 1,
	"CFR_U_O_ChDKZ_Anorak_Green_Jeans", 1,
	"CFR_U_O_ChDKZ_Anorak_Green_Khaki", 1,
	"CFR_U_O_ChDKZ_Anorak_Smog_Jeans", 1,
	"CFR_U_O_ChDKZ_Anorak_Smog_Khaki", 1,
	"CFR_U_O_ChDKZ_Smock_Graygreen", 1,
	"CFR_U_O_ChDKZ_Smock_Graygreen_Rolled", 1,
	"CFR_U_O_ChDKZ_Smock_Greengray", 1,
	"CFR_U_O_ChDKZ_Smock_Greengray_Rolled", 1,
	"CFR_U_O_ChDKZ_Smock_Graysmog", 1,
	"CFR_U_O_ChDKZ_Smock_Graysmog_Rolled", 1,
	"CFR_U_O_ChDKZ_Smock_Greensmog", 1,
	"CFR_U_O_ChDKZ_Smock_Greensmog_Rolled", 1,
	"CFR_U_O_ChDKZ_Smock_Smogflora", 1,
	"CFR_U_O_ChDKZ_Smock_Smogflora_Rolled", 1,
	
	"CUP_U_C_Tracksuit_01", 0.5,
	"CUP_U_C_Tracksuit_02", 0.5,
	"CUP_U_C_Tracksuit_03", 0.5,
	"CUP_U_C_Tracksuit_04", 0.5
];

chdkzVests = [
	"CUP_V_I_RACS_Carrier_Rig_2", 1,
	"CUP_V_I_RACS_Carrier_Rig_3", 1,
	"CUP_V_I_RACS_Carrier_Rig_wdl_2", 1,
	"CUP_V_I_RACS_Carrier_Rig_wdl_3", 1,
	
	"CUP_V_O_SLA_M23_1_OD", 5,
	"CUP_V_O_SLA_M23_1_BRN", 5,
	"CUP_V_O_SLA_Carrier_Belt02", 5,

	"CUP_V_RUS_Smersh_New_Full", 2,
	"CUP_V_RUS_Smersh_New_Full_Spectre", 2,
	"CUP_V_RUS_Smersh_New_Buttpack", 2,
	"CUP_V_RUS_Smersh_New_Buttpack_Spectre", 2,
	"CUP_V_RUS_Smersh_New_Light", 2,
	"CUP_V_RUS_Smersh_New_Light_Spectre", 2,
	"CUP_V_O_Ins_Carrier_Rig", 10,
	
	"CFR_V_O_Jacket_Gray", 3,
	"CFR_V_O_Jacket_Flora", 2,
	"CFR_V_O_Jacket_Smog", 2,
	
	"CUP_V_RUS_6B3_1", 2,
	"CUP_V_RUS_6B3_Flora_1", 2,
	"CUP_V_CDF_6B3_1_Green", 2,
	"CUP_V_O_SLA_Flak_Vest03", 4
];


chdkzHelmets = [
	"usm_helmet_pasgt_ce_wdl", 2.5,
	
	"CUP_H_RUS_SSH68_green", 4.5,
	"CUP_H_RUS_SSH68_cover_berezka", 2,
	"CUP_H_RUS_SSH68_cover_vs93", 2,
	"CFR_H_ChDKZ_SSH68_Camo", 2,
	"CFR_H_ChDKZ_SSH68_Star", 3,
	//total: 9.5
	
	"CUP_H_RUS_6B27", 0.75,
	"CUP_H_RUS_K6_3", 0.25,
	"CUP_H_RUS_K6_3_Shield_Down", 0.25,
	"CUP_H_RUS_K6_3_Shield_Up", 0.25,
	"CUP_H_RUS_K6_3_khaki", 0.25,
	"CUP_H_RUS_K6_3_Shield_Down_khaki", 0.25,
	"CUP_H_RUS_K6_3_Shield_Up_khaki", 0.25,
	"CUP_H_RUS_K6_3_black", 0.25,
	"CUP_H_RUS_K6_3_Shield_Down_black", 0.25,
	"CUP_H_RUS_K6_3_Shield_Up_black", 0.25
	//total: 2.25
	
];

chdkzHats = [
	"CUP_H_ChDKZ_Cap", 2,
	"CUP_H_C_Beret_01", 1,
	"CUP_H_FR_BandanaWdl", 0.75,
	"CUP_H_FR_BandanaGreen", 1,
	"CUP_H_C_Beanie_02", 1,
	"CUP_H_C_Beanie_04", 1,
	"CUP_H_C_Beanie_03", 1,
	"CUP_H_PMC_Beanie_Khaki", 0.5,
	"CUP_H_PMC_Beanie_Black", 0.5,
	"CUP_H_ChDKZ_Beanie", 2,
	"CUP_H_PMC_Cap_Tan", 1,
	"", 3
	
];

chdkzBackpacks = [
	"CUP_B_CivPack_WDL", 1.5,
	"CUP_B_HikingPack_Civ", 1.5,
	"CUP_B_AlicePack_Bedroll", 0.5,
	"CUP_B_AlicePack_Khaki", 0.5
];

chdkzATBackpacks = [
	"CUP_B_RPGPack_Khaki", 1
];

chdkzBasicMedical = [ //4 items per FAK, 2 bandage, 1 tourniquet, 1 morphine
	"ACE_fieldDressing", 2.5,
	"ACE_elasticBandage", 1.5,
	"ACE_packingBandage", 1.5,
	"ACE_tourniquet", 1.25,
	"ACE_morphine", 0.25
];

chdkzAdvMedical = [ //for medics, who get.. let's say 20 items @ random
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

chdkzLoadoutTypes = [//0 = soviet, 1 = western, etc
	0, 1
];


//SOVIET WEAPONS
//**************************************

chdkzRifles_Soviet = [
	["CUP_arifle_AK47", "AKSights", 1], 0.3,
	["CUP_arifle_AKS", "AKSights", 1], 0.2,
	["CUP_arifle_AKM", "AKSights", 1], 4.5,
	["CUP_arifle_AKMS", "AKSights", 1], 3,
	["CUP_SKS", "", -1], 1,
	["CUP_srifle_Mosin_Nagant", "", -1], 0.75,
	//total AKM: 6, 1/4 of AK74
	
	//total AK74M: 3.3, 1/8 of AK74
	["CUP_arifle_AK74M", "AKSights", 4], 2,
	["CUP_arifle_AK103", "AKSights", 4], 1,
	["CUP_arifle_AK104", "AKSights", 4], 0.3,

	//total AK74: 26, 30 counting 74U
	["CUP_arifle_AK74", "AKSights", 2], 12,
	["CUP_arifle_AKS74", "AKSights", 1.5], 10,
	["CUP_arifle_AKS74U", "AKSights", 3], 4,
	["CFR_arifle_vz91", "AKSights", 4], 3,
	
	//total Sa58: 2.55, 1/10 of AK74
	["CUP_arifle_Sa58P", "", -1], 1,
	["CUP_arifle_Sa58P_wood", "", -1], 0.75,
	["CUP_arifle_Sa58P_woodland", "", -1], 0.2,
	["CUP_arifle_Sa58V", "", -1], 0.75,
	["CUP_arifle_Sa58V_wood", "", -1], 0.5,
	["CUP_arifle_Sa58V_woodland", "", -1], 0.1
];

chdkzTLRifles_Soviet = [
	["CUP_arifle_AK47", "AKSights", 1], 0.15,
	["CUP_arifle_AKS", "AKSights", 1], 0.1,
	["CUP_arifle_AKM", "AKSights", 1], 2.5,
	["CUP_arifle_AKMS", "AKSights", 1], 1.5,
	//total AKM: 6, 1/4 of AK74
	
	//total AK74M: 3.3, 1/8 of AK74
	["CUP_arifle_AK74M", "AKSights", 4], 3,
	["CUP_arifle_AK103", "AKSights", 4], 2,
	["CUP_arifle_AK104", "AKSights", 4], 1,

	//total AK74: 26, 30 counting 74U
	["CUP_arifle_AK74", "AKSights", 2], 8,
	["CUP_arifle_AKS74", "AKSights", 1.5], 6,
	["CUP_arifle_AKS74U", "AKSights", 3], 6,
	["CFR_arifle_vz91", "AKSights", 4], 6,
	
	//total Sa58: 2.55, 1/10 of AK74
	["CUP_arifle_Sa58P", "", -1], 1,
	["CUP_arifle_Sa58P_wood", "", -1], 0.75,
	["CUP_arifle_Sa58P_woodland", "", -1], 0.2,
	["CUP_arifle_Sa58V", "", -1], 0.75,
	["CUP_arifle_Sa58V_wood", "", -1], 0.5,
	["CUP_arifle_Sa58V_woodland", "", -1], 0.1
];

chdkzGLs_Soviet = [
	["CUP_arifle_AK47_GL", "AKSights", 1, "CUP_1Rnd_HE_GP25_M"], 2,
	["CUP_arifle_AK74_GL", "AKSights", 2, "CUP_1Rnd_HE_GP25_M"], 10,
	["CUP_arifle_AKS74_GL", "AKSights", 1, "CUP_1Rnd_HE_GP25_M"], 3,
	["CUP_arifle_AK103_GL", "AKSights", 5, "CUP_1Rnd_HE_GP25_M"], 2
];

chdkzMGs_Soviet = [
	["CUP_lmg_pkm", "", -1], 8,
	["CUP_arifle_RPK74_45", "", -1], 4,
	["CUP_arifle_RPK74", "", -1], 2
];

chdkzSnipers_Soviet = [
	["CUP_srifle_SVD", "SVDScopes", 10], 6,
	["CUP_arifle_AK74", "AKScopes", 10], 2,
	["CUP_arifle_AKS74", "AKScopes", 10], 1,
	["CUP_arifle_AK74M", "AKScopes", 10], 0.5,
	["CUP_arifle_AK103", "AKScopes", 10], 0.4,
	["CUP_arifle_Sa58Pi", "AKScopes", 10], 0.5
];



//**********************

loadoutObjchdkz = "Land_HelipadEmpty_F" createVehicle [0,0,0];

loadoutObjchdkz setVariable ["unitNames", createHashMapFromArray chdkzUnitNames, true];
loadoutObjchdkz setVariable ["loadoutTypes", chdkzloadoutTypes, true];

loadoutObjchdkz setVariable ["LATChance", chdkzLATChance, true];
loadoutObjchdkz setVariable ["pistolChance", chdkzPistolChance, true];
loadoutObjchdkz setVariable ["helmetChance", chdkzHelmetChance, true];

loadoutObjchdkz setVariable ["vests", chdkzVests, true];
loadoutObjchdkz setVariable ["uniforms", chdkzUniforms, true];
loadoutObjchdkz setVariable ["helmets", chdkzHelmets, true];
loadoutObjchdkz setVariable ["hats", chdkzHats, true];
loadoutObjchdkz setVariable ["backpacks", chdkzBackpacks, true];
loadoutObjchdkz setVariable ["ATbackpacks", chdkzATBackpacks, true];

loadoutObjchdkz setVariable ["SVDScopes", chdkzSVDScopes, true];
loadoutObjchdkz setVariable ["AKSights", chdkzAKSights, true];
loadoutObjchdkz setVariable ["AKScopes", chdkzAKScopes, true];
loadoutObjchdkz setVariable ["RPGScopes", chdkzRPGScopes, true];

loadoutObjchdkz setVariable ["medical", chdkzBasicMedical, true];
loadoutObjchdkz setVariable ["advmedical", chdkzAdvMedical, true];
loadoutObjchdkz setVariable ["grenades", chdkzGrenades, true];
loadoutObjchdkz setVariable ["smoke", chdkzSmoke, true];
loadoutObjchdkz setVariable ["colouredSmoke", chdkzColouredSmoke, true];
loadoutObjchdkz setVariable ["explosives", chdkzExplosives, true];
loadoutObjchdkz setVariable ["AT", chdkzAT, true];
loadoutObjchdkz setVariable ["ATAmmo", chdkzATAmmo, true];
loadoutObjchdkz setVariable ["AA", chdkzAA, true];
loadoutObjchdkz setVariable ["LAT", chdkzLAT, true];

loadoutObjchdkz setVariable ["pistols", chdkzPistols, true];
loadoutObjchdkz setVariable ["TLrifles", [chdkzTLRifles_Soviet], true];
loadoutObjchdkz setVariable ["rifles", [chdkzRifles_Soviet], true];
loadoutObjchdkz setVariable ["GLs", [chdkzGLs_Soviet], true];
loadoutObjchdkz setVariable ["MGs", [chdkzMGs_Soviet], true];
loadoutObjchdkz setVariable ["snipers", [chdkzSnipers_Soviet], true];

factionLoadoutMap set ["CUP_O_ChDKZ", loadoutObjchdkz];