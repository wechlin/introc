
#include <stdio.h>

int warming = 76;

int iterator(void);

int main(void)
{
	int value = iterator();

	printf("%d\n", value);

	value = iterator();
	printf("%d\n", value);

	value = iterator();
	printf("%d\n", value);

	printf("warming: %d\n", warming);
}

int iterator(void)
{
	static int x = 0;

	printf(" in iter: %d\n", warming);

	x += 1;

	return x;
}


