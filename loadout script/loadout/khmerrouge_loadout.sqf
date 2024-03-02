/*switch(_unitName) do {
	case "Officer (TT-33)": {_unitType = "TL"; 
		_weapon = selectRandomWeighted camTLGuns;
		_vest = selectRandomWeighted nvaTLVests;};
	case "Squad Leader (AK)": {_unitType = "TL"; 
		_weapon = selectRandomWeighted camTLGuns;
		_vest = selectRandomWeighted nvaTLVests;};
	case "Squad Leader (SKS Bayo)": {_unitType = "TL"; 
		_weapon = selectRandomWeighted camTLGuns;
		_vest = selectRandomWeighted nvaTLVests;};
	case "Automatic Rifleman (M1918A2)": {	_unitType = "MG"; 
		_weapon = selectRandomWeighted camMGs;
		_vest = selectRandomWeighted nvaMGVests;};
	case "Marksman (M91/30)": {_unitType = "Sniper"; _weapon = selectRandomWeighted camSnipers;};
	
	case "AT (Ish-54/B41)": {_unitType = "AT"; _weapon = selectRandomWeighted camRifles;};
	
	case "Grenadier (M79)": {_unitType = "GL"; _weapon = selectRandomWeighted camGLs;};
	
	case "Medic (PPSh-41)": {_unitType = "MED"; 
		_weapon = selectRandomWeighted camCarbines;
		_vest = selectRandomWeighted nvaMedVests;};
		
	case "Sapper (AK)": { _unitType = "ENG"; _weapon = selectRandomWeighted camCarbines;};
	case "RTO (PPSh-41)": {_unitType = "RTO"; _weapon = selectRandomWeighted camCarbines;};
	
	case "Mortar Ammo (M38)": {_unitType = "STATIC"; _weapon = selectRandomWeighted camCarbines;};
	case "Mortar gunner (M36)": {_unitType = "STATIC"; _weapon = selectRandomWeighted camCarbines;};
	case "Mortar tripod (M38)": {_unitType = "STATIC"; _weapon = selectRandomWeighted camCarbines;};

	
	case "Crewman (Commander)": {_unitType = "CREW"; _weapon = selectRandomWeighted camCarbines;};
	case "Crewman (Driver)": {_unitType = "CREW"; _weapon = selectRandomWeighted camCarbines;};
	case "Crewman (Commander)": {_unitType = "CREW"; _weapon = selectRandomWeighted camCarbines;};
	
	default {_unitType = "Rifle"; _weapon = selectRandomWeighted camRifles;};
};*/

krPistolChance = 1;
krLATChance = 0;
krHelmetChance = 4;
krMedicalMultiplier = 0.85;

krUnitNames = [
	["Squad Leader (AK)", "TL"],
	["Squad Leader (SKS Bayo)", "TL"],
	["Officer (TT-33)", "TL"],
	["Automatic Rifleman (M1918A2)", "MG"],
	["Marksman (M91/30)", "Sniper"],
	["AT (Ish-54/B41)", "AT"],
	["Grenadier (M79)", "GL"],
	["Medic (PPSh-41)", "MED"],
	["Sapper (AK)", "ENG"],
	["AA (SKS/9K32", "AA"],
	["RTO (PPSh-41)", "RTO"],
	
	["Crewman (Driver)", "LEAVE"],
	["Crewman (Commander)", "LEAVE"],
	["Crewman (Gunner)", "LEAVE"]
];

krSKSScopes = [
	"vn_o_3x_sks", 1
];

krVz54Scopes = [
	"vn_o_3x_vz54", 1
];

krMosinScopes = [
	"vn_o_3x_m9130", 1
];

krM49Scopes = [
	"vn_o_4x_m4956", 1
];

krAT = [
	["vn_rpg2", "", -1], 1
];
krATAmmo = [
	"vn_rpg2_mag", 1
];

krLAT = [
	"vn_m72", 1
];


krAA = [
	"vn_sa7", 2
];
krGrenades = [
	"vn_chicom_grenade_mag", 4,
	"vn_rg42_grenade_mag", 3,
	"vn_rgd5_grenade_mag", 1,
	"vn_t67_grenade_mag", 4,
	"vn_f1_grenade_mag", 1.5
];
krSmoke = [
	"vn_rdg2_mag", 1
];
krColouredSmoke = [
	"vn_rdg2_mag", 1
];
krExplosives = [
	"vn_mine_satchel_remote_02_mag", 6,
	"vn_mine_mortar_range_mag", 0.5,
	"vn_mine_jerrycan_mag", 0.5,
	"vn_mine_tripwire_f1_04_mag", 2,
	"vn_mine_tripwire_arty_mag", 1,
	"vn_mine_punji_02_mag", 1.5,
	"vn_mine_punji_01_mag", 1,
	"vn_mine_gboard_range_mag", 0.5
];

krPistols = [
	"vn_m712", 0.5,
	"vn_m1895", 0.75,
	"vn_pm", 3,
	"vn_tt33", 4,
	"vn_p38", 1,
	"vn_izh54_p", 1
];

krUniforms = [
	"vn_o_uniform_vc_mf_01_07", 1,
	"vn_o_uniform_vc_mf_10_07", 1,
	"vn_o_uniform_vc_mf_11_07", 1,
	"vn_o_uniform_vc_mf_12_07",1,
	"vn_o_uniform_vc_mf_02_07",  1,
	"vn_o_uniform_vc_mf_03_07", 1,
	"vn_o_uniform_vc_mf_01_07", 1,
	"vn_o_uniform_vc_mf_04_07",1,
	"vn_o_uniform_vc_mf_09_07",1,
	"vn_o_uniform_vc_01_01", 1,
	"vn_o_uniform_vc_03_01", 1,
	"vn_o_uniform_vc_02_01", 1,
	"vn_o_uniform_vc_04_01", 1,
	"vn_o_uniform_vc_05_01", 1
];

krVests = [
	"vn_o_vest_01", 1,
	"vn_o_vest_02", 1.5
];

krTLVests = [
	"vn_o_vest_07", 1
];

krMedVests = [
	"vn_o_vest_06", 1
];

krMGVests = [
	"vn_o_vest_03", 1
];

krEngVests = [
	"vn_o_vest_08", 3,
	"vn_o_vest_01", 1,
	"vn_o_vest_02", 1.5
];

krHelmets = [
	"vn_o_helmet_nva_09", 1
	//pith helmets: 3
];

krHats = [
	"vn_o_pl_cap_01_01", 4,
	"vn_o_pl_cap_02_01", 4,
	"vn_o_pl_cap_02_02", 2,
	//PL caps: 10
	"vn_c_headband_01", 4,
	"vn_o_boonie_vc_01_02", 1
];

krBackpacks = [
	"vn_o_pack_01", 1,
	"vn_o_pack_02", 1,
	"vn_o_pack_06", 0.75,
	"vn_o_pack_04", 0.5
];

krATBackpacks = [
	"vn_o_pack_03", 1,
	"vn_o_pack_07", 0.5
];

krEngBackpacks = [
	"vn_o_pack_05", 3,
	"vn_o_pack_01", 0.25,
	"vn_o_pack_04", 0.5,
	"vn_o_pack_02", 0.25
];

krRTOBackpacks = [
	"vn_o_pack_t884_01", 1
];

krBasicMedical = [ //4 items per FAK, 2 bandage, 1 tourniquet, 1 morphine
	"ACE_fieldDressing", 3,
	"ACE_elasticBandage", 1,
	"ACE_packingBandage", 1,
	"ACE_tourniquet", 1,
	"ACE_salineIV_250", 0.25,
	"ACE_morphine", 0.5
];

krAdvMedical = [ //for medics, who get.. let's say 20 items @ random
	//on average, 10 bandage, 2 blood, 2 splint, 4 tourniquet, 2 injectables
	"ACE_fieldDressing", 5,
	"ACE_elasticBandage", 2.5,
	"ACE_packingBandage", 2.5,
	"ACE_salineIV_500", 2,
	"ACE_tourniquet", 4,
	"ACE_splint", 2,
	"ACE_morphine", 1.5
];

krLoadoutTypes = [//0 = soviet, 1 = western, etc
	0, 1
];


//SOVIET WEAPONS
//**************************************

krRifles_Soviet = [
	["vn_type56", "", -1], 6,
	["vn_ak_01", "", -1], 8,
	//total AK derivatives: 14
	["vn_pps43", "", -1], 1.5,
	["vn_pps52", "", -1], 2,
	["vn_ppsh41", "", -1], 1,
	//total Soviet SMGs: 4
	["vn_mp40", "", -1], 1.5,
	//total western: 1.5
	["vn_sks", "", -1], 8,
	//SKS: 8
	["vn_m38", "", -1], 2.5,
	["vn_m1891", "", -1], 1,
	["vn_m9130", "", -1], 1.5,
	["vn_k98k", "", -1], 0.5,
	["vn_m36", "", -1], 0.5
	//bolt-action: 6
];

krTLRifles_Soviet = [
	["vn_pps43", "", -1], 1.5,
	["vn_pps52", "", -1], 1,
	["vn_k50m", "", -1], 1,
	["vn_ppsh41", "", -1], 2,
	["vn_mat49_vc", "", -1], 0.5,
	//total: 6
	["vn_sks", "", -1], 6,
	["vn_type56", "", -1], 12
	//total: 18
];

krGLs_Soviet = [
	["vn_sks_gl", "", -1, "vn_22mm_m60_frag_mag"], 10
];

krMGs_Soviet = [
	["vn_rpd", "", -1], 6,
	["vn_dp28", "", -1], 4,
	["vn_m1918", "", -1], 2
];

krSnipers_Soviet = [
	["vn_m9130", "mosinScopes", -1], 1,
	["vn_vz54", "vz54Scopes", -1], 0.05
];

//****************

loadoutObjkr = "Land_HelipadEmpty_F" createVehicle [0,0,0];

loadoutObjkr setVariable ["unitNames", createHashMapFromArray krUnitNames];
loadoutObjkr setVariable ["loadoutTypes", krloadoutTypes];

loadoutObjkr setVariable ["LATChance", krLATChance];
loadoutObjkr setVariable ["pistolChance", krPistolChance];
loadoutObjkr setVariable ["helmetChance", krHelmetChance];
loadoutObjkr setVariable ["medicalmultiplier", krMedicalMultiplier];

loadoutObjkr setVariable ["vests", krVests];
loadoutObjkr setVariable ["medvests", krMedVests];
loadoutObjkr setVariable ["tlvests", krTLVests];
loadoutObjkr setVariable ["engvests", krEngVests];
loadoutObjkr setVariable ["mgvests", krMGVests];

loadoutObjkr setVariable ["uniforms", krUniforms];
loadoutObjkr setVariable ["helmets", krHelmets];
loadoutObjkr setVariable ["hats", krHats];
loadoutObjkr setVariable ["backpacks", krBackpacks];
loadoutObjkr setVariable ["ATbackpacks", krATBackpacks];
loadoutObjkr setVariable ["engbackpacks", krEngBackpacks];
loadoutObjkr setVariable ["RTObackpacks", krRTOBackpacks];

loadoutObjkr setVariable ["SKSScopes", krSKSScopes];
loadoutObjkr setVariable ["mosinScopes", krMosinScopes];
loadoutObjkr setVariable ["vz54Scopes", krVz54Scopes];

loadoutObjkr setVariable ["medical", krBasicMedical];
loadoutObjkr setVariable ["advmedical", krAdvMedical];
loadoutObjkr setVariable ["grenades", krGrenades];
loadoutObjkr setVariable ["smoke", krSmoke];
loadoutObjkr setVariable ["colouredSmoke", krColouredSmoke];
loadoutObjkr setVariable ["explosives", krExplosives];
loadoutObjkr setVariable ["AT", krAT];
loadoutObjkr setVariable ["ATAmmo", krATAmmo];
loadoutObjkr setVariable ["AA", krAA];
loadoutObjkr setVariable ["LAT", krLAT];

loadoutObjkr setVariable ["pistols", krPistols];
loadoutObjkr setVariable ["TLrifles", [krTLRifles_Soviet]];
loadoutObjkr setVariable ["rifles", [krRifles_Soviet]];
loadoutObjkr setVariable ["GLs", [krGLs_Soviet]];
loadoutObjkr setVariable ["MGs", [krMGs_Soviet]];
loadoutObjkr setVariable ["snipers", [krSnipers_Soviet]];

factionLoadoutMap set ["O_CAM", loadoutObjkr];