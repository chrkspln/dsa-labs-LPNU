#include <stdio.h>
#include <stdlib.h>

void lab2_example(void)
{
	int n;
	puts("Input number:");
	scanf("%d", &n);
	if (n % 2 == 0)
		printf("number %d even\n", n);
	else
		printf("number %d odd\n", n);
}

void lab2_task_1(void)
{
	int n;
	puts("Input number:");
	scanf("%d", &n);
	if (n > 100)
		printf("number %d is greater than 100\n", n);
	else
		printf("number %d is not greater than 100\n", n);
}

void lab2_task_2(void)
{
	int n;
	puts("Input number:");
	scanf("%d", &n);
	if (n < 20)
		printf("number %d is less than 20\n", n);
	else
		printf("number %d is not less than 20\n", n);
}

void lab2_task_3(void)
{
	int n;
	puts("Input number:");
	scanf("%d", &n);
	if (n % 10 == 3)
		printf("number %d ends with 3\n", n);
	else
		printf("number %d does not end with 3\n", n);
}

void lab2_task_4(void)
{
	int n;
	puts("Input number:");
	scanf("%d", &n);
	if (n % 10 == 0)
		printf("number %d ends with 0\n", n);
	else
		printf("number %d does not end with 0\n", n);
}

void lab2_task_5(void)
{
	int n;
	puts("Input number:");
	scanf("%d", &n);
	if (n % 5 == 0)
		printf("number %d is divisible by 5\n", n);
	else
		printf("number %d is not divisible by 5\n", n);
}

void lab2_run_all(void)
{
	lab2_example();
	lab2_task_1();
	lab2_task_2();
	lab2_task_3();
	lab2_task_4();
	lab2_task_5();
}

int main(int argc, char* argv[])
{
	lab2_run_all();
	system("pause");
	return 0;
}
