
#include <stdbool.h>
#include <stdio.h>

int sum_of_squares(int a, int b)
{
	return a*a + b*b;
}

bool is_right(int a, int b, int c)
{
	return sum_of_squares(a, b) == c*c;
}

int main(void)
{
	int side1 = 3, side2 = 4, side3 = 5;

	printf("%d, %d, and %d are ", side1, side2, side3);

	if(!is_right(side1, side2, side3)) {
		printf("NOT ");
	}

	puts("the sides of a right triangle");
}
