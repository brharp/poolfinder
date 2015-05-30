#pragma once

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

