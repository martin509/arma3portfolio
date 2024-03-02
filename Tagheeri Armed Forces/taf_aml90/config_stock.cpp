class CBA_Extended_EventHandlers_base;

class CfgPatches {
	
	class CLV_Aml90
	{
		requiredAddons[]=
		{
			"A3_Armor_F_Beta"
		};
		units[]=
		{
			"clv_base_Aml90",
			"clv_base_Aml90_fixed",
			"clv_Aml90"
			
		};
		magazines[]=
		{
			"AML_10Rnd_HEAT_90mm",
			"AML_10Rnd_HE_90mm"
		};
		weapons[]=
		{
			"AML_90_clv",
			"AML_Coax"
		};
		author="Rafastein, .Tom, FlyingTarta";
	};
	weapons[] = {};
	requiredVersion=0.1;
	requiredAddons[]={"CLV_aml90"};
	
};

class CfgWeapons {
	
	class LMG_coax_ext;
	class AML_Coax: LMG_coax_ext
	{
		displayName = "AA-52";
		
		class manual {
			reloadTime = 0.0666667; //900 rpm
		};
		class close {
			reloadTime = 0.0666667; 
		};
		class short {
			reloadTime = 0.0666667; 
		};
		class medium {
			reloadTime = 0.0666667; 
		};
		class far {
			reloadTime = 0.0666667;
		};
		
		class GunParticles
		{
			class effect1
			{
				positionName="usti hlavne2";
				directionName="konec hlavne2";
				effectName="MachineGunCloud";
			};
		};
		cursor="EmptyCursor";
		cursoraim="EmptyCursor";
		
	};
	
	class cannon_120mm;
	class AML_90_clv : cannon_120mm
	{
		displayName = "CN90F1 90mm";
		magazines[]= 
		{
			"AML_10Rnd_HE_90mm",
			"AML_10Rnd_HEAT_90mm"
		};
		ballisticsComputer = "2";
		
		minRange = 10;
		midRange = 800;
		midRangeProbab = 0.7;
		maxRange = 1500;
		maxRangeProbab = 0.1;
	
		class player {
			dispersion = 0.0012; //make it not really all that accurate
			magazineReloadTime = 7;
			reloadTime = 7;
		};
		
		class single {
			dispersion = 0.0012;
			magazineReloadTime = 7;
			reloadTime = 7;
		};
		
		class close {
			dispersion = 0.0012;
			magazineReloadTime = 7;
			reloadTime = 7;
		};
		
		class short {
			dispersion = 0.0013;
			magazineReloadTime = 7;
			reloadTime = 7;
		};
		
		class medium {
			dispersion = 0.0014;
			magazineReloadTime = 7;
			reloadTime = 7;
		};
		
		class far {
			dispersion = 0.0015;
			magazineReloadTime = 7;
			reloadTime = 7;
		};
		
	};
	
};

class CfgMagazines
{
	class 20Rnd_120mm_HEAT_MP_T_Red;
	class AML_10Rnd_HEAT_90mm : 20Rnd_120mm_HEAT_MP_T_Red{
		ammo = "AML_90mm_HEAT";
		displayName = "OCC-60-62 HEAT";
		displayNameShort = "HEAT-T";
		count = 10;
		initSpeed = 750;
		muzzleImpulseFactor[]={2,2};
	};

	class TAML_10Rnd_HE_90mm : 20Rnd_120mm_HEAT_MP_T_Red {
		ammo = "AML_90mm_HE";
		displayName = "OE-90-F1 HE";
		displayNameShort = "HE-T";
		count = 10;
		initSpeed = 640;
		muzzleImpulseFactor[]={2,2};
	};
};

class CfgAmmo
{
	class Sh_120mm_HEAT_MP_T_Red;
	class AML_90mm_HEAT : Sh_120mm_HEAT_MP_T_Red {
		aiAmmoUsageFlags = "128 + 256 + 512";
	
		typicalSpeed = 750;
		hit = 70;
		indirectHit = 21;
		indirectHitRange = 3.5; 
	
		submunitionAmmo = "AML_P_90mm_HEAT";
	};

	class ammo_Penetrator_120mm;
	class AML_P_90mm_HEAT : ammo_Penetrator_120mm {
		hit = 300;
	};

	class Sh_120mm_HE_Tracer_Red;
	class AML_90mm_HE : Sh_120mm_HE_Tracer_Red {
		aiAmmoUsageFlags = "64 + 128 + 256";
	
		typicalSpeed = 640;
		hit = 200;
		indirectHit = 40;
		indirectHitRange = 8;
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
	
	class clv_base_Aml90 { //all changed values are in here
		displayName = "AML-90";
		
		enginePower=140; //make it a bit slower - based off ratio of 90hp AML engine to 140hp BRDM-2 engine (represented in CUP as 220kw presumably because 104kw would be agonizing)
		peakTorque=425;
		
		differentialType = "all_limited"; //the AML did have locking diffs, source: http://ciar.org/ttk/mbt/afv_weapons_profile_pack/afv_weapons_profile_39__panhard_armoured_cars.pdf 
		maxSpeed = 85; //cited top speed for AML90 of 90kmh
		
		class Turrets
		{
			class MainTurret: NewTurret
			{
				minelev = -8; 
				maxelev = 15; 
				//every source I can find refers to -8/+15 elevation, you can really feel that extra 3deg on hull down
				
				discreteDistance[]={200, 400, 600, 800, 1000, 1200, 1400, 1600, 1800, 2000}; 
				discreteDistanceInitIndex=2;
				
				weapons[]=
				{
					"AML_90_clv",
					"AML_Coax"
				};
				magazines[]= //20rnd loadout + 2400rnds 7.62
				{
					"AML_10Rnd_HE_90mm",
					"AML_10Rnd_HEAT_90mm"
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
	
};


