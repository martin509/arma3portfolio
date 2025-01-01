
vcPistolChance = 1;
vcLATChance = 0.5;
vcHelmetChance = 1;
vcMedicalMultiplier = 0.8;
vcAmmoMultiplier = 0.95;

vcUnitNames = [
	["Officer 1 (MAT-49)", "TL"],
	["Officer 2 (MAT-49)", "TL"],
	["Officer (K-50M)", "TL"],
	["Officer (MAT-49)", "TL"],
	
	["Machine Gunner (RPD)", "MG"],
	["Machine Gunner (DP27)", "MG"],
	["Machine Gunner 1 (DP27)", "MG"],
	["Machine Gunner 2 (DP27)", "MG"],
	["Machine Gunner 3 (DP27)", "MG"],
	
	["Marksman (M91/30)", "Sniper"],
	["Marksman 1 (M91/30)", "Sniper"],
	["Marksman 2 (K98K)", "Sniper"],
	["Marksman 3 (M91/30)", "Sniper"],
	["Marksman (M49/56)", "Sniper"],
	
	["AT (Ish-54/ B40)", "AT"],
	["AT (M49/56 / B40)", "AT"],
	["AT (Ish-54/ B40)", "AT"],
	["AT (Type 56/ B41)", "AT"],
	
	["Grenadier (M1)", "GL"],
	["Grenadier (SKS)", "GL"],
	["Grenadier (M49/56)", "GL"],
	
	["Medic (Ish-54)", "MED"],
	["Medic 1 (Ish-54)", "MED"],
	["Medic 2 (Ish-54)", "MED"],
	["Medic 3 (Ish-54)", "MED"],
	
	["Sapper (M3A1)", "ENG"],
	["Sapper (K-50M)", "ENG"],
	["Sapper 1 (M3A1)", "ENG"],
	["Sapper 2 (M3A1)", "ENG"],
	["Sapper 3 (M3A1)", "ENG"],
	
	["RTO (M1891)", "RTO"],
	["RTO (M36)", "RTO"],
	["RTO (M1 Carbine Bayo)", "RTO"],
	["RTO (PPSh-41)", "RTO"],
	
	["Crewman (Driver)", "LEAVE"],
	["Crewman (Commander)", "LEAVE"],
	["Crewman (Gunner)", "LEAVE"]
];

vcSKSScopes = [
	"vn_o_3x_sks", 1
];

vcVz54Scopes = [
	"vn_o_3x_vz54", 1
];

vcMosinScopes = [
	"vn_o_3x_m9130", 1
];

vcM49Scopes = [
	"vn_o_4x_m4956", 1
];

vcAT = [
	["vn_rpg2", "", -1], 1
];
vcATAmmo = [
	"vn_rpg2_mag", 1
];

vcLAT = [
	"vn_m72", 1
];

vcAA = [
	"vn_sa7", 2
];
vcGrenades = [
	"vn_chicom_grenade_mag", 5,
	"vn_rg42_grenade_mag", 2,
	"vn_rgd5_grenade_mag", 1,
	"vn_t67_grenade_mag", 3,
	"vn_f1_grenade_mag", 1.5
];
vcSmoke = [
	"vn_rdg2_mag", 1
];
vcColouredSmoke = [
	"vn_rdg2_mag", 1
];
vcExplosives = [
	"vn_mine_satchel_remote_02_mag", 6,
	"vn_mine_mortar_range_mag", 0.5,
	"vn_mine_jerrycan_mag", 0.5,
	"vn_mine_tripwire_f1_04_mag", 2,
	"vn_mine_tripwire_arty_mag", 1,
	"vn_mine_punji_02_mag", 1.5,
	"vn_mine_punji_01_mag", 1,
	"vn_mine_gboard_range_mag", 0.5
];

vcPistols = [
	"vn_m712", 0.5,
	"vn_m1895", 0.75,
	"vn_pm", 3,
	"vn_tt33", 4,
	"vn_p38", 1,
	"vn_izh54_p", 1
];

vcUniforms = [
	"vn_o_uniform_vc_01_01", 1,
	"vn_o_uniform_vc_01_02", 1,
	"vn_o_uniform_vc_01_03", 1,
	"vn_o_uniform_vc_01_04", 1,
	"vn_o_uniform_vc_01_05", 1,
	"vn_o_uniform_vc_01_06", 1,
	"vn_o_uniform_vc_01_07", 1,
	"vn_o_uniform_vc_02_01", 1,
	"vn_o_uniform_vc_02_02", 1,
	"vn_o_uniform_vc_02_03", 1,
	"vn_o_uniform_vc_02_04", 1,
	"vn_o_uniform_vc_02_05", 1,
	"vn_o_uniform_vc_02_06", 1,
	"vn_o_uniform_vc_02_07", 1,
	"vn_o_uniform_vc_03_01", 1,
	"vn_o_uniform_vc_03_02", 1,
	"vn_o_uniform_vc_03_03", 1,
	"vn_o_uniform_vc_03_04", 1,
	"vn_o_uniform_vc_03_05", 1,
	"vn_o_uniform_vc_03_06", 1,
	"vn_o_uniform_vc_03_07", 1,
	"vn_o_uniform_vc_04_01", 1,
	"vn_o_uniform_vc_04_02", 1,
	"vn_o_uniform_vc_04_03", 1,
	"vn_o_uniform_vc_04_04", 1,
	"vn_o_uniform_vc_04_05", 1,
	"vn_o_uniform_vc_04_06", 1,
	"vn_o_uniform_vc_04_07", 1,
	"vn_o_uniform_vc_05_01", 1,
	"vn_o_uniform_vc_05_02", 1,
	"vn_o_uniform_vc_05_03", 1,
	"vn_o_uniform_vc_05_04", 1
];

vcVests = [
	"vn_o_vest_01", 1,
	"vn_o_vest_02", 1,
	"vn_o_vest_vc_01", 2,
	"vn_o_vest_vc_02", 2
];

vcTLVests = [
	"vn_o_vest_07", 1, 
	"vn_o_vest_vc_05", 2
];

vcMedVests = [
	"vn_o_vest_06", 1
];

vcMGVests = [
	"vn_o_vest_03", 1, 
	"vn_o_vest_vc_03", 2
];

vcEngVests = [
	"vn_o_vest_08", 3,
	"vn_o_vest_01", 1,
	"vn_o_vest_02", 1.5
];

vcHelmets = [
	"vn_o_helmet_vc_01", 0.5,
	"vn_o_helmet_vc_02", 0.5,
	"vn_o_helmet_vc_03", 1.5,
	"vn_o_helmet_vc_04", 1.5,
	"vn_o_helmet_vc_05", 1.25,
	"vn_o_helmet_nva_09", 0.25,
	"vn_o_helmet_nva_10", 0.25
];

vcHats = [
	"vn_b_bandana_01", 1,
	"vn_b_bandana_03", 1,
	"vn_o_cap_02", 0.75,
	"vn_o_cap_01", 0.75,
	"vn_o_boonie_vc_01_01", 1,
	"vn_o_boonie_vc_01_02", 1,
	"vn_o_boonie_vc_02_01", 0.75,
	"vn_o_boonie_vc_02_02", 0.75,
	"vn_c_headband_01", 1,
	"vn_c_headband_02", 1,
	"vn_c_headband_03", 1,
	"vn_c_headband_04", 1
];

vcBackpacks = [
	"vn_o_pack_01", 1,
	"vn_o_pack_02", 1,
	"vn_o_pack_06", 0.75,
	"vn_o_pack_04", 0.5
];

vcATBackpacks = [
	"vn_o_pack_03", 1,
	"vn_o_pack_07", 0.5
];

vcEngBackpacks = [
	"vn_o_pack_05", 3,
	"vn_o_pack_01", 0.25,
	"vn_o_pack_04", 0.5,
	"vn_o_pack_02", 0.25
];

vcRTOBackpacks = [
	"vn_o_pack_t884_01", 1
];

vcBasicMedical = [ //4 items per FAK, 2 bandage, 1 tourniquet, 1 morphine
	"ACE_fieldDressing", 3,
	"ACE_elasticBandage", 1,
	"ACE_packingBandage", 1,
	"ACE_tourniquet", 1,
	"ACE_salineIV_250", 0.1,
	"ACE_morphine", 0.25
];

vcAdvMedical = [ //for medics, who get.. let's say 20 items @ random
	//on average, 10 bandage, 2 blood, 2 splint, 4 tourniquet, 2 injectables
	"ACE_fieldDressing", 5,
	"ACE_elasticBandage", 2.5,
	"ACE_packingBandage", 2.5,
	"ACE_salineIV_500", 3,
	"ACE_tourniquet", 4,
	"ACE_splint", 2,
	"ACE_morphine", 1.5
];

vcLoadoutTypes = [//0 = soviet, 1 = western, etc
	0, 1
];


//SOVIET WEAPONS
//**************************************

vcRifles_Soviet = [
	["vn_pps43", "", -1], 1.5,
	["vn_pps52", "", -1], 1,
	["vn_k50m", "", -1], 1,
	["vn_ppsh41", "", -1], 2,
	["vn_m3a1", "", -1], 1,
	["vn_mat49_vc", "", -1], 1,
	["vn_mat49", "", -1], 1,
	["vn_m1a1_tommy_so", "", -1], 0.25,
	["vn_m1a1_tommy", "", -1], 0.5,
	["vn_sten", "", -1], 0.25,
	["vn_izh54", "", -1], 2,
	["vn_izh54_shorty", "", -1], 1.5,
	//total SMGs: 12.75
	["vn_sks", "", -1], 5.5,
	["vn_m4956", "", -1], 0.5,
	["vn_type56", "", -1], 1.2,
	["vn_kbkg", "", -1], 0.1,
	["vn_ak_01", "", -1], 0.8,
	["vn_m1carbine", "", -1], 1.5,
	["vn_m2carbine", "", -1], 2.5,
	//total rifles: 12
	["vn_m38", "", -1], 2.5,
	["vn_m1891", "", -1], 0.5,
	["vn_m9130", "", -1], 1.5,
	["vn_k98k", "", -1], 0.5,
	["vn_m36", "", -1], 1
	//total bolt-actions: 6
	
];

vcTLRifles_Soviet = [
	["vn_pps43", "", -1], 1.5,
	["vn_pps52", "", -1], 1,
	["vn_k50m", "", -1], 1,
	["vn_ppsh41", "", -1], 2,
	["vn_m3a1", "", -1], 2,
	["vn_mat49_vc", "", -1], 1,
	["vn_mat49", "", -1], 1,
	["vn_m1a1_tommy_so", "", -1], 0.25,
	["vn_m1a1_tommy", "", -1], 0.5,
	["vn_sten", "", -1], 0.25,
	//total SMGs: 
	["vn_sks", "", -1], 8,
	["vn_m4956", "", -1], 2,
	["vn_type56", "", -1], 4,
	["vn_ak_01", "", -1], 2,
	["vn_m1carbine", "", -1], 2,
	["vn_m2carbine", "", -1], 4
	//total rifles: 
];

vcGLs_Soviet = [
	["vn_sks_gl", "", -1, "vn_22mm_m60_frag_mag"], 8,
	["vn_m1carbine_gl", "", -1, "vn_22mm_m60_frag_mag"], 10,
	["vn_m4956_gl", "", -1, "vn_22mm_m60_frag_mag"], 6,
	["vn_kbkg_gl", "", -1, "vn_20mm_kgn_frag_mag"], 1
];

vcMGs_Soviet = [
	["vn_rpd", "", -1], 2.5,
	["vn_dp28", "", -1], 5,
	["vn_m1918", "", -1], 1
];

vcSnipers_Soviet = [
	["vn_sks", "SKSScope", 10], 2,
	["vn_m9130", "mosinScope", 10], 6,
	["vn_m4956", "mas49Scope", 10], 2,
	["vn_vz54", "vz54Scope", 10], 0.05
];

//****************

loadoutObjvc = "Land_HelipadEmpty_F" createVehicle [0,0,0];

loadoutObjvc setVariable ["unitNames", createHashMapFromArray vcUnitNames];
loadoutObjvc setVariable ["loadoutTypes", vcloadoutTypes];

loadoutObjvc setVariable ["LATChance", vcLATChance];
loadoutObjvc setVariable ["pistolChance", vcPistolChance];
loadoutObjvc setVariable ["helmetChance", vcHelmetChance];
loadoutObjvc setVariable ["medicalmultiplier", vcMedicalMultiplier];
loadoutObjvc setVariable ["ammoMultiplier",vcAmmoMultiplier];

loadoutObjvc setVariable ["vests", vcVests];
loadoutObjvc setVariable ["medvests", vcMedVests];
loadoutObjvc setVariable ["tlvests", vcTLVests];
loadoutObjvc setVariable ["engvests", vcEngVests];
loadoutObjvc setVariable ["mgvests", vcMGVests];

loadoutObjvc setVariable ["uniforms", vcUniforms];
loadoutObjvc setVariable ["helmets", vcHelmets];
loadoutObjvc setVariable ["hats", vcHats];
loadoutObjvc setVariable ["backpacks", vcBackpacks];
loadoutObjvc setVariable ["ATbackpacks", vcATBackpacks];
loadoutObjvc setVariable ["engbackpacks", vcEngBackpacks];
loadoutObjvc setVariable ["RTObackpacks", vcRTOBackpacks];

loadoutObjvc setVariable ["SKSScope", vcSKSScopes];
loadoutObjvc setVariable ["mosinScope", vcMosinScopes];
loadoutObjvc setVariable ["mas49Scope", vcM49Scopes];
loadoutObjvc setVariable ["vz54Scope", vcVz54Scopes];

loadoutObjvc setVariable ["medical", vcBasicMedical];
loadoutObjvc setVariable ["advmedical", vcAdvMedical];
loadoutObjvc setVariable ["grenades", vcGrenades];
loadoutObjvc setVariable ["smoke", vcSmoke];
loadoutObjvc setVariable ["colouredSmoke", vcColouredSmoke];
loadoutObjvc setVariable ["explosives", vcExplosives];
loadoutObjvc setVariable ["AT", vcAT];
loadoutObjvc setVariable ["ATAmmo", vcATAmmo];
loadoutObjvc setVariable ["AA", vcAA];
loadoutObjvc setVariable ["LAT", vcLAT];

loadoutObjvc setVariable ["pistols", vcPistols];
loadoutObjvc setVariable ["TLrifles", [vcTLRifles_Soviet]];
loadoutObjvc setVariable ["rifles", [vcRifles_Soviet]];
loadoutObjvc setVariable ["GLs", [vcGLs_Soviet]];
loadoutObjvc setVariable ["MGs", [vcMGs_Soviet]];
loadoutObjvc setVariable ["snipers", [vcSnipers_Soviet]];

factionLoadoutMap set ["O_VC", loadoutObjvc];