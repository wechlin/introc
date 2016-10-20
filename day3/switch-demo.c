
#include <stdio.h>
#include <stdlib.h>

int days_in_month(int month);

int main(int argc, char *argv[])
{
	if(argc != 2) {
		printf("Usage: %s <value>\n", argv[0]);
		return 1;
	}

	int month = strtol(argv[1], NULL, 10);
	int days = days_in_month(month);

	printf("There are %d days in that month %d\n", days, month);
}

int days_in_month(int month)
{
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8) {
		return 31;
	} else {
		return 30;
	}

}

