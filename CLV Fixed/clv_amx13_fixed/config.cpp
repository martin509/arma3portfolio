class CBA_Extended_EventHandlers_base;

class CfgPatches {
	class clv_amx13_fixed{
		requiredVersion=0.1;
		requiredAddons[]={"CLV_Amx13"};
	
		units[] = {"clv_base_Amx13"};
		magazines[]=
		{
			"CLV_24Rnd_HE_AMX13",
			"CLV_12Rnd_AP_AMX13"
		};
		weapons[]=
		{
			"75mm_clv", "clv_aa52"
		};
		
		skipWhenMissingDependencies = 1;
	};
	
	
};

class CannonCore;

class CfgWeapons {
	class Coax; 
	class clv_aa52 : Coax
	{
		reloadTime = 0.6666;
		displayName = "AAN-F1 7.62mm";
	};
	

	class cannon_120mm;
	class 75mm_clv : cannon_120mm 
	{
		displayName = "SA 50 75mm";
		ballisticsComputer = "2";
		
		reloadTime = 5;
		magazineReloadTime = 5;
		
		minRange = 10;
		midRange = 600;
		midRangeProbab = 0.7;
		maxRange = 2000;
		maxRangeProbab = 0.1;
		
		magazines[]= 
		{
			"CLV_24Rnd_HE_AMX13",
			"CLV_12Rnd_AP_AMX13"
		};
		

		
	};
	
};

class CfgMagazines
{
	class 12Rnd_125mm_HE;
	class CLV_24Rnd_HE_AMX13: 12Rnd_125mm_HE
	{
		displayName="75 OE HE-T";
		displayNameShort = "75mm HE";
		initSpeed = 750;
		count=24;
		ammo = "CLV_Sh_75mm_HE";
		muzzleImpulseFactor[]={1.5,0.5};
	};
	
	class 12Rnd_120mm_APFSDS_shells;
	class CLV_12Rnd_AP_AMX13 : 12Rnd_120mm_APFSDS_shells {
		ammo = "CLV_Sh_75mm_AP";
		displayName = "PCOT-51P APCBC-T";
		displayNameShort = "75mm AP";
		count = 12;
		initSpeed = 1000;
		muzzleImpulseFactor[]={2,0.5};
	};
	
};

class CfgAmmo
{

	class Sh_120mm_HE_Tracer_Red;
	class CLV_Sh_75mm_HE : Sh_120mm_HE_Tracer_Red {
		aiAmmoUsageFlags = "64 + 128 + 256";
		
		typicalSpeed = 750;
		hit = 120;
		indirectHit = 25;
		indirectHitRange = 6;
	};
	
	class Sh_120mm_APFSDS_Tracer_Red;
	class CLV_Sh_75mm_AP : Sh_120mm_APFSDS_Tracer_Red {
		allowAgainstInfantry = 0;
		caliber = 15.3;
		hit = 250; //85mm APCR travels same speed as this and weighs 5kg -> hit=200, this weighs 6.4kg so 250 or so makes sense
		typicalSpeed = 1000;
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
	
	class clv_base_Amx13 : Tank_F {
		enginePower = 380; //2x the stock 190kw
		peakTorque = 2400; //appropriate torque number
		maxOmega = 397;
		redRpm = 3800; //sorting out the engine
		
		threat[] = {0.4, 0.4, 0}; //stock is almost same threat level as a 2035 MBT, this is same as T-34 instead
		
		torqueCurve[]= //new torque curve
		{
			
			{
				"(0/3800)",
				"(0/100)"
			},
			
			{
				"(500/3800)",
				"(54/100)"
			},
			
			{
				"(1000/3800)",
				"(71/100)"
			},
			
			{
				"(1800/3800)",
				"(91/100)"
			},
			
			{
				"(2500/3800)",
				"(100/100)"
			},
			
			{
				"(2950/3800)",
				"(100/100)"
			},
			
			{
				"(3200/3800)",
				"(92/100)"
			},
			
			{
				"(3500/3800)",
				"(84/100)"
			},
			
			{
				"(3800/3800)",
				"(71/100)"
			},
			
			{
				"(4600/3800)",
				"(0/100)"
			}
		};
		
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{	
				minelev = -6; 
				maxelev = 13; 
				discreteDistance[]={400, 600, 800, 1000, 1200, 1400, 1600}; 
				discreteDistanceInitIndex=1;
				weapons[]=
				{
					"75mm_clv",
					"clv_aa52"
				};
				magazines[]=
				{
					"CLV_24Rnd_HE_AMX13",
					"CLV_12Rnd_AP_AMX13",
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
};
