
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
	OTTAWA,
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
	OTTAWA, "Ottawa", 45.2501566,-75.8002568,
};

