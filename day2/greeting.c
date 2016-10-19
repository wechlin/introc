
#include <stdio.h>

int main(void)
{
	char greeting[] = "Hello, World";

	char tedium[] = { 'H' };

	int grades[] = {85, 95, 43, 77};

	printf("%s\n", tedium);

	printf("%s\n", greeting);

	printf("2: %d\n", grades[2]);
	printf("5: %d\n", grades[5]);
	printf("6: %d\n", grades[6]);
	printf("8: %c\n", grades[8]);

	printf("tedium: %zd\n", sizeof(tedium));
	printf("greet: %zd\n", sizeof(greeting));

	printf("grades: %zd\n", sizeof(grades));
	
}
