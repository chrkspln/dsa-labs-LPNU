#include <stdio.h>
#include <stdlib.h>

#include "lab1/basic_types_and_iostream.c"
#include "lab2/choice_operators.c"
#include "lab3/cycle_operators.c"
#include "lab4/arrays_and_pointers.c"

// "main already has a body" err
int main(void)
{
	int lab1 = system("./lab1");
	if (!lab1)
	{
		fprintf(stderr, "Error: %d\n", lab1);
		return lab1;
	}

	int lab2 = system("./lab2");
	if (!lab2)
	{
		fprintf(stderr, "Error: %d\n", lab2);
		return lab2;
	}

	int lab3 = system("./lab3");
	if (!lab3)
	{
		fprintf(stderr, "Error: %d\n", lab3);
		return lab3;
	}

	int lab4 = system("./lab4");
	if (!lab4)
	{
		fprintf(stderr, "Error: %d\n", lab4);
		return lab4;
	}
	return 0;
}
