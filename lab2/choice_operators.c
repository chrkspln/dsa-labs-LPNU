#include <stdio.h>
#include <stdlib.h>

void example(void)
{
	float x;
	puts("Input value:");
	scanf("%f", &x);
	if (x > 0)
		if (x > 100)
			printf("Value %.2f >0 and > 100\n", x);
		else
			printf("Value %.2f >0 and <= 100\n", x);

	if (x < -100)
		printf("Value %.2f <=0 and <-100\n", x);
	else
		printf("Value %.2f <=0 and >=-100\n", x);
}

#include <stdio.h>

void task_1(void)
{
	int x;
	printf("1. Enter an integer: ");
	scanf("%d", &x);

	if (x % 2 == 0)
	{
		// Check if the number is even
		if (x > 0)
		{
			printf("The number %d is even and positive.\n", x);
		}
		else
		{
			printf("The number %d is even but not positive.\n", x);
		}
	}
	else
	{
		// If the number is odd
		if (x > 25)
		{
			printf("The number %d is odd and greater than 25.\n", x);
		}
		else
		{
			printf("The number %d is odd but not greater than 25.\n", x);
		}
	}
}

void task_2(void)
{
	int x, y;
	printf("2. Enter two integers: ");
	scanf("%d %d", &x, &y);

	if (x > y)
	{
		// If x is greater than y
		if (x >= 5 && x <= 30)
		{
			printf("The number %d is greater than %d and is in the range of 5 to 30.\n", x, y);
		}
		else
		{
			printf("The number %d is greater than %d but not in the range of 5 to 30.\n", x, y);
		}
	}
	else
	{
		// If y is greater than or equal to x
		if (y >= 5 && y <= 30)
		{
			printf("The number %d is greater than %d and is in the range of 5 to 30.\n", y, x);
		}
		else
		{
			printf("The number %d is greater than %d but not in the range of 5 to 30.\n", y, x);
		}
	}
}

void task_3(void)
{
	int x;
	printf("3. Enter an integer: ");
	scanf("%d", &x);

	if (x > 50)
	{
		if (x % 4 == 0)
		{
			printf("The number %d is greater than 50 and is divisible by 4.\n", x);
		}
		else
		{
			printf("The number %d is greater than 50 but not divisible by 4.\n", x);
		}
	}
	else
	{
		if (x % 3 == 0)
		{
			printf("The number %d is not greater than 50 but is divisible by 3.\n", x);
		}
		else
		{
			printf("The number %d is not greater than 50 and not divisible by 3.\n", x);
		}
	}
}

void task_4(void)
{
	int x, y;
	printf("4. Enter two integers: ");
	scanf("%d %d", &x, &y);

	if (x < y)
	{
		if (x % 2 != 0)
		{
			printf("The smaller number %d is odd.\n", x);
		}
		else
		{
			printf("The smaller number %d is even.\n", x);
		}
	}
	else
	{
		if (y % 2 != 0)
		{
			printf("The smaller number %d is odd.\n", y);
		}
		else
		{
			printf("The smaller number %d is even.\n", y);
		}
	}
}

void task_5(void)
{
	int x;
	printf("5. Enter an integer: ");
	scanf("%d", &x);

	if (x > 0)
	{
		if (x % 5 == 0)
		{
			printf("The number %d is positive and divisible by 5.\n", x);
		}
		else
		{
			printf("The number %d is positive but not divisible by 5.\n", x);
		}
	}
	else
	{
		if (x < -100)
		{
			printf("The number %d is negative and less than -100.\n", x);
		}
		else
		{
			printf("The number %d is negative but not less than -100.\n", x);
		}
	}
}


int main(int argc, char* argv[])
{
	example();
	task_1();
	task_2();
	task_3();
	task_4();
	task_5();
	system("pause");
	return 0;
}
