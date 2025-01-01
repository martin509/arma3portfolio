    class WEST {

         class B_TAF {
            name = "Tagheeri Armed Forces";

            class Infantry {
                name = "Infantry";

                class b_taf_rifle_squad {
                    name = "Rifle Section";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_TeamLeader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_TAF_RTO";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_FAL";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_Autorifleman";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_autorifleman_ass";
                    };
                    class Unit5 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at";
                    };
                    class Unit6 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at_ass";
                    };
                    class Unit7 {
                        position[] = {-10,-20,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_TAF_medic";
                    };
                };

                class b_taf_at_team {
                    name = "Fire Team (AT)";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_rifleman_FAL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at_ass";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman";
                    };
                };

                class b_taf_mg_team {
                    name = "Fire Team (MG)";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_rifleman_FAL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_TAF_machinegunner";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_machinegunner_ass";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman";
                    };
                };

                class b_taf_infantry_sentry {
                    name = "Sentry";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_rifleman_FAL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman";
                    };
                };

                class b_taf_mg_squad {
                    name = "Weapons Section";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_TeamLeader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_RTO";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_FAL";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_machinegunner";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_machinegunner_ass";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_machinegunner";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_machinegunner_ass";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_marksman";
                    };
                };

                class b_taf_infantry_sapper_team {
                    name = "Engineer Team";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_TeamLeader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_engineer";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_engineer";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_FAL";
                    };
                };

                class b_taf_infantry_fire_team {
                    name = "Fire Team";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_rifleman_FAL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_TAF_Autorifleman";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_autorifleman_ass";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman";
                    };
                };

                class b_taf_infantry_sniper_team {
                    name = "Sniper Team";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_marksman";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_FAL";
                    };
                };

            };

            class SpecOps {
                name = "Men (Tiger Battalion)";

                class b_taf_sf_rifle_squad {
                    name = "Rifle Section";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_SL_SF";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_TAF_TL_SF";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_autorifleman_SF";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_autorifleman_ass_SF";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at_sf";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_marksman_sf";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_SF";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_medic_SF";
                    };
                };

                class b_taf_sf_sniper_team {
                    name = "Sniper Team";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_marksman_sf";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_SF";
                    };
                };

                class b_taf_sf_fire_team {
                    name = "Fire Team";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_TL_SF";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_autorifleman_SF";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_autorifleman_ass_SF";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at_sf";
                    };
                };

                class b_taf_sf_weapons_squad {
                    name = "Weapons Section";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_SL_SF";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_machinegunner_sf";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_machinegunner_ass_sf";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_machinegunner_sf";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_machinegunner_ass_sf";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_grenadier_sf";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_marksman_sf";
                    };
                };

                class b_taf_sf_at_team {
                    name = "AT Team";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_TL_SF";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at_sf";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_at_ass_SF";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman2_sf";
                    };
                };

                class b_taf_sf_mg_team {
                    name = "MG Team";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_TL_SF";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_machinegunner_sf";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_machinegunner_ass_sf";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman2_sf";
                    };
                };

            };

            class Motorized {
                name = "Motorized";

                class b_taf_motorized_patrol {
                    name = "Motorized Patrol";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TAF_LR_Transport";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_Autorifleman";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_medic";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_FAL";
                    };
                };

                class b_taf_motorized_squad {
                    name = "Motorized Reinforcements";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_TeamLeader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_RTO";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_FAL";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_Autorifleman";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_autorifleman_ass";
                    };
                    class Unit5 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at";
                    };
                    class Unit6 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_marksman";
                    };
                    class Unit7 {
                        position[] = {-10,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_medic";
                    };
                    class Unit8 {
                        position[] = {10,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TAF_Ural";
                    };
                };

                class b_taf_motorized_assault_group {
                    name = "Assault Group";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TAF_LR_MG";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_TeamLeader";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_FAL";
                    };
                    class Unit3 {
                        position[] = {10,-14,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TAF_LR_Transport";
                    };
                    class Unit4 {
                        position[] = {-10,-14,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at";
                    };
                    class Unit5 {
                        position[] = {15,-19,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at_ass";
                    };
                    class Unit6 {
                        position[] = {-15,-19,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_machinegunner";
                    };
                    class Unit7 {
                        position[] = {20,-24,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_medic";
                    };
                };

                class b_taf_motorized_assault_group_2 {
                    name = "Assault Group (Hilux)";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TAF_Hilux_DSHKM";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_TeamLeader";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TAF_Hilux_Unarmed";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_machinegunner";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at_ass";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_medic";
                    };
                };

                class b_taf_motorized_squad_2 {
                    name = "Motorized Reinforcements (Hilux)";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_TeamLeader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_RTO";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_Autorifleman";
                    };
                    class Unit3 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_autorifleman_ass";
                    };
                    class Unit4 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at_ass";
                    };
                    class Unit6 {
                        position[] = {-10,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_medic";
                    };
                    class Unit7 {
                        position[] = {10,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TAF_Hilux_Unarmed";
                    };
                    class Unit8 {
                        position[] = {-5,1,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TAF_Hilux_Unarmed";
                    };
                };

                class b_taf_motorized_patrol_2 {
                    name = "Motorized Patrol (Hilux)";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TAF_Hilux_Unarmed";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_TeamLeader";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_Autorifleman";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_FAL";
                    };
                };

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support Infantry";

            };

            class Mechanized {
                name = "Mechanized";

                class b_taf_mechanized_squad {
                    name = "Mechanized Squad";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_TeamLeader";
                    };
                    class Unit1 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_FAL";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_Autorifleman";
                    };
                    class Unit3 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_autorifleman_ass";
                    };
                    class Unit4 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_medic";
                    };
                    class Unit6 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TAF_BTR60";
                    };
                };

                class b_taf_mechanized_scout_group {
                    name = "Scout Group";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TAF_BRDM2";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_FAL";
                    };
                };

            };

            class Armored {
                name = "Armored";

                class b_taf_armored_section {
                    name = "T-55 Section";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TAF_T55";
                    };
                    class Unit1 {
                        position[] = {9,-16,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TAF_T55";
                    };
                };

                class b_taf_t55_assault {
                    name = "T-55 Assault Section";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TAF_T55";
                    };
                    class Unit1 {
                        position[] = {9,-12,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TAF_BTR60";
                    };
                    class Unit2 {
                        position[] = {-9,-12,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_TeamLeader";
                    };
                    class Unit3 {
                        position[] = {14,-17,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_FAL";
                    };
                    class Unit4 {
                        position[] = {-14,-17,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_Autorifleman";
                    };
                    class Unit5 {
                        position[] = {19,-22,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_autorifleman_ass";
                    };
                    class Unit6 {
                        position[] = {-19,-22,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at";
                    };
                    class Unit7 {
                        position[] = {24,-27,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_medic";
                    };
                };

                

            };

            class Artillery {
                name = "Artillery";

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

            };

            class motorized_sf {
                name = "Motorized (Tiger Battalion)";

                class b_taf_sf_motor_squad {
                    name = "Motorized Squad";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_SL_SF";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_autorifleman_SF";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_autorifleman_ass_SF";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_medic_SF";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_TL_SF";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at_sf";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_at_ass_SF";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman2_sf";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TAF_RG31E";
                    };
                };

                class b_taf_sf_motor_team {
                    name = "Motorized Team";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_TL_SF";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_autorifleman_SF";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_autorifleman_ass_SF";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at_sf";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at_ass";
                    };
                    class Unit5 {
                        position[] = {15,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TAF_RG31";
                    };
                };

            };


        };
		
		class B_TAF_Police {
			name = "Tagheeri National Police";
			
			class Infantry {
				name = "Infantry";
                class b_taf_infantry_police_patrol {
                    name = "Police Patrol";
                    side = 1;
                    faction = "B_TAF_Police";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_TAF_policeman";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_policeman_light";
                    };
                };
				
				class b_taf_infantry_police_response {
                    name = "Response Team";
                    side = 1;
                    faction = "B_TAF_Police";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_TAF_policeman";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_policeman";
                    };
					class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_policeman";
                    };
					class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_policeman";
                    };
                };
			};
			
			class Motorized {
				name = "Motorized Infantry";
                class b_taf_motorized_police {
                    name = "Motorized Response Team";
                    side = 1;
                    faction = "B_TAF_Police";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

					class Unit0 {
                        position[] = {5,5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TAF_Hilux_Police";
                    };
                    class Unit1 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_TAF_policeman";
                    };
                    class Unit2 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_policeman";
                    };
                    class Unit3 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_policeman";
                    };
                };
				
				class b_taf_motorized_patrol {
                    name = "Motorized Police Patrol";
                    side = 1;
                    faction = "B_TAF_Police";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

					class Unit0 {
                        position[] = {5,5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TAF_Hilux_Police";
                    };
                    class Unit1 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_TAF_policeman_light";
                    };
                };
				
			};
			
		};

    };