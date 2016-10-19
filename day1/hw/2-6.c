
#include <math.h>
#include <stdio.h>

double quadratic(double a, double b, double c);

int main(void)
{
	double a = 3, b = 4, c = 1;

	double y = quadratic(a, b, c);

	printf("%lf\n", y);
}

// (-b + sqrt(b**2 - 4*a*c)) / (2*a)
double quadratic(double a, double b, double c)
{
	return (-b + sqrt(b*b - 4*a*c)) / (2*a);
}
