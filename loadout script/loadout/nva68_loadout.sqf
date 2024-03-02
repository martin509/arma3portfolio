/*switch(_unitName) do {
	case "Officer (PPSh-41)": {_unitType = "TL"; 
		_weapon = selectRandomWeighted nvaTLGuns;
		_vest = selectRandomWeighted nvaTLVests;};
	case "Machine Gunner (RPD)": {	_unitType = "MG"; 
		_weapon = selectRandomWeighted nvaMGs;
		_vest = selectRandomWeighted nvaMGVests;};
	case "Marksman (SKS)": {_unitType = "Sniper"; _weapon = selectRandomWeighted nvaSnipers;};
	case "Marksman (VZ54)": {_unitType = "Sniper"; _weapon = selectRandomWeighted nvaSnipers;};
	case "AT (SKS/B41)": {_unitType = "AT"; _weapon = selectRandomWeighted nvaRifles;};
	case "Grenadier (SKS)": {_unitType = "GL"; _weapon = selectRandomWeighted nvaGLs;};
	case "Medic (PPS-43)": {_unitType = "MED"; 
		_weapon = selectRandomWeighted nvaCarbines;
		_vest = selectRandomWeighted nvaMedVests;};
	case "Sapper (PPSh-41)": { _unitType = "ENG"; _weapon = selectRandomWeighted nvaCarbines;};
	case "AA (SKS/9K32": {_unitType = "AA"; _weapon = selectRandomWeighted nvaRifles;};
	case "RTO (PPSh-41)": {_unitType = "RTO"; _weapon = selectRandomWeighted nvaCarbines;};
	
	case "Mortar Ammo (PPS52)": {_unitType = "STATIC"; _weapon = selectRandomWeighted nvaCarbines;};
	case "Mortar gunner (PPS-43)": {_unitType = "STATIC"; _weapon = selectRandomWeighted nvaCarbines;};
	case "Mortar tripod (PPS-52)": {_unitType = "STATIC"; _weapon = selectRandomWeighted nvaCarbines;};
	case "AT-3 gunner (PPS-43)": {_unitType = "STATIC"; _weapon = selectRandomWeighted nvaCarbines;};

	
	case "Crewman (Commander)": {_unitType = "CREW"; _weapon = selectRandomWeighted nvaCarbines;};
	case "Crewman (Driver)": {_unitType = "CREW"; _weapon = selectRandomWeighted nvaCarbines;};
	case "Crewman (Commander)": {_unitType = "CREW"; _weapon = selectRandomWeighted nvaCarbines;};
	default {_unitType = "Rifle"; _weapon = selectRandomWeighted nvaRifles;};
};*/

nvaPistolChance = 1;
nvaLATChance = 0;
nvaHelmetChance = 6;
nvaMedicalMultiplier = 0.9;

nvaUnitNames = [
	["Officer (PPSh-41)", "TL"],
	["Machine Gunner (RPD)", "MG"],
	["Marksman (SKS)", "Sniper"],
	["Marksman (SVD)", "Sniper"],
	["Marksman (VZ54)", "Sniper"],
	["AT (SKS/B41)", "AT"],
	["Grenadier (KBKG)", "GL"],
	["Medic (PPS-43)", "MED"],
	["Sapper (PPSh-41)", "ENG"],
	["AA (SKS/9K32", "AA"],
	["RTO (PPSh-41)", "RTO"],
	
	["Crewman (Driver)", "LEAVE"],
	["Crewman (Commander)", "LEAVE"],
	["Crewman (Gunner)", "LEAVE"]
];

nvaSKSScopes = [
	"vn_o_3x_sks", 1
];

nvaVz54Scopes = [
	"vn_o_3x_vz54", 1
];

nvaMosinScopes = [
	"vn_o_3x_m9130", 1
];

nvaM49Scopes = [
	"vn_o_4x_m4956", 1
];

nvaAT = [
	["vn_rpg2", "", -1], 1
];
nvaATAmmo = [
	"vn_rpg2_mag", 1
];

nvaLAT = [
	"vn_m72", 1
];

nvaAA = [
	"vn_sa7", 2
];
nvaGrenades = [
	"vn_chicom_grenade_mag", 3,
	"vn_rg42_grenade_mag", 4,
	"vn_rgd5_grenade_mag", 2,
	"vn_t67_grenade_mag", 3,
	"vn_f1_grenade_mag", 2
];
nvaSmoke = [
	"vn_rdg2_mag", 1
];
nvaColouredSmoke = [
	"vn_rdg2_mag", 1
];
nvaExplosives = [
	"vn_mine_satchel_remote_02_mag", 6,
	"vn_mine_mortar_range_mag", 0.5,
	"vn_mine_jerrycan_mag", 0.5,
	"vn_mine_tripwire_f1_04_mag", 2,
	"vn_mine_tripwire_arty_mag", 1,
	"vn_mine_punji_02_mag", 1.5,
	"vn_mine_punji_01_mag", 1,
	"vn_mine_gboard_range_mag", 0.5
];

nvaPistols = [
	"vn_m712", 0.5,
	"vn_m1895", 0.75,
	"vn_pm", 3,
	"vn_tt33", 4,
	"vn_p38", 1,
	"vn_izh54_p", 1
];

nvaUniforms = [
	"vn_o_uniform_nva_army_01_03", 1,
	"vn_o_uniform_nva_army_01_04", 1,
	"vn_o_uniform_nva_army_02_03", 1,
	"vn_o_uniform_nva_army_02_04", 1,
	"vn_o_uniform_nva_army_03_03", 1,
	"vn_o_uniform_nva_army_03_04", 1,
	"vn_o_uniform_nva_army_04_03", 1,
	"vn_o_uniform_nva_army_04_04", 1,
	"vn_o_uniform_nva_army_05_03", 1,
	"vn_o_uniform_nva_army_05_04", 1,
	"vn_o_uniform_nva_army_06_03", 1,
	"vn_o_uniform_nva_army_06_04", 1,
	"vn_o_uniform_nva_army_07_03", 1,
	"vn_o_uniform_nva_army_07_04", 1,
	"vn_o_uniform_nva_army_08_03", 1,
	"vn_o_uniform_nva_army_08_04", 1,
	"vn_o_uniform_nva_army_09_03", 1,
	"vn_o_uniform_nva_army_09_04", 1,
	"vn_o_uniform_nva_army_10_03", 1,
	"vn_o_uniform_nva_army_10_04", 1,
	"vn_o_uniform_nva_army_11_03", 1,
	"vn_o_uniform_nva_army_11_04", 1,
	"vn_o_uniform_nva_army_12_03", 1,
	"vn_o_uniform_nva_army_12_04", 1
];

nvaVests = [
	"vn_o_vest_01", 1,
	"vn_o_vest_02", 1.5
];

nvaTLVests = [
	"vn_o_vest_07", 1
];

nvaMedVests = [
	"vn_o_vest_06", 1
];

nvaMGVests = [
	"vn_o_vest_03", 1
];

nvaEngVests = [
	"vn_o_vest_08", 3,
	"vn_o_vest_01", 1,
	"vn_o_vest_02", 1.5
];

nvaHelmets = [
	"vn_o_helmet_nva_01", 2,
	"vn_o_helmet_nva_02", 2,
	"vn_o_helmet_nva_03", 1,
	"vn_o_helmet_nva_04", 1,
	"vn_o_helmet_nva_05", 0.5,
	"vn_o_helmet_nva_07", 1.5,
	//pith helmets: 8
	"vn_o_helmet_nva_09", 2,
	"vn_o_helmet_nva_10", 2
	//other helmets: 4
];

nvaHats = [
	"vn_b_bandana_01", 0.2,
	"vn_o_cap_03", 0.5,
	"vn_o_cap_01", 0.5,
	"vn_o_boonie_vc_01_01", 1,
	"vn_o_boonie_nva_02_01", 1.8
	//soft hats: 4
];

nvaBackpacks = [
	"vn_o_pack_01", 1,
	"vn_o_pack_02", 1,
	"vn_o_pack_06", 0.75,
	"vn_o_pack_04", 0.5
];

nvaATBackpacks = [
	"vn_o_pack_03", 1,
	"vn_o_pack_07", 0.5
];

nvaEngBackpacks = [
	"vn_o_pack_05", 3,
	"vn_o_pack_01", 0.25,
	"vn_o_pack_04", 0.5,
	"vn_o_pack_02", 0.25
];

nvaRTOBackpacks = [
	"vn_o_pack_t884_01", 1
];

nvaBasicMedical = [ //4 items per FAK, 2 bandage, 1 tourniquet, 1 morphine
	"ACE_fieldDressing", 3,
	"ACE_elasticBandage", 1,
	"ACE_packingBandage", 1,
	"ACE_tourniquet", 1,
	"ACE_salineIV_250", 0.25,
	"ACE_morphine", 0.5
];

nvaAdvMedical = [ //for medics, who get.. let's say 20 items @ random
	//on average, 10 bandage, 2 blood, 2 splint, 4 tourniquet, 2 injectables
	"ACE_fieldDressing", 5,
	"ACE_elasticBandage", 2.5,
	"ACE_packingBandage", 2.5,
	"ACE_salineIV_500", 2,
	"ACE_tourniquet", 4,
	"ACE_splint", 2,
	"ACE_morphine", 1.5
];

nvaLoadoutTypes = [//0 = soviet, 1 = western, etc
	0, 1
];


//SOVIET WEAPONS
//**************************************

nvaRifles_Soviet = [
	["vn_sks", "", -1], 6,
	//sks: 6
	["vn_type56", "", -1], 2,
	["vn_ak_01", "", -1], 1,
	["vn_kbkg", "", -1], 0.1,
	//ak: 3.1
	["vn_m38", "", -1], 0.5,
	//mosin: 0.5
	["vn_pps43", "", -1], 0.6,
	["vn_pps52", "", -1], 0.35,
	["vn_ppsh41", "", -1], 0.65,
	["vn_k50m", "", -1], 1
	//smgs: 2.6
];

nvaTLRifles_Soviet = [
	["vn_type56", "", -1], 2.5,
	["vn_ak_01", "", -1], 1.5,
	["vn_kbkg", "", -1], 0.2,
	
	["vn_pps43", "", -1], 0.5,
	["vn_pps52", "", -1], 1,
	["vn_ppsh41", "", -1], 0.5
];

nvaGLs_Soviet = [
	["vn_sks_gl", "", -1, "vn_22mm_m60_frag_mag"], 2,
	["vn_kbkg_gl", "", -1, "vn_20mm_kgn_frag_mag"], 0.1
];

nvaMGs_Soviet = [
	["vn_rpd", "", -1], 5,
	["vn_dp28", "", -1], 2
];

nvaSnipers_Soviet = [
	["vn_sks", "SKSScopes", -1], 4,
	["vn_m9130", "mosinScopes", -1], 6,
	["vn_vz54", "vz54Scopes", -1], 1
];

//****************

loadoutObjnva = "Land_HelipadEmpty_F" createVehicle [0,0,0];

loadoutObjnva setVariable ["unitNames", createHashMapFromArray nvaUnitNames];
loadoutObjnva setVariable ["loadoutTypes", nvaloadoutTypes];

loadoutObjnva setVariable ["LATChance", nvaLATChance];
loadoutObjnva setVariable ["pistolChance", nvaPistolChance];
loadoutObjnva setVariable ["helmetChance", nvaHelmetChance];
loadoutObjnva setVariable ["medicalmultiplier", nvaMedicalMultiplier];

loadoutObjnva setVariable ["vests", nvaVests];
loadoutObjnva setVariable ["medvests", nvaMedVests];
loadoutObjnva setVariable ["tlvests", nvaTLVests];
loadoutObjnva setVariable ["engvests", nvaEngVests];
loadoutObjnva setVariable ["mgvests", nvaMGVests];

loadoutObjnva setVariable ["uniforms", nvaUniforms];
loadoutObjnva setVariable ["helmets", nvaHelmets];
loadoutObjnva setVariable ["hats", nvaHats];
loadoutObjnva setVariable ["backpacks", nvaBackpacks];
loadoutObjnva setVariable ["ATbackpacks", nvaATBackpacks];
loadoutObjnva setVariable ["engbackpacks", nvaEngBackpacks];
loadoutObjnva setVariable ["RTObackpacks", nvaRTOBackpacks];

loadoutObjnva setVariable ["SKSScopes", nvaSKSScopes];
loadoutObjnva setVariable ["mosinScopes", nvaMosinScopes];
loadoutObjnva setVariable ["vz54Scopes", nvaVz54Scopes];

loadoutObjnva setVariable ["medical", nvaBasicMedical];
loadoutObjnva setVariable ["advmedical", nvaAdvMedical];
loadoutObjnva setVariable ["grenades", nvaGrenades];
loadoutObjnva setVariable ["smoke", nvaSmoke];
loadoutObjnva setVariable ["colouredSmoke", nvaColouredSmoke];
loadoutObjnva setVariable ["explosives", nvaExplosives];
loadoutObjnva setVariable ["AT", nvaAT];
loadoutObjnva setVariable ["ATAmmo", nvaATAmmo];
loadoutObjnva setVariable ["AA", nvaAA];
loadoutObjnva setVariable ["LAT", nvaLAT];

loadoutObjnva setVariable ["pistols", nvaPistols];
loadoutObjnva setVariable ["TLrifles", [nvaTLRifles_Soviet]];
loadoutObjnva setVariable ["rifles", [nvaRifles_Soviet]];
loadoutObjnva setVariable ["GLs", [nvaGLs_Soviet]];
loadoutObjnva setVariable ["MGs", [nvaMGs_Soviet]];
loadoutObjnva setVariable ["snipers", [nvaSnipers_Soviet]];

factionLoadoutMap set ["O_PAVN", loadoutObjnva];