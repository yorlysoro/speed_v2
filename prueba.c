#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, char *argv[])
{	
	int i;
	
	
	for(i = 0; argv[i]; i++)
	argv[i] = tolower(argv[i]);
	
	printf("%s\n", argv);
	return 0;
}
