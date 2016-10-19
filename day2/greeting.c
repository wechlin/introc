
#include <stdio.h>

int main(void)
{
	char greeting[] = "Hello, World";

	char tedium[] = { 'H' };

	int grades[] = {85, 95, 43, 77};

	printf("%s\n", tedium);

	printf("%s\n", greeting);

	printf("%d\n", grades[2]);

	printf("tedium: %zd\n", sizeof(tedium));
	printf("greet: %zd\n", sizeof(greeting));

	printf("grades: %zd\n", sizeof(grades));
	
}
