class CBA_Extended_EventHandlers_base;

class CfgFactionClasses{
	class B_TAF;
};

class CfgPatches {
	class taf_aml90{
		requiredVersion=0.1;
		requiredAddons[]={"martin_taf", "cup_weapons_m240", "CLV_aml90"};
	
		units[] = {"TAF_AML90", "TAF_AML20"};
		magazines[]=
		{
			"AML_10Rnd_HEAT_90mm",
			"AML_10Rnd_HE_90mm",
			"200Rnd_HE_AML20",
			"100Rnd_AP_AML20"
		};
		weapons[]=
		{
			"TAF_90_clv",
			"20_clv_aml",
			"TAF_Vlmg_MAG_veh"
		};
		
		skipWhenMissingDependencies = 1;
	};
	
	
};

class CfgWeapons {
	class CUP_Vlmg_L7A2_veh; 
	class TAF_Vlmg_MAG_veh : CUP_Vlmg_L7A2_veh
	{
		displayName = "FN MAG";
		
	};
	
	class cannon_120mm;
	class 90_clv : cannon_120mm
	{
		class player;
		class single;
		class close;
		class short;
		class medium;
		class far;
		
	};
	class autocannon_30mm_CTWS;
	class 20_clv : autocannon_30mm_CTWS {
		displayName = "M693 20mm Cannon";
		magazines[] = {"200Rnd_HE_AML20", "100Rnd_AP_AML20"};
		muzzles[] = {};
		ballisticsComputer = 2;

		minRange = 10;
		midRange = 400;
		midRangeProbab = 0.7;
		maxRange = 1000;
		maxRangeProbab = 0.1;

		maxZeroing=2000;
		FCSZeroingDelay=1;

		reloadTime = 0.085;
		modes[] = {"fullauto", "close", "short", "medium", "far"};
	};

	class 20_clv_aml : 20_clv {
		magazines[] = {};
		muzzles[] = {"20_clv_HE", "20_clv_AP"};
		
		class 20_clv_HE : 20_clv {
			displayName = "M693 20mm Cannon (HE)";
			magazines[] = {"200Rnd_HE_AML20"};
		};

		class 20_clv_AP : 20_clv {
			displayName = "M693 20mm Cannon (AP)";
			magazines[] = {"100Rnd_AP_AML20"};
		};
	};
	
	class TAF_90_clv : 90_clv
	{
		displayName = "CN 90 F1 90mm";
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
	};
};

class CfgMagazines
{
	class 20Rnd_120mm_HEAT_MP_T_Red;
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
	};

	class 300Rnd_20mm_shells;
	class 200Rnd_HE_AML20 : 300Rnd_20mm_shells {
		count = 200;
		initSpeed = 1050;
	};
	class 60Rnd_20mm_AP_shells;
	class 100Rnd_AP_AML20 : 60Rnd_20mm_AP_shells {
		initSpeed = 1250;
		ammo = "20_CLV_AP";
		displayName = "20 mm APDS"
		displayNameShort = "APDS";
		count = 100;
	};
};

class CfgAmmo
{
	class Sh_120mm_HEAT_MP_T_Red;
	class TAF_Sh_90mm_HEAT : Sh_120mm_HEAT_MP_T_Red {
		aiAmmoUsageFlags = "128 + 256 + 512";
		
		caliber = 34;
	
		typicalSpeed = 750;
		hit = 70;
		indirectHit = 21;
		indirectHitRange = 3.5; 
	
		submunitionAmmo = "TAF_P_90mm_HEAT";
		
		warheadName = "HEAT";
	};

	class ammo_Penetrator_120mm;
	class TAF_P_90mm_HEAT : ammo_Penetrator_120mm {
		hit = 300;
	};

	class Sh_120mm_HE_Tracer_Red;
	class TAF_Sh_90mm_HE : Sh_120mm_HE_Tracer_Red {
		aiAmmoUsageFlags = "64 + 128 + 256";
		
		caliber = 34;
	
		typicalSpeed = 640;
		hit = 200;
		indirectHit = 40;
		indirectHitRange = 8;
	};

	class B_20mm_AP;
	class 20_CLV_AP : B_20mm_AP {
		caliber = 3; 
		typicalSpeed = 1250;
	};

};


class cfgVehicles {
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
		class Sounds;
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
	
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		
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
		class AnimationSources;
		class Components;
		class EventHandlers;
	};
	
	class clv_base_Aml20 : Wheeled_APC_F {
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;

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
		
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				minelev = -8; 
				maxelev = 38; 
				maxHorizontalRotSpeed = 0.8; //10 seconds
				maxVerticalRotSpeed = 0.8; 

				weapons[] = {
					"20_clv_aml", 
					"TAF_Vlmg_MAG_veh"
					};
					
				magazines[] = {
					"200Rnd_HE_AML20",
					"100Rnd_AP_AML20",
					"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
					"CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"
				};

				startEngine = false;
				
				discreteDistance[]={200, 400, 600, 800, 1000, 1200, 1400, 1600, 1800, 2000}; 
				discreteDistanceInitIndex=2;

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

	class clv_base_Aml90 : Wheeled_APC_F {
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;

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
		
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				minelev = -8; 
				maxelev = 15; 
				//every source I can find refers to -8/+15 elevation and not -5/+18

				maxHorizontalRotSpeed = 0.32; //25 seconds baybee
				maxVerticalRotSpeed = 0.32; 

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
		//_generalMacro = "CLV_Aml90";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "AML-90";
		editorSubcategory = "EdSubcat_Tanks";
		crew = "B_TAF_vehcrew";
		
		
		
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
	};

	class TAF_AML20 : clv_base_Aml20 {
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "B_TAF";
		displayName = "AML-20";
		editorSubcategory = "EdSubcat_Tanks";
		crew = "B_TAF_vehcrew";

		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"CLV_Aml20\data\camo1\Variantes\olive.paa",
			"CLV_Aml20\data\Camo2\Variantes\olive.paa"
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

	};
};

class cfgGroups {
	
	class WEST{
		class B_TAF{
		
			class Armored{
			
				class b_taf_aml_section {
                    name = "AML-90 Section";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 1;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TAF_AML90";
                    };
                    class Unit1 {
                        position[] = {9,-16,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "TAF_AML90";
                    };
                };

                class b_btaf_aml_assault {
                    name = "AML-90 Assault Section";
                    side = 1;
                    faction = "b_taf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "TAF_AML90";
                    };
                    class Unit1 {
                        position[] = {5,-9,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "TAF_Hilux_Unarmed";
                    };
                    class Unit2 {
                        position[] = {-5,-9,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_TAF_TeamLeader";
                    };
                    class Unit3 {
                        position[] = {10,-14,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_machinegunner";
                    };
                    class Unit4 {
                        position[] = {15,-19,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at";
                    };
                    class Unit5 {
                        position[] = {-15,-19,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_rifleman_at_ass";
                    };
                    class Unit6 {
                        position[] = {15,-19,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_TAF_medic";
                    };
                };
			};
		};
	};
};
