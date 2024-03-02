tafLATChance = 2; //all chances are out of 10
tafPistolChance = 1.5;
tafHelmetChance = 8;
tafAmmoMultiplier = 0.95; //they are slightly worse equipped than average
tafMedicalMultiplier = 0.95;
tafTLGLChance = 6;

tafUnitNames = [
	["Squad Leader", "TL"],
	["Machinegunner", "MG"],
	["Autorifleman", "MG"],
	["Marksman", "Sniper"],
	["Rifleman (AT)", "AT"],
	["Medic", "MED"],
	["Engineer", "ENG"],
	["Rifleman (AT Assistant)", "ATAssist"],
	["Autorifleman Assistant", "MGAssist"],
	["Machinegunner Assistant", "MGAssist"],
	
	["Vehicle Crewman", "LEAVE"],
	["Officer", "LEAVE"],
	["Pilot", "LEAVE"],
	["Survivor", "LEAVE"],
	["Officer", "LEAVE"]
];

tafSVDScopes = [
	"CUP_optic_PSO_1", 7,
	"CUP_optic_PSO_1_open", 3
];

tafAKScopes = [
	"CUP_optic_PSO_1_AK", 10,
	"CUP_optic_PSO_1_AK_open", 3
];

tafPicaScopes = [
	"CUP_optic_SB_11_4x20_PM", 2
];

tafRPGScopes = [
	"cup_optic_pgo7v", 2,
	"cup_optic_pgo7v2", 1
];

tafAT = [
	["CUP_launch_RPG7V", "RPGScopes", 3], 1
];
tafATAmmo = [
	"CUP_OG7_M", 1,
	"CUP_PG7V_M", 2,
	"CUP_PG7VL_M", 1,
	"CUP_PG7VM_M", 1
];

tafLAT = [
	"CUP_RPG18", 1
];

tafAA = [
	"CUP_launch_9K32Strela", 2
];

tafGrenades = [
	"CUP_HandGrenade_RGD5", 2,
	"CUP_HandGrenade_RGO", 1,
	"CUP_HandGrenade_M67", 6
];

tafSmoke = [
	"SmokeShell", 1
];

tafColouredSmoke = [
	"SmokeShell", 0.75,
	"SmokeShellGreen", 1,
	"SmokeShellYellow", 2
];

tafExplosives = [
	"CUP_MineE_M", 1,
	"CUP_PipeBomb_M", 2
];

tafPistols = [
	"CUP_hgun_Makarov", 3,
	"CUP_hgun_TT", 4,
	"CUP_hgun_Browning_HP", 3,
	"CUP_hgun_CZ75", 0.5
];

tafUniforms = [
	"usm_bdu_portliz", 1,
	"usm_bdu_btisrl_portliz", 1,
	"usm_bdu_bti_portliz", 1,
	"usm_bdu_srh_portliz", 1,
	"usm_bdu_srl_portliz", 1,
	"usm_bdu_bnu_portliz", 0.5
];

tafVests = [
	"CUP_V_B_RRV_Scout", 1,
	"CUP_V_B_RRV_Scout2", 1,
	"CUP_V_B_RRV_Scout3_GRN", 1
];

tafTLVests = [
	"CUP_V_B_RRV_TL", 1,
	"CUP_V_B_RRV_Officer", 1
];
tafMGVests = [
	"CUP_V_B_RRV_MG_GRN", 1
];
tafMedVests = [
	"CUP_V_B_RRV_Medic", 1
];

tafHelmets = [
	"CUP_H_RUS_SSH68_green", 3,
	"CUP_H_SLA_Helmet_OD_worn", 1
];

tafHats = [
	"usm_bdu_boonie_portliz", 0.75,
	"H_Booniehat_oli", 0.25,
	"usm_bdu_cap_portliz", 1
];

tafBackpacks = [
	"CUP_B_AlicePack_OD", 1
];

tafATBackpacks = [
	"CUP_B_RPGPack_Khaki", 1
];

tafBasicMedical = [ //4 items per FAK, 2 bandage, 1 tourniquet, 1 morphine
	"ACE_fieldDressing", 2,
	"ACE_elasticBandage", 1.5,
	"ACE_packingBandage", 1.5,
	"ACE_tourniquet", 1.25,
	"ACE_morphine", 0.75
];

tafAdvMedical = [ //for medics, who get.. let's say 20 items @ random
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

tafLoadoutTypes = [//0 = soviet, 1 = western, etc
	0, 1,
	1, 1
];


//SOVIET WEAPONS
//**************************************

tafRifles_Soviet = [
	["CUP_arifle_AK47_Early", "", -1], 0.5,
	["CUP_arifle_TYPE_56_2_Early", "", -1], 4,
	["CUP_arifle_AKM_Early", "", -1], 6,
	["CUP_arifle_AKMS_Early", "", -1], 4
];

tafCarbines_Soviet = [
	["CUP_arifle_TYPE_56_2_Early", "", -1], 2,
	["CUP_arifle_AKMS_Early", "", -1], 3
];

tafTLRifles_Soviet = [
	["CUP_arifle_AK47_Early", "", -1], 0.25,
	["CUP_arifle_TYPE_56_2_Early", "", -1], 1,
	["CUP_arifle_AKM_Early", "", -1], 4,
	["CUP_arifle_AKMS_Early", "", -1], 3
];

tafGLs_Soviet = [
	["CUP_arifle_AK47_GL_Early", "", -1, "CUP_1Rnd_HE_GP25_M"], 0.25,
	["CUP_arifle_AKM_GL_Early", "", -1, "CUP_1Rnd_HE_GP25_M"], 2.5,
	["CUP_arifle_AKMS_GL_Early", "", -1, "CUP_1Rnd_HE_GP25_M"], 1
];

tafMGs_Soviet = [
	["CUP_lmg_pkm", "", -1], 2,
	["CUP_arifle_RPK74", "", -1], 1
];

tafSnipers_Soviet = [
	["CUP_srifle_SVD", "SVDScopes", 10], 3,
	["CUP_arifle_AKM", "AKScopes", 10], 1
];



//**********************

//WESTERN WEAPONS
tafRifles_West = [
	["CUP_arifle_FNFAL", "", -1], 0.5,
	["CUP_arifle_FNFAL5060", "", -1], 2,
	["CUP_arifle_FNFAL5061", "", -1], 0.5,
	//total FAL: 3

	["CUP_arifle_Galil_556_Black", "", -1], 5,
	["CUP_arifle_M16A1", "", -1], 1
];

tafCarbines_West = [
	["CUP_arifle_FNFAL", "", -1], 1,
	["CUP_arifle_Galil_SAR_Black", "", -1], 3
];

tafTLRifles_West = [
	["CUP_arifle_FNFAL", "", -1], 0.75,
	["CUP_arifle_FNFAL5060", "", -1], 3,
	
	["CUP_arifle_FNFAL5061", "", -1], 0.75,
	//total FAL: 4.5

	["CUP_arifle_Galil_556_Black", "", -1], 3.25,
	["CUP_arifle_M16A1", "", -1], 0.75
	//total M16: 4
];

tafGLs_West = [
	["CUP_arifle_M16A1GL", "", -1, "CUP_1Rnd_HE_M203"], 1
];

tafMGs_West = [
	["CUP_lmg_M60", "", -1], 0.5,
	["CUP_lmg_FNMAG", "", -1], 2,
	["CUP_lmg_minimi", "", -1], 2.5
];

tafSnipers_West = [
	["CUP_arifle_Galil_black", "PicaScopes", 10], 4,
	["CUP_srifle_SVD", "SVDScopes", 10], 1
];

//****************

loadoutObjtaf = "Land_HelipadEmpty_F" createVehicle [0,0,0];

loadoutObjtaf setVariable ["unitNames", createHashMapFromArray tafUnitNames];
loadoutObjtaf setVariable ["loadoutTypes", tafloadoutTypes];

loadoutObjtaf setVariable ["helmetChance", tafHelmetChance];
loadoutObjtaf setVariable ["ammoMultiplier",tafAmmoMultiplier];
loadoutObjtaf setVariable ["medicalMultiplier",tafMedicalMultiplier];
loadoutObjtaf setVariable ["LATChance", tafLATChance];
loadoutObjtaf setVariable ["pistolChance", tafPistolChance];
loadoutObjtaf setVariable ["TLGLChance", tafTLGLChance];

loadoutObjtaf setVariable ["vests", tafVests];
loadoutObjtaf setVariable ["mgvests", tafMGVests];
loadoutObjtaf setVariable ["tlvests", tafTLVests];
loadoutObjtaf setVariable ["medvests", tafMedVests];
loadoutObjtaf setVariable ["uniforms", tafUniforms];
loadoutObjtaf setVariable ["hats", tafHats];
loadoutObjtaf setVariable ["helmets", tafHelmets];
loadoutObjtaf setVariable ["backpacks", tafBackpacks];
loadoutObjtaf setVariable ["ATbackpacks", tafATBackpacks];

loadoutObjtaf setVariable ["SVDScopes", tafSVDScopes];
loadoutObjtaf setVariable ["AKScopes", tafAKScopes];
loadoutObjtaf setVariable ["PicaScopes", tafPicaScopes];
loadoutObjtaf setVariable ["RPGScopes", tafRPGScopes];

loadoutObjtaf setVariable ["medical", tafBasicMedical];
loadoutObjtaf setVariable ["advmedical", tafAdvMedical];
loadoutObjtaf setVariable ["grenades", tafGrenades];
loadoutObjtaf setVariable ["smoke", tafSmoke];
loadoutObjtaf setVariable ["colouredSmoke", tafColouredSmoke];
loadoutObjtaf setVariable ["explosives", tafExplosives];
loadoutObjtaf setVariable ["AT", tafAT];
loadoutObjtaf setVariable ["ATAmmo", tafATAmmo];
loadoutObjtaf setVariable ["AA", tafAA];
loadoutObjtaf setVariable ["LAT", tafLAT];

loadoutObjtaf setVariable ["pistols", tafPistols];
loadoutObjtaf setVariable ["TLrifles", [tafTLRifles_Soviet, tafTLRifles_West]];
loadoutObjtaf setVariable ["rifles", [tafRifles_Soviet, tafRifles_West]];
loadoutObjtaf setVariable ["carbines", [tafCarbines_Soviet, tafCarbines_West]];
loadoutObjtaf setVariable ["GLs", [tafGLs_Soviet, tafGLs_West]];
loadoutObjtaf setVariable ["MGs", [tafMGs_Soviet, tafMGs_West]];
loadoutObjtaf setVariable ["snipers", [tafSnipers_Soviet, tafSnipers_West]];

factionLoadoutMap set ["B_TAF", loadoutObjtaf];