    class B_TAF_SF_Base_F : B_TAF_Base_F {
        editorSubcategory = "TAF_SF";
    };

    class B_TAF_rifleman_SF : B_TAF_SF_Base_F {
        
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
		
        uniformClass = "usm_bdu_btisrl_tgrstp";

        linkedItems[] = {"CUP_V_CPC_lightbelt_rngr","CUP_H_Ger_M92_GG","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_CPC_lightbelt_rngr","CUP_H_Ger_M92_GG","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_M16A2"};
        respawnWeapons[] = {"CUP_arifle_M16A2"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A2","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"usm_bdu_btisrl_tgrstp",{{"FirstAidKit",2},{"SmokeShell",2,1},{"Chemlight_yellow",2,1},{"SmokeShellPurple",1,1},{"CUP_30Rnd_556x45_Stanag",1,30}}},{"CUP_V_CPC_lightbelt_rngr",{{"CUP_HandGrenade_M67",3,1},{"CUP_30Rnd_556x45_Stanag",7,30}}},{},"CUP_H_Ger_M92_GG","usm_kneepads_blk",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_grenadier_sf : B_TAF_SF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";

        uniformClass = "usm_bdu_srh_tgrstp";

        linkedItems[] = {"CUP_V_JPC_weaponsbelt_rngr","CUP_H_Ger_M92","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_JPC_weaponsbelt_rngr","CUP_H_Ger_M92","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_M16A2_GL"};
        respawnWeapons[] = {"CUP_arifle_M16A2_GL"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203"};

        backpack = "CUP_B_USMC_AssaultPack";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A2_GL","","","",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_1Rnd_HE_M203",1},""},{},{},{"usm_bdu_srh_tgrstp",{{"FirstAidKit",2},{"SmokeShell",1,1}}},{"CUP_V_JPC_weaponsbelt_rngr",{{"CUP_HandGrenade_M67",2,1},{"CUP_1Rnd_HE_M203",6,1},{"CUP_30Rnd_556x45_Stanag",4,30},{"SmokeShell",1,1}}},{"CUP_B_USMC_AssaultPack",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_1Rnd_HE_M203",6,1},{"1Rnd_Smoke_Grenade_shell",2,1}}},"CUP_H_Ger_M92","CUP_G_ESS_BLK",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_TL_SF : B_TAF_SF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
		icon = "iconManLeader";

        uniformClass = "usm_bdu_btisrl_tgrstp";

        linkedItems[] = {"CUP_V_JPC_tlbelt_rngr","CUP_H_Ger_M92_GG","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7_Hide"};
        respawnlinkedItems[] = {"CUP_V_JPC_tlbelt_rngr","CUP_H_Ger_M92_GG","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7_Hide"};

        weapons[] = {"CUP_arifle_M4A1_BUIS_GL","CUP_hgun_Glock17","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M4A1_BUIS_GL","CUP_hgun_Glock17","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_17Rnd_9x19_glock17"};

        backpack = "CUP_B_USMC_AssaultPack";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_BUIS_GL","","","CUP_optic_ACOG2",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_1Rnd_HE_M203",1},""},{},{"CUP_hgun_Glock17","","","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"usm_bdu_btisrl_tgrstp",{{"FirstAidKit",2},{"SmokeShell",1,1},{"Chemlight_yellow",2,1},{"CUP_30Rnd_556x45_Stanag",2,30}}},{"CUP_V_JPC_tlbelt_rngr",{{"CUP_HandGrenade_M67",2,1},{"CUP_1Rnd_HE_M203",5,1},{"CUP_30Rnd_556x45_Stanag",5,30},{"SmokeShell",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"CUP_17Rnd_9x19_glock17",1,17}}},{"CUP_B_USMC_AssaultPack",{{"CUP_30Rnd_556x45_Stanag",3,30},{"CUP_1Rnd_HE_M203",3,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"UGL_FlareWhite_F",2,1},{"1Rnd_SmokeRed_Grenade_shell",2,1},{"1Rnd_SmokePurple_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1},{"CUP_17Rnd_9x19_glock17",2,17}}},"CUP_H_Ger_M92_GG","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7_Hide"}};

    };

    class B_TAF_autorifleman_SF : B_TAF_SF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
		icon = "iconManMG";

        uniformClass = "usm_bdu_bnu_tgrstp";

        linkedItems[] = {"CUP_V_JPC_lightbelt_rngr","CUP_H_Ger_M92_GG_CF","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_JPC_lightbelt_rngr","CUP_H_Ger_M92_GG_CF","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_minimi_railed","CUP_hgun_Glock17_blk"};
        respawnWeapons[] = {"CUP_lmg_minimi_railed","CUP_hgun_Glock17_blk"};

        magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_17Rnd_9x19_glock17","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_17Rnd_9x19_glock17","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_17Rnd_9x19_glock17"};

        backpack = "CUP_B_USMC_AssaultPack";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_minimi_railed","","","CUP_optic_ElcanM145",{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",200},{},""},{},{"CUP_hgun_Glock17_blk","","","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"usm_bdu_bnu_tgrstp",{{"FirstAidKit",2},{"SmokeShell",1,1}}},{"CUP_V_JPC_lightbelt_rngr",{{"CUP_200Rnd_TE1_Red_Tracer_556x45_M249_Pouch",2,200},{"CUP_HandGrenade_M67",1,1},{"SmokeShell",1,1},{"CUP_17Rnd_9x19_glock17",1,17}}},{"CUP_B_USMC_AssaultPack",{{"CUP_200Rnd_TE1_Red_Tracer_556x45_M249_Pouch",2,200}}},"CUP_H_Ger_M92_GG_CF","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_rifleman2_sf : B_TAF_SF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (M4)";

        uniformClass = "usm_bdu_btisrl_tgrstp";

        linkedItems[] = {"CUP_V_JPC_Fastbelt_rngr","CUP_H_Ger_M92_GG","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_JPC_Fastbelt_rngr","CUP_H_Ger_M92_GG","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_M4A3_black"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_black","","CUP_acc_Flashlight","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"usm_bdu_btisrl_tgrstp",{{"FirstAidKit",2},{"SmokeShell",2,1},{"Chemlight_yellow",2,1},{"CUP_30Rnd_556x45_Stanag",1,30}}},{"CUP_V_JPC_Fastbelt_rngr",{{"CUP_HandGrenade_M67",3,1},{"CUP_30Rnd_556x45_Stanag",7,30}}},{},"CUP_H_Ger_M92_GG","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_rifleman_at_sf : B_TAF_SF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "AT Rifleman";
		icon = "iconManAT";

        uniformClass = "usm_bdu_srh_tgrstp";

        linkedItems[] = {"CUP_V_JPC_Fastbelt_rngr","CUP_H_Ger_M92_GG","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_JPC_Fastbelt_rngr","CUP_H_Ger_M92_GG","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_M16A2","CUP_launch_RPG7V"};
        respawnWeapons[] = {"CUP_arifle_M16A2","CUP_launch_RPG7V"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_PG7V_M","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_PG7V_M","CUP_30Rnd_556x45_Stanag"};

        backpack = "B_Kitbag_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A2","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_RPG7V","","","CUP_optic_PGO7V2",{"CUP_PG7V_M",1},{},""},{},{"usm_bdu_srh_tgrstp",{{"FirstAidKit",2},{"SmokeShell",1,1},{"Chemlight_yellow",2,1},{"CUP_30Rnd_556x45_Stanag",2,30}}},{"CUP_V_JPC_Fastbelt_rngr",{{"CUP_HandGrenade_M67",3,1},{"CUP_30Rnd_556x45_Stanag",7,30}}},{"B_Kitbag_rgr",{{"CUP_PG7VL_M",2,1},{"CUP_PG7V_M",2,1}}},"CUP_H_Ger_M92_GG","G_Bandanna_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_marksman_sf : B_TAF_SF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";

        uniformClass = "usm_bdu_srh_tgrstp";

        linkedItems[] = {"CUP_V_CPC_Fastbelt_rngr","usm_bdu_boonie_tgrstp","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7_Hide"};
        respawnlinkedItems[] = {"CUP_V_CPC_Fastbelt_rngr","usm_bdu_boonie_tgrstp","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7_Hide"};

        weapons[] = {"CUP_srifle_m110_kac_black","CUP_hgun_Glock17","Binocular"};
        respawnWeapons[] = {"CUP_srifle_m110_kac_black","CUP_hgun_Glock17","Binocular"};

        magazines[] = {"CUP_20Rnd_762x51_B_M110","CUP_17Rnd_9x19_glock17","CUP_20Rnd_762x51_B_M110","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_B_M110","CUP_17Rnd_9x19_glock17","CUP_20Rnd_762x51_B_M110","CUP_17Rnd_9x19_glock17"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_m110_kac_black","","CUP_acc_ANPEQ_2_grey","CUP_optic_Leupold_VX3",{"CUP_20Rnd_762x51_B_M110",20},{},"CUP_bipod_VLTOR_Modpod_black"},{},{"CUP_hgun_Glock17","","","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"usm_bdu_srh_tgrstp",{{"FirstAidKit",2},{"SmokeShell",1,1},{"Chemlight_yellow",2,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"CUP_17Rnd_9x19_glock17",1,17}}},{"CUP_V_CPC_Fastbelt_rngr",{{"CUP_HandGrenade_M67",1,1},{"CUP_17Rnd_9x19_glock17",1,17},{"CUP_20Rnd_762x51_B_M110",6,20}}},{},"bdu_boonie","usm_kneepads_safariland",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7_Hide"}};

    };

    class B_TAF_medic_SF : B_TAF_SF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
		icon = "iconManMedic";
        attendant = 1;

        uniformClass = "usm_bdu_btisrl_tgrstp";

        linkedItems[] = {"CUP_V_CPC_medicalbelt_rngr","usm_bdu_cap_tgrstp","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_CPC_medicalbelt_rngr","usm_bdu_cap_tgrstp","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_M16A2"};
        respawnWeapons[] = {"CUP_arifle_M16A2"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};

        backpack = "CUP_B_USMC_AssaultPack";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A2","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"usm_bdu_btisrl_tgrstp",{{"FirstAidKit",2},{"SmokeShell",3,1},{"Chemlight_yellow",2,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1}}},{"CUP_V_CPC_medicalbelt_rngr",{{"CUP_HandGrenade_M67",2,1},{"CUP_30Rnd_556x45_Stanag",7,30}}},{"CUP_B_USMC_AssaultPack",{{"Medikit",1},{"FirstAidKit",10}}},"usm_bdu_cap_tgrstp","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_autorifleman_ass_SF : B_TAF_SF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman Assistant";
		icon = "iconMan";

        uniformClass = "usm_bdu_srl_tgrstp";

        linkedItems[] = {"CUP_V_JPC_lightbelt_rngr","CUP_H_Ger_M92_GG","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_JPC_lightbelt_rngr","CUP_H_Ger_M92_GG","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_M16A2"};
        respawnWeapons[] = {"CUP_arifle_M16A2"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};

        backpack = "CUP_B_USMC_AssaultPack";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A2","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"usm_bdu_srl_tgrstp",{{"FirstAidKit",2},{"SmokeShell",2,1}}},{"CUP_V_JPC_lightbelt_rngr",{{"CUP_HandGrenade_M67",1,1},{"SmokeShell",1,1},{"CUP_30Rnd_556x45_Stanag",7,30}}},{"CUP_B_USMC_AssaultPack",{{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch",5,200}}},"CUP_H_Ger_M92_GG","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_machinegunner_sf : B_TAF_SF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Machinegunner";

        uniformClass = "usm_bdu_bnu_tgrstp";

        linkedItems[] = {"CUP_V_JPC_lightbelt_rngr","CUP_H_Ger_M92","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_JPC_lightbelt_rngr","CUP_H_Ger_M92","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_M240_B","CUP_hgun_Glock17_blk"};
        respawnWeapons[] = {"CUP_lmg_M240_B","CUP_hgun_Glock17_blk"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17"};

        backpack = "CUP_B_USMC_AssaultPack";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_M240_B","","","CUP_optic_ElcanM145",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",100},{},""},{},{"CUP_hgun_Glock17_blk","","","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"usm_bdu_bnu_tgrstp",{{"FirstAidKit",2},{"SmokeShell",1,1}}},{"CUP_V_JPC_lightbelt_rngr",{{"CUP_HandGrenade_M67",1,1},{"SmokeShell",1,1},{"CUP_17Rnd_9x19_glock17",2,17},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1,100},{"SmokeShellPurple",1,1}}},{"CUP_B_USMC_AssaultPack",{{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",3,100}}},"CUP_H_Ger_M92","usm_gigloves",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_machinegunner_ass_sf : B_TAF_SF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Machinegunner Assistant";

        uniformClass = "usm_bdu_srl_tgrstp";

        linkedItems[] = {"CUP_V_JPC_Fastbelt_rngr","CUP_H_Ger_M92","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_JPC_Fastbelt_rngr","CUP_H_Ger_M92","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_M16A2","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M16A2","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};

        backpack = "CUP_B_USMC_AssaultPack";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A2","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"usm_bdu_srl_tgrstp",{{"FirstAidKit",2},{"SmokeShell",1,1}}},{"CUP_V_JPC_Fastbelt_rngr",{{"CUP_HandGrenade_M67",1,1},{"SmokeShell",1,1},{"SmokeShellPurple",1,1},{"CUP_30Rnd_556x45_Stanag",7,30}}},{"CUP_B_USMC_AssaultPack",{{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",4,100}}},"CUP_H_Ger_M92","G_Spectacles",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_at_ass_SF : B_TAF_SF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "AT Assistant";

        uniformClass = "usm_bdu_srh_tgrstp";

        linkedItems[] = {"CUP_V_JPC_Fastbelt_rngr","CUP_H_Ger_M92_GG_CF","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_JPC_Fastbelt_rngr","CUP_H_Ger_M92_GG_CF","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_M16A2"};
        respawnWeapons[] = {"CUP_arifle_M16A2"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};

        backpack = "B_Kitbag_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A2","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"usm_bdu_srh_tgrstp",{{"FirstAidKit",2},{"SmokeShell",1,1},{"Chemlight_yellow",2,1},{"SmokeShellPurple",1,1},{"CUP_30Rnd_556x45_Stanag",1,30}}},{"CUP_V_JPC_Fastbelt_rngr",{{"CUP_HandGrenade_M67",3,1},{"CUP_30Rnd_556x45_Stanag",7,30}}},{"B_Kitbag_rgr",{{"CUP_PG7VL_M",2,1},{"CUP_PG7VM_M",2,1}}},"CUP_H_Ger_M92_GG_CF","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_SL_SF : B_TAF_SF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";

        uniformClass = "usm_bdu_btisrl_tgrstp";

        linkedItems[] = {"CUP_V_JPC_communicationsbelt_rngr","CUP_H_Ger_M92_GG","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7_Hide"};
        respawnlinkedItems[] = {"CUP_V_JPC_communicationsbelt_rngr","CUP_H_Ger_M92_GG","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7_Hide"};

        weapons[] = {"CUP_arifle_M4A3_black","CUP_hgun_Glock17","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black","CUP_hgun_Glock17","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_black","","","CUP_optic_ACOG2",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_Glock17","","","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"usm_bdu_btisrl_tgrstp",{{"FirstAidKit",2},{"SmokeShell",1,1},{"Chemlight_yellow",2,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"CUP_17Rnd_9x19_glock17",1,17}}},{"CUP_V_JPC_communicationsbelt_rngr",{{"CUP_HandGrenade_M67",1,1},{"CUP_30Rnd_556x45_Stanag",7,30},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"SmokeShell",1,1}}},{},"CUP_H_Ger_M92_GG","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7_Hide"}};

    };

    class B_TAF_survivor_SF : B_TAF_SF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";

        uniformClass = "usm_bdu_bnu_tgrstp";

        linkedItems[] = {"ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"usm_bdu_bnu_tgrstp",{{"FirstAidKit",1},{"Chemlight_yellow",2,1}}},{},{},"","usm_kneepads_blk",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
    };
	
	    class B_TAF_officer_sf : B_TAF_SF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
		icon = "iconManOfficer";

        uniformClass = "usm_bdu_bti_tgrstp";

        linkedItems[] = {"usm_vest_lbe_p","CUP_H_SLA_BeretRed","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"usm_vest_lbe_p","CUP_H_SLA_BeretRed","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_hgun_Glock17","Binocular"};
        respawnWeapons[] = {"CUP_hgun_Glock17","Binocular"};

        magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};

        ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_Glock17","","","",{"CUP_17Rnd_9x19_glock17",8},{},""},{"usm_bdu_bti_tgrstp",{{"FirstAidKit",2},{"SmokeShell",1,1},{"Chemlight_yellow",2,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1}}},{"usm_vest_lbe_p",{{"CUP_17Rnd_9x19_glock17",2,8}}},{},"CUP_H_SLA_BeretRed","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };