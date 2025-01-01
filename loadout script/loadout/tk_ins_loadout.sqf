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

insPistolChance = 3;
insLATChance = 0.25;
insHelmetChance = 0.05;

insUnitNames = [
	["Team Leader", "TL"],
	["Machinegunner", "MG"],
	["Automatic Rifleman", "MG"],
	["Sniper", "Sniper"],
	["Militiaman (RPG-7)", "AT"],
	["Militiaman (AK-74 GL)", "GL"],
	["Bonesetter", "MED"],
	["Militia Mechanic", "ENG"],
	["Militia Bomb Builder", "ENG"],
	["AA Specialist", "AA"],
	["Militiaman (RPG ammo)", "ATAssist"],
	
	["Warlord", "LEAVE"]
];

insSVDScopes = [
	"CUP_optic_PSO_1", 7,
	"CUP_optic_PSO_1_open", 3
];

insPicaScopes = [
	"CUP_optic_SB_11_4x20_PM", 2,
	"CUP_optic_LeupoldMk4", 4,
	"CUP_optic_HensoldtZO", 2,
	"CUP_optic_ACOG_TA01B_Black", 1
];

insAKScopes = [
	"CUP_optic_PSO_1_AK", 7,
	"CUP_optic_PSO_1_AK_open", 3
];

insAKSights = [
	"CUP_optic_1p63", 4,
	"CUP_optic_OKP_7", 2,
	"CUP_optic_ekp_8_02", 2,
	"CUP_optic_kobra", 4
];

insPicaSights = [
	"CUP_optic_Aimpoint_5000", 4,
	"CUP_optic_HensoldtZO_low", 1,
	"CUP_optic_ACOG_TA01B_Black", 2,
	"CUP_optic_1P87_RIS", 4,
	"CUP_optic_HoloBlack", 2,
	"CUP_optic_CompM2_low", 3,
	"CUP_optic_ZDDot", 2,
	"CUP_optic_MEPRO_moa_clear", 1,
	"CUP_optic_TrijiconRx01_black", 2
];

insRPGScopes = [
	"cup_optic_pgo7v", 1,
	"cup_optic_pgo7v2", 2
];

insAT = [
	["CUP_launch_RPG7V", "RPGScopes", 2], 1
];
insATAmmo = [
	"CUP_OG7_M", 3,
	"CUP_PG7V_M", 2,
	"CUP_PG7VL_M", 1,
	"CUP_PG7VM_M", 1.5
];

insLAT = [
	"CUP_launch_RPG18", 5,
	"CUP_launch_RPG26", 2,
	"CUP_launch_M72A6", 1,
	"CUP_launch_RShG2", 0.5
];

insAA = [
	"CUP_launch_9K32Strela", 2
];

insGrenades = [
	"CUP_HandGrenade_RGD5", 2,
	"CUP_HandGrenade_RGO", 1.5,
	"CUP_HandGrenade_M67", 1
];
insSmoke = [
	"SmokeShell", 1
];
insColouredSmoke = [
	"SmokeShell", 1,
	"SmokeShellBlue", 1,
	"SmokeShellRed", 2
];
insExplosives = [
	"CUP_PipeBomb_M", 2,
	"CUP_IED_V1_M", 2,
	"CUP_IED_V2_M", 1,
	"CUP_IED_V3_M", 2,
	"CUP_IED_V1_M", 1
	
];

insPistols = [
	"CUP_hgun_Makarov", 4,
	"CUP_hgun_TT", 4,
	"CUP_hgun_PMM", 0.25,
	"CUP_hgun_Browning_HP", 1.5,
	"CUP_hgun_Colt1911", 0.75,
	"CUP_hgun_CZ75", 1
];



insUniforms = [
	"CUP_I_B_PARA_Unit_2", 1,
	"CUP_I_B_PARA_Unit_5", 1,
	"CUP_I_B_PARA_Unit_6", 1,
	"CUP_I_B_PARA_Unit_7", 1,
	"CUP_I_B_PARA_Unit_8", 1,
	"CUP_I_B_PARA_Unit_9", 1,
	"CUP_I_B_PARA_Unit_10", 1,
	"CUP_I_B_PARA_Unit_13", 1
];

insVests = [
	"CUP_V_OI_TKI_Jacket2_01", 1,
	"CUP_V_OI_TKI_Jacket2_02", 1,
	"CUP_V_OI_TKI_Jacket2_03", 1,
	"CUP_V_OI_TKI_Jacket2_04", 1,
	"CUP_V_OI_TKI_Jacket2_05", 1,
	"CUP_V_OI_TKI_Jacket2_06", 1,

	"CUP_V_OI_TKI_Jacket6_01", 1,
	"CUP_V_OI_TKI_Jacket6_02", 1,
	"CUP_V_OI_TKI_Jacket6_03", 1,
	"CUP_V_OI_TKI_Jacket6_04", 1,
	"CUP_V_OI_TKI_Jacket6_05", 1,
	"CUP_V_OI_TKI_Jacket6_06", 1,

	"CUP_V_OI_TKI_Jacket3_01", 1,
	"CUP_V_OI_TKI_Jacket3_02", 1,
	"CUP_V_OI_TKI_Jacket3_03", 1,
	"CUP_V_OI_TKI_Jacket3_04", 1,
	"CUP_V_OI_TKI_Jacket3_05", 1,
	"CUP_V_OI_TKI_Jacket3_06", 1,

	"CUP_V_I_RACS_Carrier_Rig_2", 3,
	"CUP_V_I_RACS_Carrier_Rig_3", 3,
	"CUP_V_I_RACS_Carrier_Rig_wdl_2", 3,
	"CUP_V_I_RACS_Carrier_Rig_wdl_3", 3,
	
	"CUP_V_O_SLA_M23_1_OD", 5,
	"CUP_V_O_SLA_M23_1_BRN", 5,

	"CUP_V_B_RRV_Scout_CB", 2,
	"CUP_V_B_RRV_Scout2_CB", 2,
	"CUP_V_B_RRV_Scout3", 2,
	"CUP_V_B_RRV_Scout", 2,
	"CUP_V_B_RRV_Scout2", 2,
	"CUP_V_B_RRV_Scout3_GRN", 2,
	//Total of non-armoured vests: 6 + 6 + 6 + 12 + 10 + 12 = 52

	
	"CUP_V_MBSS_PACA_Green", 0.5,
	"CUP_V_MBSS_PACA2_Green", 0.5,
	"CUP_V_MBSS_PACA_CB", 0.5,
	"CUP_V_MBSS_PACA2_CB", 0.5,
	"CUP_V_MBSS_PACA_RGR", 0.5,
	"CUP_V_MBSS_PACA2_RGR", 0.5,
	
	"CUP_V_CZ_NPP2006_nk_black", 0.25,
	"CUP_V_CZ_NPP2006_ok_black", 0.25,
	"CUP_V_CZ_NPP2006_vz95_black", 0.25,
	"CUP_V_CZ_NPP2006_des", 0.25,
	"CUP_V_CZ_NPP2006_nk_des", 0.25,
	"CUP_V_CZ_NPP2006_ok_des", 0.25,
	
	"CUP_V_B_LBT_LBV_GRN", 0.5,
	"CUP_V_B_LBT_LBV_OD", 0.5,
	
	"CUP_V_B_Interceptor_Rifleman_M81", 1.5,
	"CUP_V_B_Interceptor_Rifleman_Olive", 1.5,
	"CUP_V_B_Interceptor_Rifleman_Coyote", 1.5,
	"CUP_V_B_Interceptor_Rifleman", 1.5
	//total armoured: 3 + 1.5 + 1 + 6 = 11.5
];


insHelmets = [
	"CUP_H_SLA_Helmet_DES", 1,
	"CUP_H_SLA_Helmet_DES_worn", 1,
	
	"CUP_H_SLA_Helmet_BLK", 1,
	"CUP_H_SLA_Helmet_BLK_worn", 1,
	"CUP_H_USArmy_Helmet_M1_plain_Olive", 1
	
];

insHats = [
	"CUP_H_TKI_Pakol_1_01", 0.5,
	"CUP_H_TKI_Pakol_1_02", 0.5,
	"CUP_H_TKI_Pakol_1_03", 0.5,
	"CUP_H_TKI_Pakol_1_04", 0.5,
	"CUP_H_TKI_Pakol_1_05", 0.5,
	"CUP_H_TKI_Pakol_1_05", 0.5,
	"CUP_H_TKI_Pakol_1_06", 0.5,
	
	"CUP_H_TKI_Pakol_2_01", 0.5,
	"CUP_H_TKI_Pakol_2_02", 0.5,
	"CUP_H_TKI_Pakol_2_03", 0.5,
	"CUP_H_TKI_Pakol_2_04", 0.5,
	"CUP_H_TKI_Pakol_2_05", 0.5,
	"CUP_H_TKI_Pakol_2_05", 0.5,
	"CUP_H_TKI_Pakol_2_06", 0.5,
	
	"CUP_H_TKI_Lungee_Open_01", 1,
	"CUP_H_TKI_Lungee_Open_02", 1,
	"CUP_H_TKI_Lungee_Open_03", 1,
	"CUP_H_TKI_Lungee_Open_04", 1,
	"CUP_H_TKI_Lungee_Open_05", 1,
	"CUP_H_TKI_Lungee_Open_06", 1,
	
	"CUP_H_TKI_Lungee_01", 1.5,
	"CUP_H_TKI_Lungee_02", 1.5,
	"CUP_H_TKI_Lungee_03", 1.5,
	"CUP_H_TKI_Lungee_04", 1.5,
	"CUP_H_TKI_Lungee_05", 1.5,
	"CUP_H_TKI_Lungee_06", 1.5,
	
	"", 4
	
];

insBackpacks = [
	"CUP_B_CivPack_WDL", 1.5,
	"CUP_B_HikingPack_Civ", 1.5,
	"CUP_B_AlicePack_OD", 0.5
];

insATBackpacks = [
	"CUP_B_RPGPack_Khaki", 1
];

insBasicMedical = [ //4 items per FAK, 2 bandage, 1 tourniquet, 1 morphine
	"ACE_fieldDressing", 2.5,
	"ACE_elasticBandage", 1.5,
	"ACE_packingBandage", 1.5,
	"ACE_tourniquet", 1.25,
	"ACE_morphine", 0.25
];

insAdvMedical = [ //for medics, who get.. let's say 20 items @ random
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

insLoadoutTypes = [//0 = soviet, 1 = western, etc
	0, 1
];


//SOVIET WEAPONS
//**************************************

insRifles_Soviet = [
	["CUP_arifle_AK47", "AKSights", 0.5], 1.5,
	["CUP_arifle_AKS", "AKSights", 0.5], 1.5,
	["CUP_arifle_AKM", "AKSights", 0.75], 6.5,
	["CUP_arifle_AKMS", "AKSights", 0.75], 7,
	["CUP_arifle_TYPE_56_2", "AKSights", 0.75], 9,
	//total legacy AK: 24
	
	["CUP_arifle_AK103", "AKSights", 3], 3,
	["CUP_arifle_AK103_top_rail", "PicaSights", 10], 0.75,
	["CUP_arifle_AK103_railed", "PicaSights", 10], 0.75,
	["CUP_arifle_AK104", "AKSights", 3], 1,
	["CUP_arifle_AK104_top_rail", "PicaSights", 10], 0.25,
	["CUP_arifle_AK104_railed", "PicaSights", 10], 0.25,
	//total new AK: 8
	
	["CUP_arifle_Sa58P", "", -1], 1,
	["CUP_arifle_Sa58P_frontris", "PicaSights", 10], 0.25,
	["CUP_arifle_Sa58P_rearris", "PicaSights", 10], 0.35,
	["CUP_arifle_Sa58P_wood", "", -1], 0.2,
	["CUP_arifle_Sa58P_des", "", -1], 0.1,
	["CUP_arifle_Sa58P_woodland", "", -1], 0.1,
	["CUP_arifle_Sa58V", "", -1], 0.75,
	["CUP_arifle_Sa58V_frontris", "PicaSights", 10], 0.2,
	["CUP_arifle_Sa58V_rearris", "PicaSights", 10], 0.3,
	["CUP_arifle_Sa58V_wood", "", -1], 0.2,
	["CUP_arifle_Sa58V_camo", "", -1], 0.1,
	["CUP_arifle_Sa58V_woodland", "", -1], 0.05,
	["CUP_arifle_Sa58_sporter_compact", "", -1], 0.15,
	["CUP_arifle_Sa58_sporter_compact_rearris", "PicaSights", 10], 0.1,
	//total vz. 58: 3.85

	["CUP_arifle_FNFAL_woodland", "", -1], 0.15,
	["CUP_arifle_FNFAL_desert", "", -1], 0.2,
	["CUP_arifle_FNFAL_sand", "", -1], 0.3,
	["CUP_arifle_FNFAL", "", -1], 1.75,
	["CUP_arifle_FNFAL5060_woodland", "", -1], 0.08,
	["CUP_arifle_FNFAL5060_desert", "", -1], 0.12,
	["CUP_arifle_FNFAL5060_sand", "", -1], 0.15,
	["CUP_arifle_FNFAL5060", "", -1], 1.5,
	["CUP_arifle_FNFAL5061", "", -1], 0.75,
	["CUP_arifle_G3A3_ris", "PicaSights", 2], 0.5,
	["CUP_arifle_G3A3_ris_black", "PicaSights", 2], 0.25,
	//total battle rifles: 6

	["CUP_arifle_M16A1", "PicaSights", 1], 1.5,
	["CUP_arifle_M16A2", "PicaSights", 2], 3,
	["CUP_arifle_M16A4_Base", "PicaSights", 4], 0.5,
	["CUP_arifle_M4A1", "PicaSights", 3], 0.75,
	["CUP_arifle_M4A1_desert_carryhandle", "PicaSights", 5], 0.25,
	["CUP_arifle_M4A1_camo_carryhandle", "PicaSights", 5], 0.25,
	["CUP_arifle_M4A1_black", "PicaSights", 5], 0.5,
	["CUP_arifle_M4A1_camo", "PicaSights", 3], 0.125,
	["CUP_arifle_M4A1_desert", "PicaSights", 3], 0.125,
	//total M16: 5.75

	["CUP_arifle_Galil_556_black", "PicaSights", 1], 4,
	["CUP_arifle_Galil_SAR_black", "PicaSights", 2], 2
	//total Galil: 6
	
];

insTLRifles_Soviet = [
	["CUP_arifle_AK47", "AKSights", 0.5], 0.75,
	["CUP_arifle_AKS", "AKSights", 0.5], 0.75,
	["CUP_arifle_AKM", "AKSights", 0.75], 6.5,
	["CUP_arifle_AKMS", "AKSights", 0.75], 7,
	["CUP_arifle_TYPE_56_2", "AKSights", 0.75], 9,
	//total legacy AK: 24
	
	["CUP_arifle_AK103", "AKSights", 3], 5,
	["CUP_arifle_AK103_top_rail", "PicaSights", 10], 0.75,
	["CUP_arifle_AK103_railed", "PicaSights", 10], 0.75,
	["CUP_arifle_AK104", "AKSights", 3], 1,
	["CUP_arifle_AK104_top_rail", "PicaSights", 10], 0.25,
	["CUP_arifle_AK104_railed", "PicaSights", 10], 0.25,
	//total new AK: 8
	
	["CUP_arifle_Sa58P", "", -1], 1,
	["CUP_arifle_Sa58P_frontris", "PicaSights", 10], 0.25,
	["CUP_arifle_Sa58P_rearris", "PicaSights", 10], 0.35,
	["CUP_arifle_Sa58P_wood", "", -1], 0.2,
	["CUP_arifle_Sa58P_des", "", -1], 0.1,
	["CUP_arifle_Sa58P_woodland", "", -1], 0.1,
	["CUP_arifle_Sa58V", "", -1], 0.75,
	["CUP_arifle_Sa58V_frontris", "PicaSights", 10], 0.2,
	["CUP_arifle_Sa58V_rearris", "PicaSights", 10], 0.3,
	["CUP_arifle_Sa58V_wood", "", -1], 0.2,
	["CUP_arifle_Sa58V_camo", "", -1], 0.1,
	["CUP_arifle_Sa58V_woodland", "", -1], 0.05,
	["CUP_arifle_Sa58_sporter_compact", "", -1], 0.15,
	["CUP_arifle_Sa58_sporter_compact_rearris", "PicaSights", 10], 0.1,
	//total vz. 58: 3.85

	["CUP_arifle_FNFAL_woodland", "", -1], 0.15,
	["CUP_arifle_FNFAL_desert", "", -1], 0.2,
	["CUP_arifle_FNFAL_sand", "", -1], 0.3,
	["CUP_arifle_FNFAL", "", -1], 1.25,
	["CUP_arifle_FNFAL5060_woodland", "", -1], 0.08,
	["CUP_arifle_FNFAL5060_desert", "", -1], 0.12,
	["CUP_arifle_FNFAL5060_sand", "", -1], 0.15,
	["CUP_arifle_FNFAL5060", "", -1], 1,
	["CUP_arifle_FNFAL5061", "", -1], 0.5,
	["CUP_arifle_G3A3_ris", "PicaSights", 2], 1.25,
	["CUP_arifle_G3A3_ris_black", "PicaSights", 2], 1,
	//total battle rifles: 6

	["CUP_arifle_M16A1", "PicaSights", 1], 1,
	["CUP_arifle_M16A2", "PicaSights", 2], 2,
	["CUP_arifle_M16A4_Base", "PicaSights", 4], 0.5,
	["CUP_arifle_M4A1", "PicaSights", 3], 1,
	["CUP_arifle_M4A1_desert_carryhandle", "PicaSights", 5], 0.25,
	["CUP_arifle_M4A1_camo_carryhandle", "PicaSights", 5], 0.25,
	["CUP_arifle_M4A1_black", "PicaSights", 5], 0.5,
	["CUP_arifle_M4A1_camo", "PicaSights", 3], 0.125,
	["CUP_arifle_M4A1_desert", "PicaSights", 3], 0.125,
	//total M16: 5.75

	["CUP_arifle_Galil_556_black", "PicaSights", 1], 4,
	["CUP_arifle_Galil_SAR_black", "PicaSights", 2], 2
	//total Galil: 6
];

insGLs_Soviet = [
	["CUP_arifle_AK47_GL", "AKSights", 0, "CUP_1Rnd_HE_GP25_M"], 0.5,
	["CUP_arifle_AKM_GL", "AKSights", 0.5, "CUP_1Rnd_HE_GP25_M"], 3.5,
	["CUP_arifle_AKMS_GL", "AKSights", 0.5, "CUP_1Rnd_HE_GP25_M"], 3,
	["CUP_arifle_AK103_GL", "AKSights", 2, "CUP_1Rnd_HE_GP25_M"], 1,
	//total AK GL: 8
	
	["CUP_arifle_M16A1GL", "PicaSights", 0, "CUP_1Rnd_HE_M203"], 0.75,
	["CUP_arifle_M16A2_GL", "PicaSights", 1, "CUP_1Rnd_HE_M203"], 1.25,
	["CUP_arifle_M4A1_GL_carryhandle", "PicaSights", 2, "CUP_1Rnd_HE_M203"], 0.5,
	["CUP_arifle_M4A1_BUIS_GL", "PicaSights", 2, "CUP_1Rnd_HE_M203"], 0.5
	//total M16 GL: 3
];

insMGs_Soviet = [
	["CUP_lmg_pkm", "", -1], 6,
	["CUP_arifle_RPK74", "", -1], 3,
	["CUP_lmg_M60", "", -1], 1,
	["CUP_lmg_FNMAG", "", -1], 1.5
];

insSnipers_Soviet = [
	["CUP_srifle_SVD", "SVDScopes", 10], 6,
	
	["CUP_arifle_AKM", "AKScopes", 10], 0.75,
	["CUP_arifle_AK103", "AKScopes", 10], 0.75,
	
	["CUP_arifle_Sa58Pi", "AKScopes", 10], 0.25,
	["CUP_arifle_Sa58P_rearris", "PicaScopes", 10], 0.5,
	
	["CUP_arifle_G3A3_ris", "PicaScopes", 10], 1.5,
	["CUP_arifle_G3A3_ris_black", "PicaScopes", 10], 0.75
];



//**********************

loadoutObjins = "Land_HelipadEmpty_F" createVehicle [0,0,0];

loadoutObjins setVariable ["unitNames", createHashMapFromArray insUnitNames, true];
loadoutObjins setVariable ["loadoutTypes", insloadoutTypes, true];

loadoutObjins setVariable ["LATChance", insLATChance, true];
loadoutObjins setVariable ["pistolChance", insPistolChance, true];
loadoutObjins setVariable ["helmetChance", insHelmetChance, true];

loadoutObjins setVariable ["vests", insVests, true];
loadoutObjins setVariable ["uniforms", insUniforms, true];
loadoutObjins setVariable ["helmets", insHelmets, true];
loadoutObjins setVariable ["hats", insHats, true];
loadoutObjins setVariable ["backpacks", insBackpacks, true];
loadoutObjins setVariable ["ATbackpacks", insATBackpacks, true];

loadoutObjins setVariable ["SVDScopes", insSVDScopes, true];
loadoutObjins setVariable ["AKSights", insAKSights, true];
loadoutObjins setVariable ["PicaSights", insPicaSights, true];
loadoutObjins setVariable ["AKScopes", insAKScopes, true];
loadoutObjins setVariable ["PicaScopes", insPicaScopes, true];
loadoutObjins setVariable ["RPGScopes", insRPGScopes, true];

loadoutObjins setVariable ["medical", insBasicMedical, true];
loadoutObjins setVariable ["advmedical", insAdvMedical, true];
loadoutObjins setVariable ["grenades", insGrenades, true];
loadoutObjins setVariable ["smoke", insSmoke, true];
loadoutObjins setVariable ["colouredSmoke", insColouredSmoke, true];
loadoutObjins setVariable ["explosives", insExplosives, true];
loadoutObjins setVariable ["AT", insAT, true];
loadoutObjins setVariable ["ATAmmo", insATAmmo, true];
loadoutObjins setVariable ["AA", insAA, true];
loadoutObjins setVariable ["LAT", insLAT, true];

loadoutObjins setVariable ["pistols", insPistols, true];
loadoutObjins setVariable ["TLrifles", [insTLRifles_Soviet], true];
loadoutObjins setVariable ["rifles", [insRifles_Soviet], true];
loadoutObjins setVariable ["GLs", [insGLs_Soviet], true];
loadoutObjins setVariable ["MGs", [insMGs_Soviet], true];
loadoutObjins setVariable ["snipers", [insSnipers_Soviet], true];

factionLoadoutMap set ["CUP_O_TK_MILITIA", loadoutObjins];