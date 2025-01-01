class B_TAF_Des_Base_F : B_TAF_Base_F {
        editorSubcategory = "TAF_Des";
		uniformsList = {"usm_bdu_des", "usm_bdu_btisrl_des", "usm_bdu_bti_des", "usm_bdu_srh_des", "usm_bdu_srl_des"};

		 class EventHandlers : EventHandlers {

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; _uniforms = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'uniformsList'); _this forceAddUniform (selectRandom _uniforms);}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };
    };
