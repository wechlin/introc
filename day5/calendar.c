
#include <stdbool.h>

bool is_leap_year(int year)
{
	if(year % 400 == 0) {
		return true;
	} else if(year % 100 == 0) {
		return false;
	}

	return year % 4 == 0;
}

int days_in_month(int month)
{
	int days = 0;

	switch(month) {
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		default:
			days = 31;
	}

	return days;
}

