
class StaticWeapon : LandVehicle{
	class Turrets;
	class MainTurret;
};
class StaticCannon : StaticWeapon{
};
class StaticMGWeapon : StaticWeapon{
};

class CUP_B_M2StaticMG_US;
class TAF_M2 : CUP_B_M2StaticMG_US {
	_generalMacro = "CUP_B_M2StaticMG_US";
	scope = 2;
	side = 1;
	faction = "B_TAF";
	displayName = "M2 Machine Gun";
	crew = "B_TAF_rifleman";
	typicalCargo[]=
	{
		"B_TAF_rifleman"
	};
};

class CUP_B_M2StaticMG_MiniTripod_US;
class TAF_M2_tripod : CUP_B_M2StaticMG_MiniTripod_US {
	_generalMacro = "CUP_B_M2StaticMG_MiniTripod_US";
	scope = 2;
	side = 1;
	faction = "B_TAF";
	displayName = "M2 Minitripod";
	crew = "B_TAF_rifleman";
	typicalCargo[]=
	{
		"B_TAF_rifleman"
	};
};

class CUP_DSHKM_Base : StaticMGWeapon{
	class Turrets : Turrets {
		class MainTurret : MainTurret{
			
		};
	}
};
	
class TAF_DSHKM : CUP_DSHKM_Base {
	_generalMacro = "CUP_B_DSHKM_CDF";
	scope = 2;
	side = 1;
	faction = "B_TAF";
	displayName = "DShKM";
	crew = "B_TAF_rifleman";
	typicalCargo[]=
	{
		"B_TAF_rifleman"
	};
	
	class Turrets : Turrets {
			class MainTurret : MainTurret {
				weapons[]=
				{
					"TAF_Vhmg_DSHKM_veh"
				};
				magazines[]=
				{
					"TAF_50Rnd_TE3_LRT5_127x107_DSHKM_M",
					"TAF_50Rnd_TE3_LRT5_127x107_DSHKM_M",
					"TAF_50Rnd_TE3_LRT5_127x107_DSHKM_M",
					"TAF_50Rnd_TE3_LRT5_127x107_DSHKM_M"
				};
			};
	};
};
class CUP_DSHKM_MiniTripod_base : CUP_DSHKM_Base {
	
	class Turrets : Turrets {
		class MainTurret : MainTurret {
		};
	};
};

class TAF_DSHKM_tripod : CUP_DSHKM_MiniTripod_base {
	_generalMacro = "CUP_B_DSHKM_MiniTriPod_CDF";
	scope = 2;
	side = 1;
	faction = "B_TAF";
	displayName = "DShKM Minitripod";
	crew = "B_TAF_rifleman";
	typicalCargo[]=
	{
		"B_TAF_rifleman"
	};
	
	class Turrets : Turrets {
			class MainTurret : MainTurret {
				weapons[]=
				{
					"TAF_Vhmg_DSHKM_veh"
				};
				magazines[]=
				{
					"TAF_50Rnd_TE3_LRT5_127x107_DSHKM_M",
					"TAF_50Rnd_TE3_LRT5_127x107_DSHKM_M",
					"TAF_50Rnd_TE3_LRT5_127x107_DSHKM_M",
					"TAF_50Rnd_TE3_LRT5_127x107_DSHKM_M"
				};
			};
	};
};


class CUP_B_SPG9_CDF;
class TAF_SPG9 : CUP_B_SPG9_CDF {
	_generalMacro = "CUP_B_SPG9_CDF";
	scope = 2;
	side = 1;
	faction = "B_TAF";
	displayName = "SPG-9";
	crew = "B_TAF_rifleman";
	typicalCargo[]=
	{
		"B_TAF_rifleman"
	};
};
class CUP_ZU23_Base : StaticCannon{

	class Turrets : Turrets{
		class MainTurret : MainTurret{
			
		};
	};
};

class CUP_B_ZU23_CDF : CUP_ZU23_Base {
	
	class Turrets : Turrets {
		class MainTurret;
	};
};
class TAF_ZU23 : CUP_B_ZU23_CDF {
	_generalMacro = "CUP_B_ZU23_CDF";
	scope = 2;
	side = 1;
	faction = "B_TAF";
	displayName = "ZU-23-2";
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
					"TAF_100Rnd_23mm_AZP23_M"
				};
		};
	};
};

class CUP_B_D30_CDF;
class TAF_D30 : CUP_B_D30_CDF {
	_generalMacro = "CUP_B_D30_CDF";
	scope = 2;
	side = 1;
	faction = "B_TAF";
	displayName = "D-30";
	crew = "B_TAF_rifleman";
	typicalCargo[]=
	{
		"B_TAF_rifleman"
	};
};

class CUP_B_D30_AT_CDF;
class TAF_D30_AT : CUP_B_D30_AT_CDF {
	_generalMacro = "CUP_B_D30_AT_CDF";
	scope = 2;
	side = 1;
	faction = "B_TAF";
	displayName = "D-30 (AT)";
	crew = "B_TAF_rifleman";
	typicalCargo[]=
	{
		"B_TAF_rifleman"
	};
};

class CUP_B_L16A2_BAF_WDL;
class TAF_L16 : CUP_B_L16A2_BAF_WDL {
	_generalMacro = "CUP_B_L16A2_BAF_WDL";
	scope = 2;
	side = 1;
	faction = "B_TAF";
	displayName = "L16A2 81mm Mortar";
	crew = "B_TAF_rifleman";
	typicalCargo[]=
	{
		"B_TAF_rifleman"
	};
};