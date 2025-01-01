    class Man;
	class CAManBase: Man {};
	class SoldierWB: CAManBase {};
    
    class B_Soldier_base_F : SoldierWB {
        class EventHandlers;
    };

    class B_TAF_Base_F : B_Soldier_base_F {
        author = "Martin509";
        scope = 0;
        scopeCurator = 0;
        side = 1;
        faction = "B_TAF";
        icon = "iconMan";

        nakedUniform = "U_BasicBody";
        identityTypes[] = {"Head_African","CUP_D_LANGUAGE_TK","NoGlasses"};

        editorPreview = "\martin_taf\soldier_preview.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };
        ALiVE_orbatCreator_owned = 1;
    };
    //class TAF_SquadLeader_OCimport_01 : CUP_O_TK_INS_Soldier { scope = 0; class EventHandlers; };
    //class TAF_SquadLeader_OCimport_02 : TAF_SquadLeader_OCimport_01 { class EventHandlers; };

    class B_TAF_TeamLeader : B_TAF_Base_F {
        
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
		icon = "iconManLeader";

        uniformClass = "usm_bdu_portliz";

        linkedItems[] = {"CUP_V_B_RRV_Officer","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_B_RRV_Officer","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_Galil_556_black","Binocular"};
        respawnWeapons[] = {"CUP_arifle_Galil_556_black","Binocular"};

        magazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag"};
        respawnMagazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Galil_556_black","","","",{"CUP_35Rnd_556x45_Galil_Mag",35},{},""},{},{},{"usm_bdu_portliz",{{"FirstAidKit",2},{"SmokeShellOrange",2,1},{"SmokeShell",1,1},{"Chemlight_yellow",2,1}}},{"CUP_V_B_RRV_Officer",{{"CUP_35Rnd_556x45_Galil_Mag",6,35},{"CUP_HandGrenade_M67",3,1}}},{},"CUP_H_RUS_SSH68_olive", "",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_rifleman_FAL : B_TAF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (FAL)";
		icon = "iconMan";

        uniformClass = "usm_bdu_portliz";

        linkedItems[] = {"CUP_V_B_RRV_Scout","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_B_RRV_Scout","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_FNFAL5060"};
        respawnWeapons[] = {"CUP_arifle_FNFAL5060"};

        magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_FNFAL5060","","","",{"CUP_20Rnd_762x51_FNFAL_M",20},{},""},{},{},{"usm_bdu_portliz",{{"FirstAidKit",2},{"SmokeShell",1,1},{"Chemlight_yellow",2,1}}},{"CUP_V_B_RRV_Scout",{{"CUP_20Rnd_762x51_FNFAL_M",6,20},{"CUP_HandGrenade_M67",2,1}}},{},"CUP_H_RUS_SSH68_olive","",{"","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_machinegunner : B_TAF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Machinegunner";
		icon = "iconManMG";

        uniformClass = "usm_bdu_srh_portliz";

        linkedItems[] = {"CUP_V_B_RRV_MG_GRN","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_B_RRV_MG_GRN","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_FNMAG","CUP_hgun_TT"};
        respawnWeapons[] = {"CUP_lmg_FNMAG","CUP_hgun_TT"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_8Rnd_762x25_TT","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_8Rnd_762x25_TT"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_8Rnd_762x25_TT","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_8Rnd_762x25_TT"};

        backpack = "CUP_B_AlicePack_OD";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_FNMAG","","","",{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",100},{},""},{},{"CUP_hgun_TT","","","",{"CUP_8Rnd_762x25_TT",8},{},""},{"usm_bdu_portliz",{{"FirstAidKit",2},{"SmokeShell",1,1},{"Chemlight_yellow",2,1},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_RRV_MG_GRN",{{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",2,100},{"CUP_8Rnd_762x25_TT",2,8}}},{"CUP_B_AlicePack_OD",{{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",4,100}}},"CUP_H_RUS_SSH68_olive","",{"","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_Autorifleman : B_TAF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
		icon = "iconManMG";
        
        uniformClass = "usm_bdu_portliz";

        linkedItems[] = {"CUP_V_B_RRV_MG_GRN","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_B_RRV_MG_GRN","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_minimi"};
        respawnWeapons[] = {"CUP_lmg_minimi"};

        magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
        respawnMagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_minimi","","","",{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",200},{},""},{},{},{"usm_bdu_portliz",{{"FirstAidKit",2},{"SmokeShell",1,1},{"Chemlight_yellow",2,1},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_RRV_MG_GRN",{{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",3,200}}},{},"CUP_H_RUS_SSH68_olive","",{"","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };


    class B_TAF_medic : B_TAF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
		icon = "iconManMedic";
        attendant = 1;

        identityTypes[] = {"Head_African","CUP_D_LANGUAGE_TK","NoGlasses"};

        uniformClass = "usm_bdu_srl_portliz";

        linkedItems[] = {"CUP_V_B_RRV_Medic","usm_bdu_cap_portliz","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_B_RRV_Medic","usm_bdu_cap_portliz","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_Galil_SAR_black"};
        respawnWeapons[] = {"CUP_arifle_Galil_SAR_black"};

        magazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag"};
        respawnMagazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag"};

        backpack = "CUP_B_AlicePack_OD";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Galil_SAR_black","","","",{"CUP_35Rnd_556x45_Galil_Mag",35},{},""},{},{},{"usm_bdu_srl_portliz",{{"FirstAidKit",2},{"SmokeShell",1,1},{"Chemlight_yellow",2,1},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_RRV_Medic",{{"CUP_35Rnd_556x45_Galil_Mag",6,35},{"SmokeShell",1,1},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1}}},{"CUP_B_AlicePack_OD",{{"Medikit",1},{"FirstAidKit",8}}},"usm_bdu_cap_portliz","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
    };

    class B_TAF_engineer : B_TAF_Base_F {

        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
		icon = "iconManEngineer";

        engineer = 1;
        canDeactivateMines = 1;

        uniformClass = "usm_bdu_srl_portliz";

        linkedItems[] = {"CUP_V_B_RRV_Scout2","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_B_RRV_Scout2","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_Galil_556_black"};
        respawnWeapons[] = {"CUP_arifle_Galil_556_black"};

        magazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag"};
        respawnMagazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag"};

        backpack = "CUP_B_AlicePack_OD";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Galil_556_black","","","",{"CUP_35Rnd_556x45_Galil_Mag",35},{},""},{},{},{"usm_bdu_srl_portliz",{{"FirstAidKit",2},{"SmokeShell",1,1},{"Chemlight_yellow",2,1},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_RRV_Scout2",{{"CUP_35Rnd_556x45_Galil_Mag",6,35},{"CUP_HandGrenade_M67",2,1}}},{"CUP_B_AlicePack_OD",{{"ToolKit",1},{"MineDetector",1},{"CUP_PipeBomb_M",2,1}}},"CUP_H_RUS_SSH68_olive","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_marksman : B_TAF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
		

        uniformClass = "usm_bdu_portliz";

        linkedItems[] = {"CUP_V_B_RRV_Scout2","H_Booniehat_oli","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_B_RRV_Scout2","H_Booniehat_oli","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_Galil_black","Binocular"};
        respawnWeapons[] = {"CUP_arifle_Galil_black","Binocular"};

        magazines[] = {"CUP_25Rnd_762x51_Galil_Mag","CUP_25Rnd_762x51_Galil_Mag"};
        respawnMagazines[] = {"CUP_25Rnd_762x51_Galil_Mag","CUP_25Rnd_762x51_Galil_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Galil_black","","","CUP_optic_SB_11_4x20_PM",{"CUP_25Rnd_762x51_Galil_Mag",25},{},""},{},{},{"usm_bdu_portliz",{{"FirstAidKit",2},{"SmokeShell",2,1},{"Chemlight_yellow",2,1}}},{"CUP_V_B_RRV_Scout2",{{"CUP_HandGrenade_M67",2,1},{"CUP_25Rnd_762x51_Galil_Mag",7,25}}},{},"H_Booniehat_oli","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_rifleman : B_TAF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
		icon = "iconMan";

        uniformClass = "usm_bdu_portliz";

        linkedItems[] = {"CUP_V_B_RRV_Scout","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_B_RRV_Scout","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_Galil_556_black"};
        respawnWeapons[] = {"CUP_arifle_Galil_556_black"};

        magazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag"};
        respawnMagazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Galil_556_black","","","",{"CUP_35Rnd_556x45_Galil_Mag",35},{},""},{},{},{"usm_bdu_portliz",{{"FirstAidKit",2},{"SmokeShell",1,1},{"Chemlight_yellow",2,1}}},{"CUP_V_B_RRV_Scout",{{"CUP_HandGrenade_M67",3,1},{"CUP_35Rnd_556x45_Galil_Mag",6,35}}},{},"CUP_H_RUS_SSH68_olive","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_autorifleman_ass : B_TAF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman Assistant";
		icon = "iconMan";

        uniformClass = "usm_bdu_portliz";

        linkedItems[] = {"CUP_V_B_RRV_Scout","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_B_RRV_Scout","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_Galil_556_black"};
        respawnWeapons[] = {"CUP_arifle_Galil_556_black"};

        magazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag"};
        respawnMagazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag"};

        backpack = "CUP_B_AlicePack_OD";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Galil_556_black","","","",{"CUP_35Rnd_556x45_Galil_Mag",35},{},""},{},{},{"usm_bdu_portliz",{{"FirstAidKit",2},{"SmokeShell",1,1},{"Chemlight_yellow",2,1}}},{"CUP_V_B_RRV_Scout",{{"CUP_HandGrenade_M67",3,1},{"CUP_35Rnd_556x45_Galil_Mag",6,35}}},{"CUP_B_AlicePack_OD",{{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",4,200}}},"CUP_H_RUS_SSH68_olive","G_Bandanna_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_machinegunner_ass : B_TAF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Machinegunner Assistant";
		icon = "iconMan";

        uniformClass = "usm_bdu_portliz";

        linkedItems[] = {"CUP_V_B_RRV_Scout","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_B_RRV_Scout","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_Galil_556_black"};
        respawnWeapons[] = {"CUP_arifle_Galil_556_black"};

        magazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag"};
        respawnMagazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag"};

        backpack = "CUP_B_AlicePack_OD";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Galil_556_black","","","",{"CUP_35Rnd_556x45_Galil_Mag",35},{},""},{},{},{"usm_bdu_portliz",{{"FirstAidKit",2},{"SmokeShell",1,1},{"Chemlight_yellow",2,1}}},{"CUP_V_B_RRV_Scout",{{"CUP_HandGrenade_M67",3,1},{"CUP_35Rnd_556x45_Galil_Mag",6,35}}},{"CUP_B_AlicePack_OD",{{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",4,100}}},"CUP_H_RUS_SSH68_olive","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_RTO : B_TAF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
		icon = "iconMan";

        uniformClass = "usm_bdu_btisrl_portliz";

        linkedItems[] = {"CUP_V_B_RRV_Scout","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_B_RRV_Scout","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_Galil_556_black"};
        respawnWeapons[] = {"CUP_arifle_Galil_556_black"};

        magazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag"};
        respawnMagazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag"};

        backpack = "usm_pack_st128_prc77";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Galil_556_black","","","",{"CUP_35Rnd_556x45_Galil_Mag",35},{},""},{},{},{"usm_bdu_btisrl_portliz",{{"FirstAidKit",2},{"SmokeShell",1,1},{"Chemlight_yellow",2,1}}},{"CUP_V_B_RRV_Scout",{{"CUP_HandGrenade_M67",3,1},{"CUP_35Rnd_556x45_Galil_Mag",6,35}}},{"usm_pack_st128_prc77",{}},"CUP_H_RUS_SSH68_olive","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };


    class B_TAF_vehcrew : B_TAF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Vehicle Crewman";

        uniformClass = "usm_bdu_bti_odg";

        linkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_2","CUP_H_RUS_TSH_4_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_I_RACS_Carrier_Rig_2","CUP_H_RUS_TSH_4_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_Galil_SAR_black","CUP_hgun_Makarov"};
        respawnWeapons[] = {"CUP_arifle_Galil_SAR_black","CUP_hgun_Makarov"};

        magazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_8Rnd_9x18_Makarov_M","CUP_35Rnd_556x45_Galil_Mag","CUP_8Rnd_9x18_Makarov_M"};
        respawnMagazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_8Rnd_9x18_Makarov_M","CUP_35Rnd_556x45_Galil_Mag","CUP_8Rnd_9x18_Makarov_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Galil_SAR_black","","","",{"CUP_35Rnd_556x45_Galil_Mag",35},{},""},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"usm_bdu_bti_odg",{{"FirstAidKit",2},{"Chemlight_yellow",2,1},{"CUP_8Rnd_9x18_Makarov_M",2,8},{"SmokeShellOrange",1,1},{"SmokeShellPurple",1,1}}},{"CUP_V_I_RACS_Carrier_Rig_2",{{"CUP_35Rnd_556x45_Galil_Mag",1,35}}},{},"CUP_H_RUS_TSH_4_Brown","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_pilot : B_TAF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";

        uniformClass = "usm_bdu_srl_odg";

        linkedItems[] = {"CUP_V_B_Interceptor_Base_Olive","CUP_H_SPH4_khaki","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_B_Interceptor_Base_Olive","CUP_H_SPH4_khaki","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_Galil_SAR_black","CUP_hgun_Makarov"};
        respawnWeapons[] = {"CUP_arifle_Galil_SAR_black","CUP_hgun_Makarov"};

        magazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_8Rnd_9x18_Makarov_M","CUP_35Rnd_556x45_Galil_Mag","CUP_8Rnd_9x18_Makarov_M"};
        respawnMagazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_8Rnd_9x18_Makarov_M","CUP_35Rnd_556x45_Galil_Mag","CUP_8Rnd_9x18_Makarov_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Galil_SAR_black","","","",{"CUP_35Rnd_556x45_Galil_Mag",35},{},""},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"usm_bdu_srl_odg",{{"FirstAidKit",2},{"Chemlight_yellow",2,1},{"SmokeShellOrange",1,1},{"SmokeShellPurple",1,1},{"SmokeShell",1,1}}},{"CUP_V_B_Interceptor_Base_Olive",{{"CUP_8Rnd_9x18_Makarov_M",2,8},{"CUP_35Rnd_556x45_Galil_Mag",3,35}}},{},"CUP_H_SPH4_khaki","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    
    class B_TAF_rifleman_at : B_TAF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
		icon = "iconManAT";

        uniformClass = "usm_bdu_portliz";

        linkedItems[] = {"CUP_V_B_RRV_Scout","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_B_RRV_Scout","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_Galil_556_black","CUP_launch_RPG7V"};
        respawnWeapons[] = {"CUP_arifle_Galil_556_black","CUP_launch_RPG7V"};

        magazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_PG7V_M","CUP_35Rnd_556x45_Galil_Mag"};
        respawnMagazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_PG7V_M","CUP_35Rnd_556x45_Galil_Mag"};

        backpack = "CUP_B_AlicePack_OD";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Galil_556_black","","","",{"CUP_35Rnd_556x45_Galil_Mag",35},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"usm_bdu_portliz",{{"FirstAidKit",2},{"SmokeShell",1,1},{"Chemlight_yellow",2,1}}},{"CUP_V_B_RRV_Scout",{{"CUP_HandGrenade_M67",2,1},{"CUP_35Rnd_556x45_Galil_Mag",6,35}}},{"CUP_B_AlicePack_OD",{{"CUP_PG7V_M",2,1},{"CUP_OG7_M",4,1}}},"CUP_H_RUS_SSH68_olive","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_rifleman_at_ass : B_TAF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT Assistant)";

        uniformClass = "usm_bdu_srl_portliz";

        linkedItems[] = {"CUP_V_B_RRV_Scout","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_B_RRV_Scout","CUP_H_RUS_SSH68_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_Galil_556_black"};
        respawnWeapons[] = {"CUP_arifle_Galil_556_black"};

        magazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag"};
        respawnMagazines[] = {"CUP_35Rnd_556x45_Galil_Mag","CUP_35Rnd_556x45_Galil_Mag"};

        backpack = "CUP_B_AlicePack_OD";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Galil_556_black","","","",{"CUP_35Rnd_556x45_Galil_Mag",35},{},""},{},{},{"usm_bdu_srl_portliz",{{"FirstAidKit",2},{"SmokeShell",1,1},{"Chemlight_yellow",2,1}}},{"CUP_V_B_RRV_Scout",{{"CUP_HandGrenade_M67",2,1},{"CUP_35Rnd_556x45_Galil_Mag",6,35}}},{"CUP_B_AlicePack_OD",{{"CUP_PG7V_M",3,1},{"CUP_OG7_M",3,1}}},"CUP_H_RUS_SSH68_olive","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_survivor : B_TAF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";

        uniformClass = "usm_bdu_bnu_portliz";

        linkedItems[] = {"H_Booniehat_oli","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"H_Booniehat_oli","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"usm_bdu_bnu_portliz",{{"FirstAidKit",1},{"Chemlight_yellow",1,1}}},{},{},"H_Booniehat_oli","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class B_TAF_officer : B_TAF_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
		icon = "iconManOfficer";

        uniformClass = "usm_bdu_bti_portliz";

        linkedItems[] = {"usm_vest_lbe_p","CUP_H_SLA_BeretRed","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"usm_vest_lbe_p","CUP_H_SLA_BeretRed","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_hgun_Makarov","Binocular"};
        respawnWeapons[] = {"CUP_hgun_Makarov","Binocular"};

        magazines[] = {"CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
        respawnMagazines[] = {"CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};

        ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"usm_bdu_bti_portliz",{{"FirstAidKit",2},{"SmokeShellPurple",1,1},{"SmokeShellOrange",1,1},{"Chemlight_yellow",2,1}}},{"usm_vest_lbe_p",{{"CUP_8Rnd_9x18_Makarov_M",2,8},{"SmokeShell",1,1}}},{},"CUP_H_SLA_BeretRed","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };
	
	class B_TAF_Police_Base_F : B_TAF_Base_F{
        faction = "B_TAF_Police";
    }
    class B_TAF_policeman : B_TAF_Police_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Policeman";

        uniformClass = "usm_bdu_odg";

        linkedItems[] = {"V_TacVest_blk","usm_bdu_cap_odg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_blk","usm_bdu_cap_odg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_TYPE_56_2","CUP_hgun_Makarov"};
        respawnWeapons[] = {"CUP_arifle_TYPE_56_2","CUP_hgun_Makarov"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_762x39_AK47_bakelite_M","CUP_8Rnd_9x18_Makarov_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_8Rnd_9x18_Makarov_M","CUP_30Rnd_762x39_AK47_bakelite_M","CUP_8Rnd_9x18_Makarov_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_TYPE_56_2","","","",{"CUP_30Rnd_762x39_AK47_bakelite_M",30},{},""},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"usm_bdu_odg",{{"FirstAidKit",1},{"SmokeShell",1,1},{"Chemlight_yellow",2,1},{"CUP_8Rnd_9x18_Makarov_M",2,8}}},{"V_TacVest_blk",{{"CUP_30Rnd_762x39_AK47_bakelite_M",3,30}}},{},"usm_bdu_cap_odg","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };
	
	
    class B_TAF_policeman_light : B_TAF_Police_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Policeman (Light)";

        uniformClass = "usm_bdu_bti_odg";

        linkedItems[] = {"V_TacVest_blk","usm_bdu_cap_odg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_blk","usm_bdu_cap_odg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_hgun_Makarov"};
        respawnWeapons[] = {"CUP_hgun_Makarov"};

        magazines[] = {"CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
        respawnMagazines[] = {"CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};

        ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"usm_bdu_bti_odg",{{"FirstAidKit",1},{"SmokeShell",1,1},{"Chemlight_yellow",2,1},{"SmokeShellPurple",1,1}}},{"V_TacVest_blk",{{"CUP_8Rnd_9x18_Makarov_M",3,8}}},{},"usm_bdu_cap_odg","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };