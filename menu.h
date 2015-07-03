
enum menuitems {
	MENUITEM_SCHEDULE,
	MENUITEM_HOME
};

struct menuitem {
	int id;
	char *path;
	void (*action)(void);
} menutab[] = {
	MENUITEM_SCHEDULE, "/schedule", schedule,
	MENUITEM_HOME,     "/",         list_places,
};


