
#include <stdio.h>

int main(void)
{
	char name[64];

	fgets(name, sizeof(name), stdin);

	printf("%s\n", name);
}
