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

	int lab2 = system("./Lab2");
	if (!lab1)
	{
		fprintf(stderr, "Error: %d\n", lab2);
		return lab2;
	}

	int lab3 = system("./Lab3");
	if (!lab1)
	{
		fprintf(stderr, "Error: %d\n", lab3);
		return lab3;
	}
	return 0;
}
