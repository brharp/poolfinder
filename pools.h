
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
	LOWERTON,
	MINTO,
	NAPEAN,
	PINECREST,
	PLANT,
	FRIEL,
	RICHCRAFT,
	SAWMILL,
	STLAURENT,
	BAKER,
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
	LOWERTON, "Lowerton Pool", 45.434653,-75.681278, 
	MINTO, "Minto Recreation Centre", 45.252993,-75.734588, 
	NAPEAN, "Nepean Sportsplex Pools", 45.326775,-75.745277, 
	PINECREST, "Pinecrest Pool", 45.347692,-75.774246, 
	PLANT, "Plant Pool", 45.407844,-75.714639, 
	FRIEL, "Ray Friel Wave Pool", 45.472283,-75.492686, 
	RICHCRAFT, "Richcraft Recreation Complex - Kanata", 45.340495,-75.930498, 
	SAWMILL, "Sawmill Creek Pool", 45.349556,-75.636167, 
	STLAURENT, "St-Laurent Pool", 45.4355375,-75.6463672,
	BAKER, "Walter Baker Pool", 45.280344,-75.761848,
};
