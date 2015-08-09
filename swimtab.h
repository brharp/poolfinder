#pragma once
#include "pools.h"
#include "types.h"
#include "days.h"

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

	//CENTENNIAL, PUBLIC_SWIM, SU, 1830, 2000,

	LYON, PUBLIC_SWIM, DAILY, 1000, 1200,
	LYON, PUBLIC_SWIM, DAILY, 1300, 1600,
	LYON, PUBLIC_SWIM, DAILY, 1700, 2000,

	SPORTSPLEX, PUBLIC_SWIM, DAILY, 1400, 1555,
	SPORTSPLEX, PUBLIC_SWIM, FR, 1830, 1955,
	SPORTSPLEX, PUBLIC_SWIM, WEEKENDS, 1400, 1555,
	SPORTSPLEX, FAMILY_SWIM, WEEKENDS, 1305, 1555,
	SPORTSPLEX, FAMILY_SWIM, WE, 1045, 1145,
	SPORTSPLEX, PARENT_TOT_SWIM, TU|WE|TH, 1100, 1255,
	SPORTSPLEX, PARENT_TOT_SWIM, MO|FR, 1145, 1255,
	SPORTSPLEX, PARENT_TOT_SWIM, WEEKENDS, 1145, 1300,

	BREITHAUPT, PUBLIC_SWIM, FR, 1315, 1415,
	BREITHAUPT, PUBLIC_SWIM, FR, 1830, 2000,
	BREITHAUPT, PUBLIC_SWIM, WEEKENDS, 1300, 1500,
	BREITHAUPT, PUBLIC_SWIM, MO|WE, 1930, 2030,
	BREITHAUPT, FAMILY_SWIM, MO|TU|WE|TH, 1200, 1300,
	BREITHAUPT, FAMILY_SWIM, FR, 1430, 1600,

	CAMERON, PUBLIC_SWIM, WEEKDAYS, 1530, 1700,
	CAMERON, PUBLIC_SWIM, MO|WE|FR|SU, 1830, 2000,

	//FOREST (CLOSED AUG 4- NOV)

	HALLMAN, PUBLIC_SWIM, DAILY, 1530, 1700,
	HALLMAN, PUBLIC_SWIM, MO|WE, 1930, 2100,
	HALLMAN, PUBLIC_SWIM, FR, 1930, 2030,
	HALLMAN, FAMILY_SWIM, TU|TH|SA|SU, 1900, 2030,

	HARRY_CLASS, FAMILY_SWIM, DAILY, 1100, 1300,
	HARRY_CLASS, FAMILY_SWIM, WEEKDAYS, 1700, 1830,
	HARRY_CLASS, FAMILY_SWIM, WEEKENDS, 1700, 1930,
	HARRY_CLASS, FAMILY_SWIM, TU|WE|TH, 1930, 2030,
	HARRY_CLASS, PUBLIC_SWIM, DAILY, 1400, 1630,
	HARRY_CLASS, PUBLIC_SWIM, WEEKDAYS, 1800, 1930,

	IDLEWOOD, FAMILY_SWIM, DAILY, 1230, 1330,
	IDLEWOOD, FAMILY_SWIM, DAILY, 1700, 1800,
	IDLEWOOD, PUBLIC_SWIM, DAILY, 1400, 1630,
	IDLEWOOD, PUBLIC_SWIM, DAILY, 1800, 1930,

	WILSON, PUBLIC_SWIM, DAILY, 1400, 1630,
	WILSON, PUBLIC_SWIM, DAILY, 1800, 1930,

	SWIMPLEX, KIDS_SWIM, WEEKDAYS|SU, 1210, 1300,
	SWIMPLEX, KIDS_SWIM, WEEKENDS, 1705, 1750,
	SWIMPLEX, PUBLIC_SWIM, WEEKDAYS, 1330, 1545,
	SWIMPLEX, PUBLIC_SWIM, MO|WE, 1905, 2030,
	SWIMPLEX, PUBLIC_SWIM, FR, 2000, 2130,
	SWIMPLEX, PUBLIC_SWIM, SA, 1805, 2000,
	SWIMPLEX, PUBLIC_SWIM, WEEKENDS, 1330, 1600,
	SWIMPLEX, FAMILY_SWIM, FR, 1905, 2000,
	SWIMPLEX, FAMILY_SWIM, SU, 1805, 2000,

	ACTON_LIONS, LEISURE_SWIM, DAILY, 1400, 1530,
	ACTON_LIONS, LEISURE_SWIM, MO|WE|FR, 1930, 2030,

	GELLERT, FAMILY_SWIM, WEEKDAYS, 1200, 1300,
	GELLERT, FAMILY_SWIM, TU, 1930, 2000,
	GELLERT, FAMILY_SWIM, TH|FR, 1830, 1930,
	GELLERT, FAMILY_SWIM, WEEKENDS, 1430, 1600,
	GELLERT, LEISURE_SWIM, WEEKDAYS, 1400, 1530,
	GELLERT, LEISURE_SWIM, WEEKENDS, 1300, 1430,
	GELLERT, LEISURE_SWIM, MO|WE, 1930, 2030,

	MILTON_LEISURE_CENTRE, FAMILY_SWIM, WEEKDAYS, 1200, 1330,
	MILTON_LEISURE_CENTRE, FAMILY_SWIM, TU|TH, 1745, 1900,
	MILTON_LEISURE_CENTRE, LEISURE_SWIM, WEEKDAYS, 1530, 1700,
	MILTON_LEISURE_CENTRE, LEISURE_SWIM, WEEKENDS, 1300, 1430,
	MILTON_LEISURE_CENTRE, LEISURE_SWIM, TU|TH, 1900, 2030,
	MILTON_LEISURE_CENTRE, LEISURE_SWIM, WEEKENDS, 1830, 2000,

	MILTON_SPORTS_CENTRE, FAMILY_SWIM, MO|WE|FR, 1000, 1100,
	MILTON_SPORTS_CENTRE, FAMILY_SWIM, TH|TH, 900, 1000,
	MILTON_SPORTS_CENTRE, FAMILY_SWIM, MO|WE, 1830, 2000,
	MILTON_SPORTS_CENTRE, FAMILY_SWIM, TU|TH|FR|SA|SU, 1200, 1330,
	MILTON_SPORTS_CENTRE, LEISURE_SWIM, MO|WE|FR, 1930, 2100,
	MILTON_SPORTS_CENTRE, LEISURE_SWIM, WEEKENDS, 1530, 1700,

	MILTON_ROTARY, PUBLIC_SWIM, WEEKDAYS, 1030, 1800,
	MILTON_ROTARY, PUBLIC_SWIM, WEEKDAYS, 1000, 1800,

	OAKVILLE_CENTENNIAL, LEISURE_SWIM, MO|TH|FR, 1900, 2030,
	OAKVILLE_CENTENNIAL, LEISURE_SWIM, SA, 1400, 1600,
	OAKVILLE_CENTENNIAL, LEISURE_SWIM, SU, 1300, 1500,
	OAKVILLE_CENTENNIAL, COMBO_SWIM, WEEKDAYS, 1530, 1700,

	GLENABBEY, LEISURE_SWIM, WEEKDAYS, 1500, 1630,
	GLENABBEY, LEISURE_SWIM, MO|WE|FR, 1930, 2100,
	GLENABBEY, LEISURE_SWIM, SA|SU, 1445, 1615,
	GLENABBEY, FAMILY_SWIM, WEEKENDS, 1300, 1430,
	GLENABBEY, PARENT_TOT_SWIM, FR, 900, 1000,

	WHITE_OAKS, LEISURE_SWIM, DAILY, 1400, 1600,
	WHITE_OAKS, LEISURE_SWIM, TU|TH, 1900, 2030,
	WHITE_OAKS, COMBO_SWIM, WE|FR, 1900, 2130,
	WHITE_OAKS, COMBO_SWIM, SU, 1000, 1200,

	//IROQUOIS_RIDGE (CLOSED)
	
	QUEEN_ELIZABETH, LEISURE_SWIM, WEEKDAYS, 1500, 1630,
	QUEEN_ELIZABETH, LEISURE_SWIM, FR, 1930, 2100,
	QUEEN_ELIZABETH, LEISURE_SWIM, SA, 1030, 1200,
	QUEEN_ELIZABETH, LEISURE_SWIM, SU, 1330, 1500,
	QUEEN_ELIZABETH, FAMILY_SWIM, FR, 1800, 1930,
	QUEEN_ELIZABETH, FAMILY_SWIM, SA, 1330, 1500,
	QUEEN_ELIZABETH, FAMILY_SWIM, SU, 1515, 1645,
	QUEEN_ELIZABETH, COMBO_SWIM, MO, 1700, 1830,
	QUEEN_ELIZABETH, COMBO_SWIM, MO|WE, 1130, 1330,
	QUEEN_ELIZABETH, COMBO_SWIM, TU|TH, 1930, 2100,
	QUEEN_ELIZABETH, COMBO_SWIM, TU|TH, 1030, 1200,
	QUEEN_ELIZABETH, COMBO_SWIM, TH, 1900, 2030,

	ANCASTER, PUBLIC_SWIM, TU|TH, 1830, 2000,

	ANCASTER_LIONS, PUBLIC_SWIM, DAILY,    1300, 1600,
	ANCASTER_LIONS, PUBLIC_SWIM, WEEKDAYS, 1800, 1900,
	ANCASTER_LIONS, PARENT_TOT_SWIM, TU|TH, 1100, 1145,
	
	BENNETTO, FAMILY_SWIM, SA, 1500, 1600,
	BENNETTO, FAMILY_SWIM, 0, 1730, 1830,
	BENNETTO, FAMILY_SWIM, MO|WE|FR, 1800, 1900,
	BENNETTO, PUBLIC_SWIM, SA, 1300, 1455,
	BENNETTO, PUBLIC_SWIM, WEEKDAYS, 1315, 1500,
	BENNETTO, PUBLIC_SWIM, TU|TH, 1800, 2000,
	BENNETTO, PUBLIC_SWIM, MO|WE|FR, 1900, 2000,
	BENNETTO, PUBLIC_SWIM, 0, 1830, 2000,

	CENTRAL_MEMORIAL, PUBLIC_SWIM, SU, 1300, 1500,
	CENTRAL_MEMORIAL, PUBLIC_SWIM, WEEKDAYS|SA, 1330, 1600,
	CENTRAL_MEMORIAL, PUBLIC_SWIM, MO|WE|FR, 1830, 2000,
	CENTRAL_MEMORIAL, PUBLIC_SWIM, TU|TH, 1830, 1915,
	CENTRAL_MEMORIAL, PUBLIC_SWIM, 0, 1900, 2100,
	CENTRAL_MEMORIAL, PARENT_TOT_SWIM, TH, 930, 1030,

	CHEDOKE,	PUBLIC_SWIM,	WEEKDAYS,	1300, 	1900,
	CHEDOKE,	PUBLIC_SWIM,	WEEKENDS,	1200,	1600,

	CORONATION, PUBLIC_SWIM, WEEKDAYS, 1300, 1900,
	CORONATION, PUBLIC_SWIM, WEEKENDS, 1300, 1600,

	DALEWOOD, FAMILY_SWIM, 0, 1800, 1900,
	DALEWOOD, PUBLIC_SWIM, 0, 1830, 1930,
	DALEWOOD, PUBLIC_SWIM, 0, 1800, 1900,
	DALEWOOD, PUBLIC_SWIM, 0, 1900, 2000,
	DALEWOOD, PUBLIC_SWIM, 0, 1400, 1600,
	DALEWOOD, PUBLIC_SWIM, 0, 1700, 1900,

	DOMINIC_AGOSTINO, PUBLIC_SWIM, WEEKDAYS, 1300, 1500,
	DOMINIC_AGOSTINO, PUBLIC_SWIM, WEEKENDS, 1415, 1545,
	DOMINIC_AGOSTINO, PUBLIC_SWIM, MO,       1845, 2000,
	DOMINIC_AGOSTINO, PUBLIC_SWIM, TU|TH,    1800, 1900,
	DOMINIC_AGOSTINO, PUBLIC_SWIM, WE,       1900, 2030,
	DOMINIC_AGOSTINO, PUBLIC_SWIM, FR,       1730, 1930,
	DOMINIC_AGOSTINO, PARENT_TOT_SWIM, TU|WE|TH, 930, 1030,

	DUNDAS, PUBLIC_SWIM, WEEKENDS, 1345, 1530,
	DUNDAS, PUBLIC_SWIM, 0,        1345, 1600,
	DUNDAS, PUBLIC_SWIM, 0,        1445, 1600,
	DUNDAS, PUBLIC_SWIM, WEEKDAYS, 1500, 1600,
	DUNDAS, PUBLIC_SWIM, 0,        1630, 1715,
	DUNDAS, PUBLIC_SWIM, MO,       1700, 1900,
	DUNDAS, PUBLIC_SWIM, WE|TH,    1700, 1900,
	DUNDAS, PUBLIC_SWIM, TU,       1900, 2030,
	DUNDAS, PUBLIC_SWIM, 0,        1930, 2030,
	DUNDAS, PUBLIC_SWIM, 0,        1915, 2030,
	
	GREEN_ACRES,	PARENT_TOT_SWIM,	TU|TH,	1145,	1245,
	GREEN_ACRES,	PUBLIC_SWIM,	WEEKDAYS,	1300,	1900,
	GREEN_ACRES,	PUBLIC_SWIM,	WEEKENDS,	1300,	1600,

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

	MACQUARRIE, PUBLIC_SWIM, MO|WE|FR, 1930, 2030,
	MACQUARRIE, PUBLIC_SWIM, TU|TH|SA, 1400, 1600,
	MACQUARRIE, PUBLIC_SWIM, SU, 1430, 1630,
	MACQUARRIE, FAMILY_SWIM, SU, 1300, 1430,
	MACQUARRIE, PRESCHOOL_SWIM, SU, 1730, 1900,

	BREWER, PUBLIC_SWIM, WEEKENDS, 1430, 1530,
	BREWER, FAMILY_SWIM, MO|FR, 1300, 1400,
	BREWER, FAMILY_SWIM, SU, 1330, 1430,

	CANTERBURY, PUBLIC_SWIM, MO|WE, 1000, 1100,
	CANTERBURY, PUBLIC_SWIM, TU|TH, 1500, 1600,
	CANTERBURY, PUBLIC_SWIM, TU|TH, 1500, 1600,
	CANTERBURY, PUBLIC_SWIM, TU|TH|FR, 1830, 1930,
	CANTERBURY, PUBLIC_SWIM, SA, 1400, 1500,
	CANTERBURY, PUBLIC_SWIM, SU, 1300, 1430,

	KIRWAN, PUBLIC_SWIM, TU|TH, 1830, 2000,
	KIRWAN, PUBLIC_SWIM, WE, 1900, 2030,
	KIRWAN, PUBLIC_SWIM, FR, 1830, 1930,
	KIRWAN, PUBLIC_SWIM, SA, 1230, 1400,
	KIRWAN, PUBLIC_SWIM, SA, 1630, 1800,
	KIRWAN, PUBLIC_SWIM, SU, 1430, 1700,
	KIRWAN, FAMILY_SWIM, MO, 1800, 2000,
	KIRWAN, FAMILY_SWIM, FR, 1700, 1830,
	KIRWAN, FAMILY_SWIM, SU, 1230, 1430,

	DUPUIS,PUBLIC_SWIM,MO,1130,1330,
	DUPUIS,PUBLIC_SWIM,TU,1130,1330,
	DUPUIS,PUBLIC_SWIM,WE,1130,1330,
	DUPUIS,PUBLIC_SWIM,TH,1130,1330,
	DUPUIS,PUBLIC_SWIM,FR,1130,1330,
	DUPUIS,PUBLIC_SWIM,FR,1830,2000,
	DUPUIS,PUBLIC_SWIM,SA,1300,1530,
	DUPUIS,PUBLIC_SWIM,SA,1800,1930,
	DUPUIS,PUBLIC_SWIM,SU,1300,1530,
	DUPUIS, PRESCHOOL_SWIM, TU|TH, 930, 1030,
	DUPUIS, PRESCHOOL_SWIM, WEEKENDS, 1030, 1130,

	PURCELL,PUBLIC_SWIM,MO,600,1900,
	PURCELL,PUBLIC_SWIM,TU,1500,1700,
	PURCELL,PUBLIC_SWIM,WE,1800,1900,
	PURCELL,PUBLIC_SWIM,TH,1500,1700,
	PURCELL,PUBLIC_SWIM,TH,1700,1800,
	PURCELL,PUBLIC_SWIM,FR,1800,1900,
	PURCELL,PUBLIC_SWIM,SA,1300,1400,
	PURCELL,PUBLIC_SWIM,SU,1200,1400,

	KANATA,PUBLIC_SWIM,WEEKDAYS,1100,1300,
	KANATA,PUBLIC_SWIM,TH,1530,1700,
	KANATA,PUBLIC_SWIM,FR,1700,1830,
	KANATA,PUBLIC_SWIM,WEEKENDS,1130,1255,
	KANATA, PRESCHOOL_SWIM, MO|WE|TH, 930, 1100,
	KANATA, PRESCHOOL_SWIM, TU|TH, 1300, 1430,

	LOWERTOWN, PUBLIC_SWIM, FR, 1600, 1700,
	LOWERTOWN, PUBLIC_SWIM, WEEKENDS, 1330, 1445,
	LOWERTOWN, FAMILY_SWIM, FR, 1700, 1800,
	LOWERTOWN, FAMILY_SWIM, WEEKENDS, 1445, 1600,

	MINTO, PUBLIC_SWIM, WEEKDAYS, 1100, 1300,
	MINTO, PUBLIC_SWIM, TU, 1800, 2000,
	MINTO, PUBLIC_SWIM, FR|SA, 1900, 2100,
	MINTO, PUBLIC_SWIM, SA, 1330, 1800,
	MINTO, PUBLIC_SWIM, SU, 1100, 1500,
	MINTO, PRESCHOOL_SWIM, MO|WE, 930, 1100,
	MINTO, PRESCHOOL_SWIM, TU|TH|FR, 1330, 1500,

	NAPEAN, PUBLIC_SWIM, WEEKDAYS, 1130, 1300,
	NAPEAN, PUBLIC_SWIM, WEEKENDS, 1300, 1500,
	NAPEAN, PRESCHOOL_SWIM, TU|TH, 900, 1000,
	NAPEAN, PRESCHOOL_SWIM, WEEKENDS, 1000, 1100,

	PINECREST, PUBLIC_SWIM, WEEKENDS, 1300, 1500,
	PINECREST, PRESCHOOL_SWIM, TU|TH, 1000, 1100,

	PLANT, PUBLIC_SWIM, WEEKDAYS, 1030, 1300,
	PLANT, PUBLIC_SWIM, MO|TU|WE|TH, 1600, 1700,
	PLANT, PUBLIC_SWIM, TH, 1800, 1930,
	PLANT, PUBLIC_SWIM, FR, 1600, 1800,
	PLANT, PUBLIC_SWIM, FR, 1800, 2000,
	PLANT, PUBLIC_SWIM, WEEKENDS, 1330, 1600,
	
	FRIEL, PUBLIC_SWIM, WEEKDAYS, 1030, 1300, 
	FRIEL, PUBLIC_SWIM, SA, 1600, 1800, 
	FRIEL, PUBLIC_SWIM, SU, 1100, 1300, 
	FRIEL, PRESCHOOL_SWIM, TU|TH, 945, 1030,

	RICHCRAFT, PUBLIC_SWIM, WEEKDAYS, 1130, 1300,
	RICHCRAFT, PUBLIC_SWIM, MO|TU|WE|TH, 1900, 2100,
	RICHCRAFT, PUBLIC_SWIM, SA|SU, 1300, 1600,
	RICHCRAFT, PRESCHOOL_SWIM, MO|WE|FR, 830, 1000,
	RICHCRAFT, PRESCHOOL_SWIM, TU|TH, 1400, 1600,

	SAWMILL, PUBLIC_SWIM, TU|TH, 830, 1000,
	SAWMILL, PUBLIC_SWIM, WEEKENDS, 1300, 1500,
	SAWMILL, PUBLIC_SWIM, SU, 1830, 2000,

	STLAURENT, PUBLIC_SWIM, FR, 2000, 2100,
	STLAURENT, PUBLIC_SWIM, WEEKENDS, 1500, 1630,
	STLAURENT, PUBLIC_SWIM, FR, 1900, 2000,
	STLAURENT, PUBLIC_SWIM, WEEKENDS, 1330, 1500,

	BAKER, PUBLIC_SWIM, WEEKDAYS, 1130, 1300,
	BAKER, PUBLIC_SWIM, MO|WE, 1400, 1500,
	BAKER, PUBLIC_SWIM, TU|TH|FR, 930, 1030,
	BAKER, PUBLIC_SWIM, WE|FR, 1800, 1930,
	BAKER, PUBLIC_SWIM, WEEKENDS, 1300, 1600,
	BAKER, PUBLIC_SWIM, WEEKENDS, 1830, 2000,

	RHODES, PARENT_TOT_SWIM, MO|WE|FR, 730, 945,
	RHODES, PARENT_TOT_SWIM, WEEKDAYS|SU, 1115, 1300,
	RHODES, PARENT_TOT_SWIM, MO|TU|TH, 1415, 1530,
	RHODES, PARENT_TOT_SWIM, SA, 900, 1030,
	RHODES, PUBLIC_SWIM, FR, 1930, 2100,
	RHODES, PUBLIC_SWIM, WEEKENDS, 1300, 1500,
	RHODES, PUBLIC_SWIM, SA, 1800, 2000,

	GRETZKY, FAMILY_SWIM, SU, 1230, 1400,
	GRETZKY, PUBLIC_SWIM, WEEKENDS, 1400, 1600,
	GRETZKY, FAMILY_SWIM, WEEKDAYS, 900, 1000,
	GRETZKY, FAMILY_SWIM, WEEKDAYS, 1130, 1330,
	GRETZKY, FAMILY_SWIM, WEEKDAYS, 1515, 1630,
	GRETZKY, PUBLIC_SWIM, TU|TH, 1900, 2030,
	GRETZKY, PUBLIC_SWIM, FR, 1930, 2130,

	ELGIN, PARENT_TOT_SWIM, TU|TH, 1100, 1145,
	ELGIN, PARENT_TOT_SWIM, FR, 945, 1030,
	ELGIN, FAMILY_SWIM, MO, 1900, 2000,
	ELGIN, FAMILY_SWIM, FR, 1830, 1930,
	ELGIN, PUBLIC_SWIM, WEEKENDS, 1300, 1430,

	TIM_HORTON, PARENT_TOT_SWIM, WEEKDAYS, 1100, 1200,
	TIM_HORTON, FAMILY_SWIM, WEEKENDS, 1200, 1300,
	TIM_HORTON, PUBLIC_SWIM, MO|WE|SU, 1830, 2000,
	TIM_HORTON, PUBLIC_SWIM, WEEKENDS, 1330, 1500,

	UXPOOL, FAMILY_SWIM, MO|WE|FR, 1030, 1130,
	UXPOOL, FAMILY_SWIM, TU|TH, 1300, 1400,
	UXPOOL, FAMILY_SWIM, WEEKENDS, 1300, 1500,
	UXPOOL, FAMILY_SWIM, TU|TH, 1930, 2030,

	COMPLEX, PUBLIC_SWIM, WEEKDAYS, 1600, 1700,
	COMPLEX, PUBLIC_SWIM, TU|TH|FR|SA|SU, 1900, 2100,
	COMPLEX, PUBLIC_SWIM, WEEKENDS, 1300, 1600,
	COMPLEX, A11Y_SWIM, WE, 900, 1100,
	COMPLEX, PARENT_TOT_SWIM, MO|TU|WE|TH, 1100, 1300,
	COMPLEX, PARENT_TOT_SWIM, FR, 900, 1300,
	COMPLEX, PARENT_TOT_SWIM, WEEKDAYS, 1500, 1600,

	DUNBARTON, PUBLIC_SWIM, MO|WE, 1900, 2000,
	DUNBARTON, PUBLIC_SWIM, SU, 1400, 1600,

	COURTICE, PUBLIC_SWIM, WEEKDAYS, 730, 900,
	COURTICE, PUBLIC_SWIM, WEEKDAYS, 1030, 1130,
	COURTICE, PUBLIC_SWIM, TH, 1900, 2030,
	COURTICE, PUBLIC_SWIM, WEEKENDS, 1430, 1600,
	COURTICE, PUBLIC_SWIM, SA, 1830, 2000,
	
	NEWCASTLE, PUBLIC_SWIM, WEEKDAYS, 1030, 1130,
	NEWCASTLE, PUBLIC_SWIM, TU|FR, 1300, 1400,
	NEWCASTLE, PUBLIC_SWIM, FR, 1900, 2100,
	NEWCASTLE, A11Y_SWIM, WE, 1315, 1415,
	NEWCASTLE, PUBLIC_SWIM, WEEKENDS, 1400, 1600,
	NEWCASTLE, PUBLIC_SWIM, WEEKENDS, 1830, 2030,

	OSHAWA_CENTENNIAL, PARENT_TOT_SWIM, MO|TU|TH|FR, 1100, 1300,
	OSHAWA_CENTENNIAL, PARENT_TOT_SWIM, WE, 1130, 1300,
	OSHAWA_CENTENNIAL, PARENT_TOT_SWIM, SA, 1300, 1400,
	OSHAWA_CENTENNIAL, PARENT_TOT_SWIM, SU, 1230, 1400,
	OSHAWA_CENTENNIAL, PUBLIC_SWIM, WEEKDAYS, 1300, 1630,
	OSHAWA_CENTENNIAL, PUBLIC_SWIM, MO|FR, 1900, 2100,
	OSHAWA_CENTENNIAL, PUBLIC_SWIM, WEEKENDS, 1400, 1630,
	OSHAWA_CENTENNIAL, PUBLIC_SWIM, WEEKENDS, 1830, 2000,

	DONEVAN, PUBLIC_SWIM, MO|FR, 1300, 1500,
	DONEVAN, PUBLIC_SWIM, TU, 2000, 2100,
	DONEVAN, PUBLIC_SWIM, TH, 1930, 2100,
	DONEVAN, PUBLIC_SWIM, FR, 2000, 2130,
	DONEVAN, PUBLIC_SWIM, SA, 1400, 1600,
	DONEVAN, PUBLIC_SWIM, SU, 1330, 1500,
	DONEVAN, FAMILY_SWIM, SA, 1230, 1400,

	LEGENDS, FAMILY_SWIM, WEEKDAYS, 1030, 1230, 
	LEGENDS, PUBLIC_SWIM, WEEKDAYS, 700, 900, 
	LEGENDS, PUBLIC_SWIM, MO, 2000, 2100, 
	LEGENDS, PUBLIC_SWIM, TU, 1400, 1500, 
	LEGENDS, PUBLIC_SWIM, TH, 1300, 1500, 
	LEGENDS, PUBLIC_SWIM, FR, 1430, 1700, 
	LEGENDS, PUBLIC_SWIM, SU, 1900, 2000, 
	LEGENDS, PUBLIC_SWIM, TU|TH, 1930, 2100, 
	LEGENDS, PUBLIC_SWIM, FR, 1900, 2100, 
	LEGENDS, PUBLIC_SWIM, WEEKENDS, 1345, 1600, 
	LEGENDS, PUBLIC_SWIM, SA, 1815, 2000, 
	LEGENDS, PUBLIC_SWIM, SA, 1715, 1900, 

	SOUTH_OSHAWA, PUBLIC_SWIM, MO|TU|WE|FR, 900, 1630,
	SOUTH_OSHAWA, PUBLIC_SWIM, MO|FR|SA, 2000, 2100,
	SOUTH_OSHAWA, PUBLIC_SWIM, TH, 1030, 1630,
	SOUTH_OSHAWA, PUBLIC_SWIM, WEEKENDS, 1200, 1330,
	SOUTH_OSHAWA, PUBLIC_SWIM, MO|FR|SA, 1830, 2000,
	SOUTH_OSHAWA, PUBLIC_SWIM, WE, 1830, 2100,
	SOUTH_OSHAWA, PUBLIC_SWIM, WEEKENDS, 1330, 1530,

	KNOX, PUBLIC_SWIM, SA, 1330, 1500,

	ARTILLERY_PARK, FAMILY_SWIM, WEEKDAYS|SU, 1130, 1325,
	ARTILLERY_PARK, FAMILY_SWIM, MO|TU|WE, 1930, 2125,
	ARTILLERY_PARK, FAMILY_SWIM, SA, 1130, 1255,
	ARTILLERY_PARK, LEISURE_SWIM, MO|TU|WE|FR, 1530, 1655,
	ARTILLERY_PARK, LEISURE_SWIM, TH, 1530, 1855,
	ARTILLERY_PARK, LEISURE_SWIM, TH, 1900, 2025,
	ARTILLERY_PARK, LEISURE_SWIM, FR, 2000, 2125,
	ARTILLERY_PARK, LEISURE_SWIM, WEEKENDS, 1400, 1555,
	ARTILLERY_PARK, PARENT_TOT_SWIM, WEEKDAYS, 900, 955,
	ARTILLERY_PARK, PARENT_TOT_SWIM, WEEKENDS, 1030, 1125,

	MENNINGA, FAMILY_SWIM, WEEKDAYS, 900, 1045,
	MENNINGA, FAMILY_SWIM, MO|WE|TH, 1600, 1700,
	MENNINGA, FAMILY_SWIM, SU, 900, 1015,
	MENNINGA, PUBLIC_SWIM, WEEKDAYS, 1100, 1245,
	MENNINGA, PUBLIC_SWIM, WEEKENDS, 1300, 1500,
	MENNINGA, PUBLIC_SWIM, TU, 1600, 1700,
	MENNINGA, PUBLIC_SWIM, TU|FR, 1910, 2100,
	MENNINGA, PUBLIC_SWIM, SA, 1700, 1900,

	LINDSAY, PUBLIC_SWIM, MO|WE, 1100, 1200,
	LINDSAY, PUBLIC_SWIM, FR, 1030, 1130,
	LINDSAY, PUBLIC_SWIM, SU, 1300, 1400,
	LINDSAY, PUBLIC_SWIM, TU|TH, 1430, 1530,
	LINDSAY, PUBLIC_SWIM, WE, 1900, 2000,
	LINDSAY, PUBLIC_SWIM, SA, 1230, 1400,
	LINDSAY, PUBLIC_SWIM, WEEKENDS, 1400, 1600,
	LINDSAY, PUBLIC_SWIM, MO, 1900, 2030,
	LINDSAY, PUBLIC_SWIM, WE, 2000, 2100,
	LINDSAY, PUBLIC_SWIM, FR, 1900, 2000,

	FORBERT, PUBLIC_SWIM, TU|TH, 1000, 1100,
	FORBERT, PUBLIC_SWIM, FR, 1030, 1130,
	FORBERT, PUBLIC_SWIM, WEEKENDS, 1400, 1600,
	FORBERT, PUBLIC_SWIM, MO|FR, 1800, 1900,
	FORBERT, PUBLIC_SWIM, WE, 1900, 2000,

	KENORA_REC, LEISURE_SWIM, WEEKDAYS, 700, 830,
	KENORA_REC, LEISURE_SWIM, WEEKDAYS, 1230, 1400,
	KENORA_REC, LEISURE_SWIM, MO|TU|WE|TH, 1500, 1700,
	KENORA_REC, LEISURE_SWIM, FR, 1500, 1730,
	KENORA_REC, LEISURE_SWIM, TU|TH, 1930, 2030,
	KENORA_REC, FAMILY_SWIM, SA, 1100, 1230,
	KENORA_REC, PUBLIC_SWIM, SU, 1300, 1500,
	KENORA_REC, PUBLIC_SWIM, FR, 1830, 2030,
	KENORA_REC, PUBLIC_SWIM, SA, 1730, 2000,
	KENORA_REC, PARENT_TOT_SWIM, SU, 1030, 1500,
	KENORA_REC, PARENT_TOT_SWIM, MO|TU|WE|TH, 700, 1630,
	KENORA_REC, PARENT_TOT_SWIM, FR, 700, 2030,
	KENORA_REC, PARENT_TOT_SWIM, MO|TU|WE|TH, 1830, 2030,
	KENORA_REC, PARENT_TOT_SWIM, SA, 800, 1230,
	KENORA_REC, PARENT_TOT_SWIM, SA, 1730, 2000,

	PERTH_INDOOR, PARENT_TOT_SWIM, TU, 1100, 1200,
	PERTH_INDOOR, PUBLIC_SWIM, SA, 1300, 1500,
	PERTH_INDOOR, FAMILY_SWIM, SA, 1500, 1600,
	PERTH_INDOOR, PUBLIC_SWIM, MO|WE, 1800, 1900,

	CARLETON_POOL, PUBLIC_SWIM, WEEKENDS, 1300, 1430,
	CARLETON_POOL, PUBLIC_SWIM, MO, 1830, 2000,
	CARLETON_POOL, PUBLIC_SWIM, TU, 1115, 1200,
	CARLETON_POOL, PUBLIC_SWIM, FR, 1000, 1115,
	CARLETON_POOL, PUBLIC_SWIM, FR, 1900, 2030,
	CARLETON_POOL, LEISURE_SWIM, MO|WE, 1030, 1200,

	CANADA_GAMES, PARENT_TOT_SWIM, MO|WE|FR, 1100, 1200,
	CARLING_HEIGHTS, PARENT_TOT_SWIM, MO|WE|FR, 1000, 1100,
	SOUTH_LONDON, PARENT_TOT_SWIM, MO|WE|FR, 1430, 1530,
	SOUTH_LONDON, PARENT_TOT_SWIM, TU|WE|TH, 1000, 1100,
	CARLING_HEIGHTS, FAMILY_SWIM, SU, 1330, 1500,
	SOUTH_LONDON, FAMILY_SWIM, SU, 1300, 1430,
	CANADA_GAMES, LEISURE_SWIM, MO|WE|FR, 1930, 2100,
	CANADA_GAMES, LEISURE_SWIM, SA, 1400, 1630,
	CANADA_GAMES, LEISURE_SWIM, SU, 1500, 1700,
	CARLING_HEIGHTS, LEISURE_SWIM, MO|TU|TH|FR, 1930, 2100,
	CARLING_HEIGHTS, LEISURE_SWIM, SA, 1400, 1630,
	CARLING_HEIGHTS, LEISURE_SWIM, SU, 1500, 1700,
	SOUTH_LONDON, LEISURE_SWIM, MO|TU|WE|FR, 1915, 2100,
	SOUTH_LONDON, LEISURE_SWIM, TH, 1530, 1700,
	SOUTH_LONDON, LEISURE_SWIM, SA, 1400, 1630,
	SOUTH_LONDON, LEISURE_SWIM, SU, 1430, 1630,
	SOUTH_LONDON, LEISURE_SWIM, SA|SU, 1800, 2000,

	HUNTSVILLE_POOL, PUBLIC_SWIM, MO|TU|TH|FR, 630, 900,
	HUNTSVILLE_POOL, PUBLIC_SWIM, WE, 700, 900,
	HUNTSVILLE_POOL, LEISURE_SWIM, WE, 1000, 1100,
	HUNTSVILLE_POOL, PARENT_TOT_SWIM, WEEKDAYS, 1200, 1300,
	HUNTSVILLE_POOL, PARENT_TOT_SWIM, WEEKENDS, 1300, 1400,
	HUNTSVILLE_POOL, LEISURE_SWIM, WEEKENDS, 1400, 1600,
	HUNTSVILLE_POOL, LEISURE_SWIM, WE, 1900, 2030,
	HUNTSVILLE_POOL, FAMILY_SWIM, FR, 1800, 1900,
	HUNTSVILLE_POOL, LEISURE_SWIM, FR, 1900, 2030,
	HUNTSVILLE_POOL, FAMILY_SWIM, SU, 1830, 2000,
	
	NIPISSING, PARENT_TOT_SWIM, MO|WE|FR, 1130, 1300,
	NIPISSING, PARENT_TOT_SWIM, TH, 900, 1000,
	NIPISSING, FAMILY_SWIM, WE, 1830, 1930,
	NIPISSING, PUBLIC_SWIM, TU|TH|FR, 1830, 1930,
	NIPISSING, PUBLIC_SWIM, WEEKENDS, 1200, 1500,

	NORTH_BAY_YMCA, PUBLIC_SWIM, MO|TU|WE|FR, 1000, 1100,
	NORTH_BAY_YMCA, PUBLIC_SWIM, MO|TU|TH|FR, 1300, 1400,
	NORTH_BAY_YMCA, FAMILY_SWIM, WEEKDAYS, 1600, 1630,
	NORTH_BAY_YMCA, FAMILY_SWIM, TH, 1000, 1045,
	NORTH_BAY_YMCA, PUBLIC_SWIM, MO|WE|FR, 1945, 2030,

	NORTHUMBERLAND_YMCA, PUBLIC_SWIM, WEEKENDS, 1300, 1700,
	NORTHUMBERLAND_YMCA, PUBLIC_SWIM, MO, 1200, 1300,
	NORTHUMBERLAND_YMCA, PUBLIC_SWIM, MO, 1400, 1500,
	NORTHUMBERLAND_YMCA, PUBLIC_SWIM, TU, 1400, 1515,
	NORTHUMBERLAND_YMCA, PUBLIC_SWIM, WE, 1200, 1330,
	NORTHUMBERLAND_YMCA, PUBLIC_SWIM, TH|FR, 1200, 1515,
	NORTHUMBERLAND_YMCA, PUBLIC_SWIM, TH, 1900, 2200,
	NORTHUMBERLAND_YMCA, PUBLIC_SWIM, FR, 1930, 2200,

	STRATFORD_YMCA, PUBLIC_SWIM, MO|TU|WE|TH, 1830, 2030, 
	STRATFORD_YMCA, PUBLIC_SWIM, FR, 1600, 1930, 
	STRATFORD_YMCA, PUBLIC_SWIM, SA, 1000, 1230, 
	STRATFORD_YMCA, PUBLIC_SWIM, WEEKENDS, 1400, 1600, 

	PETERBOROUGH_SWC, PUBLIC_SWIM, MO|TU|WE|FR, 1230, 1330,
	PETERBOROUGH_SWC, PUBLIC_SWIM, WEEKENDS, 1400, 1600,
	PETERBOROUGH_SWC, PUBLIC_SWIM, MO|TU|WE|TH, 1900, 2000,
	PETERBOROUGH_SWC, PUBLIC_SWIM, FR, 1830, 2000,

	CAWTHRA, FUN_SWIM, MO|TU|TH|FR, 1430, 1600, 
	CAWTHRA, FUN_SWIM, MO|FR, 1900, 2030, 
	CAWTHRA, FUN_SWIM, WEEKENDS, 1300, 1430, 

	CLARKSON, FUN_SWIM, MO|TU|TH|FR, 1405, 1525,
	CLARKSON, FUN_SWIM, MO|TU|TH|FR, 1905, 2025,
	CLARKSON, PARENT_TOT_SWIM, TU|TH, 1905, 2025,
	CLARKSON, PARENT_TOT_SWIM, SU, 1100, 1155,
	CLARKSON, FUN_SWIM, SU, 1305, 1430,

	MEADOWS, FUN_SWIM, MO|FR, 1215, 1345,
	MEADOWS, FUN_SWIM, MO|FR, 2000, 2130,
	MEADOWS, PARENT_TOT_SWIM, TU|TH, 1300, 1400,
	MEADOWS, FUN_SWIM, TU|TH, 1900, 2030,
	MEADOWS, FUN_SWIM, WEEKENDS, 1300, 1430,

	MCKECHNIE, LEISURE_SWIM, MO|TH|FR, 630, 855,
	MCKECHNIE, PARENT_TOT_SWIM, MO|TU|TH|FR, 1135, 1255,
	MCKECHNIE, PARENT_TOT_SWIM, MO|FR, 1205, 1255,
	MCKECHNIE, LEISURE_SWIM, MO|TH, 1205, 1255,
	MCKECHNIE, FUN_SWIM, MO|TU|TH|FR, 1505, 1625,
	MCKECHNIE, FUN_SWIM, TH, 1935, 2055,
	MCKECHNIE, FUN_SWIM, MO|TU|TH|FR, 2005, 2125,
	MCKECHNIE, LEISURE_SWIM, MO, 2030, 2130,
	MCKECHNIE, LEISURE_SWIM, TU|TH|FR, 2100, 2200,
	MCKECHNIE, LEISURE_SWIM, MO|TU|TH, 2135, 2230,
	MCKECHNIE, LEISURE_SWIM, TU, 1135, 1255,
	MCKECHNIE, LEISURE_SWIM, SA, 630, 755,
	MCKECHNIE, LEISURE_SWIM, SA, 730, 825,
	MCKECHNIE, PARENT_TOT_SWIM, SA|SU, 1205, 1255,
	MCKECHNIE, LEISURE_SWIM, SA|SU, 1205, 1255,
	MCKECHNIE, LEISURE_SWIM, SA|SU, 1235, 1325,
	MCKECHNIE, FUN_SWIM, SA|SU, 1305, 1430,
	MCKECHNIE, FUN_SWIM, SA|SU, 1335, 1455,
	
	HURON, PARENT_TOT_SWIM, MO|FR, 1000, 1100,
	HURON, LEISURE_SWIM, MO|TU|TH|FR, 1135, 1230,
	HURON, FUN_SWIM, MO|TU|TH|FR, 1445, 1615,
	HURON, FUN_SWIM, MO|FR, 1935, 2100,
	HURON, FUN_SWIM, WEEKENDS, 1335, 1630,

	MALTON, LEISURE_SWIM, MO, 1335, 1430,
	MALTON, FUN_SWIM, MO|TU|TH|FR, 1530, 1655,
	MALTON, FUN_SWIM, MO|FR, 2005, 2130,
	MALTON, LEISURE_SWIM, TU|TH, 2050, 2145,
	MALTON, LEISURE_SWIM, FR, 635, 800,
	MALTON, FUN_SWIM, SA, 1505, 1625,
	MALTON, LEISURE_SWIM, SU, 1235, 1330,
	MALTON, FUN_SWIM, SU, 1335, 1500,

	VALLEY, PARENT_TOT_SWIM, MO|WE, 1230, 1330,
	VALLEY, FUN_SWIM, MO|TU|WE|TH|FR, 1600, 1725,
	VALLEY, FUN_SWIM, MO|WE|FR, 1900, 2000,
	VALLEY, FUN_SWIM, WEEKENDS, 1335, 1500,

	RIVER_GROVE, LEISURE_SWIM, MO|WE|FR, 1205, 1300,
	RIVER_GROVE, FUN_SWIM, WEEKDAYS, 1405, 1525,
	RIVER_GROVE, FUN_SWIM, WEEKDAYS, 1905, 2025,
	RIVER_GROVE, FUN_SWIM, WEEKENDS, 1305, 1425,
	RIVER_GROVE, FAMILY_SWIM, SU, 1435, 1555,
	
	SOUTH_COMMON, FUN_SWIM, WEEKDAYS, 1435, 1555,
	SOUTH_COMMON, FUN_SWIM, WEEKDAYS, 1905, 2025,
	SOUTH_COMMON, FUN_SWIM, WEEKENDS, 1335, 1455,
	
	SAC, PUBLIC_SWIM, DAILY, 1310, 1500,
	SAC, PUBLIC_SWIM, MO|TU|WE|TH, 1835, 2000,
	SAC, PUBLIC_SWIM, FR, 1830, 2000,

	PALLADINI, LEISURE_SWIM, WEEKDAYS, 1400, 1615,
	PALLADINI, LEISURE_SWIM, SA, 1230, 1315,
	PALLADINI, LEISURE_SWIM, SU, 1200, 1415,
	PALLADINI, LEISURE_SWIM, TU, 2000, 2200,

	CHANCELLOR, PARENT_TOT_SWIM, WEEKDAYS, 1230, 1330,
	CHANCELLOR, LEISURE_SWIM, WEEKDAYS, 1330, 1530,
	CHANCELLOR, LEISURE_SWIM, SA, 1300, 1500,
	CHANCELLOR, LEISURE_SWIM, MO|WE, 1930, 2100,

	CLARK, LEISURE_SWIM, WEEKDAYS, 1405, 1600,
	CLARK, LEISURE_SWIM, WEEKENDS, 1230, 1530,
	CLARK, LEISURE_SWIM, FR, 1530, 1800,
	CLARK, LEISURE_SWIM, MO|TU|WE|TH, 2005, 2130,

	BULFON, LEISURE_SWIM, DAILY, 1400, 1530,

	WILLIAMS, PARENT_TOT_SWIM, DAILY, 1100, 1300,
	WILLIAMS, PARENT_TOT_SWIM, FR, 1700, 1900,
	WILLIAMS, LEISURE_SWIM, DAILY, 1330, 1600,
	WILLIAMS, LEISURE_SWIM, TU|WE, 2000, 2100,

	MAPLE, PARENT_TOT_SWIM, WEEKENDS, 1130, 1300,
	MAPLE, LEISURE_SWIM, MO|TU|WE|TH, 1445, 1630,
	MAPLE, LEISURE_SWIM, FR, 1445, 1700,
	MAPLE, LEISURE_SWIM, SA, 1300, 1530,
	MAPLE, LEISURE_SWIM, SU, 1430, 1630,
	MAPLE, LEISURE_SWIM, MO|WE, 1930, 2030,

	THORNHILL, PARENT_TOT_SWIM, WEEKDAYS, 1205, 1300,
	THORNHILL, PARENT_TOT_SWIM, WEEKENDS, 1230, 1400,
	THORNHILL, LEISURE_SWIM, MO|TU|WE|TH|SA|SU, 1400, 1600,
	THORNHILL, LEISURE_SWIM, FR, 1600, 1800,
	THORNHILL, LEISURE_SWIM, TU|TH, 1940, 2035,

	VELLORE, PARENT_TOT_SWIM, MO|WE|FR|SA|SU, 1200, 1330,
	VELLORE, LEISURE_SWIM, DAILY, 1330, 1530,

	WOODBRIDGE, LEISURE_SWIM, WEEKDAYS, 1530, 1630,
	WOODBRIDGE, PARENT_TOT_SWIM, WEEKDAYS, 1430, 1530,
	
	ANGUS_GLEN, PARENT_TOT_SWIM, MO|WE, 2100, 2215,
	ANGUS_GLEN, PARENT_TOT_SWIM, TU|TH|SA|SU, 730, 900,
	ANGUS_GLEN, PARENT_TOT_SWIM, TU|TH|FR, 1130, 1300,
	ANGUS_GLEN, PARENT_TOT_SWIM, SU, 2000, 2130,
	ANGUS_GLEN, LEISURE_SWIM, MO|TU|WE|TH, 1400, 1530,
	ANGUS_GLEN, LEISURE_SWIM, TU|TH|FR, 2000, 2130,
	ANGUS_GLEN, LEISURE_SWIM, FR, 1330, 1530,
	ANGUS_GLEN, LEISURE_SWIM, SA, 1200, 1430,
	ANGUS_GLEN, LEISURE_SWIM, SA, 1900, 2100,
	ANGUS_GLEN, LEISURE_SWIM, SU, 1430, 1700,

	MARKHAM_CEN, PARENT_TOT_SWIM, WEEKDAYS, 830, 1115,
	MARKHAM_CEN, PARENT_TOT_SWIM, MO|WE|FR, 1400, 1530,
	MARKHAM_CEN, PARENT_TOT_SWIM, TU|TH, 1130, 1300,
	MARKHAM_CEN, PARENT_TOT_SWIM, WEEKENDS, 1200, 1330,
	MARKHAM_CEN, LEISURE_SWIM, MO|WE|FR, 1130, 1300,
	MARKHAM_CEN, LEISURE_SWIM, MO|WE|FR, 1600, 1730,
	MARKHAM_CEN, LEISURE_SWIM, TU|TH, 1400, 1530,

	CORNELL, PARENT_TOT_SWIM, MO|WE|FR|SA|SU, 730, 900, 
	CORNELL, PARENT_TOT_SWIM, MO|FR, 1130, 1300, 
	CORNELL, PARENT_TOT_SWIM, TU|WE|TH, 1130, 1230, 
	CORNELL, PARENT_TOT_SWIM, TU|TH, 1400, 1600, 
	CORNELL, LEISURE_SWIM, MO|WE|FR, 1400, 1600, 
	CORNELL, LEISURE_SWIM, FR, 1930, 2100, 
	CORNELL, LEISURE_SWIM, WEEKENDS, 1230, 1400, 
	CORNELL, LEISURE_SWIM, WEEKENDS, 1500, 1630, 
	
	MILLIKEN, PARENT_TOT_SWIM, WEEKDAYS, 1130, 1300,
	MILLIKEN, PARENT_TOT_SWIM, MO|TU|WE|TH, 2030, 2215,
	MILLIKEN, PARENT_TOT_SWIM, WEEKENDS, 730, 900,
	MILLIKEN, PARENT_TOT_SWIM, SU, 1830, 2000,
	MILLIKEN, LEISURE_SWIM, WEEKDAYS, 1400, 1600,
	MILLIKEN, LEISURE_SWIM, WEEKENDS, 1430, 1600,
	MILLIKEN, LEISURE_SWIM, MO|WE, 1930, 2030,
	MILLIKEN, LEISURE_SWIM, FR, 1930, 2100,
	MILLIKEN, LEISURE_SWIM, SA, 1900, 2030,

	MORGAN, PARENT_TOT_SWIM, MO|WE|FR, 1130, 1300,
	MORGAN, PARENT_TOT_SWIM, MO|FR, 1900, 2000,
	MORGAN, PARENT_TOT_SWIM, TU|TH, 1000, 1115,
	MORGAN, PARENT_TOT_SWIM, SA, 1200, 1315,
	MORGAN, PARENT_TOT_SWIM, SU, 1430, 1600,
	MORGAN, LEISURE_SWIM, WEEKDAYS, 1400, 1630,
	MORGAN, LEISURE_SWIM, MO|FR|SA|SU, 1700, 1900,
	MORGAN, LEISURE_SWIM, TU|TH, 1130, 1300,
	MORGAN, LEISURE_SWIM, TU|WE|TH, 1800, 2000,
	MORGAN, LEISURE_SWIM, SA, 1030, 1200,
	MORGAN, LEISURE_SWIM, SA, 1330, 1600,
	MORGAN, LEISURE_SWIM, SU, 1200, 1430,

	THORNHILL2, PARENT_TOT_SWIM, MO, 1900, 2000,
	THORNHILL2, PARENT_TOT_SWIM, WE, 1330, 1430,
	THORNHILL2, PARENT_TOT_SWIM, TU|TH|FR, 1530, 1630,
	THORNHILL2, PARENT_TOT_SWIM, SA|SU, 1230, 1400,
	
	THORNLEA, LEISURE_SWIM, MO|WE|FR|SA|SU, 1200, 1330,
	THORNLEA, LEISURE_SWIM, MO, 1930, 2030,
	THORNLEA, LEISURE_SWIM, WE|FR, 1930, 2100,

	ROUGE_RIVER, PARENT_TOT_SWIM, MO|WE|FR, 930, 1030,
	ROUGE_RIVER, PARENT_TOT_SWIM, TU|TH, 1000, 1130,
	ROUGE_RIVER, PARENT_TOT_SWIM, SA, 1030, 1200,
	ROUGE_RIVER, LEISURE_SWIM, WEEKDAYS, 1430, 1730,
	ROUGE_RIVER, LEISURE_SWIM, WEEKDAYS, 1830, 2000,
	ROUGE_RIVER, LEISURE_SWIM, WEEKENDS, 1300, 1530,
	ROUGE_RIVER, LEISURE_SWIM, WEEKENDS, 1630, 1900,

	MAGNA, PUBLIC_SWIM, WEEKDAYS, 1030, 1200,
	MAGNA, PUBLIC_SWIM, TU|TH, 1800, 2000,
	MAGNA, PUBLIC_SWIM, WEEKENDS, 1000, 1200,

	RTRC, PUBLIC_SWIM, WEEKDAYS, 1430, 1600,
	RTRC, PUBLIC_SWIM, MO|WE|FR, 1830, 2000,

	GORMAN, PARENT_TOT_SWIM, WEEKDAYS, 1200, 1300,
	GORMAN, PUBLIC_SWIM, WEEKDAYS, 1300, 2000,
	GORMAN, PUBLIC_SWIM, WEEKENDS, 1300, 1800,

	AGINCOURT, LEISURE_SWIM, SU, 1400, 1700,
	AGINCOURT, LEISURE_SWIM, SU|TH, 1730, 2100,
	AGINCOURT, LEISURE_SWIM, MO|TU|WE|FR, 1430, 1600,
	AGINCOURT, LEISURE_SWIM, FR, 1645, 1945,
	AGINCOURT, LEISURE_SWIM, SA, 1500, 1800,
	AGINCOURT, LEISURE_SWIM, SA, 1830, 2100,
	AGINCOURT, PRESCHOOL_SWIM, SU, 900, 1000,
	AGINCOURT, PRESCHOOL_SWIM, WEEKDAYS, 1200, 1300,

	ACAMPBELL, LEISURE_SWIM, WEEKENDS, 1430, 1800,
	ACAMPBELL, LEISURE_SWIM, WEEKDAYS, 1400, 1630,

	ALBION, LEISURE_SWIM, WEEKENDS, 1400, 1455,
	ALBION, LEISURE_SWIM, WEEKDAYS, 1500, 1555,
	ALBION, FAMILY_SWIM, SU|TU|SA, 1300, 1355,
	ALBION, FAMILY_SWIM, MO|WE|FR, 1400, 1455,

	ALDERWOOD, LEISURE_SWIM, SU|SA, 1415, 1545,
	ALDERWOOD, LEISURE_SWIM, WEEKDAYS, 1500, 1555,
	ALDERWOOD, LEISURE_SWIM, FR, 1745, 1845,
	ALDERWOOD, FAMILY_SWIM, WEEKENDS, 1315, 1415,
	ALDERWOOD, FAMILY_SWIM, MO|TU|WE|TH, 1415, 1500,
	ALDERWOOD, FAMILY_SWIM, FR, 1700, 1745,

	ANNETTE, LEISURE_SWIM, WEEKENDS, 1315, 1455,
	ANNETTE, LEISURE_SWIM, WEEKDAYS, 1430, 1525,
	ANNETTE, LEISURE_SWIM, TU|TH, 1900, 2055,

	ANTIBES, LEISURE_SWIM, WEEKENDS, 1315, 1455,
	ANTIBES, LEISURE_SWIM, MO|WE, 1930, 2055,
	ANTIBES, LEISURE_SWIM, WE|TH, 1430, 1555,
	ANTIBES, LEISURE_SWIM, FR, 1730, 1930,

	BEACHES, LEISURE_SWIM, MO|TU|WE|TH, 1245, 1345,
	BEACHES, LEISURE_SWIM, WEEKDAYS, 1830, 2030,

	BEDFORD, LEISURE_SWIM, MO|FR|SA, 1300, 1600,
	BEDFORD, LEISURE_SWIM, TU|WE|TH, 1500, 1600,

	BENDALE, LEISURE_SWIM, DAILY, 1300, 1530,

	BIRCHMOUNT, LEISURE_SWIM, SU, 1430, 2000,
	BIRCHMOUNT, LEISURE_SWIM, MO|WE|FR, 1500, 1930,
	BIRCHMOUNT, LEISURE_SWIM, TU|TH, 1415, 1615,
	BIRCHMOUNT, LEISURE_SWIM, SA, 1430, 1900,
	BIRCHMOUNT, PRESCHOOL_SWIM, MO|WE|FR, 1205, 1330,
	BIRCHMOUNT, PRESCHOOL_SWIM, TU|TH, 1315, 1415,
	BIRCHMOUNT, FAMILY_SWIM, SU, 1000, 1200,

	GORDON_BROWN, LEISURE_SWIM, WEEKENDS, 1315, 1500,
	GORDON_BROWN, LEISURE_SWIM, WEEKDAYS, 1500, 1600,
	GORDON_BROWN, LEISURE_SWIM, MO|TU|WE|TH, 1900, 2000,

	CEDARBRAE, FAMILY_SWIM, MO|WE|FR, 1500, 1600,
	CEDARBRAE, LEISURE_SWIM, TU|TH, 1400, 1600,

	SCARBOROUGH_CEN, LEISURE_SWIM, SU|TU|WE|TH|FR|SA, 1800, 2000,
	SCARBOROUGH_CEN, LEISURE_SWIM, WEEKDAYS, 1445, 1700,
	SCARBOROUGH_CEN, LEISURE_SWIM, SA, 1400, 1700,
	SCARBOROUGH_CEN, FAMILY_SWIM, SU, 1400, 1700,

	CUMMER, LEISURE_SWIM, WEEKENDS, 1400, 1555,
	CUMMER, LEISURE_SWIM, WEEKDAYS, 1330, 1525,
	CUMMER, LEISURE_SWIM, FR, 1930, 2055,
	CUMMER, PRESCHOOL_SWIM, TU|TH, 1100, 1140,

	TIMBRELL, LEISURE_SWIM, WEEKENDS, 1330, 1530,
	TIMBRELL, LEISURE_SWIM, WEEKDAYS, 1330, 1630,

	SNOW, LEISURE_SWIM, DAILY, 1330, 1530,
	SNOW, PRESCHOOL_SWIM, WE, 1030, 1130,

	BEATTY, LEISURE_SWIM, MO|TU|WE|TH, 1430, 1700,
	BEATTY, LEISURE_SWIM, SA, 1400, 1530,
	BEATTY, PRESCHOOL_SWIM, MO|WE, 1330, 1430,
	BEATTY, PRESCHOOL_SWIM, SA, 1300, 1400,

	EAST_YORK_CC, LEISURE_SWIM, SU|MO|TU|TH, 1415, 1530,
	EAST_YORK_CC, LEISURE_SWIM, MO|TH|FR, 1830, 1930,
	EAST_YORK_CC, LEISURE_SWIM, SA, 1315, 1530,

	FRANKLAND, FAMILY_SWIM, TH, 1300, 1500,

	RYDER, LEISURE_SWIM, WEEKENDS, 1400, 1530,
	RYDER, LEISURE_SWIM, MO|WE, 1400, 1525,
	RYDER, LEISURE_SWIM, TU|TH|FR, 1400, 1555,
	RYDER, LEISURE_SWIM, WE, 2000, 2045,
	RYDER, LEISURE_SWIM, FR, 1900, 2000,
	RYDER, FAMILY_SWIM, WEEKENDS|MO|FR, 1300, 1400,
	RYDER, FAMILY_SWIM, TU|WE, 1630, 1725,
	RYDER, FAMILY_SWIM, FR, 1800, 1900,
	
	HARRISON, LEISURE_SWIM, WEEKENDS, 1200, 1600,

	HILLCREST, LEISURE_SWIM, WEEKENDS, 1300, 1500,
	HILLCREST, LEISURE_SWIM, WEEKDAYS, 1300, 1425,
	HILLCREST, LEISURE_SWIM, MO|TU|WE|TH, 1800, 2000,

	HUMBER, LEISURE_SWIM, WEEKENDS, 1330, 1425,
	HUMBER, LEISURE_SWIM, MO|WE|FR, 1500, 1555,
	HUMBER, LEISURE_SWIM, MO|WE, 2000, 2055,
	HUMBER, FAMILY_SWIM, WEEKENDS, 1500, 1555,
	HUMBER, FAMILY_SWIM, FR, 1700, 1755,

	SIMPSON, LEISURE_SWIM, WEEKENDS, 1415, 1600,
	SIMPSON, LEISURE_SWIM, WEEKDAYS, 1530, 1730,
	SIMPSON, LEISURE_SWIM, WEEKDAYS, 1800, 1900,
	SIMPSON, PRESCHOOL_SWIM, MO|TH, 1200, 1400,
	SIMPSON, PRESCHOOL_SWIM, TU|WE|FR, 1200, 1300,

	INNES, FAMILY_SWIM, WEEKDAYS, 1400, 1600,

	AMOREAUX, LEISURE_SWIM, SU, 1300, 1600,
	AMOREAUX, LEISURE_SWIM, WEEKDAYS|SA, 1430, 1700,

	LEASIDE, LEISURE_SWIM, WEEKDAYS, 1330, 1530,
	LEASIDE, LEISURE_SWIM, WEEKDAYS, 1300, 1425,

	PEARSON, LEISURE_SWIM, SU, 1400, 1600,
	PEARSON, LEISURE_SWIM, WE|FR, 1500, 1600,
	PEARSON, FAMILY_SWIM, WE|FR, 1400, 1500,

	MAIN_SQUARE, LEISURE_SWIM, WEEKENDS, 1330, 1530,
	MAIN_SQUARE, LEISURE_SWIM, MO, 1300, 1430,
	MAIN_SQUARE, LEISURE_SWIM, TU|TH, 1800, 1930,
	MAIN_SQUARE, LEISURE_SWIM, WE, 1600, 1730,
	MAIN_SQUARE, LEISURE_SWIM, FR, 1900, 2030,
	MAIN_SQUARE, PRESCHOOL_SWIM, TU|TH, 1030, 1130,

	MCCORMICK, PRESCHOOL_SWIM, MO|WE, 1030, 1130,
	MCCORMICK, LEISURE_SWIM, TH, 1330, 1530,
	MCCORMICK, LEISURE_SWIM, FR, 1600, 2000,
	MCCORMICK, LEISURE_SWIM, SA, 1430, 1630,
	MCCORMICK, FAMILY_SWIM, SA, 1300, 1430,

	ECKLER, LEISURE_SWIM, MO|WE|FR, 1330, 1530,
	ECKLER, LEISURE_SWIM, MO|WE, 1900, 2000,

	MEMORIAL, LEISURE_SWIM, WEEKENDS, 1300, 1455,
	MEMORIAL, LEISURE_SWIM, MO|TU|TH, 1415, 1545,
	MEMORIAL, LEISURE_SWIM, MO|WE, 2005, 2055,
	MEMORIAL, LEISURE_SWIM, FR, 1700, 1855,
	MEMORIAL, FAMILY_SWIM, FR, 1430, 1630,

	BOYLEN, LEISURE_SWIM, MO|WE, 1300, 1430,

	NORSEMAN, LEISURE_SWIM, WEEKENDS, 1335, 1455,
	NORSEMAN, LEISURE_SWIM, WEEKDAYS, 1425, 1545,
	NORSEMAN, LEISURE_SWIM, MO|WE, 1905, 1955,
	NORSEMAN, FAMILY_SWIM, WEEKENDS, 1500, 1545,
	NORSEMAN, FAMILY_SWIM, FR, 1600, 1645,

	NORTH_TORONTO, PUBLIC_SWIM, WEEKENDS, 1400, 1725,

	PARKDALE, FAMILY_SWIM, MO|TU|WE|TH, 1800, 2000,

	REGENT_PARK, LEISURE_SWIM, WEEKENDS, 1330, 1655,
	REGENT_PARK, LEISURE_SWIM, WEEKDAYS, 1400, 1555,
	REGENT_PARK, LEISURE_SWIM, MO, 1930, 2125,
	REGENT_PARK, LEISURE_SWIM, FR, 1700, 1955,
	REGENT_PARK, PRESCHOOL_SWIM, MO|WE|FR, 1300, 1355,
	REGENT_PARK, PUBLIC_SWIM, SA, 2000, 2125,

	RUNNYMEDE, LEISURE_SWIM, MO|WE|FR, 1315, 1430,

	SCADDING, FAMILY_SWIM, TH, 1830, 2000,
	SCADDING, LEISURE_SWIM, SU, 1400, 1550,
	SCADDING, LEISURE_SWIM, SA, 1300, 1550,

	MOWAT, LEISURE_SWIM, SU|TU|TH|FR, 1400, 1600,

	LAWRENCE, LEISURE_SWIM, DAILY, 1400, 1600,
	LAWRENCE, PRESCHOOL_SWIM, WEEKDAYS, 1130, 1230,

	SWANSEA, LEISURE_SWIM, WEEKENDS, 1345, 1545,
	SWANSEA, LEISURE_SWIM, WEEKDAYS, 1445, 1545,
	SWANSEA, LEISURE_SWIM, TH, 1930, 2025,
	SWANSEA, LEISURE_SWIM, FR, 1900, 2015,

	ELMS, LEISURE_SWIM, SU|MO|SA, 1330, 1525,
	ELMS, LEISURE_SWIM, TU|TH, 2000, 2055,
	ELMS, LEISURE_SWIM, FR, 1230, 1525,
	ELMS, FAMILY_SWIM, WE, 1430, 1525,

	TRINITY, LEISURE_SWIM, WEEKENDS, 1400, 1555,
	TRINITY, LEISURE_SWIM, WEEKDAYS, 1600, 1745,
	TRINITY, PRESCHOOL_SWIM, WEEKDAYS, 1200, 1300,

	WEST_HILL, LEISURE_SWIM, MO|WE|SA, 1400, 1600,

	WEXFORD, LEISURE_SWIM, WEEKDAYS, 1530, 1700,

};

