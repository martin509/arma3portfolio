//file for various small configs

class CfgRecoils{
	class Default;
	class recoil_default : Default {};
	class recoil_TAF_Galil
	{              
		kickBack[] = {0.034,0.0585};
		muzzleInner[] = {0,0,0.1,0.1};
		muzzleOuter[] = {0.507,1.226,0.2,0.314};
		permanent = 0.1;
		temporary = 0.016;
	};
};

class CfgAmmo{ //red tracer variants of various warsaw pact ammo
	class CUP_B_145x115_AP_Green_Tracer;
	class TAF_B_145x115_AP_Red_Tracer : CUP_B_145x115_AP_Green_Tracer {
		model = "\a3\weapons_f\data\bullettracer\tracer_red";
	};
	
	class CUP_B_145x115_MDZ_Green_Tracer;
	class TAF_B_145x115_MDZ_Red_Tracer : CUP_B_145x115_MDZ_Green_Tracer {
		model = "\a3\weapons_f\data\bullettracer\tracer_red";
	};
	
	class CUP_B_23mm_AA;
	class TAF_B_23mm_AA : CUP_B_23mm_AA{
		model = "\a3\weapons_f\data\bullettracer\tracer_red";
	}
	
	class B_127x107_Ball;
	class TAF_B_127x107_Ball : B_127x107_Ball {
		model = "\a3\weapons_f\data\bullettracer\tracer_red";
	};
	
	//tank ammo
	class CUP_Sh_100mm_BM20;
	class CUP_Sh_100mm_BM25;
	class CUP_Sh_100mm_BM8;
	class CUP_Sh_100mm_BR412D;
	class CUP_Sh_100mm_M1000A1;
	class CUP_Sh_100mm_M309;
	class CUP_Sh_3UBK9_HEAT;
	class CUP_Sh_3UOF10_HEFRAG;
	
	class TAF_Sh_100mm_BM20 : CUP_Sh_100mm_BM20 {
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class TAF_Sh_100mm_BM25 : CUP_Sh_100mm_BM25 {
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class TAF_Sh_100mm_BM8 : CUP_Sh_100mm_BM8 {
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class TAF_Sh_100mm_BR412D : CUP_Sh_100mm_BR412D {
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class TAF_Sh_100mm_M1000A1 : CUP_Sh_100mm_M1000A1 {
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class TAF_Sh_100mm_M309 : CUP_Sh_100mm_M309 {
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class TAF_Sh_3UBK9_HEAT : CUP_Sh_3UBK9_HEAT {
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class TAF_Sh_3UOF10_HEFRAG : CUP_Sh_3UOF10_HEFRAG {
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	
};

class CfgMagazines{ //same as CfgAmmo

	class CUP_50Rnd_TE2_LRT4_Green_Tracer_145x115_KPVT_M;
	class TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_M : CUP_50Rnd_TE2_LRT4_Green_Tracer_145x115_KPVT_M {
		ammo = "TAF_B_145x115_AP_Red_Tracer";
	};
	
	class CUP_500Rnd_TE2_LRT4_Green_Tracer_145x115_KPVT_M;
	class TAF_500Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_M : CUP_500Rnd_TE2_LRT4_Green_Tracer_145x115_KPVT_M {
		ammo = "TAF_B_145x115_AP_Red_Tracer";
	};
	
	class CUP_50Rnd_TE2_LRT4_Green_Tracer_145x115_KPVT_MDZ_M;
	class TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_MDZ_M : CUP_50Rnd_TE2_LRT4_Green_Tracer_145x115_KPVT_MDZ_M {
		ammo = "TAF_B_145x115_MDZ_Red_Tracer";
	};
	
	class CUP_40Rnd_23mm_AZP23_M;
	class TAF_40Rnd_23mm_AZP23_M : CUP_40Rnd_23mm_AZP23_M {
		ammo = "TAF_B_23mm_AA";
	};
	
	class CUP_100Rnd_23mm_AZP23_M;
	class TAF_100Rnd_23mm_AZP23_M : CUP_100Rnd_23mm_AZP23_M {
		ammo = "TAF_B_23mm_AA";
	};
	
	class CUP_2000Rnd_23mm_AZP23_M;
	class TAF_2000Rnd_23mm_AZP23_M : CUP_2000Rnd_23mm_AZP23_M {
		ammo = "TAF_B_23mm_AA";
	};
	
	class CUP_100Rnd_TE3_LRT5_Green_Tracer_127x107_DSHKM_M;
	class TAF_100Rnd_TE3_LRT5_Red_Tracer_127x107_DSHKM_M : CUP_100Rnd_TE3_LRT5_Green_Tracer_127x107_DSHKM_M {
		ammo = "TAF_B_127x107_Ball";
	};
	
	class CUP_50Rnd_TE3_LRT5_127x107_DSHKM_M;
	class TAF_50Rnd_TE3_LRT5_127x107_DSHKM_M : CUP_50Rnd_TE3_LRT5_127x107_DSHKM_M {
		ammo = "TAF_B_127x107_Ball";
	};
	
	class CUP_150Rnd_TE3_LRT5_127x107_DSHKM_M;
	class TAF_150Rnd_TE3_LRT5_127x107_DSHKM_M : CUP_150Rnd_TE3_LRT5_127x107_DSHKM_M{
		ammo = "TAF_B_127x107_Ball";
	};
	
	class CUP_1Rnd_100mm_BM20;
	class CUP_1Rnd_100mm_BM25;
	class CUP_1Rnd_100mm_BM8;
	class CUP_1Rnd_100mm_BR412D;
	class CUP_1Rnd_100mm_M1000A1;
	class CUP_1Rnd_100mm_M309;
	class CUP_1Rnd_100mmHEAT_D10;
	class CUP_20Rnd_100mmHEAT_D10;
	class CUP_1Rnd_100mmHEFRAG_D10;
	class CUP_15Rnd_100mmHEFRAG_D10;
	
	class TAF_1Rnd_100mm_BM20 : CUP_1Rnd_100mm_BM20 {
		ammo = "TAF_Sh_100mm_BM20";
	};
	class TAF_1Rnd_100mm_BM25 : CUP_1Rnd_100mm_BM20 {
		ammo = "TAF_Sh_100mm_BM25";
	};
	class TAF_1Rnd_100mm_BM8 : CUP_1Rnd_100mm_BM8 {
		ammo = "TAF_Sh_100mm_BM8";
	};
	class TAF_1Rnd_100mm_BR412D : CUP_1Rnd_100mm_BR412D {
		ammo = "TAF_Sh_100mm_BR412D";
	};
	class TAF_1Rnd_100mm_M1000A1 : CUP_1Rnd_100mm_M1000A1 {
		ammo = "TAF_Sh_100mm_M1000A1";
	};
	class TAF_1Rnd_100mm_M309 : CUP_1Rnd_100mm_M309 {
		ammo = "TAF_Sh_100mm_M309";
	};
	class TAF_1Rnd_100mmHEAT_D10 : CUP_1Rnd_100mmHEAT_D10 {
		ammo = "TAF_Sh_3UBK9_HEAT";
	};
	class TAF_20Rnd_100mmHEAT_D10 : CUP_20Rnd_100mmHEAT_D10 {
		ammo = "TAF_Sh_3UBK9_HEAT";
	};
	class TAF_1Rnd_100mmHEFRAG_D10 : CUP_1Rnd_100mmHEFRAG_D10 {
		ammo = "TAF_Sh_3UOF10_HEFRAG";
	};
	class TAF_15Rnd_100mmHEFRAG_D10 : CUP_15Rnd_100mmHEFRAG_D10 {
		ammo = "TAF_Sh_3UOF10_HEFRAG";
	};

};

class CfgWeapons{
	
	class CUP_arifle_GALIL_BASE;
	
	class CUP_arifle_Galil_black : CUP_arifle_GALIL_BASE {
		recoil="recoil_TAF_Galil";
	};
	
	class CUP_arifle_Galil_556_black : CUP_arifle_GALIL_BASE {
		recoil="recoil_CUP_AK101";
	};
	
	class CUP_arifle_Galil_SAR_black : CUP_arifle_GALIL_BASE {
		recoil="recoil_CUP_AK102";
	};
	
	//various soviet gun versions w/ red tracers
	class CUP_Vhmg_KPVT_veh;
	class TAF_Vhmg_KPVT_veh : CUP_Vhmg_KPVT_veh {
		magazines[] = {"TAF_500Rnd_TE2_Red_Tracer_145x115_KPVT_M","TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_M","TAF_50Rnd_TE2_LRT4_Red_Tracer_145x115_KPVT_MDZ_M"};
	};
	
	class CUP_Vacannon_2A14_Veh;
	class TAF_Vacannon_2A14_Veh : CUP_Vacannon_2A14_Veh {
		magazines[] = {"TAF_40Rnd_23mm_AZP23_M","TAF_100Rnd_23mm_AZP23_M","TAF_2000Rnd_23mm_AZP23_M"};
	};
	
	class CUP_Vhmg_DSHKM_veh;
	class TAF_Vhmg_DSHKM_veh : CUP_Vhmg_DSHKM_veh {
		magazines[] = {"TAF_100Rnd_TE3_LRT5_Red_Tracer_127x107_DSHKM_M","TAF_50Rnd_TE3_LRT5_127x107_DSHKM_M","TAF_150Rnd_TE3_LRT5_127x107_DSHKM_M"};
	};
	
	class CUP_Vacannon_D10;
	class TAF_Vacannon_D10 : CUP_Vacannon_D10 {
		magazines[]= 
		{
			"TAF_20Rnd_100mmHEAT_D10",
			"TAF_15Rnd_100mmHEFRAG_D10",
			"TAF_1Rnd_100mm_BM20", 
			"TAF_1Rnd_100mm_BM25",
			"TAF_1Rnd_100mm_BM8",
			"TAF_1Rnd_100mm_BR412D",
			"TAF_1Rnd_100mm_M1000A1",
			"TAF_1Rnd_100mm_M309",
			"TAF_1Rnd_100mmHEAT_D10",
			"TAF_1Rnd_100mmHEFRAG_D10"
		};
	};
};