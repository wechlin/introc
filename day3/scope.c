
#include <stdio.h>

int iterator(void);

int main(void)
{
	int value = iterator();

	printf("%d\n", value);
}

int iterator(void)
{
	int x = 1;

	return x;
}
