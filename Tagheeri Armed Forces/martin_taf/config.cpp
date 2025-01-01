class CBA_Extended_EventHandlers_base;

#include "patches.hpp"

class cfgFactionClasses
{
	class B_TAF
	{
		displayName = "Tagheeri Armed Forces";
		priority = 10;
		side = 1;
		icon = "\martin_taf\logo_taf.paa";
	};
	/*class B_TAF_Des
	{
		displayName = "Tagheeri Armed Forces (Desert)";
		priority = 11;
		side = 1;
		icon = "\martin_taf\logo_taf.paa";
	};*/
	class B_TAF_Police
	{
		displayName = "Tagheeri National Police";
		priority = 12;
		side = 1;
		icon = "\martin_taf\logo_taf.paa";
	};
	
}; 

#include "misc.hpp"


class CfgEditorSubcategories
{
	class TAF_SF
	{
		displayName = "Men (Tiger Battalion)";
	};

	class TAF_MRAP
	{
		displayName = "Cars (Tiger Battalion)";
	};
	class TAF_Turrets
	{
		displayName = "Turrets";
	};
	class TAF_Turrets_SF
	{
		displayName = "Turrets (Tiger Battalion)";
	};
};

class cfgVehicles {
	#include "army.hpp"
	#include "tiger.hpp"
	//#include "army_desert.hpp"
	#include "vehicles.hpp"
	#include "turrets.hpp"
};

class cfgGroups {
	#include "groups.hpp"
};
