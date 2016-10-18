
#include <stdio.h>

int main(void)
{
	int able = 2, baker = 3, charlie = 5;

	printf("%d\n", able);
	printf("%d\n", baker);
	printf("%d\n", charlie);

	printf("a + b = %d\n", able + baker);

	charlie += 2; // charlie = charlie + 2;

	// No 2**3

	printf("c / b = %d\n", charlie / baker);
	printf("c / a = %d\n", charlie / able);

	printf("c %% b = %d\n", charlie % baker);
	printf("c %% a = %d\n", charlie % able);

	double xray = 3.1, yankee = 0.00000041, zulu = 590000;

	printf("%f\n", xray);
	printf("%f\n", yankee);
	printf("%f\n", zulu);
}
