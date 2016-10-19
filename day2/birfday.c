
#include <stdio.h>

int main(void)
{
	int year = 1969;

	// Note that we "cuddle" the closing brace of the first part of the
	// conditional with any additional parts

	if(year > 2000) {
		puts("You are just out of diapers");
	} else if(year > 1990) {
		puts("I bet you had a extreeeeeme childhood, dude");
	} else {
		puts("You are an old fart");
	}


}
