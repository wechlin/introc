
#include <stdio.h>
#include <stdlib.h>

#include "calendar.h"

int main(int argc, char* argv[])
{
	if(argc != 2) {
		printf("Usage: %s <year>\n", argv[0]);
		return 1;
	}

	int year = strtol(argv[1], NULL, 10);

	if(is_leap_year(year)) {
		puts("Is a leap year");
	} else {
		puts("Not a leap year");
	}
}
