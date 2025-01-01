	class Car;
	class Car_F: Car
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints;
			};
		};
		class ViewPilot;
		class AnimationSources;
	};
	
	class Truck_F: Car_F
	{
		class ViewPilot;
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class AnimationSources;
	};
	
	class Wheeled_APC_F: Car_F
	{
		
	};
	
	class LandVehicle;
	
	class Tank: LandVehicle
	{
		class NewTurret;
		class HitPoints;
		class Sounds;
		class Turrets
		{
			class MainTurret;
		};
		class ViewOptics;
	};
	class Tank_F: Tank {
		class Turrets {
			class MainTurret:NewTurret {
				class Turrets {
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints {
			class HitHull;
			class HitEngine;
			class HitFuel;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds : Sounds {
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	
	//air vehicles
	class CUP_B_SA330_Puma_HC1_BAF;
	class TAF_Puma: CUP_B_SA330_Puma_HC1_BAF
	{
		_generalMacro = "CUP_B_SA330_Puma_HC1_BAF";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "SA-330 Puma";
		crew = "B_TAF_pilot";
		hiddenSelections[] = {"_OFrP_330_skin01"};
		hiddenSelectionsTextures[] = {"martin_taf\sa330\330_skin00x_3COLOR.paa"};
		typicalCargo[] = {"B_TAF_pilot"};
		availableForSupportTypes[] = {"Drop", "Transport"};
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_SAR_black";
				count = "2*1";
			};
		};
		
		class TransportMagazines {
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "1*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "1*1";
			};
			
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "8*1";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "4*1";
			};
		};
	};
	
	class CUP_B_C47_USA;
	class TAF_C47: CUP_B_C47_USA
	{
		_generalMacro = "CUP_B_C47_USA";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "C-47 Skytrain";
		crew = "B_TAF_pilot";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"martin_taf\c47\c47_body_01_taf_co.paa", "martin_taf\c47\c47_body_02_taf_co.paa"};
		typicalCargo[] = {"B_TAF_pilot"};
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_SAR_black";
				count = "2*1";
			};
		};
		class TransportMagazines {
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "1*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "1*1";
			};
			
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "8*1";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "4*1";
			};
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "B_Parachute";
				count = "8*1";
			};
		};
	};
	
	class CUP_B_L39_CZ_GREY;
	class ION_L39: CUP_B_L39_CZ_GREY
	{
		_generalMacro = "CUP_B_L39_CZ_GREY";
		scope = 2;
		side = 2;
		faction = "CUP_I_PMC_ION";
		displayName = "L-39ZA (Grey)";
		crew = "CUP_I_PMC_pilot";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"martin_taf\l39\l-39_body_taf_co.paa", "martin_taf\l39\l-39_body_1_taf_co.paa"};
		typicalCargo[] = {"CUP_I_PMC_pilot"};
	};
	

	//Soviet vehicles 
	class CUP_BRDM2_Base : Wheeled_APC_F {
		
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				
			};
		};
	};
	
	class CUP_BRDM2_HQ_Base : CUP_BRDM2_Base {
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				
			};
		};
	};
	
	
	class TAF_BRDM2: CUP_BRDM2_Base
	{
		_generalMacro = "CUP_BRDM2_Base";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "BRDM-2";
		crew = "B_TAF_vehcrew";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"martin_taf\brdm2\taf_brdm2_01_co.paa"};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				weapons[]=
				{
					"TAF_Vhmg_KPVT_veh",
					"CUP_Vhmg_PKT_veh_Noeject"
				};
				
				magazines[]=
				{
					"TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_M",
					"TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_M",
					"TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_M",
					"TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_M",
					"TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_M",
					"TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_M",
					"TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_M",
					"TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_M",
					"TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_MDZ_M",
					"TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_MDZ_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M"
				};
			};
		};
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_556_black";
				count = "2*1";
			};
		};
		
		class TransportMagazines {
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "8*2";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "1*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "1*1";
			};
		};
		class TransportItems {
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
			
			class _xx_FAK {
				name = "FirstAidKit";
				count = "8*1";
			};
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "CUP_B_AlicePack_Khaki";
				count = "1*1";
			};
		};
	};
	
	class CUP_BRDM2_ATGM_Base;
	class TAF_BRDM2_ATGM: CUP_BRDM2_ATGM_Base
	{
		_generalMacro = "CUP_BRDM2_ATGM_Base";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "BRDM-2 (ATGM)";
		crew = "B_TAF_vehcrew";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"martin_taf\brdm2\taf_brdm2_atgm_01_co.paa"};
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_556_black";
				count = "2*1";
			};
		};
		
		class TransportMagazines {
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "8*2";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "1*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "1*1";
			};
		};
		class TransportItems {
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
			
			class _xx_FAK {
				name = "FirstAidKit";
				count = "8*1";
			};
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "CUP_B_AlicePack_Khaki";
				count = "1*1";
			};
		};
	};
	
	class TAF_BRDM2_HQ: CUP_BRDM2_HQ_Base
	{
		_generalMacro = "CUP_BRDM2_HQ_Base";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "BRDM-2 (HQ)";
		crew = "B_TAF_vehcrew";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"martin_taf\brdm2\taf_brdm2_01_co.paa"};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {

				magazines[]=
				{
					"CUP_100Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_100Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_100Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_100Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_100Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_100Rnd_TE1_Red_Tracer_762x54_PKT_M"
				};
			};
		};
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_556_black";
				count = "2*1";
			};
		};
		
		class TransportMagazines {
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "8*2";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "1*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "1*1";
			};
		};
		class TransportItems {
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
			
			class _xx_FAK {
				name = "FirstAidKit";
				count = "8*1";
			};
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "CUP_B_AlicePack_Khaki";
				count = "1*1";
			};
		};
	};
	
	class CUP_BTR60_Base : Wheeled_APC_F { 
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
			
			};
		};
	};
	
	class TAF_BTR60 : CUP_BTR60_Base
	{
		_generalMacro = "CUP_O_BTR60_SLA";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "BTR-60PB";
		crew = "B_TAF_vehcrew";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"martin_taf\btr60\taf_body_co.paa", "martin_taf\btr60\taf_details_co.paa"};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				weapons[]=
				{
					"TAF_Vhmg_KPVT_veh",
					"CUP_Vhmg_PKT_veh_Noeject"
				};
				
				magazines[]=
				{
					"TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_M",
					"TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_M",
					"TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_M",
					"TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_M",
					"TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_M",
					"TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_M",
					"TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_M",
					"TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_M",
					"TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_MDZ_M",
					"TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_MDZ_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M"
				};
			};
		};
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_556_black";
				count = "4*1";
			};
			class _xx_RPG {
				weapon = "CUP_launch_RPG7V";
				count = "1*1";
			};
		};
		
		class TransportMagazines {
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "5*4";
			};
			class _xx_FAL_mag {
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = "1*5";
			};
			class _xx_Galil_Sniper_mag {
				magazine = "CUP_25Rnd_762x51_Galil_Mag";
				count = "1*4";
			};
			class _xx_M249_mag {
				magazine = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
				count = "1*4";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "4*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "2*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "2*1";
			};

			class _xx_RPG_ammo {
				magazine = "CUP_PG7VL_M";
				count = "1*4";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "12*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "CUP_B_AlicePack_Khaki";
				count = "2*1";
			};
		};
	};

	class CUP_T55_Base : Tank_F {
		class Turrets {
			class MainTurret:NewTurret {
				class Turrets {
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints {
			class HitHull;
			class HitEngine;
			class HitFuel;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds : Sounds {
			class Engine;
			class Movement;
		};
		class EventHandlers;
		class UserActions {
			class CUP_CheckAmmoStore;
		};
	};
	
	class TAF_T55: CUP_T55_Base
	{
		_generalMacro = "CUP_I_T55_NAPA";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "T-55";
		crew = "B_TAF_vehcrew";
		typicalCargo[] = {"B_TAF_vehcrew"};
		
		hiddenSelections[] ={"Camo1","Camo2"};
		hiddenSelectionsTextures[] ={"\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_body_olive_co","\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_tower_olive_co"};
		editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_T55\Data\preview\CUP_I_T55_TK_GUE.jpg";
		
		CUP_Shell_Default[] = {
            42,
            TAF_1Rnd_100mmHEAT_D10,10,
            TAF_1Rnd_100mmHEFRAG_D10,17,
            TAF_1Rnd_100mm_BR412D,0,
            TAF_1Rnd_100mm_BM8,0,
            TAF_1Rnd_100mm_BM20,15,
            TAF_1Rnd_100mm_BM25,0,
            TAF_1Rnd_100mm_M309,0,
            TAF_1Rnd_100mm_M1000A1,0
        };
		
		class Turrets : Turrets{
			class MainTurret : MainTurret {
				weapons[]={
					TAF_Vacannon_D10,
					CUP_Vhmg_SGMT
				};
				magazines[]={
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M",
					"TAF_1Rnd_100mmHEAT_D10",
					"TAF_1Rnd_100mmHEAT_D10",
					"TAF_1Rnd_100mmHEAT_D10",
					"TAF_1Rnd_100mmHEAT_D10",
					"TAF_1Rnd_100mmHEAT_D10",
					"TAF_1Rnd_100mmHEAT_D10",
					"TAF_1Rnd_100mmHEAT_D10",
					"TAF_1Rnd_100mmHEAT_D10",
					"TAF_1Rnd_100mmHEAT_D10",
					"TAF_1Rnd_100mmHEAT_D10",
					"TAF_1Rnd_100mmHEFRAG_D10",
					"TAF_1Rnd_100mmHEFRAG_D10",
					"TAF_1Rnd_100mmHEFRAG_D10",
					"TAF_1Rnd_100mmHEFRAG_D10",
					"TAF_1Rnd_100mmHEFRAG_D10",
					"TAF_1Rnd_100mmHEFRAG_D10",
					"TAF_1Rnd_100mmHEFRAG_D10",
					"TAF_1Rnd_100mmHEFRAG_D10",
					"TAF_1Rnd_100mmHEFRAG_D10",
					"TAF_1Rnd_100mmHEFRAG_D10",
					"TAF_1Rnd_100mmHEFRAG_D10",
					"TAF_1Rnd_100mmHEFRAG_D10",
					"TAF_1Rnd_100mmHEFRAG_D10",
					"TAF_1Rnd_100mmHEFRAG_D10",
					"TAF_1Rnd_100mmHEFRAG_D10",
					"TAF_1Rnd_100mmHEFRAG_D10",
					"TAF_1Rnd_100mmHEFRAG_D10",
					"TAF_1Rnd_100mm_BM20",
					"TAF_1Rnd_100mm_BM20",
					"TAF_1Rnd_100mm_BM20",
					"TAF_1Rnd_100mm_BM20",
					"TAF_1Rnd_100mm_BM20",
					"TAF_1Rnd_100mm_BM20",
					"TAF_1Rnd_100mm_BM20",
					"TAF_1Rnd_100mm_BM20",
					"TAF_1Rnd_100mm_BM20",
					"TAF_1Rnd_100mm_BM20",
					"TAF_1Rnd_100mm_BM20",
					"TAF_1Rnd_100mm_BM20",
					"TAF_1Rnd_100mm_BM20",
					"TAF_1Rnd_100mm_BM20",
					"TAF_1Rnd_100mm_BM20"
				};
			};
		};
		
		class UserActions : UserActions {
			class CUP_CheckAmmoStore : CUP_CheckAmmoStore {
                statement = "[this, ""TAF_Vacannon_D10""] call CUP_fnc_checkAmmoStore;";
            };
		};
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_SAR_black";
				count = "2*1";
			};
			class _xx_RPG {
				weapon = "CUP_launch_RPG7V";
				count = "1*1";
			};
		};
		
		class TransportMagazines {
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "8*2";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "1*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "1*1";
			};

			class _xx_RPG_ammo {
				magazine = "CUP_PG7VL_M";
				count = "1*4";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "8*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "CUP_B_AlicePack_Khaki";
				count = "4*1";
			};
		};
	};

	//RG-31s
	class CUP_B_RG31_M2_OD_USA;
	class TAF_RG31: CUP_B_RG31_M2_OD_USA
	{
		_generalMacro = "CUP_B_RG31_M2_OD_USA";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		editorSubcategory = "TAF_MRAP";
		displayName = "RG-31 Nyala M2";
		crew = "B_TAF_rifleman_SF";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"martin_taf\rg31\exa_rg31_body_camo_taf_co.paa", "martin_taf\rg31\exa_rg31_body2_camo_taf_pa.paa"};
		
		class TransportWeapons {
			class _xx_M16 {
				weapon = "CUP_arifle_M16A2";
				count = "4*1";
			};
			
			class _xx_RPG {
				weapon = "CUP_launch_RPG7V";
				count = "1*1";
			};
		};
		
		class TransportMagazines {
			class _xx_M16_mag {
				magazine = "CUP_30Rnd_556x45_Stanag";
				count = "4*5";
			};
			
			class _xx_40mm_mag {
				magazine = "CUP_1Rnd_HE_M203";
				count = "1*16";
			};
			
			class _xx_M249_mag {
				magazine = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
				count = "1*4";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_M67 {
				magazine = "CUP_HandGrenade_M67";
				count = "4*1";
			};
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "1*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "1*1";
			};
			
			class _xx_RPG_ammo {
				magazine = "CUP_PG7VL_M";
				count = "1*4";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "8*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "CUP_B_USMC_AssaultPack";
				count = "1*2";
			};
		};
	}

	class CUP_B_RG31E_M2_OD_USA;
	class TAF_RG31E: CUP_B_RG31E_M2_OD_USA
	{
		_generalMacro = "CUP_B_RG31E_M2_OD_USA";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		editorSubcategory = "TAF_MRAP";
		displayName = "RG-31 Mk5E M2";
		crew = "B_TAF_rifleman_SF";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"martin_taf\rg31\exa_rg31_body_camo_taf_co.paa", "martin_taf\rg31\exa_rg31_body2_camo_taf_pa.paa"};
		
		class TransportWeapons {
			class _xx_M16 {
				weapon = "CUP_arifle_M16A2";
				count = "4*1";
			};
			class _xx_RPG {
				weapon = "CUP_launch_RPG7V";
				count = "1*1";
			};
		};
		
		class TransportMagazines {
			class _xx_M16_mag {
				magazine = "CUP_30Rnd_556x45_Stanag";
				count = "4*5";
			};
			
			class _xx_40mm_mag {
				magazine = "CUP_1Rnd_HE_M203";
				count = "1*16";
			};
			
			class _xx_M249_mag {
				magazine = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
				count = "1*4";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_M67 {
				magazine = "CUP_HandGrenade_M67";
				count = "4*1";
			};
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "1*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "1*1";
			};
			
			class _xx_RPG_ammo {
				magazine = "CUP_PG7VL_M";
				count = "1*4";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "8*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "CUP_B_USMC_AssaultPack";
				count = "1*2";
			};
		};
	}

	//Land Rovers
	
	class CUP_B_LR_Transport_CZ_W;
	class TAF_LR_Transport: CUP_B_LR_Transport_CZ_W
	{
		_generalMacro = "CUP_B_LR_Transport_CZ_W";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "Land Rover 110 (Transport)";
		crew = "B_TAF_rifleman";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"martin_taf\lr\lr_taf_base_co.paa", "martin_taf\lr\lr_taf_spec_co.paa"};
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_556_black";
				count = "2*1";
			};
		};
		
		class TransportMagazines {
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "8*2";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "1*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "1*1";
			};
			
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "8*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "CUP_B_AlicePack_Khaki";
				count = "2*1";
			};
		};
	};


	class CUP_B_LR_MG_CZ_W;
	class TAF_LR_MG: CUP_B_LR_MG_CZ_W
	{
		_generalMacro = "CUP_B_LR_MG_CZ_W";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "Land Rover 110 (M2)";
		crew = "B_TAF_rifleman";
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"martin_taf\lr\lr_taf_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\lr_acr_spec_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_base_woodlnd_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_mount_woodlnd_co.paa"};
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_556_black";
				count = "2*1";
			};
		};
		
		class TransportMagazines {
			
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "8*2";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "1*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "1*1";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "8*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "CUP_B_AlicePack_Khaki";
				count = "2*1";
			};
		};
	};

	class CUP_O_LR_SPG9_TKA;
	class TAF_LR_SPG9: CUP_O_LR_SPG9_TKA
	{
		_generalMacro = "CUP_O_LR_SPG9_TKA";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "Land Rover 110 (SPG-9)";
		crew = "B_TAF_rifleman";
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
		hiddenSelectionsTextures[] = {"martin_taf\lr\lr_taf_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\lr_acr_spec_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_base_woodlnd_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\jackal_mount_woodlnd_co.paa"};
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_556_black";
				count = "2*1";
			};
		};
		
		class TransportMagazines {
			
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "8*2";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "1*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "1*1";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "8*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "CUP_B_AlicePack_Khaki";
				count = "2*1";
			};
		};
	};

	class CUP_B_LR_Ambulance_CZ_W;
	class TAF_LR_Ambulance: CUP_B_LR_Ambulance_CZ_W
	{
		_generalMacro = "CUP_B_LR_Ambulance_CZ_W";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "Land Rover 110 (Ambulance)";
		crew = "B_TAF_rifleman";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"martin_taf\lr\lr_taf_base_co.paa"};
		class TransportWeapons {
			
		};
		
		class TransportMagazines {
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "1*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "1*1";
			};
			
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "20*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "2*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "CUP_B_AlicePack_Khaki";
				count = "2*1";
			};
		};
	};
	
	class TAF_LR_Transport_SF: TAF_LR_Transport
	{
		_generalMacro = "TAF_LR_Transport";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "Land Rover 110 (Transport)";
		crew = "B_TAF_rifleman_SF";
		editorSubcategory = "TAF_MRAP";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"martin_taf\lr\lr_taf_base_co.paa", "martin_taf\lr\lr_taf_spec_co.paa"};
		
		class TransportWeapons {
			class _xx_M16 {
				weapon = "CUP_arifle_M16A2";
				count = "2*1";
			};
		};
		
		class TransportMagazines {
		
			class _xx_M16_mag {
				magazine = "CUP_30Rnd_556x45_Stanag";
				count = "2*8";
			};
			
			class _xx_M249_mag {
				magazine = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
				count = "1*4";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_M67 {
				magazine = "CUP_HandGrenade_M67";
				count = "4*1";
			};
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "1*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "1*1";
			};
			
			class _xx_RPG_ammo {
				magazine = "CUP_PG7VL_M";
				count = "1*2";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "10*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "CUP_B_USMC_AssaultPack";
				count = "2*1";
			};
		};
	};


	class TAF_LR_MG_SF: TAF_LR_MG
	{
		_generalMacro = "TAF_LR_MG";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "Land Rover 110 (M2)";
		crew = "B_TAF_rifleman_SF";
		editorSubcategory = "TAF_MRAP";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"martin_taf\lr\lr_taf_base_co.paa"};
		
		class TransportWeapons {
			class _xx_M16 {
				weapon = "CUP_arifle_M16A2";
				count = "2*1";
			};
		};
		
		class TransportMagazines {
		
			class _xx_M16_mag {
				magazine = "CUP_30Rnd_556x45_Stanag";
				count = "2*8";
			};
			
			class _xx_M249_mag {
				magazine = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
				count = "1*4";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_M67 {
				magazine = "CUP_HandGrenade_M67";
				count = "4*1";
			};
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "1*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "1*1";
			};
			
			class _xx_RPG_ammo {
				magazine = "CUP_PG7VL_M";
				count = "1*2";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "10*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "CUP_B_USMC_AssaultPack";
				count = "2*1";
			};
		};
	};

	class TAF_LR_SPG9_SF: TAF_LR_SPG9
	{
		_generalMacro = "TAF_LR_SPG9";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "Land Rover 110 (SPG-9)";
		crew = "B_TAF_rifleman_SF";
		editorSubcategory = "TAF_MRAP";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"martin_taf\lr\lr_taf_base_co.paa"};
		
		class TransportWeapons {
			class _xx_M16 {
				weapon = "CUP_arifle_M16A2";
				count = "2*1";
			};
		};
		
		class TransportMagazines {
		
			class _xx_M16_mag {
				magazine = "CUP_30Rnd_556x45_Stanag";
				count = "2*8";
			};
			
			class _xx_M249_mag {
				magazine = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
				count = "1*4";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_M67 {
				magazine = "CUP_HandGrenade_M67";
				count = "4*1";
			};
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "1*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "1*1";
			};
			
			class _xx_RPG_ammo {
				magazine = "CUP_PG7VL_M";
				count = "1*2";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "10*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "CUP_B_USMC_AssaultPack";
				count = "2*1";
			};
		};
	};

	class TAF_LR_Ambulance_SF: TAF_LR_Ambulance
	{
		_generalMacro = "TAF_LR_Ambulance";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "Land Rover 110 (Ambulance)";
		crew = "B_TAF_rifleman_SF";
		editorSubcategory = "TAF_MRAP";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"martin_taf\lr\lr_taf_base_co.paa"};
		
		class TransportWeapons {
		};
		
		class TransportMagazines {
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "1*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "1*1";
			};
			
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "20*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "2*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "CUP_B_USMC_AssaultPack";
				count = "2*1";
			};
		};
	};

	//Urals
	
	class CUP_O_Ural_SLA;
	class TAF_Ural: CUP_O_Ural_SLA
	{
		_generalMacro = "CUP_O_Ural_SLA";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "Ural";
		crew = "B_TAF_rifleman";
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_556_black";
				count = "4*1";
			};
			class _xx_RPG {
				weapon = "CUP_launch_RPG7V";
				count = "1*1";
			};
		};
		
		class TransportMagazines {
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "5*4";
			};
			class _xx_FAL_mag {
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = "1*5";
			};
			class _xx_Galil_Sniper_mag {
				magazine = "CUP_25Rnd_762x51_Galil_Mag";
				count = "1*4";
			};
			class _xx_M249_mag {
				magazine = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
				count = "1*4";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "4*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "2*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "2*1";
			};
			
			class _xx_RPG_ammo {
				magazine = "CUP_PG7VL_M";
				count = "1*4";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "10*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
			
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "CUP_B_AlicePack_Khaki";
				count = "1*2";
			};
		};
	};

	class CUP_O_Ural_Open_SLA;
	class TAF_Ural_Open: CUP_O_Ural_Open_SLA
	{
		_generalMacro = "CUP_O_Ural_Open_SLA";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "Ural (Open)";
		crew = "B_TAF_rifleman";
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_556_black";
				count = "4*1";
			};
			class _xx_RPG {
				weapon = "CUP_launch_RPG7V";
				count = "1*1";
			};
		};
		
		class TransportMagazines {
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "5*4";
			};
			class _xx_FAL_mag {
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = "1*5";
			};
			class _xx_Galil_Sniper_mag {
				magazine = "CUP_25Rnd_762x51_Galil_Mag";
				count = "1*4";
			};
			class _xx_M249_mag {
				magazine = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
				count = "1*4";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "4*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "2*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "2*1";
			};
			
			class _xx_RPG_ammo {
				magazine = "CUP_PG7VL_M";
				count = "1*4";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "10*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "CUP_B_AlicePack_Khaki";
				count = "1*2";
			};
		};
	};

	class CUP_O_Ural_Reammo_SLA;
	class TAF_Ural_Ammo: CUP_O_Ural_Reammo_SLA
	{
		_generalMacro = "CUP_O_Ural_Reammo_SLA";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "Ural (Ammo)";
		crew = "B_TAF_rifleman";
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_556_black";
				count = "8*1";
			};
			class _xx_RPG {
				weapon = "CUP_launch_RPG7V";
				count = "2*1";
			};
		};
		
		class TransportMagazines {
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "5*8";
			};
			class _xx_FAL_mag {
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = "2*5";
			};
			class _xx_Galil_Sniper_mag {
				magazine = "CUP_25Rnd_762x51_Galil_Mag";
				count = "2*4";
			};
			class _xx_M249_mag {
				magazine = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
				count = "1*10";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "12*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "8*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "4*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "4*1";
			};
			
			class _xx_M67 {
				magazine = "CUP_HandGrenade_M67";
				count = "8*1";
			};
			
			class _xx_RPG_ammo {
				magazine = "CUP_PG7VL_M";
				count = "1*12";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "10*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
			
		};
	};
	
	
	class CUP_Ural_BaseTurret : Truck_F {
		class Turrets : Turrets {
			class MainTurret : NewTurret {
			};
		};
	};
	
	class CUP_Ural_ZU23_Base : CUP_Ural_BaseTurret {
		class Turrets : Turrets {
			class MainTurret : MainTurret {
			};
		};
	};
	class CUP_O_Ural_ZU23_SLA : CUP_Ural_ZU23_Base {
		
	};

	class TAF_Ural_ZU23: CUP_O_Ural_ZU23_SLA {
		_generalMacro = "CUP_O_Ural_ZU23_SLA";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "Ural (ZU-23)";
		crew = "B_TAF_rifleman";
		typicalCargo[]=
		{
			"B_TAF_rifleman"
		};
		
		class Turrets : Turrets {
		class MainTurret : MainTurret {
			weapons[]=
				{
					"TAF_Vacannon_2A14_veh"
				};
				magazines[]=
				{
					"TAF_100Rnd_23mm_AZP23_M",
					"TAF_100Rnd_23mm_AZP23_M",
					"TAF_100Rnd_23mm_AZP23_M",
					"TAF_100Rnd_23mm_AZP23_M",
					"TAF_100Rnd_23mm_AZP23_M",
					"TAF_100Rnd_23mm_AZP23_M",
					"TAF_100Rnd_23mm_AZP23_M",
					"TAF_100Rnd_23mm_AZP23_M",
					"TAF_100Rnd_23mm_AZP23_M"
				};
			};
		};
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_556_black";
				count = "2*1";
			};
		};
		
		class TransportMagazines {
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "1*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "1*1";
			};
			
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "8*2";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "4*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "CUP_B_AlicePack_Khaki";
				count = "1*2";
			};
		};
	};
	
	class CUP_O_Ural_Repair_SLA;
	class TAF_Ural_Repair: CUP_O_Ural_Repair_SLA
	{
		_generalMacro = "CUP_O_Ural_Repair_SLA";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "Ural (Repair)";
		crew = "B_TAF_rifleman";
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_SAR_black";
				count = "2*1";
			};
		};
		
		class TransportMagazines {
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "1*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "1*1";
			};
			
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "8*1";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "4*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
		};
	};

	//Tatra 810
	
	class CUP_B_T810_Unarmed_CZ_WDL;
	class TAF_T810_Unarmed: CUP_B_T810_Unarmed_CZ_WDL
	{
		_generalMacro = "CUP_B_T810_Unarmed_CZ_WDL";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "Tatra T810 (Covered)";
		crew = "B_TAF_rifleman";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"martin_taf\t810\cabin_co_NOFLAG.paa"};
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_556_black";
				count = "4*1";
			};
			class _xx_RPG {
				weapon = "CUP_launch_RPG7V";
				count = "1*1";
			};
		};
		
		class TransportMagazines {
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "5*4";
			};
			class _xx_FAL_mag {
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = "1*5";
			};
			class _xx_Galil_Sniper_mag {
				magazine = "CUP_25Rnd_762x51_Galil_Mag";
				count = "1*4";
			};
			class _xx_M249_mag {
				magazine = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
				count = "1*4";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "4*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "2*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "2*1";
			};
			
			class _xx_RPG_ammo {
				magazine = "CUP_PG7VL_M";
				count = "1*4";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "10*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "CUP_B_AlicePack_Khaki";
				count = "1*2";
			};
		};
	};

	class CUP_B_T810_Refuel_CZ_WDL;
	class TAF_T810_Fuel: CUP_B_T810_Refuel_CZ_WDL
	{
		_generalMacro = "CUP_B_T810_Refuel_CZ_WDL";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "Tatra T810 (Fuel)";
		crew = "B_TAF_rifleman";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"martin_taf\t810\cabin_co_NOFLAG.paa"};
		
		class TransportWeapons {

		};
		
		class TransportMagazines {
			
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "4*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
		};
	};
	
	//Tiger Forces T810

	class TAF_T810_Unarmed_SF: TAF_T810_Unarmed
	{
		_generalMacro = "TAF_T810_Unarmed";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "Tatra T810 (Covered)";
		crew = "B_TAF_rifleman_SF";
		editorSubcategory = "TAF_MRAP";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"martin_taf\t810\cabin_co_NOFLAG.paa"};
		
		class TransportWeapons {
			class _xx_M16 {
				weapon = "CUP_arifle_M16A2";
				count = "2*1";
			};
		};
		
		class TransportMagazines {
			class _xx_M16_mag {
				magazine = "CUP_30Rnd_556x45_Stanag";
				count = "2*8";
			};
			
			class _xx_M249_mag {
				magazine = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
				count = "1*4";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "4*1";
			};
			
			class _xx_M67 {
				magazine = "CUP_HandGrenade_M67";
				count = "4*1";
			};
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "1*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "1*1";
			};
			
			class _xx_RPG_ammo {
				magazine = "CUP_PG7VL_M";
				count = "1*2";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "10*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
			class _xx_Backpack {
				backpack = "CUP_B_USMC_AssaultPack";
				count = "1*2";
			};
		};
	};


	class TAF_T810_Fuel_SF: TAF_T810_Fuel
	{
		_generalMacro = "TAF_T810_Fuel";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "Tatra T810 (Fuel)";
		crew = "B_TAF_rifleman_SF";
		editorSubcategory = "TAF_MRAP";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"martin_taf\t810\cabin_co_NOFLAG.paa"};
		
	};

	//Hiluxes
	
	class CUP_Hilux_Base : Car_F{
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret : MainTurret{};
			
		};
	};
	class CUP_Hilux_unarmed_Base;

    class TAF_Hilux_Police : CUP_Hilux_unarmed_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux";
        side = 1;
        faction = "B_TAF_Police";
        crew = "B_TAF_policeman";

        /*class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };*/

        class EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_Hilux\data\v2\Body_camo_3_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };
		
		class TransportWeapons {
			class _xx_AK {
				weapon = "CUP_arifle_AKMS_Early";
				count = "1*1";
			};
		};
		
		class TransportMagazines {
		
			class _xx_AK_mag {
				magazine = "CUP_30Rnd_762x39_AK47_M";
				count = "1*4";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
			
			class _xx_SmokePurple {
				magazine = "SmokeShellPurple";
				count = "1*1";
			};
			
			class _xx_SmokeOrange {
				magazine = "SmokeShellOrange";
				count = "1*1";
			};

		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "4*1";
			};
		};
		
		class TransportBackpacks {
		};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Olive";

    };
	
    class TAF_Hilux_Unarmed : TAF_Hilux_Police {
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux";
        side = 1;
        faction = "B_TAF";
        crew = "B_TAF_rifleman";
		typicalCargo[]=
		{
			"B_TAF_rifleman"
		};

        /*class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };*/

        hiddenSelectionsTextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_Hilux\data\v2\Body_camo_3_CO.paa"};
		textureList[]=
		{
			"Olive",
			1
		};
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_556_black";
				count = "1*1";
			};
		};
		
		class TransportMagazines {
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "8*1";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "2*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "4*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
		};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Camo";

    };
	
	class CUP_Hilux_M2_Base : CUP_Hilux_Base {
		class EventHandlers; 
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				
			};
		};
	}
	
	class CUP_Hilux_DSHKM_Base : CUP_Hilux_Base{
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				
			};
		};
	};
	
	class TAF_Hilux_DSHKM : CUP_Hilux_DSHKM_Base {
		_generalMacro = "CUP_I_Hilux_DSHKM_TK";

        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux (DShKM)";
        side = 1;
        faction = "B_TAF";
        crew = "B_TAF_rifleman";
		typicalCargo[]=
		{
			"B_TAF_rifleman"
		};
		
		hiddenSelectionsTextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_Hilux\data\v2\Body_camo_3_CO.paa"};
		textureList[]=
		{
			"Olive",
			1
		};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				weapons[]=
				{
					"TAF_Vhmg_DSHKM_veh"
				};
				magazines[]=
				{
					"TAF_100Rnd_TE3_LRT5_Red_Tracer_127x107_DSHKM_M",
					"TAF_100Rnd_TE3_LRT5_Red_Tracer_127x107_DSHKM_M",
					"TAF_100Rnd_TE3_LRT5_Red_Tracer_127x107_DSHKM_M",
					"TAF_100Rnd_TE3_LRT5_Red_Tracer_127x107_DSHKM_M"
				};
			};
			
		};
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_556_black";
				count = "1*1";
			};
		};
		
		class TransportMagazines {
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "8*1";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "2*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "4*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
		};
	};
	
	class TAF_Hilux_Armed : CUP_Hilux_M2_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux (M2)";
        side = 1;
        faction = "B_TAF";
        crew = "B_TAF_rifleman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };
		
		hiddenSelectionsTextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_Hilux\data\v2\Body_camo_3_CO.paa"};
		textureList[]=
		{
			"Olive",
			1
		};

        /*class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_Hilux\data\v2\Body_camo_3_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };*/
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_556_black";
				count = "1*1";
			};
		};
		
		class TransportMagazines {
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "8*1";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "2*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "4*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
		};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Camo";

    };
	
	class CUP_Hilux_zu23_Base : CUP_Hilux_Base {
		class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
	};
	
	class TAF_Hilux_zu23 : CUP_Hilux_zu23_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux (ZU-23-2)";
        side = 1;
        faction = "B_TAF";
        crew = "B_TAF_rifleman";
		
		typicalCargo[]=
		{
			"B_TAF_rifleman"
		};
		
		hiddenSelectionsTextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_Hilux\data\v2\Body_camo_3_CO.paa"};
		textureList[]=
		{
			"Olive",
			1
		};

        class Turrets : Turrets {
            class MainTurret : MainTurret { 
				weapons[]=
				{
					"TAF_Vacannon_2A14_veh"
				};
				magazines[]=
				{
					"TAF_100Rnd_23mm_AZP23_M",
					"TAF_100Rnd_23mm_AZP23_M",
					"TAF_100Rnd_23mm_AZP23_M",
					"TAF_100Rnd_23mm_AZP23_M",
					"TAF_100Rnd_23mm_AZP23_M",
					"TAF_100Rnd_23mm_AZP23_M"
				};
			};
        };

        /*class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_Hilux\data\v2\Body_camo_3_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };*/
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_556_black";
				count = "1*1";
			};
		};
		
		class TransportMagazines {
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "8*1";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "2*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "4*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
		};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Camo";

    };

	class CUP_Hilux_SPG9_Base : CUP_Hilux_Base {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};

	class TAF_Hilux_SPG9 : CUP_Hilux_SPG9_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux (SPG-9)";
        side = 1;
        faction = "B_TAF";
        crew = "B_TAF_rifleman";
		
		typicalCargo[]=
		{
			"B_TAF_rifleman"
		};
		
		hiddenSelectionsTextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_Hilux\data\v2\Body_camo_3_CO.paa"};
		textureList[]=
		{
			"Olive",
			1
		};

        /*class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_Hilux\data\v2\Body_camo_3_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };*/
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_556_black";
				count = "1*1";
			};
		};
		
		class TransportMagazines {
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "8*1";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "2*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "4*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
		};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Camo";
	};

	class CUP_Hilux_MLRS_Base : CUP_Hilux_Base {
		class EventHandlers;
		class Turrets : Turrets {
			class MainTurret;
		};
	};

	class TAF_Hilux_MLRS : CUP_Hilux_MLRS_Base {
		scope = 2;
        scopeCurator = 2;
        displayName = "Hilux (MLRS))";
        side = 1;
        faction = "B_TAF";
		editorSubcategory = "EdSubcat_Artillery";
        crew = "B_TAF_rifleman";
		
		typicalCargo[]=
		{
			"B_TAF_rifleman"
		};
		
		hiddenSelectionsTextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_Hilux\data\v2\Body_camo_3_CO.paa"};
		textureList[]=
		{
			"Olive",
			1
		};
		
		class TransportWeapons {
			class _xx_Galil {
				weapon = "CUP_arifle_Galil_556_black";
				count = "1*1";
			};
		};
		
		class TransportMagazines {
			class _xx_Galil_mag {
				magazine = "CUP_35Rnd_556x45_Galil_Mag";
				count = "8*1";
			};
			
			class _xx_Chemlight {
				magazine = "Chemlight_yellow";
				count = "2*1";
			};
			
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = "2*1";
			};
		};
		
		class TransportItems {
			class _xx_FAK {
				name = "FirstAidKit";
				count = "4*1";
			};
			
			class _xx_Medikit {
				name = "Medikit";
				count = "1*1";
			};
			
			class _xx_ToolKit {
				name = "ToolKit";
				count = "1*1";
			};
		};
		
		class TransportBackpacks {
		};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Camo";
	};