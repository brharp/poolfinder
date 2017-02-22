#pragma once

enum types {
	PUBLIC_SWIM,
	LEISURE_SWIM,
	FAMILY_SWIM,
	KIDS_SWIM,
	PARENT_TOT_SWIM,
	AFTER_SCHOOL_SWIM,
	A11Y_SWIM,
	PRESCHOOL_SWIM,
	FUN_SWIM,
	COMBO_SWIM,
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
	PRESCHOOL_SWIM, "Preshcool swim",
	FUN_SWIM, "Fun swim",
	COMBO_SWIM, "Combo swim",
};

struct form {
	char *id;
	char *type;
	char *value;
	char *label;
};

