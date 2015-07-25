#pragma once

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
	MACQUARRIE,
	BREWER,
	CANTERBURY,
	CHAMPAGNE,
	KIRWAN,
	DUPUIS,
	GOULBOURN,
	PURCELL,
	KANATA,
	LOWERTOWN,
	MINTO,
	NAPEAN,
	PINECREST,
	PLANT,
	FRIEL,
	RICHCRAFT,
	SAWMILL,
	STLAURENT,
	BAKER,
	RHODES,
	GRETZKY,
	ELGIN,
	TIM_HORTON,
	UXPOOL,
	COMPLEX,
	DUNBARTON,
	COURTICE,
	NEWCASTLE,

	/* Oshawa */
	OSHAWA_CENTENNIAL,
	DONEVAN,
	LEGENDS,
	SOUTH_OSHAWA,

	/* Windsor */
	KNOX,

	/* Kingston */
	ARTILLERY_PARK,

	/* Belleville */
	MENNINGA,

	/* Kawartha */
	LINDSAY,
	FORBERT,

	/* Kenora */
	KENORA_REC,

	/* Perth */
	PERTH_INDOOR,

	/* Carleton Place */
	CARLETON_POOL,

	/* London */
	CANADA_GAMES,
	CARLING_HEIGHTS,
	SOUTH_LONDON,

	BRACEBRIDGE_SPORTSPLEX,
	HUNTSVILLE_POOL,

	NIPISSING,
	NORTH_BAY_YMCA,

	NORTHUMBERLAND_YMCA,

	/* Woodstock */
	SOUTHSIDE,

	/* Brampton */
	BALMORAL,
	CAMPBELL,
	
	/* Perth */
	STRATFORD_YMCA,

	/* Peterborough */
	PETERBOROUGH_SWC,

	/* Mississauga */
	CAWTHRA,
	CLARKSON,
	MEADOWS,
	MCKECHNIE,
	GLENFOREST,
	HURON,
	MALTON,
	VALLEY,
	RIVER_GROVE,
	SOUTH_COMMON,

	/* Woodstock */
	SAC,

	/* Vaughan */
	PALLADINI,
	CHANCELLOR,
	CLARK,
	BULFON,
	WILLIAMS,
	MAPLE,
	THORNHILL,
	VELLORE,
	WOODBRIDGE,
	
	/* Markham */
	ANGUS_GLEN,
	MARKHAM_CEN,
	CORNELL,
	MILLIKEN,
	MORGAN,
	THORNHILL2,
	THORNLEA,
	ROUGE_RIVER,

	/* Newmarket */
	MAGNA,
	RTRC,
	GORMAN,

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

	/* Ottawa */
	MACQUARRIE, "Bob MacQuarrie Recreation Complex", 45.465411,-75.543912,
	BREWER, "Brewer Pool", 45.38956,-75.691445,
	CANTERBURY, "Canterbury Pool", 45.390982,-75.630696,
	CHAMPAGNE, "Champagne Pool", 45.430378,-75.686965,
	KIRWAN, "Deborah Anne Kirwan Pool", 45.367933,-75.656382,
	DUPUIS, "Francois Dupuis Pool", 45.454618,-75.464867,
	GOULBOURN, "Goulbourn Pool", 45.263041,-75.908491, 
	PURCELL, "Jack Purcell Pool", 45.415854,-75.689383, 
	KANATA, "Kanata Wave Pool", 45.311228,-75.899267, 
	LOWERTOWN, "Lowertown Pool", 45.434653,-75.681278, 
	MINTO, "Minto Recreation Centre", 45.252993,-75.734588, 
	NAPEAN, "Nepean Sportsplex Pools", 45.326775,-75.745277, 
	PINECREST, "Pinecrest Pool", 45.347692,-75.774246, 
	PLANT, "Plant Pool", 45.407844,-75.714639, 
	FRIEL, "Ray Friel Wave Pool", 45.472283,-75.492686, 
	RICHCRAFT, "Richcraft Recreation Complex - Kanata", 45.340495,-75.930498, 
	SAWMILL, "Sawmill Creek Pool", 45.349556,-75.636167, 
	STLAURENT, "St-Laurent Pool", 45.4355375,-75.6463672,
	BAKER, "Walter Baker Pool", 45.280344,-75.761848,

	/* Sault Ste Marie */
	RHODES, "John Rhodes Community Centre", 46.509358,-84.302756,	

	/* Brantford */
	GRETZKY, "Wayne Gretzky Sports Centre", 43.167425,-80.265255,

	/* Saugeen Shores */
	ELGIN, "Centennial Pool", 44.4334762,-81.383263,

	/* Cochrane */
	TIM_HORTON, "Tim Horton Event Centre", 49.063393,-81.004794,

	/* Uxbridge */
	UXPOOL, "UxPool", 44.106131,-79.117154,

	/* Pickering */
	COMPLEX, "Pickering Recreation Complex", 43.839274,-79.08039,
	DUNBARTON, "Dunbarton Indoor Pool", 43.8216313,-79.1190764,

	/* Clarington */
	COURTICE, "Courtice Community Complex", 43.913311,-78.782193,
	NEWCASTLE, "Newcastle and District Recreation Complex", 43.912254,-78.600479,

	/* Oshawa */
	OSHAWA_CENTENNIAL, "Centennial Pool", 43.8872927,-78.8916305,
	DONEVAN, "Donevan Recreation Complex", 43.9001587,-78.8321256,
	LEGENDS, "Legends Centre Pool", 43.9464034,-78.8520165,
	SOUTH_OSHAWA, "South Oshawa Community Centre", 43.859559,-78.846858,

	/* Windsor */
	KNOX, "Adie Knox Herman Complex", 42.3080563,-83.053792,

	/* Kingston */
	ARTILLERY_PARK, "Artillery Park", 44.2342718,-76.4844843,

	/* Belleville */
	MENNINGA, "Templeman Menninga Aquatic Centre", 44.187628,-77.38259,

	/* Kawartha */
	LINDSAY, "Lindsay Recreation Complex", 44.341629,-78.743632,
	FORBERT, "Forbert Memorial Pool", 44.531365,-78.526534,

	/* Kenora */
	KENORA_REC, "Kenora Recreation Centre", 49.7618637,-94.4857155,

	/* Perth */
	PERTH_INDOOR, "Perth Indoor Pool", 44.9045592,-76.2602142,

	/* Carleton Place */
	CARLETON_POOL, "Carleton Place Aquatic Centre", 45.1445835,-76.1516685,

	/* London */
	CANADA_GAMES, "Canada Games Aquatic Centre", 43.000961,-81.301542,
	CARLING_HEIGHTS, "Carling Heights Optimist C.C. Pool", 42.998222,-81.228842,
	SOUTH_LONDON, "South London Community Pool", 42.933212,-81.231944,

	BRACEBRIDGE_SPORTSPLEX, "Bracebridge Sportsplex", 45.065231,-79.320232,

	HUNTSVILLE_POOL, "Huntsville Centennial Pool", 45.3230102,-79.2133462,

	/* Nipissing */
	NIPISSING, "West Nipissing Community and Recreation Centre", 46.3659693,-79.9170673,
	NORTH_BAY_YMCA, "North Bay YMCA", 46.316283,-79.449618,

	/* Northumberland */
	NORTHUMBERLAND_YMCA, "YMCA Northumberland", 43.974009,-78.186626,

	/* Woodstock */
	SOUTHSIDE, "Southside Aquatic Centre", 43.119156,-80.753334,

	/* Brampton */
	BALMORAL, "Balmoral", 43.708466,-79.71235,
	CAMPBELL, "Cassie Campbell", 43.6974107,-79.8261862,

	/* Perth */
	STRATFORD_YMCA, "Stratford Perth YMCA", 43.3669226,-80.9802868,

	/* Peterborough */
	PETERBOROUGH_SWC, "Sport and Wellness Centre", 44.2736831,-78.3730531,

	/* Mississauga */
	CLARKSON, "Clarkson Community Centre", 43.5107545,-79.6492383,
	MEADOWS, "Erin Meadows Community Centre", 43.5564095,-79.7175424,
	MCKECHNIE, "Frank McKechnie Community Centre", 43.6164696,-79.6530655,
	GLENFOREST, "Glenforest Secondary School", 43.6274314,-79.5943421,
	HURON, "Huron Park Community Centre", 43.5592486,-79.6330527,
	MALTON, "Malton Community Centre", 43.7236913,-79.6386369,
	VALLEY, "Mississauga Valley CC", 43.597238,-79.623552,
	RIVER_GROVE, "River Grove CC", 43.5894771,-79.7122369,
	SOUTH_COMMON, "South Common CC", 43.5424192,-79.6848811,
	CAWTHRA, "Cawthra Park Secondary School", 43.5761055,-79.5732007,

	/* Woodstock */
	SAC, "Southside Aquatic Centre", 43.1191559,-80.7533341,

	/* Vaughan */
	PALLADINI, "Al Palladini Pool", 43.8165286,-79.5972051, 
	CHANCELLOR, "Chancellor Pool", 43.7958024,-79.5627496,
	CLARK, "Dufferin Clark Pool", 43.7975519,-79.4703265,
	BULFON, "Father E. Bulfon Pool", 43.7868906,-79.6118594,
	WILLIAMS, "Garnet A. Williams Pool", 43.8039072,-79.4400473,
	MAPLE, "Maple Pool", 43.8595535,-79.514656,
	THORNHILL, "North Thornhill Pool", 43.832886,-79.476015,
	VELLORE, "Vellore Village Pool", 43.8363021,-79.5598102,
	WOODBRIDGE, "Woodbridge Pool",  43.7811944,-79.5904399,

	/* Markham */
	ANGUS_GLEN, "Angus Glen Pool", 43.8946514,-79.33575,
	MARKHAM_CEN, "Centennial Pool", 43.8731853,-79.2871618,
	CORNELL, "Cornell Pool", 43.8844737,-79.2290909,
	MILLIKEN, "Milliken Mills Pool", 43.8400096,-79.3053285,
	MORGAN, "Morgan Pool (Outdoor)", 43.8807628,-79.2592862,
	THORNHILL2, "Thornhill Therapeutic Pool", 43.8196108,-79.4002282,
	THORNLEA, "Thornlea Pool", 43.8286475,-79.4035466,
	ROUGE_RIVER, "Rouge River Pool (Outdoor)", 43.8608978,-79.2407503,

	MAGNA, "Metro Aquatic Centre", 44.044555,-79.437712,
	RTRC, "Ray Twinney Recreation Complex", 44.0441356,-79.4880862,
	GORMAN, "Gorman Pool", 44.0508237,-79.4594831,

};

