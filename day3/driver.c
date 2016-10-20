
#include <stdio.h>

#include "calendar.c"

int main(void)
{

	if(is_leap_year(1784)) {
		puts("Is a leap year");
	} else {
		puts("Not a leap year");
	}
}
