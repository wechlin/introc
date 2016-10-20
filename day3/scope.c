
#include <stdio.h>

const int WARMING = 76;

int iterator(void);

int main(void)
{
	int value = iterator();

	printf("%d\n", value);

	value = iterator();
	printf("%d\n", value);

	value = iterator();
	printf("%d\n", value);

	printf("WARMING: %d\n", WARMING);
}

int iterator(void)
{
	static int x = 0;

	printf(" in iter: %d\n", WARMING);

	x += 1;

	return x;
}


