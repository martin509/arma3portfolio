/*switch(_unitName) do {
	case "Officer (Type 56)": {_unitType = "TL"; 
		_weapon = selectRandomWeighted plTLGuns;
		_vest = selectRandomWeighted nvaTLVests;};
	case "Squad Leader (PPS-43)": {_unitType = "TL"; 
		_weapon = selectRandomWeighted plTLGuns;
		_vest = selectRandomWeighted nvaTLVests;};
		
	case "Machine Gunner (RPD)": {	_unitType = "MG"; 
		_weapon = selectRandomWeighted plMGs;
		_vest = selectRandomWeighted nvaMGVests;};
	case "Machine Gunner (DP27)": {	_unitType = "MG"; 
		_weapon = selectRandomWeighted plMGs;
		_vest = selectRandomWeighted nvaMGVests;};
	case "Machine Gunner (MG42)": {	_unitType = "MG"; 
		_weapon = selectRandomWeighted plMGs;
		_vest = selectRandomWeighted nvaMGVests;};
		
	case "Marksman (M91/30)": {_unitType = "Sniper"; _weapon = selectRandomWeighted plSnipers;};
	case "Marksman (SVD)": {_unitType = "Sniper"; _weapon = selectRandomWeighted plSnipers;};
	
	case "AT (PPS-43/B40)": {_unitType = "AT"; _weapon = selectRandomWeighted plRifles;};
	case "AT (TT-33/B40)": {_unitType = "AT"; _weapon = selectRandomWeighted plRifles;};
	
	case "Grenadier (SKS)": {_unitType = "GL"; _weapon = selectRandomWeighted plGLs;};
	
	case "Medic (PPS-43)": {_unitType = "MED"; 
		_weapon = selectRandomWeighted plCarbines;
		_vest = selectRandomWeighted nvaMedVests;};
	case "Medic (MAT-49)": {_unitType = "MED"; 
		_weapon = selectRandomWeighted plCarbines;
		_vest = selectRandomWeighted nvaMedVests;};
	case "Sapper (PPSh-41)": { _unitType = "ENG"; _weapon = selectRandomWeighted plCarbines;};
	case "RTO (PPSh-41)": {_unitType = "RTO"; _weapon = selectRandomWeighted plCarbines;};
	
	case "Mortar Ammo (PPS-52)": {_unitType = "STATIC"; _weapon = selectRandomWeighted plCarbines;};
	case "Mortar gunner (PPS-43)": {_unitType = "STATIC"; _weapon = selectRandomWeighted plCarbines;};
	case "Mortar tripod (PPS-43)": {_unitType = "STATIC"; _weapon = selectRandomWeighted plCarbines;};
	
	case "Crewman (Commander)": {_unitType = "CREW"; _weapon = selectRandomWeighted plCarbines;};
	case "Crewman (Driver)": {_unitType = "CREW"; _weapon = selectRandomWeighted plCarbines;};
	case "Crewman (Gunner)": {_unitType = "CREW"; _weapon = selectRandomWeighted plCarbines;};
	default {_unitType = "Rifle"; _weapon = selectRandomWeighted plRifles;};
};*/

plPistolChance = 1;
plLATChance = 0;
plHelmetChance = 4;
plMedicalMultiplier = 0.85;

plUnitNames = [
	["Officer (Type 56)", "TL"],
	["Squad Leader (PPS-43)", "TL"],
	["Machine Gunner (RPD)", "MG"],
	["Machine Gunner (DP27)", "MG"],
	["Machine Gunner (MG42)", "MG"],
	["Marksman (SKS)", "Sniper"],
	["Marksman (SVD)", "Sniper"],
	["Marksman (VZ54)", "Sniper"],
	["AT (PPS-43/B40)", "AT"],
	["AT (TT-33/B40)", "AT"],
	["Grenadier (SKS)", "GL"],
	["Medic (PPS-43)", "MED"],
	["Medic (MAT-49)", "MED"],
	["Sapper (PPSh-41)", "ENG"],
	["AA (SKS/9K32", "AA"],
	["RTO (PPSh-41)", "RTO"],
	
	["Crewman (Driver)", "LEAVE"],
	["Crewman (Commander)", "LEAVE"],
	["Crewman (Gunner)", "LEAVE"]
];

plSKSScopes = [
	"vn_o_3x_sks", 1
];

plVz54Scopes = [
	"vn_o_3x_vz54", 1
];

plMosinScopes = [
	"vn_o_3x_m9130", 1
];

plM49Scopes = [
	"vn_o_4x_m4956", 1
];

plAT = [
	["vn_rpg2", "", -1], 1
];
plATAmmo = [
	"vn_rpg2_mag", 1
];

plLAT = [
	"vn_m72", 1
];


plAA = [
	"vn_sa7", 2
];
plGrenades = [
	"vn_chicom_grenade_mag", 4,
	"vn_rg42_grenade_mag", 3,
	"vn_rgd5_grenade_mag", 1,
	"vn_t67_grenade_mag", 4,
	"vn_f1_grenade_mag", 1.5
];
plSmoke = [
	"vn_rdg2_mag", 1
];
plColouredSmoke = [
	"vn_rdg2_mag", 1
];
plExplosives = [
	"vn_mine_satchel_remote_02_mag", 6,
	"vn_mine_mortar_range_mag", 0.5,
	"vn_mine_jerrycan_mag", 0.5,
	"vn_mine_tripwire_f1_04_mag", 2,
	"vn_mine_tripwire_arty_mag", 1,
	"vn_mine_punji_02_mag", 1.5,
	"vn_mine_punji_01_mag", 1,
	"vn_mine_gboard_range_mag", 0.5
];

plPistols = [
	"vn_m712", 0.5,
	"vn_m1895", 0.75,
	"vn_pm", 3,
	"vn_tt33", 4,
	"vn_p38", 1,
	"vn_izh54_p", 1
];

plUniforms = [
	"vn_o_uniform_pl_army_01_11", 1,
	"vn_o_uniform_pl_army_01_12", 1,
	"vn_o_uniform_pl_army_01_13", 1,
	"vn_o_uniform_pl_army_01_14", 1,
	"vn_o_uniform_pl_army_02_11", 1,
	"vn_o_uniform_pl_army_02_12", 1,
	"vn_o_uniform_pl_army_02_13", 1,
	"vn_o_uniform_pl_army_02_14", 1,
	"vn_o_uniform_pl_army_03_11", 1,
	"vn_o_uniform_pl_army_03_12", 1,
	"vn_o_uniform_pl_army_03_13", 1,
	"vn_o_uniform_pl_army_03_14", 1,
	"vn_o_uniform_pl_army_04_11", 1,
	"vn_o_uniform_pl_army_04_12", 1,
	"vn_o_uniform_pl_army_04_13", 1,
	"vn_o_uniform_pl_army_04_14", 1
];

plVests = [
	"vn_o_vest_01", 1,
	"vn_o_vest_02", 1.5
];

plTLVests = [
	"vn_o_vest_07", 1
];

plMedVests = [
	"vn_o_vest_06", 1
];

plMGVests = [
	"vn_o_vest_03", 1
];

plEngVests = [
	"vn_o_vest_08", 3,
	"vn_o_vest_01", 1,
	"vn_o_vest_02", 1.5
];

plHelmets = [
	"vn_o_helmet_nva_06", 1.5,
	"vn_o_helmet_nva_08", 1.5
	//pith helmets: 3
];

plHats = [
	"vn_o_pl_cap_01_01", 4,
	"vn_o_pl_cap_02_01", 4,
	"vn_o_pl_cap_02_02", 2,
	"vn_b_headband_03", 0.75
];

plBackpacks = [
	"vn_o_pack_01", 1,
	"vn_o_pack_02", 1,
	"vn_o_pack_06", 0.75,
	"vn_o_pack_04", 0.5
];

plATBackpacks = [
	"vn_o_pack_03", 1,
	"vn_o_pack_07", 0.5
];

plEngBackpacks = [
	"vn_o_pack_05", 3,
	"vn_o_pack_01", 0.25,
	"vn_o_pack_04", 0.5,
	"vn_o_pack_02", 0.25
];

plRTOBackpacks = [
	"vn_o_pack_t884_01", 1
];

plBasicMedical = [ //4 items per FAK, 2 bandage, 1 tourniquet, 1 morphine
	"ACE_fieldDressing", 3,
	"ACE_elasticBandage", 1,
	"ACE_packingBandage", 1,
	"ACE_tourniquet", 1,
	"ACE_salineIV_250", 0.25,
	"ACE_morphine", 0.5
];

plAdvMedical = [ //for medics, who get.. let's say 20 items @ random
	//on average, 10 bandage, 2 blood, 2 splint, 4 tourniquet, 2 injectables
	"ACE_fieldDressing", 5,
	"ACE_elasticBandage", 2.5,
	"ACE_packingBandage", 2.5,
	"ACE_salineIV_500", 2,
	"ACE_tourniquet", 4,
	"ACE_splint", 2,
	"ACE_morphine", 1.5
];

plLoadoutTypes = [//0 = soviet, 1 = western, etc
	0, 1
];


//SOVIET WEAPONS
//**************************************

plRifles_Soviet = [
	["vn_type56", "", -1], 9,
	["vn_ak_01", "", -1], 3,
	//total AK derivatives: 12
	["vn_pps43", "", -1], 3,
	["vn_pps52", "", -1], 1.5,
	["vn_ppsh41", "", -1], 2.5,
	//total Soviet SMGs: 7.5
	["vn_mat49", "", -1], 1,
	["vn_m1a1_tommy", "", -1], 1,
	["vn_m1a1_tommy_so", "", -1], 0.5,
	["vn_m1_garand", "", -1], 2,
	//total western: 4.5
	["vn_sks", "", -1], 9,
	["vn_m38", "", -1], 3,
	["vn_k98k", "", -1], 0.5
	//total regular rifles: 12
];

plTLRifles_Soviet = [
	["vn_type56", "", -1], 9,
	["vn_ak_01", "", -1], 3,
	//total AK derivatives: 12
	["vn_pps43", "", -1], 1.5,
	["vn_pps52", "", -1], 1,
	["vn_ppsh41", "", -1], 2,
	//total Soviet SMGs: 7.5
	["vn_mat49", "", -1], 2,
	["vn_m1a1_tommy", "", -1], 2,
	["vn_m1a1_tommy_so", "", -1], 0.5,
	["vn_m1_garand", "", -1], 2,
	//total western: 4.5
	["vn_sks", "", -1], 6
	//total regular rifles: 12
];

plGLs_Soviet = [
	["vn_sks_gl", "", -1, "vn_22mm_m60_frag_mag"], 2,
	["vn_m1_garand_gl", "", -1, "vn_22mm_m17_frag_mag"], 2
];

plMGs_Soviet = [
	["vn_rpd", "", -1], 4,
	["vn_dp28", "", -1], 4,
	["vn_mg42", "", -1], 0.5
];

plSnipers_Soviet = [
	["vn_m9130", "mosinScopes", -1], 1,
	["vn_vz54", "vz54Scopes", -1], 0.05
];

//****************

loadoutObjpl = "Land_HelipadEmpty_F" createVehicle [0,0,0];

loadoutObjpl setVariable ["unitNames", createHashMapFromArray plUnitNames];
loadoutObjpl setVariable ["loadoutTypes", plloadoutTypes];

loadoutObjpl setVariable ["LATChance", plLATChance];
loadoutObjpl setVariable ["pistolChance", plPistolChance];
loadoutObjpl setVariable ["helmetChance", plHelmetChance];
loadoutObjpl setVariable ["medicalmultiplier", plMedicalMultiplier];

loadoutObjpl setVariable ["vests", plVests];
loadoutObjpl setVariable ["medvests", plMedVests];
loadoutObjpl setVariable ["tlvests", plTLVests];
loadoutObjpl setVariable ["engvests", plEngVests];
loadoutObjpl setVariable ["mgvests", plMGVests];

loadoutObjpl setVariable ["uniforms", plUniforms];
loadoutObjpl setVariable ["helmets", plHelmets];
loadoutObjpl setVariable ["hats", plHats];
loadoutObjpl setVariable ["backpacks", plBackpacks];
loadoutObjpl setVariable ["ATbackpacks", plATBackpacks];
loadoutObjpl setVariable ["engbackpacks", plEngBackpacks];
loadoutObjpl setVariable ["RTObackpacks", plRTOBackpacks];

loadoutObjpl setVariable ["SKSScopes", plSKSScopes];
loadoutObjpl setVariable ["mosinScopes", plMosinScopes];
loadoutObjpl setVariable ["vz54Scopes", plVz54Scopes];

loadoutObjpl setVariable ["medical", plBasicMedical];
loadoutObjpl setVariable ["advmedical", plAdvMedical];
loadoutObjpl setVariable ["grenades", plGrenades];
loadoutObjpl setVariable ["smoke", plSmoke];
loadoutObjpl setVariable ["colouredSmoke", plColouredSmoke];
loadoutObjpl setVariable ["explosives", plExplosives];
loadoutObjpl setVariable ["AT", plAT];
loadoutObjpl setVariable ["ATAmmo", plATAmmo];
loadoutObjpl setVariable ["AA", plAA];
loadoutObjpl setVariable ["LAT", plLAT];

loadoutObjpl setVariable ["pistols", plPistols];
loadoutObjpl setVariable ["TLrifles", [plTLRifles_Soviet]];
loadoutObjpl setVariable ["rifles", [plRifles_Soviet]];
loadoutObjpl setVariable ["GLs", [plGLs_Soviet]];
loadoutObjpl setVariable ["MGs", [plMGs_Soviet]];
loadoutObjpl setVariable ["snipers", [plSnipers_Soviet]];

factionLoadoutMap set ["O_PL", loadoutObjpl];