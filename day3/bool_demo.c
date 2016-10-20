
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool is_greater_than_10(int value);

int main(int argc, char *argv[])
{
	if(argc != 2) {
		printf("Usage: %s <value>\n", argv[0]);
		return 1;
	}

	if(is_greater_than_10(strtol(argv[1], NULL, 10))) {
		puts("That is greater than 10");
	} else
		puts("That is less than or equal to than 10");
	puts("You loser, get a bigger number");
}

bool is_greater_than_10(int value)
{
	if(value > 10) {
		return true;
	} else
		return false;
}
