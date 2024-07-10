#include <iostream>
#include <cstdlib>

#include "libfizzbuzz.h"

int main(int argc, char* argv[])
{
	int n;
	char* buf;

	for(n = 0; n < 50; n++){
		fizzbuzz(n, &buf);
		if( buf != NULL ) {
			printf("%s\n", buf);
		}
	}
	return EXIT_SUCCESS;
}
