
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
	HARRY_CLASS, "http://www.kitchener.ca/en/livinginkitchener/PoolsAndSwimming.asp",
	IDLEWOOD, "http://www.kitchener.ca/en/livinginkitchener/PoolsAndSwimming.asp",
	WILSON, "http://www.kitchener.ca/en/livinginkitchener/PoolsAndSwimming.asp",
	SWIMPLEX, "http://www.waterloo.ca/en/gettingactive/schedules_swimming.asp",
	ACTON_LIONS, "http://www.haltonhills.ca/swimming/swimming-acton.php",
	GELLERT, "http://www.haltonhills.ca/swimming/swimming-gellert.php",
	MILTON_LEISURE_CENTRE, "https://www.milton.ca/en/play/resources/Drop-in-swimming.pdf",
	MILTON_SPORTS_CENTRE, "https://www.milton.ca/en/play/resources/Drop-in-swimming.pdf",
	MILTON_ROTARY, "https://www.milton.ca/en/play/resources/Drop-in-swimming.pdf",
	OAKVILLE_CENTENNIAL, "http://www.oakville.ca/culturerec/public-swimming.html",
	GLENABBEY, "http://www.oakville.ca/culturerec/public-swimming.html",
	IROQUOIS_RIDGE, "http://www.oakville.ca/culturerec/public-swimming.html",
	QUEEN_ELIZABETH, "http://www.oakville.ca/culturerec/public-swimming.html",
	WHITE_OAKS, "http://www.oakville.ca/culturerec/public-swimming.html",
	ANCASTER, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/AncasterAquaticCentre/publicSwim.htm",
	ANCASTER_LIONS, "http://www.hamilton.ca/parks-recreation/drop-in-recreation-programs/ancaster-lions-outdoor-pool",
	BENNETTO, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/Bennetto/publicSwim.htm",
	BIRGE, "http://www.hamilton.ca/parks-recreation/drop-in-recreation-programs/birge-outdoor-pool",
	CENTRAL_MEMORIAL, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/CentralMemorial/publicSwim.htm", 
	CHEDOKE, "http://www.hamilton.ca/parks-recreation/drop-in-recreation-programs/chedoke-outdoor-pool",
	CORONATION, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/CoronationArena/OutdoorPool.htm", 
	DALEWOOD, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/Dalewood/PublicSwim.htm",
	DOMINIC_AGOSTINO, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/Riverdale/PublicSwim.htm",
	DUNDAS, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/DundasCommunityPool/PublicSwim.htm",
	GREEN_ACRES, "http://www.hamilton.ca/parks-recreation/drop-in-recreation-programs/green-acres-outdoor-pool",
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
	COH_VICTORIA_PARK, "http://www.hamilton.ca/parks-recreation/drop-in-recreation-programs/victoria-park-outdoor-pool",
	WALKER, "http://www.hamilton.ca/parks-recreation/drop-in-recreation-programs/walker-outdoor-pool",
	WESTMOUNT, "http://www.hamilton.ca/CultureandRecreation/Recreation/CentresPoolsArenas/Westmount/publicSwim.htm",
	MACQUARRIE, "",
	BREWER, "",
	CANTERBURY, "",
	CHAMPAGNE, "",
	KIRWAN, "",
	DUPUIS, "",
	GOULBOURN, "",
	PURCELL, "",
	KANATA, "",
	LOWERTOWN, "",
	MINTO, "",
	NAPEAN, "",
	PINECREST, "",
	PLANT, "",
	FRIEL, "",
	RICHCRAFT, "",
	SAWMILL, "",
	STLAURENT, "",
	BAKER, "",
	RHODES, "",
	GRETZKY, "http://www.waynegretzkysportscentre.ca/Swimming/RecreationalSwimSchedule.aspx",
	ELGIN, "http://www.saugeenshores.ca/en/community-life/pools.asp",
	TIM_HORTON, "http://www.cochraneontario.com/content/swimming-pool",
	UXBRIDGE, "http://www.town.uxbridge.on.ca/sports_and_recreation",
	COMPLEX, "http://www.pickering.ca/en/living/swimming.asp?_mid_=18609",
	DUNBARTON, "http://www.pickering.ca/en/living/swimming.asp?_mid_=18609",
	COURTICE, "http://www.clarington.net/index.php?content=townhall/csd-swimskatesched",
	NEWCASTLE, "http://www.clarington.net/index.php?content=townhall/csd-swimskatesched",
	OSHAWA_CENTENNIAL, "http://www.oshawa.ca/mun_res/recreation/swimming-schedules.asp",
	DONEVAN, "http://www.oshawa.ca/mun_res/recreation/swimming-schedules.asp",
	LEGENDS, "http://www.oshawa.ca/mun_res/recreation/swimming-schedules.asp",
	SOUTH_OSHAWA, "http://www.oshawa.ca/mun_res/recreation/swimming-schedules.asp",
	KNOX, "http://www.citywindsor.ca/residents/Recreation/aquatics/Recreation-Swimming/Pages/Recreation-Swimming.aspx",
	ARTILLERY_PARK, "https://www.cityofkingston.ca/residents/recreation/facilities/aquatic-facilities/artillery-park",
	MENNINGA, "http://quintesportsandwellnesscentre.ca/?page_id=10",
	LINDSAY, "http://www.city.kawarthalakes.on.ca/residents/parks-recreation-culture/aquatics-swimming/public-swim-schedule",
	FORBERT, "http://www.city.kawarthalakes.on.ca/residents/parks-recreation-culture/aquatics-swimming/public-swim-schedule",
	KENORA_REC, "http://www.kenora.ca/living/be-active/kenora-recreation-centre/aquatics.aspx",
	PERTH_INDOOR, "http://www.perth.ca/content/perth-and-district-indoor-swimming-pool",
	CARLETON_POOL, "http://carletonplace.ca/poolp8.php",
	CANADA_GAMES, "https://www.london.ca/residents/Recreation/Aquatics/Pages/rec-and-leisure-swimming.aspx",
	CARLING_HEIGHTS, "https://www.london.ca/residents/Recreation/Aquatics/Pages/rec-and-leisure-swimming.aspx",
	SOUTH_LONDON, "https://www.london.ca/residents/Recreation/Aquatics/Pages/rec-and-leisure-swimming.aspx",
	BRACEBRIDGE_SPORTSPLEX, "",
	HUNTSVILLE_POOL, "http://www.huntsville.ca/en/living/IndoorPools.asp",
	NIPISSING, "http://www.westnipissing.ca/municipal-services-e/community-services/west-nipissing-community-recreation-centre",
	NORTH_BAY_YMCA, "http://www.ymcanorthbay.com/aquatics/open-swim-schedule/",
	NORTHUMBERLAND_YMCA, "http://www.ymcanorthumberland.com/",
	SOUTHSIDE, "",
	BALMORAL, "", 
	CAMPBELL, "",
	STRATFORD_YMCA, "http://www.stratfordperthymca.com/aquatics.html",
	PETERBOROUGH_SWC, "http://www.peterborough.ca/Living/Recreation/PSWC/Aquatics/Swim_Schedules.htm",
	CAWTHRA, "http://dropin.mississauga.ca/default.asp?subsectionid=22",
	CLARKSON, "http://dropin.mississauga.ca/default.asp?subsectionid=22",
	MEADOWS, "http://dropin.mississauga.ca/default.asp?subsectionid=22",
	MCKECHNIE, "http://dropin.mississauga.ca/default.asp?subsectionid=22",
	GLENFOREST, "http://dropin.mississauga.ca/default.asp?subsectionid=22",
	HURON, "http://dropin.mississauga.ca/default.asp?subsectionid=22",
	MALTON, "http://dropin.mississauga.ca/default.asp?subsectionid=22",
	VALLEY, "http://dropin.mississauga.ca/default.asp?subsectionid=22",
	RIVER_GROVE, "http://dropin.mississauga.ca/default.asp?subsectionid=22",
	SOUTH_COMMON, "http://dropin.mississauga.ca/default.asp?subsectionid=22",
	SAC, "http://www.cityofwoodstock.ca/en/city-hall/southside-aquatic-centre.asp",

	PALLADINI, "https://www.vaughan.ca/services/recreation/Swimming/Pages/default.aspx",
	CHANCELLOR, "https://www.vaughan.ca/services/recreation/Swimming/Pages/default.aspx",
	CLARK, "https://www.vaughan.ca/services/recreation/Swimming/Pages/default.aspx",
	BULFON, "https://www.vaughan.ca/services/recreation/Swimming/Pages/default.aspx",
	WILLIAMS, "https://www.vaughan.ca/services/recreation/Swimming/Pages/default.aspx",
	MAPLE, "https://www.vaughan.ca/services/recreation/Swimming/Pages/default.aspx",
	THORNHILL, "https://www.vaughan.ca/services/recreation/Swimming/Pages/default.aspx",
	VELLORE, "https://www.vaughan.ca/services/recreation/Swimming/Pages/default.aspx",
	WOODBRIDGE, "https://www.vaughan.ca/services/recreation/Swimming/Pages/default.aspx",

  	/* Markham */
        ANGUS_GLEN, "http://www.markham.ca/wps/portal/Markham/RecreationCulture/ProgramsActivities/Swimming/",
        MARKHAM_CEN, "http://www.markham.ca/wps/portal/Markham/RecreationCulture/ProgramsActivities/Swimming/",
        CORNELL, "http://www.markham.ca/wps/portal/Markham/RecreationCulture/ProgramsActivities/Swimming/",
        MILLIKEN, "http://www.markham.ca/wps/portal/Markham/RecreationCulture/ProgramsActivities/Swimming/",
        MORGAN, "http://www.markham.ca/wps/portal/Markham/RecreationCulture/ProgramsActivities/Swimming/",
        THORNHILL2, "http://www.markham.ca/wps/portal/Markham/RecreationCulture/ProgramsActivities/Swimming/",
        THORNLEA, "http://www.markham.ca/wps/portal/Markham/RecreationCulture/ProgramsActivities/Swimming/",
        ROUGE_RIVER, "http://www.markham.ca/wps/portal/Markham/RecreationCulture/ProgramsActivities/Swimming/",

	MAGNA, "http://www.newmarket.ca/en/townhall/swimmingschedulesfeesinformation.asp",
        RTRC, "http://www.newmarket.ca/en/townhall/swimmingschedulesfeesinformation.asp",
        GORMAN, "http://www.newmarket.ca/en/townhall/swimmingschedulesfeesinformation.asp",

	AGINCOURT, "http://www1.toronto.ca/parks/prd/facilities/complex/523/index.htm",
	ACAMPBELL, "http://www1.toronto.ca/parks/prd/facilities/complex/1110/index.htm",
	ALBION, "http://www1.toronto.ca/parks/prd/facilities/complex/893/index.htm",
	ALDERWOOD, "http://www1.toronto.ca/parks/prd/facilities/complex/897/index.htm",
	ANNETTE, "http://www1.toronto.ca/parks/prd/facilities/complex/17/index.htm",
	ANTIBES, "http://www1.toronto.ca/parks/prd/facilities/complex/42/index.htm",
	BEACHES, "http://www1.toronto.ca/parks/prd/facilities/complex/24/index.htm",
	BEDFORD, "http://www1.toronto.ca/parks/prd/facilities/complex/27/index.htm",
	BENDALE, "http://www1.toronto.ca/parks/prd/facilities/complex/1125/index.htm",
        BIRCHMOUNT, "http://www1.toronto.ca/parks/prd/facilities/complex/507/index.htm",
        BROWN, "http://www1.toronto.ca/parks/prd/facilities/complex/33/index.htm",
        CEDARBRAE, "http://www1.toronto.ca/parks/prd/facilities/complex/1143/index.htm",
        ETOBICOKE_CEN, "http://www1.toronto.ca/parks/prd/facilities/complex/474/index.htm",
        SCARBOROUGH_CEN, "http://www1.toronto.ca/parks/prd/facilities/complex/537/index.htm",
        CUMMER, "http://www1.toronto.ca/parks/prd/facilities/complex/499/index.htm",
        JEFFERYS, "http://www1.toronto.ca/parks/prd/facilities/complex/1163/index.htm",
        MORRISON, "http://www1.toronto.ca/parks/prd/facilities/complex/1164/index.htm",
        TIMBRELL, "http://www1.toronto.ca/parks/prd/facilities/complex/1056/index.htm",
        DONMILLS, "http://www1.toronto.ca/parks/prd/facilities/complex/1174/index.htm",
        SNOW, "http://www1.toronto.ca/parks/prd/facilities/complex/567/index.htm",
        BEATTY, "http://www1.toronto.ca/parks/prd/facilities/complex/36/index.htm",
        EAST_YORK_CC, "http://www1.toronto.ca/parks/prd/facilities/complex/329/index.htm",
        EMERY, "http://www1.toronto.ca/parks/prd/facilities/complex/1186/index.htm",
        ETOBICOKE_OLYMPIUM, "http://www1.toronto.ca/parks/prd/facilities/complex/892/index.htm",
        FAIRMOUNT, "http://www1.toronto.ca/parks/prd/facilities/complex/308/index.htm",
        FRANKLAND, "http://www1.toronto.ca/parks/prd/facilities/complex/39/index.htm",
        VANIER, "http://www1.toronto.ca/parks/prd/facilities/complex/1200/index.htm",
        BROWN, "http://www1.toronto.ca/parks/prd/facilities/complex/1205/index.htm",
        RYDER, "http://www1.toronto.ca/parks/prd/facilities/complex/896/index.htm",
        HARRISON, "http://www1.toronto.ca/parks/prd/facilities/complex/45/index.htm",
        HILLCREST, "http://www1.toronto.ca/parks/prd/facilities/complex/48/index.htm",
        HUMBER, "http://www1.toronto.ca/parks/prd/facilities/complex/357/index.htm",
        SIMPSON, "http://www1.toronto.ca/parks/prd/facilities/complex/58/index.htm",
        INNES, "http://www1.toronto.ca/parks/prd/facilities/complex/63/index.htm",
        PICCININNI, "http://www1.toronto.ca/parks/prd/facilities/complex/509/index.htm",
        AMOREAUX, "http://www1.toronto.ca/parks/prd/facilities/complex/1250/index.htm",
        LEASIDE, "http://www1.toronto.ca/parks/prd/facilities/complex/542/index.htm",
        PEARSON, "http://www1.toronto.ca/parks/prd/facilities/complex/1255/index.htm",
        MAIN_SQUARE, "http://www1.toronto.ca/parks/prd/facilities/complex/85/index.htm",
        MCCORMICK, "http://www1.toronto.ca/parks/prd/facilities/complex/100/index.htm",
        ECKLER, "http://www1.toronto.ca/parks/prd/facilities/complex/234/index.htm",
        MEMORIAL, "http://www1.toronto.ca/parks/prd/facilities/complex/891/index.htm",
        BOYLEN, "http://www1.toronto.ca/parks/prd/facilities/complex/1133/index.htm",
        NORSEMAN, "http://www1.toronto.ca/parks/prd/facilities/complex/797/index.htm",
        NORTH_TORONTO, "http://www1.toronto.ca/parks/prd/facilities/complex/189/index.htm",
        NORTHVIEW, "http://www1.toronto.ca/parks/prd/facilities/complex/342/index.htm",
        PARKDALE, "http://www1.toronto.ca/parks/prd/facilities/complex/243/index.htm",
        REGENT_PARK, "http://www1.toronto.ca/parks/prd/facilities/complex/2012/index.htm",
        RUNNYMEDE, "http://www1.toronto.ca/parks/prd/facilities/complex/510/index.htm",
        ARMSTRONG, "http://www1.toronto.ca/parks/prd/facilities/complex/267/index.htm",
        SCADDING, "http://www1.toronto.ca/parks/prd/facilities/complex/1098/index.htm",
        MOWAT, "http://www1.toronto.ca/parks/prd/facilities/complex/1315/index.htm",
        LAURIER, "http://www1.toronto.ca/parks/prd/facilities/complex/1317/index.htm",
        LAWRENCE, "http://www1.toronto.ca/parks/prd/facilities/complex/272/index.htm",
        SWANSEA, "http://www1.toronto.ca/parks/prd/facilities/complex/282/index.htm",
        ELMS, "http://www1.toronto.ca/parks/prd/facilities/complex/795/index.htm",
        PANAM, "http://www1.toronto.ca/parks/prd/facilities/complex/2773/index.htm",
        TRINITY, "http://www1.toronto.ca/parks/prd/facilities/complex/287/index.htm",
        VAUGHAN_RD, "http://www1.toronto.ca/parks/prd/facilities/complex/1371/index.htm",
        VICTORIA_PARK, "http://www1.toronto.ca/parks/prd/facilities/complex/1373/index.htm",
        WALLACE_EMERSON, "http://www1.toronto.ca/parks/prd/facilities/complex/294/index.htm",
        WEST_HILL, "http://www1.toronto.ca/parks/prd/facilities/complex/1381/index.htm",
        WESTON, "http://www1.toronto.ca/parks/prd/facilities/complex/1384/index.htm",
        WEXFORD, "http://www1.toronto.ca/parks/prd/facilities/complex/1387/index.htm",
        YORK_MILLS, "http://www1.toronto.ca/parks/prd/facilities/complex/1399/index.htm",

};


