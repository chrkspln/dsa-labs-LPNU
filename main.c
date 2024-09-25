#include <stdio.h>
#include <stdlib.h>

#include "lab1/basic_types_and_iostream.c"

// "main already has a body" err
int main(void)
{
	int lab1 = system("./Lab1");
	if (!lab1)
	{
		fprintf(stderr, "Error: %d\n", lab1);
		return lab1;
	}
	return 0;
}
