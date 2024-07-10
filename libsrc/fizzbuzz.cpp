#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "libfizzbuzz.h"

const int BUFSIZE (256);
const char* S_FIZZBUZZ = "FIZZBUZZ";
const char* S_FIZZ = "FIZZ";
const char* S_BUZZ = "BUZZ";


char buffer[BUFSIZE];

int fizzbuzz(int n, char** buf)
{
	if( n < 1 ){
		*buf = NULL;
		return EXIT_FAILURE;
	}

	memset(buffer, 0, BUFSIZE);

	if( ((n % 3) == 0) && ((n % 5) == 0) ) {
		memcpy(buffer, S_FIZZBUZZ, sizeof(const_cast<char*>(S_FIZZBUZZ)));
	}else if( ((n % 3) == 0 ) ) {
		memcpy(buffer, S_FIZZ, sizeof(const_cast<char*>(S_FIZZ)));
	}else if( ((n % 5) == 0 ) ) {
		memcpy(buffer, S_BUZZ, sizeof(const_cast<char*>(S_BUZZ)));
	}else{
		snprintf(buffer, sizeof(buffer), "%d", n);
		buffer[BUFSIZE-1] = '\0';
	}

	*buf = buffer;
	return EXIT_SUCCESS;
}

