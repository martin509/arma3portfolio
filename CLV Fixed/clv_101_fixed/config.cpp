class CBA_Extended_EventHandlers_base;

class CfgPatches {
	class clv_101_fixed{
		requiredVersion=0.1;
		requiredAddons[]={"CLV_101", "CLV_107"};
	
		units[] = {"clv_base_101", "clv_base_107"};
		magazines[]=
		{
			"CLV_10Rnd_HE_FV101", 
			"CLV_10Rnd_HESH_FV101",
			"CLV_10Rnd_Smoke_FV101",
			"CLV_6Rnd_HE_30mm_Rarden",
			"CLV_6Rnd_AP_30mm_Rarden"
		};
		weapons[]=
		{
			"76mm_clv", "cannon_107", "clv_l8a1"
		};
		
		skipWhenMissingDependencies = 1;
	};
	
	
};

class CannonCore;

class CfgWeapons {
	class Coax; 
	class clv_l8a1 : Coax
	{
		reloadTime = 0.092307;
		displayName = "L8A1 7.62mm";
	};
	
	class cannon_125mm{
		class single;
		class close;
		class short;
		class medium;
		class far;
	};
	
	class 76mm_clv : cannon_125mm
	{
		displayName = "L23A1 76mm";
		ballisticsComputer = "0";
		
		minRange = 10;
		midRange = 800;
		midRangeProbab = 0.7;
		maxRange = 2000;
		maxRangeProbab = 0.1;
		
		magazines[]= 
		{
			"CLV_10Rnd_HE_FV101",
			"CLV_10Rnd_HESH_FV101",
			"CLV_10Rnd_Smoke_FV101"
		};
		
		class single : CannonCore {
			dispersion = 0.0012;
			magazineReloadTime = 6;
			reloadTime = 6;
		};
		
		class close : CannonCore {
			dispersion = 0.0012;
			magazineReloadTime = 6;
			reloadTime = 6;
		};
		
		class short : CannonCore {
			dispersion = 0.0013;
			magazineReloadTime = 6;
			reloadTime = 6;
		};
		
		class medium : CannonCore {
			dispersion = 0.0014;
			magazineReloadTime = 6;
			reloadTime = 6;
		};
		
		class far : CannonCore {
			dispersion = 0.0015;
			magazineReloadTime = 6;
			reloadTime = 6;
		};
		
	};
	
	class gatling_30mm_VTOL_02;
	class cannon_107: gatling_30mm_VTOL_02 {
		displayName = "L21A1 RARDEN";
		reloadTime = 0.6666;
		magazineReloadTime = 1.25;
		
		modes[]=
		{
			"single",
			"close",
			"short",
			"medium",
			"far"
		};
		
		magazines[]= 
		{
			"CLV_6Rnd_HE_30mm_Rarden",
			"CLV_6Rnd_AP_30mm_Rarden"
		};
		
		class player : CannonCore {
			dispersion = 0.0012; 
			magazineReloadTime = 1.25;
			reloadTime = 0.6666;
		};
		
		class single : CannonCore {
			dispersion = 0.0012;
			magazineReloadTime = 1.25;
			reloadTime = 0.6666;
		};
		
		class close : CannonCore {
			dispersion = 0.0012;
			magazineReloadTime = 1.25;
			reloadTime = 0.6666;
		};
		
		class short : CannonCore {
			dispersion = 0.0013;
			magazineReloadTime = 1.25;
			reloadTime = 0.6666;
		};
		
		class medium : CannonCore {
			dispersion = 0.0014;
			magazineReloadTime = 1.25;
			reloadTime = 0.6666;
		};
		
		class far : CannonCore {
			dispersion = 0.0015;
			magazineReloadTime = 1.25;
			reloadTime = 0.6666;
		};
		
	};
	
	/*class TAF_90_clv : 90_clv
	{
		displayName = "CN90F1 90mm";
		magazines[]= 
		{
			"TAF_10Rnd_HE_90mm",
			"TAF_10Rnd_HEAT_90mm"
		};
		ballisticsComputer = "2";
		
		minRange = 10;
		midRange = 800;
		midRangeProbab = 0.7;
		maxRange = 2000;
		maxRangeProbab = 0.1;
		
		class player : player {
			dispersion = 0.0012; //make it not really all that accurate
			magazineReloadTime = 7;
			reloadTime = 7;
		};
		
		class single : single {
			dispersion = 0.0012;
			magazineReloadTime = 7;
			reloadTime = 7;
		};
		
		class close : close {
			dispersion = 0.0012;
			magazineReloadTime = 7;
			reloadTime = 7;
		};
		
		class short : short {
			dispersion = 0.0013;
			magazineReloadTime = 7;
			reloadTime = 7;
		};
		
		class medium : medium {
			dispersion = 0.0014;
			magazineReloadTime = 7;
			reloadTime = 7;
		};
		
		class far : far {
			dispersion = 0.0015;
			magazineReloadTime = 7;
			reloadTime = 7;
		};
	};*/
};

class CfgMagazines
{
	class 12Rnd_125mm_HE;
	class CLV_10Rnd_HE_FV101: 12Rnd_125mm_HE
	{
		displayName="L24A1 HE-T";
		displayNameShort = "76mm HE";
		initSpeed = 514;
		count=20;
		ammo = "CLV_Sh_76mm_HE";
		muzzleImpulseFactor[]={2.0,0.5};
	};
	class 12Rnd_120mm_HEAT_MP;
	class CLV_10Rnd_HESH_FV101: 12Rnd_120mm_HEAT_MP
	{
		displayName="L29 HESH-T";
		displayNameShort = "76mm HESH";
		ammo = "CLV_Sh_76mm_HESH";
		initSpeed = 534;
		count=15;
		muzzleImpulseFactor[]={1.9,0.5};
	};
	
	class CLV_10Rnd_Smoke_FV101 : CLV_10Rnd_HE_FV101
	{
		displayName = "L32A5 Smoke";
		displayNameShort = "76mm Smoke";
		ammo = "CLV_Sh_76mm_Smoke";
		count = 7;
		initSpeed = 297;
	};
	
	class 250Rnd_30mm_HE_shells_Tracer_Red;
	class CLV_6Rnd_HE_30mm_Rarden : 250Rnd_30mm_HE_shells_Tracer_Red
	{
		ammo="CLV_rarden_30mm_he";
		displayName="L13A2 HE-T";
		displayNameShort = "30mm HE";
		count=6;
		selectionFireAnim="muzzleFlash";
		initSpeed = 1070;
	};
	
	class 250Rnd_30mm_APDS_shells_Tracer_Red;
	class CLV_6Rnd_AP_30mm_Rarden : 250Rnd_30mm_APDS_shells_Tracer_Red
	{
		ammo="CLV_rarden_30mm_apds";
		displayName="L14A3 APDS-T";
		displayNameShort = "30mm APDS";
		count=6;
		selectionFireAnim="muzzleFlash";
		initSpeed = 1175;
	};
	
	/*class 20Rnd_120mm_HEAT_MP_T_Red;
	class TAF_10Rnd_HEAT_90mm : 20Rnd_120mm_HEAT_MP_T_Red{
		ammo = "TAF_Sh_90mm_HEAT";
		displayName = "OCC-60-62 HEAT";
		displayNameShort = "HEAT-T";
		count = 10;
		initSpeed = 750;
		muzzleImpulseFactor[]={2,2};
	};

	class TAF_10Rnd_HE_90mm : 20Rnd_120mm_HEAT_MP_T_Red {
		ammo = "TAF_Sh_90mm_HE";
		displayName = "OE-90-F1 HE";
		displayNameShort = "HE-T";
		count = 10;
		initSpeed = 640;
		muzzleImpulseFactor[]={2,2};
	};*/
};

class CfgAmmo
{
	class B_30mm_HE_Tracer_Red;
	class CLV_rarden_30mm_he: B_30mm_HE_Tracer_Red
	{
		hit = 40;
		indirectHit = 11;
		indirectHitRange = 4;
		typicalSpeed = 1070;
	};
	
	class B_30mm_AP_Tracer_Red;
	class CLV_rarden_30mm_apds: B_30mm_AP_Tracer_Red
	{
		hit = 90;
		caliber = 4.7; //25% better than 25mm APDS
		typicalSpeed = 1175;
	};
	
	
	class Sh_120mm_HEAT_MP_T_Red;
	class CLV_Sh_76mm_HESH : Sh_120mm_HEAT_MP_T_Red {
		aiAmmoUsageFlags = "128 + 256 + 512";
		
		caliber = 1;
	
		typicalSpeed = 534;
		hit = 65;
		indirectHit = 30;
		indirectHitRange = 6; 
	
		submunitionAmmo = "CLV_P_76mm_HESH";
		submunitionConeAngle = 16;
		submunitionConeType[] = {"poissondisccenter", 10};
		
		warheadName = "HE";
	};

	class ammo_Penetrator_120mm;
	class CLV_P_76mm_HESH : ammo_Penetrator_120mm {
		hit = 20;
		caliber = 20;
		typicalSpeed = 1000;
	};

	class Sh_120mm_HE_Tracer_Red;
	class CLV_Sh_76mm_HE : Sh_120mm_HE_Tracer_Red {
		aiAmmoUsageFlags = "64 + 128 + 256";
		
		caliber = 34;
	
		typicalSpeed = 514;
		hit = 140;
		indirectHit = 30;
		indirectHitRange = 7;
	};
	
	class Smoke_82mm_AMOS_White;
	class CLV_Sh_76mm_Smoke : Smoke_82mm_AMOS_White {
		aiAmmoUsageFlags = "4";
		
		typicalSpeed = 297;
	};

};


class cfgVehicles {
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitFuel;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	
	class clv_base_101 : Tank_F {
		peakTorque = 600;
		maxOmega = 314;
		redRpm = 3000; //sorting out the engine
		
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{	
				startEngine = false;
				
				//discreteDistance[]={200, 400, 600, 800, 1000, 1200, 1400, 1600, 1800, 2000, 2200, 2400}; 
				//discreteDistanceInitIndex=2;
				weapons[]=
				{
					"76mm_clv",
					"clv_l8a1"
				};
				magazines[]=
				{
					"CLV_10Rnd_HE_FV101",
					"CLV_10Rnd_Smoke_FV101",
					"CLV_10Rnd_HESH_FV101",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red"
				};
			};
		};
	};
	
	class clv_base_107 : Tank_F {
		peakTorque = 600;
		maxOmega = 314;
		redRpm = 3000; //sorting out the engine
		
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{	
				startEngine = false;
				
				//discreteDistance[]={200, 400, 600, 800, 1000, 1200, 1400, 1600, 1800, 2000, 2200, 2400}; 
				//discreteDistanceInitIndex=2;
				weapons[]=
				{
					"cannon_107",
					"clv_l8a1"
				};
				magazines[]= //14x HE, 14x AP, 2400rnd 7.62
				{
					"CLV_6Rnd_HE_30mm_Rarden",
					"CLV_6Rnd_HE_30mm_Rarden",
					"CLV_6Rnd_HE_30mm_Rarden",
					"CLV_6Rnd_HE_30mm_Rarden",
					"CLV_6Rnd_HE_30mm_Rarden",
					"CLV_6Rnd_HE_30mm_Rarden",
					"CLV_6Rnd_HE_30mm_Rarden",
					"CLV_6Rnd_HE_30mm_Rarden",
					"CLV_6Rnd_HE_30mm_Rarden",
					"CLV_6Rnd_HE_30mm_Rarden",
					"CLV_6Rnd_HE_30mm_Rarden",
					"CLV_6Rnd_HE_30mm_Rarden",
					"CLV_6Rnd_HE_30mm_Rarden",
					"CLV_6Rnd_HE_30mm_Rarden",
					"CLV_6Rnd_AP_30mm_Rarden",
					"CLV_6Rnd_AP_30mm_Rarden",
					"CLV_6Rnd_AP_30mm_Rarden",
					"CLV_6Rnd_AP_30mm_Rarden",
					"CLV_6Rnd_AP_30mm_Rarden",
					"CLV_6Rnd_AP_30mm_Rarden",
					"CLV_6Rnd_AP_30mm_Rarden",
					"CLV_6Rnd_AP_30mm_Rarden",
					"CLV_6Rnd_AP_30mm_Rarden",
					"CLV_6Rnd_AP_30mm_Rarden",
					"CLV_6Rnd_AP_30mm_Rarden",
					"CLV_6Rnd_AP_30mm_Rarden",
					"CLV_6Rnd_AP_30mm_Rarden",
					"CLV_6Rnd_AP_30mm_Rarden",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red"
				};
			};
		};
	};
	
	/*class clv_base_Aml90 : Wheeled_APC_F {
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
				class Components;
			};
		};
		
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_engine_ext_idle",
					0.22387211,
					1,
					150
				};
				frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	4700) factor[(400/	6900),(700/	6900)])	*	((rpm/	4700) factor[(1100/	6900),(900/	6900)]))";
			};
			class Engine
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_engine_ext_rpm_01",
					0.2818383,
					1,
					200
				};
				frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	4700) factor[(870/	6900),(1100/	6900)])	*	((rpm/	4700) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_engine_ext_rpm_04",
					0.3548134,
					1,
					240
				};
				frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	4700) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	4700) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_engine_ext_rpm_06",
					0.39810717,
					1,
					280
				};
				frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	4700) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	4700) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_engine_ext_rpm_08",
					0.44668359,
					1,
					320
				};
				frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	4700) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	4700) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_engine_ext_rpm_09",
					0.50118721,
					1,
					360
				};
				frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	4700) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	4700) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_engine_ext_rpm_11",
					0.56234133,
					1,
					420
				};
				frequency="0.95	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.15";
				volume="engineOn*camPos*((rpm/	4700) factor[(5100/	6900),(6100/	6900)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_exhaust_int_rpm_01",
					0.50118721,
					1,
					200
				};
				frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4700) factor[(400/	6900),(700/	6900)])	*	((rpm/	4700) factor[(1100/	6900),(900/	6900)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_exhaust_int_rpm_04",
					0.56234133,
					1,
					250
				};
				frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4700) factor[(870/	6900),(1100/	6900)])	*	((rpm/	4700) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_exhaust_int_rpm_06",
					0.63095737,
					1,
					280
				};
				frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4700) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	4700) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_exhaust_int_rpm_08",
					0.70794576,
					1,
					320
				};
				frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4700) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	4700) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_exhaust_int_rpm_10",
					0.79432821,
					1,
					360
				};
				frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4700) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	4700) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_exhaust_int_rpm_11",
					1,
					1,
					400
				};
				frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.3";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4700) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	4700) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_exhaust_int_rpm_11",
					1.2589254,
					1,
					450
				};
				frequency="0.9	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4700) factor[(5100/	6900),(6100/	6900)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_engine_int_idle",
					0.17782794,
					1
				};
				frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	4700) factor[(400/	6900),(700/	6900)])	*	((rpm/	4700) factor[(1100/	6900),(900/	6900)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_engine_int_rpm_03",
					0.19952622,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	4700) factor[(870/	6900),(1100/	6900)])	*	((rpm/	4700) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_engine_int_rpm_06",
					0.25118864,
					1
				};
				frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	4700) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	4700) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_engine_int_rpm_08",
					0.2818383,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	4700) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	4700) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_engine_int_rpm_09",
					0.31622776,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	4700) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	4700) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_engine_int_rpm_10",
					0.3548134,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	4700) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	4700) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_engine_int_rpm_11",
					0.50118721,
					1
				};
				frequency="0.95	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.15";
				volume="engineOn*(1-camPos)*((rpm/	4700) factor[(5100/	6900),(6100/	6900)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_exhaust_int_idle",
					0.31622776,
					1
				};
				frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4700) factor[(400/	6900),(700/	6900)])	*	((rpm/	4700) factor[(1100/	6900),(900/	6900)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_exhaust_int_rpm_01",
					0.3548134,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4700) factor[(870/	6900),(1100/	6900)])	*	((rpm/	4700) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_exhaust_int_rpm_02",
					0.39810717,
					1
				};
				frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4700) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	4700) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_exhaust_int_rpm_03",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4700) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	4700) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_exhaust_int_rpm_04",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4700) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	4700) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_exhaust_int_rpm_05",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.3";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4700) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	4700) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"a3\sounds_f\vehicles\soft\van_01\van_01_exhaust_int_rpm_06",
					0.63095737,
					1
				};
				frequency="0.9	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4700) factor[(5100/	6900),(6100/	6900)])";
			};

		};
		
		class AnimationSources;
		class Components;
		class EventHandlers;
	};
	
	class TAF_AML90: clv_base_Aml90
	{
		_generalMacro = "CLV_Aml90";
		scope = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "AML-90";
		editorSubcategory = "EdSubcat_Tanks";
		crew = "B_TAF_vehcrew";
		
		enginePower=155; //calculated based off CUP BRDM-2 engine and power/weight (220kw/7 tonnes -> 155kw/5.5 tonnes)
		peakTorque=236;
		
		redRpm=4700; //wikipedia for the panhard M3 (same engine) cites jane's for claimed 4700rpm
		maxOmega=492;
		
		differentialType = "all_limited"; //source: http://ciar.org/ttk/mbt/afv_weapons_profile_pack/afv_weapons_profile_39__panhard_armoured_cars.pdf 
		maxSpeed = 85; //cited top speed for AML90 of 90kmh
		
		
		torqueCurve[]= //new torque curve to match new rpm
		{
			
			{
				"(0/4700)",
				"(0/100)"
			},
			
			{
				"(425/4700)",
				"(53/100)"
			},
			
			{
				"(1000/4700)",
				"(69/100)"
			},
			
			{
				"(1800/4700)",
				"(88/100)"
			},
			
			{
				"(2800/4700)",
				"(100/100)"
			},
			
			{
				"(3000/4700)",
				"(100/100)"
			},
			
			{
				"(3500/4700)",
				"(92/100)"
			},
			
			{
				"(4000/4700)",
				"(85/100)"
			},
			
			{
				"(4700/4700)",
				"(65/100)"
			},
			
			{
				"(5600/4700)",
				"(0/100)"
			}
		};
		changeGearMinEffectivity[]={0.5,0.15000001,0.95,0.95,0.95,0.95,0.95,0.95};
		
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"CLV_Aml90\data\camo1\Variantes\Variant2.paa",
			"CLV_Aml90\data\Camo2\Variantes\Variant2.paa",
			"CLV_Aml90\data\camo3\Variantes\Variant2.paa"
		};
		
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				minelev = -8; 
				maxelev = 15; 
				//every source I can find refers to -8/+15 elevation and not -5/+18
				
				startEngine = false;
				
				discreteDistance[]={200, 400, 600, 800, 1000, 1200, 1400, 1600, 1800, 2000}; 
				discreteDistanceInitIndex=2;
				weapons[] = {
					"TAF_90_clv", 
					"TAF_Vlmg_MAG_veh"
					};
					
				magazines[] = { //10 HEAT, 10 HE, 2400rnds
					"TAF_10Rnd_HEAT_90mm",
					"TAF_10Rnd_HE_90mm",
					"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"
				};
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
				count = "2*1";
			};
		};
	};*/
};
