#include <stdio.h>


void main()
{
	int c;
	while(c = getchar() != EOF)
		printf("getchar() != EOF es %d\n", c);
	
}

