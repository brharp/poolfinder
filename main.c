#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

enum places {
	GUELPH,
	KITCHENER,
	WATERLOO,
	FERGUS,
	ACTON,
	GEORGETOWN,
	MILTON,
	OAKVILLE,
	HAMILTON,
};

struct place {
	int id;
	char *print_name;
	double lat;
	double lng;
} placetab[] = {
	GUELPH, "Guelph", 43.534433, -80.240168,
	KITCHENER, "Kitchener", 43.4304343, -80.4763151,
	WATERLOO, "Waterloo", 43.4822185, -80.5467194,
	FERGUS, "Fergus", 43.7076365, -80.3798944,
	ACTON, "Acton", 43.6326873, -80.0346183,
	GEORGETOWN, "Georgetown", 43.6535487, -79.9023269,
	MILTON, "Milton", 43.5231324, -79.942436,
	OAKVILLE, "Oakville", 43.4498343, -79.7180602,
	HAMILTON, "Hamilton", 43.2608104, -79.9354333,
};

enum pools {
	/* Guelph */
	WEST_END,
	VICTORIA,
	CENTENNIAL,
	LYON,
	/* Fergus */
	SPORTSPLEX,
	/* Kitchener */
	BREITHAUPT,
	CAMERON,
	FOREST,
	HALLMAN,
	/* Waterloo */
	SWIMPLEX,
	/* Acton */
	ACTON_LIONS,
	/* Georgetown */
	GELLERT,
	/* Milton */
	MILTON_LEISURE_CENTRE,
	MILTON_SPORTS_CENTRE,
	/* Oakville */
	OAKVILLE_CENTENNIAL,
	GLENABBEY,
	IROQUOIS_RIDGE,
	QUEEN_ELIZABETH,
	WHITE_OAKS,
	/* Hamilton */
	ANCASTER,
	BENNETTO,
	CENTRAL_MEMORIAL,
	CORONATION,
	DALEWOOD,
	DOMINIC_AGOSTINO,
	DUNDAS,
	BREWSTER,
	HILL_PARK,
	HUNTINGTON,
	INCH_PARK,
	JIMMY_THOMPSON,
	NORMAN_PINKY,
	PAT_QUINN,
	ROSEDALE,
	RYERSON,
	ALLAN_MACNAB,
	WILFRID_LAURIER,
	WINSTON_CHURCHILL,
	STONEY_CREEK,
	VALLEY_PARK,
	WESTMOUNT,
};


struct pool {
	int id;
	char *print_name;
	float lat;
	float lng;
} pooltab[] = {
	WEST_END, "West End Community Centre", 43.525115, -80.291577,
	VICTORIA, "Victoria Road Rec Centre", 43.564017, -80.238318,
	CENTENNIAL, "Centennial Pool", 43.522693, -80.247615,
	LYON, "Lyon Outdoor Pool", 43.5461472, -80.2288876,
	SPORTSPLEX, "Wellington Sportsplex", 43.70651, -80.359852,
	BREITHAUPT, "Breithaupt Centre", 43.466335, -80.495968,
	CAMERON, "Cameron Heights Pool", 43.444633, -80.481841,
	FOREST, "Forest Heights Pool", 43.427134, -80.528369,
	HALLMAN, "Lyle Hallman Pool", 43.455862, -80.43322,
	SWIMPLEX, "Swimplex", 43.46446, -80.532855,
	ACTON_LIONS, "Acton Lion's Pool", 43.638178, -80.032997,
	GELLERT, "Gellert Pool", 43.623695, -79.888004,
	MILTON_LEISURE_CENTRE, "Milton Leisure Centre", 43.529965,-79.864455,
	MILTON_SPORTS_CENTRE, "Milton Sports Centre", 43.502524,-79.862701,
	OAKVILLE_CENTENNIAL, "Oakville Centennial Pool", 43.44397,-79.671047,
	GLENABBEY, "Glenn Abbey Community Centre", 43.435508,-79.739833,
	IROQUOIS_RIDGE, "Iroquois Ridge Community Centre", 43.48819,-79.701299,
	QUEEN_ELIZABETH, "Queen Elizabeth Park", 43.405266,-79.718583,
	WHITE_OAKS, "White Oaks Pool", 43.464687,-79.700832,
	ANCASTER, "Ancaster Aquatic Centre", 43.215279,-80.006089,
	BENNETTO, "Bennetto Community Centre", 43.270405,-79.860853,
	CENTRAL_MEMORIAL, "Central Memorial Recreation Centre", 43.249577,-79.859289,
	CORONATION, "Coronation Arena and Pool", 43.264746,-79.89629,
	DALEWOOD, "Dalewood Recreation Centre", 43.258309,-79.913156,
	DOMINIC_AGOSTINO, "Dominic Agostino Riverdale Community Centre", 43.232447,-79.757003,
	DUNDAS, "Dundas Community Pool", 43.265486,-79.963553,
	BREWSTER, "H. G. Brewster Pool", 43.218086,-79.711432,
	HILL_PARK, "Hill Park Recreation Centre", 43.2278,-79.863347,
	HUNTINGTON, "Huntington Park Recreation Centre", 43.220869,-79.829334,
	INCH_PARK, "Inch Park Arena & Pool", 43.236661,-79.860133,
	JIMMY_THOMPSON, "Jimmy Thompson Pool", 43.249193,-79.830343,
	NORMAN_PINKY, "Norman Pinky Lewis Recreation Centre", 43.256995,-79.845242,
	PAT_QUINN, "Parkdale (Pat Quinn) Arena and Pool", 43.236604,-79.79361,
	ROSEDALE, "Rosedale Arena and Pool", 43.218864,-79.806977,
	RYERSON, "Ryerson Recreation Centre", 43.253822,-79.882066,
	ALLAN_MACNAB, "Sir Allan MacNab Recreation Centre", 43.231134,-79.92168,
	WILFRID_LAURIER, "Sir Wilfrid Laurier Recreation Centre", 43.21771,-79.786722,
	WINSTON_CHURCHILL, "Sir Winston Churchill Recreation Centre", 43.237454,-79.795898,
	STONEY_CREEK, "Stoney Creek Recreation Centre", 43.217605,-79.763247,
	VALLEY_PARK, "Valley Park Arena & Rec Centre", 43.194027,-79.795352,
	WESTMOUNT, "Westmount Recreation Centre", 43.228647,-79.894163,

};

struct anchor {
	int id;
	char *href;
} anchortab[] = {
	WEST_END, "http://guelph.ca/living/recreation/facilities/west-end-community-centre/",
	VICTORIA, "http://guelph.ca/living/recreation/facilities/victoria-road-recreation-centre/",
	CENTENNIAL, "http://guelph.ca/living/recreation/facilities/centennial-pool/",
	LYON, "http://guelph.ca/living/recreation/recreation-programs/swimming/swim-schedules/",
	SPORTSPLEX, "http://www.centrewellington.ca/beactive/Pages/Recreation,%20Parks%20and%20Facilities/Facility%20Rentals/Centre-Wellington-Community-Sportsplex.aspx",
	BREITHAUPT, "http://www.kitchener.ca/en/livinginkitchener/BreithauptCentre.asp",
	CAMERON, "http://www.kitchener.ca/en/livinginkitchener/PoolsAndSwimming.asp",
	FOREST, "http://www.kitchener.ca/en/livinginkitchener/PoolsAndSwimming.asp",
	HALLMAN, "http://www.kitchener.ca/en/livinginkitchener/PoolsAndSwimming.asp",
	SWIMPLEX, "http://www.waterloo.ca/en/gettingactive/schedules_swimming.asp",
	ACTON_LIONS, "http://www.haltonhills.ca/swimming/swimming-acton.php",
	GELLERT, "http://www.haltonhills.ca/swimming/swimming-gellert.php",
	MILTON_LEISURE_CENTRE, "https://www.milton.ca/en/play/resources/Drop-in-swimming.pdf",
	MILTON_SPORTS_CENTRE, "https://www.milton.ca/en/play/resources/Drop-in-swimming.pdf",
	OAKVILLE_CENTENNIAL, "http://www.oakville.ca/culturerec/public-swimming.html",
	GLENABBEY, "http://www.oakville.ca/culturerec/public-swimming.html",
	IROQUOIS_RIDGE, "http://www.oakville.ca/culturerec/public-swimming.html",
	QUEEN_ELIZABETH, "http://www.oakville.ca/culturerec/public-swimming.html",
	WHITE_OAKS, "http://www.oakville.ca/culturerec/public-swimming.html",
	ANCASTER, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/AncasterAquaticCentre/publicSwim.htm",
	BENNETTO, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/Bennetto/publicSwim.htm",
	CENTRAL_MEMORIAL, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/CentralMemorial/publicSwim.htm", 
	CORONATION, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/CoronationArena/OutdoorPool.htm", 
	DALEWOOD, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/Dalewood/PublicSwim.htm",
	DOMINIC_AGOSTINO, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/Riverdale/PublicSwim.htm",
	DUNDAS, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/DundasCommunityPool/PublicSwim.htm",
	BREWSTER, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/HGBrewsterPool/PublicSwim.htm",
	HILL_PARK, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/HillPark/PublicSwim.htm",
	HUNTINGTON, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/HuntingtonPark/PublicSwim.htm",
	INCH_PARK, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/InchParkArena/OutdoorPool.htm",
	JIMMY_THOMPSON, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/JimmyThompson/PublicSwim.htm",
	NORMAN_PINKY, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/NormanPinkyLewis/PublicSwim.htm",
	PAT_QUINN, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/ParkdaleArena/OutdoorPool.htm",
	ROSEDALE, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/RosedaleArena/OutdoorPool.htm",
	RYERSON, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/Ryerson/PublicSwim.htm",
	ALLAN_MACNAB, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/SirAllanMacNab/PublicSwim.htm",
	WILFRID_LAURIER, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/SirWilfridLaurier/PublicSwim.htm",
	WINSTON_CHURCHILL, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/SirWinstonChurchill/PublicSwim.htm",
	STONEY_CREEK, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/StoneyCreekRecCentre/PublicSwim.htm",
	VALLEY_PARK, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/ValleyPark/PublicSwim.htm",
	WESTMOUNT, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/Westmount/publicSwim.htm",

};

enum types {
	PUBLIC_SWIM,
	LEISURE_SWIM,
	FAMILY_SWIM,
	KIDS_SWIM,
	PARENT_TOT_SWIM,
	AFTER_SCHOOL_SWIM,
	A11Y_SWIM,
};

struct type {
	int id;
	char *print_name;
} typetab[] = {
	PUBLIC_SWIM, "Public swim",
	LEISURE_SWIM, "Leisure swim",
	FAMILY_SWIM, "Family swim",
	KIDS_SWIM, "Kids swim",
	PARENT_TOT_SWIM, "Parent and tot swim",
	AFTER_SCHOOL_SWIM, "After School swim",
	A11Y_SWIM, "Special needs swim",
};

enum days_of_the_week {
	SU = 1, MO = 2, TU = 4, WE = 8, TH = 16, FR = 32, SA = 64
};

struct day_of_week {
	int id;
	char *print_name;
} dowtab[] = {
	SU, "Sunday",
	MO, "Monday",
	TU, "Tuesday",
	WE, "Wednesday",
	TH, "Thursday",
	FR, "Friday",
	SA, "Saturday"
};

#define WEEKENDS SA|SU
#define WEEKDAYS MO|TU|WE|TH|FR
#define DAILY WEEKENDS|WEEKDAYS

struct swim {
	int pool;
	int type;
	int day_of_week;
	int start;
	int end;
} swimtab[] = {
	WEST_END, PUBLIC_SWIM, FR|WEEKENDS, 1400, 1600,
	WEST_END, LEISURE_SWIM, WEEKDAYS, 1030, 1300,
	WEST_END, LEISURE_SWIM, WEEKENDS, 1300, 1400,

	VICTORIA, PUBLIC_SWIM, DAILY, 1400, 1600,
	VICTORIA, PUBLIC_SWIM, FR|WEEKENDS, 1830, 2000,
	VICTORIA, LEISURE_SWIM, MO|WE|FR, 1130, 1300,

	CENTENNIAL, PUBLIC_SWIM, SU, 1830, 2000,

	SPORTSPLEX, PUBLIC_SWIM, WEEKENDS, 1400, 1555,
	SPORTSPLEX, FAMILY_SWIM, WEEKENDS, 1300, 1555,
	SPORTSPLEX, FAMILY_SWIM, WE, 1045, 1145,

	BREITHAUPT, PUBLIC_SWIM, FR, 1330, 1430,
	BREITHAUPT, PUBLIC_SWIM, FR, 1930, 2030,
	BREITHAUPT, PUBLIC_SWIM, SA, 1900, 2000,
	BREITHAUPT, PUBLIC_SWIM, SU, 1500, 1700,
	BREITHAUPT, FAMILY_SWIM, TU|TH, 1200, 1300,
	BREITHAUPT, FAMILY_SWIM, SA, 1500, 1600,
	BREITHAUPT, FAMILY_SWIM, SU, 1900, 2000,
	CAMERON, PUBLIC_SWIM, SA, 1830, 2000,
	CAMERON, PUBLIC_SWIM, SU, 1800, 1930,
	FOREST, FAMILY_SWIM, SU, 1800, 1930,
	FOREST, PUBLIC_SWIM, MO|WE|FR, 900, 1000,
	FOREST, PUBLIC_SWIM, TU|TH, 1105, 1300,
	FOREST, PUBLIC_SWIM, SA|SU, 1430, 1600,
	FOREST, PUBLIC_SWIM, SA, 1630, 1800,
	HALLMAN, PUBLIC_SWIM, FR, 930, 1100,
	HALLMAN, PUBLIC_SWIM, FR|SA|SU, 1530, 1700,
	HALLMAN, PUBLIC_SWIM, WE|FR, 1930, 2100,
	HALLMAN, FAMILY_SWIM, SU, 1400, 1530,
	HALLMAN, FAMILY_SWIM, WEEKENDS, 1900, 2030,
	SWIMPLEX, KIDS_SWIM, WEEKDAYS, 1030, 1130,
	SWIMPLEX, KIDS_SWIM, MO|TU, 1400, 1500,
	SWIMPLEX, KIDS_SWIM, WE, 1905, 2000,
	SWIMPLEX, KIDS_SWIM, SA, 1300, 1350,
	SWIMPLEX, KIDS_SWIM, SA, 1805, 1855,
	SWIMPLEX, KIDS_SWIM, SU, 800, 850,
	SWIMPLEX, KIDS_SWIM, SU, 1705, 1750,
	SWIMPLEX, PUBLIC_SWIM, WE|TH|FR, 1300, 1500,
	SWIMPLEX, FAMILY_SWIM, FR, 1905, 2000,
	SWIMPLEX, PUBLIC_SWIM, FR, 2000, 2130,
	SWIMPLEX, PUBLIC_SWIM, SA, 1405, 1600,
	SWIMPLEX, PUBLIC_SWIM, SA, 1905, 2030,
	SWIMPLEX, FAMILY_SWIM, SU, 1030, 1155,
	SWIMPLEX, PUBLIC_SWIM, SU, 1405, 1600,
	SWIMPLEX, FAMILY_SWIM, SU, 1835, 2000,
	SWIMPLEX, PARENT_TOT_SWIM, MO|FR, 845, 915,
	SWIMPLEX, PARENT_TOT_SWIM, TU, 1800, 1830,
	SWIMPLEX, PARENT_TOT_SWIM, WE, 1215, 1245,
	SWIMPLEX, PARENT_TOT_SWIM, TH, 1630, 1700,
	ACTON_LIONS, LEISURE_SWIM, MO|WE|FR, 1930, 2030,
	ACTON_LIONS, LEISURE_SWIM, WEEKENDS, 1400, 1530,
	GELLERT, FAMILY_SWIM, MO|WE|FR, 1100, 1200,
	GELLERT, FAMILY_SWIM, WEEKDAYS, 1200, 1300,
	GELLERT, LEISURE_SWIM, MO|WE|FR, 1930, 2030,
	GELLERT, FAMILY_SWIM, TU|TH, 1000, 1100,
	GELLERT, LEISURE_SWIM, WEEKENDS, 1400, 1530,
	GELLERT, FAMILY_SWIM, WEEKENDS, 1530, 1700,
	GELLERT, AFTER_SCHOOL_SWIM, WE, 1600, 1700,
	MILTON_LEISURE_CENTRE, FAMILY_SWIM, MO|WE|FR, 900, 1000,
	MILTON_LEISURE_CENTRE, FAMILY_SWIM, WEEKDAYS, 1200, 1330,
	MILTON_LEISURE_CENTRE, FAMILY_SWIM, TU|TH, 1745, 1900,
	MILTON_LEISURE_CENTRE, LEISURE_SWIM, TH, 1900, 2030,
	MILTON_LEISURE_CENTRE, LEISURE_SWIM, WEEKENDS, 1300, 1430,
	MILTON_LEISURE_CENTRE, LEISURE_SWIM, WEEKENDS, 1830, 2000,
	MILTON_SPORTS_CENTRE, FAMILY_SWIM, MO|WE|FR, 1000, 1100,
	MILTON_SPORTS_CENTRE, FAMILY_SWIM, MO|WE, 1830, 2000,
	MILTON_SPORTS_CENTRE, FAMILY_SWIM, TU|TH|FR|SA|SU, 1200, 1330,
	MILTON_SPORTS_CENTRE, LEISURE_SWIM, FR, 2000, 2130,
	MILTON_SPORTS_CENTRE, LEISURE_SWIM, WEEKENDS, 1530, 1700,

	OAKVILLE_CENTENNIAL, LEISURE_SWIM, TH, 1900, 2030,
	OAKVILLE_CENTENNIAL, LEISURE_SWIM, SA, 1430, 1600,
	OAKVILLE_CENTENNIAL, LEISURE_SWIM, SU, 1330, 1600,
	OAKVILLE_CENTENNIAL, LEISURE_SWIM, MO|WE, 1100, 1200,
	OAKVILLE_CENTENNIAL, LEISURE_SWIM, TU|TH|FR, 1400, 1500,
	OAKVILLE_CENTENNIAL, LEISURE_SWIM, FR, 1930, 2100,

	GLENABBEY, LEISURE_SWIM, TU, 1900, 2030,
	GLENABBEY, LEISURE_SWIM, WE|FR, 1930, 2100,
	GLENABBEY, LEISURE_SWIM, SA, 1430, 1600,
	GLENABBEY, LEISURE_SWIM, SU, 1400, 1530,
	GLENABBEY, LEISURE_SWIM, MO|TH, 1400, 1500,
	GLENABBEY, FAMILY_SWIM, SU, 1545, 1715,
	GLENABBEY, PARENT_TOT_SWIM, TU, 900, 1000,
	GLENABBEY, PARENT_TOT_SWIM, TU, 930, 1030,

	WHITE_OAKS, LEISURE_SWIM, SA, 1400, 1530,
	WHITE_OAKS, LEISURE_SWIM, SU, 1345, 1530,
	WHITE_OAKS, LEISURE_SWIM, WE, 1900, 2030,
	WHITE_OAKS, LEISURE_SWIM, FR, 2000, 2130,

	IROQUOIS_RIDGE, FAMILY_SWIM, TU|TH, 1800, 1900,
	IROQUOIS_RIDGE, FAMILY_SWIM, WE, 1900, 2000,
	IROQUOIS_RIDGE, FAMILY_SWIM, SU, 1745, 1845,
	IROQUOIS_RIDGE, LEISURE_SWIM, MO, 1930, 2100,
	IROQUOIS_RIDGE, LEISURE_SWIM, TU|TH, 1000, 1130,
	IROQUOIS_RIDGE, LEISURE_SWIM, WE|FR, 1330, 1500,
	IROQUOIS_RIDGE, LEISURE_SWIM, WEEKENDS, 1430, 1600,
	
	QUEEN_ELIZABETH, FAMILY_SWIM, FR|SA, 1800, 1930,
	QUEEN_ELIZABETH, LEISURE_SWIM, MO|WE, 1130, 1330,
	QUEEN_ELIZABETH, LEISURE_SWIM, TU, 1330, 1500,
	QUEEN_ELIZABETH, LEISURE_SWIM, FR, 1330, 1530,
	QUEEN_ELIZABETH, PARENT_TOT_SWIM, MO|WE, 930, 1030,
	QUEEN_ELIZABETH, A11Y_SWIM, TU, 1900, 2000,
	QUEEN_ELIZABETH, A11Y_SWIM, SU, 1530, 1630,

	ANCASTER, PUBLIC_SWIM, FR, 1930, 2030,
	ANCASTER, PUBLIC_SWIM, SA, 1415, 1600,
	ANCASTER, PARENT_TOT_SWIM, WEEKDAYS, 1100, 1145,
	ANCASTER, FAMILY_SWIM, SU, 1415, 1600,
	ANCASTER, FAMILY_SWIM, SU, 1415, 1600,

	BENNETTO, FAMILY_SWIM, MO, 1730, 1830,
	BENNETTO, FAMILY_SWIM, FR, 1800, 1900,
	BENNETTO, FAMILY_SWIM, SA, 1500, 1600,
	BENNETTO, PUBLIC_SWIM, MO|WE|FR|SA, 1900, 2000,
	BENNETTO, PUBLIC_SWIM, TU, 1830, 2000,
	BENNETTO, PUBLIC_SWIM, SA, 1300, 1455,

	CENTRAL_MEMORIAL, PUBLIC_SWIM, MO|WE, 1830, 2000,
	CENTRAL_MEMORIAL, PUBLIC_SWIM, TU|TH, 1830, 1930,
	CENTRAL_MEMORIAL, PUBLIC_SWIM, FR, 1900, 2100,
	CENTRAL_MEMORIAL, PUBLIC_SWIM, SA, 1330, 1600,
	CENTRAL_MEMORIAL, PUBLIC_SWIM, SA, 1300, 1500,
	CENTRAL_MEMORIAL, PARENT_TOT_SWIM, TH, 930, 1030,

	DALEWOOD, FAMILY_SWIM, FR, 1800, 1900,
	DALEWOOD, PUBLIC_SWIM, TU, 1830, 1930,
	DALEWOOD, PUBLIC_SWIM, WE, 1800, 1900,
	DALEWOOD, PUBLIC_SWIM, FR, 1900, 2000,
	DALEWOOD, PUBLIC_SWIM, SA, 1400, 1600,
	DALEWOOD, PUBLIC_SWIM, SA, 1700, 1900,

	DOMINIC_AGOSTINO, PUBLIC_SWIM, MO, 1845, 2000,
	DOMINIC_AGOSTINO, PUBLIC_SWIM, TU|TH, 1800, 1900,
	DOMINIC_AGOSTINO, PUBLIC_SWIM, WE, 1900, 2030,
	DOMINIC_AGOSTINO, PUBLIC_SWIM, FR, 1730, 1930,
	DOMINIC_AGOSTINO, PUBLIC_SWIM, WEEKENDS, 1415, 1545,
	DOMINIC_AGOSTINO, PARENT_TOT_SWIM, TU|WE|TH, 930, 1030,

	DUNDAS, PUBLIC_SWIM, TU, 1630, 1715,
	DUNDAS, PUBLIC_SWIM, TH, 1930, 2030,
	DUNDAS, PUBLIC_SWIM, FR, 1915, 2030,
	DUNDAS, PUBLIC_SWIM, SA, 1445, 1600,
	DUNDAS, PUBLIC_SWIM, SU, 1345, 1600,
	
	BREWSTER, PUBLIC_SWIM, TU, 1900, 2000,
	BREWSTER, PUBLIC_SWIM, TH, 1915, 2000,
	BREWSTER, PUBLIC_SWIM, SU, 1400, 1530,

	HILL_PARK, PUBLIC_SWIM, MO|FR, 1800, 1900,
	HILL_PARK, PUBLIC_SWIM, SA, 1400, 1530,
	HILL_PARK, PUBLIC_SWIM, FR, 1530, 1630,

	HUNTINGTON, PUBLIC_SWIM, MO|WE, 1900, 2000,
	HUNTINGTON, PUBLIC_SWIM, TU|TH, 1930, 2030,
	HUNTINGTON, PUBLIC_SWIM, FR, 1800, 2000,
	HUNTINGTON, PUBLIC_SWIM, SA, 1400, 1545,
	HUNTINGTON, PUBLIC_SWIM, SA, 1800, 1930,
	HUNTINGTON, PUBLIC_SWIM, SU, 1400, 1600,
	HUNTINGTON, PARENT_TOT_SWIM, FR, 900, 1000,
	
	JIMMY_THOMPSON, FAMILY_SWIM, WE, 1830, 1930,
	JIMMY_THOMPSON, PUBLIC_SWIM, MO|WE, 1930, 2030,
	JIMMY_THOMPSON, PUBLIC_SWIM, SA, 1300, 1500,

	NORMAN_PINKY, PUBLIC_SWIM, MO|FR, 1500, 1600,
	NORMAN_PINKY, PUBLIC_SWIM, MO|TH, 1930, 2030,
	NORMAN_PINKY, PUBLIC_SWIM, TU, 1930, 2015,
	NORMAN_PINKY, PUBLIC_SWIM, FR, 1900, 2000,
	NORMAN_PINKY, PUBLIC_SWIM, SA, 1400, 1600,
	NORMAN_PINKY, PUBLIC_SWIM, SU, 1300, 1430,
	NORMAN_PINKY, FAMILY_SWIM, MO|TU, 1830, 1930,
	NORMAN_PINKY, FAMILY_SWIM, WE, 1845, 1945,
	NORMAN_PINKY, FAMILY_SWIM, FR, 1800, 1900,
	NORMAN_PINKY, FAMILY_SWIM, SA, 1730, 1900,
	NORMAN_PINKY, FAMILY_SWIM, SU, 1430, 1600,

	RYERSON, FAMILY_SWIM, TU, 1900, 2000,
	RYERSON, PUBLIC_SWIM, MO|TH, 1630, 1730,
	RYERSON, PUBLIC_SWIM, FR, 1800, 1900,
	RYERSON, PUBLIC_SWIM, SA, 1330, 1530,

	ALLAN_MACNAB, PUBLIC_SWIM, MO, 1830, 1930,
	ALLAN_MACNAB, PUBLIC_SWIM, TU|TH, 1630, 1730,
	ALLAN_MACNAB, PUBLIC_SWIM, WEEKENDS, 1300, 1500,
	ALLAN_MACNAB, FAMILY_SWIM, WE, 1845, 1945,
	ALLAN_MACNAB, FAMILY_SWIM, FR, 1830, 1930,
	ALLAN_MACNAB, FAMILY_SWIM, SA, 1730, 1900,
	ALLAN_MACNAB, FAMILY_SWIM, SU, 1500, 1600,
	ALLAN_MACNAB, PARENT_TOT_SWIM, MO|FR, 900, 1000,

	WILFRID_LAURIER, PUBLIC_SWIM, FR, 1730, 1830,
	WILFRID_LAURIER, PUBLIC_SWIM, SA, 1245, 1400,

	WINSTON_CHURCHILL, PUBLIC_SWIM, MO, 1915, 2015,
	WINSTON_CHURCHILL, PUBLIC_SWIM, TU, 1945, 2030,
	WINSTON_CHURCHILL, PUBLIC_SWIM, WE|TH, 1930, 2015,
	WINSTON_CHURCHILL, PUBLIC_SWIM, FR, 1915, 2000,
	WINSTON_CHURCHILL, PUBLIC_SWIM, SA, 1330, 1545,

	STONEY_CREEK, PUBLIC_SWIM, MO|WE, 1600, 1655,
	STONEY_CREEK, PUBLIC_SWIM, TH, 1915, 2015,
	STONEY_CREEK, PUBLIC_SWIM, FR, 1845, 2000,
	STONEY_CREEK, PUBLIC_SWIM, WEEKENDS, 1230, 1355,
	STONEY_CREEK, PUBLIC_SWIM, SA, 1600, 1800,
	STONEY_CREEK, PARENT_TOT_SWIM, WEEKDAYS, 1015, 1115,

	VALLEY_PARK, PUBLIC_SWIM, WEEKDAYS, 1200, 1330,
	VALLEY_PARK, PUBLIC_SWIM, WE|FR|SA|SU, 1830, 2000,
	VALLEY_PARK, PUBLIC_SWIM, WEEKENDS, 1300, 1500,

	WESTMOUNT, PUBLIC_SWIM, WEEKDAYS, 630, 830,
	WESTMOUNT, PUBLIC_SWIM, WEEKDAYS, 1130, 1300,
	WESTMOUNT, PUBLIC_SWIM, MO, 1630, 1730,
	WESTMOUNT, PUBLIC_SWIM, TU|TH, 1800, 1930,
	WESTMOUNT, PUBLIC_SWIM, FR, 1900, 2030,
	WESTMOUNT, PUBLIC_SWIM, SA, 730, 800,
	WESTMOUNT, PUBLIC_SWIM, SA, 1330, 1500,
	WESTMOUNT, PUBLIC_SWIM, SU, 1315, 1530,
	WESTMOUNT, FAMILY_SWIM, WE|FR, 1630, 1730,
	WESTMOUNT, FAMILY_SWIM, SA, 1200, 1330,
	WESTMOUNT, FAMILY_SWIM, SU, 1800, 2000,
	WESTMOUNT, PARENT_TOT_SWIM, WEEKDAYS, 945, 1045,
};

int day_of_week()
{
	time_t t;
	struct tm *tmp;
	int dow;

	t = time(NULL);
	tmp = localtime(&t);

	return tmp->tm_wday;
}

int islocal(int placeid, int poolid)
{
	float dx = fabsf(placetab[placeid].lat - pooltab[poolid].lat);
	float dy = fabsf(placetab[placeid].lng - pooltab[poolid].lng);
	return dx < 0.2 && dy < 0.2;
}

int swimcompar(const void *p1, const void *p2)
{
	const struct swim *sp1 = p1;
	const struct swim *sp2 = p2;

	return (sp1->start - sp2->start);
}

int show_schedule(int placeid)
{
	int dow;
	int swimcnt;
	int i;

	printf("Content-type: text/html\n\n");

	dow = day_of_week();
	swimcnt = sizeof(swimtab) / sizeof(swimtab[0]);

	printf("<h1>%s <small>%s</small></h1>\n",
		dowtab[dow].print_name, placetab[placeid].print_name);

	puts("<table class='table table-bordered table-striped'>");

	qsort(swimtab, swimcnt, sizeof(swimtab[0]), swimcompar);

	for (i = 0; i < swimcnt; i++) {
		int poolid = swimtab[i].pool;
		if (islocal(placeid, poolid) && (swimtab[i].day_of_week & (1<<dow))) {
			int s = swimtab[i].start;
			int e = swimtab[i].end;
			int h = s / 100;
			int m = s % 100;
			int d = ((e/100-h) * 60) + (e%100-m);
			printf("<tr><th class='text-right'>%d:%02d %cm</th><td>"
			       "<div class='text-success'>%s</div>"
			       "<div class='text-muted'>%d min "
			       "(<a href='%s'>%s</a>)</div></td></tr>\n",
				h>12?h%12:h, m, h>=12?'p':'a',
				typetab[swimtab[i].type].print_name, d,
				anchortab[poolid].href,
				pooltab[swimtab[i].pool].print_name);
		}
	}
	puts("</table>");
}

int list_places()
{
	int i;
	int placecnt = sizeof(placetab) / sizeof(placetab[0]);

	printf("Content-type: text/html\n\n");

	puts("<ul class='nav nav-pills'>");
	for (i = 0; i < placecnt; i++) {
		printf("<li role='presentation'><a href='?q=%d'>%s</a></li>\n",
			placetab[i].id, placetab[i].print_name);
	}
	puts("</ul>");
}

int main (int argc, char *argv[])
{
	char *query;
	int placeid;
	int placecnt = sizeof(placetab) / sizeof(placetab[0]);

	query = getenv("QUERY_STRING");

	if (query && sscanf(query, "q=%d", &placeid) == 1 
		&& placeid >= 0 && placeid < placecnt)
		show_schedule(placeid);
	else
		list_places();
}

