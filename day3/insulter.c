
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char name[64];

	printf("Please enter your name: ");

	fgets(name, sizeof(name), stdin);

	size_t len = strlen(name);
	name[len - 1] = '\0';

	printf("%s is smelly\n", name);
}

