
#include <stdio.h>

// argc is number of command-line arguments
// 
int main(int argc, char *argv[])
{
	printf("%d\n", argc);


	for(int n = 0; n < argc; ++n) {
		printf("%d: %s\n", n, argv[n]);
	}
}

