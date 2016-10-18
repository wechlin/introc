
#include <stdio.h>

void happy(void);
void joy();

int main(void)
{
	happy();
	happy();
	joy("Civil Engineer");
	happy();
}

void happy(void)
{
	puts("Happy Birthday to you");
}

void joy(void)
{
	puts("Happy Birthday dear <insert name here>");
}
