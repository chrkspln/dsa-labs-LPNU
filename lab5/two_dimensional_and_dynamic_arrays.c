#include <stdio.h>
#include <stdlib.h>

void lab5_example()
{
	int arr[4][3] = {{2, 3, 4}, {7}, {1, 9}, {8, 4, 10}}, s1[4], s2[3];
	int i, j;
	puts("Array arr[4][3] ");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n Sum elements strings\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			s1[i] += arr[i][j];
		}
		printf("s1[%d]=%d\n", i, s1[i]);
	}
	printf("\n Sum elements columns\n");
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 4; i++)
		{
			s2[j] += arr[i][j];
		}
		printf("s2[%d]=%d\n", j, s2[j]);
	}
}

void lab5_task_1()
{
	int arr[5][4];
	int sum[4] = { 0 };

	printf("Enter elements for 5x4 array:\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 5; i++) {
			if (arr[i][j] > 0 && arr[i][j] % 2 != 0) {
				sum[j] += arr[i][j];
			}
		}
	}

	printf("Sum of positive odd elements in columns:\n");
	for (int j = 0; j < 4; j++) {
		printf("Column %d: %d\n", j, sum[j]);
	}
}

void lab5_task_2()
{
	int arr[3][6];
	int count[3] = { 0 };

	printf("Enter elements for 3x6 array:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			if (arr[i][j] > 0 && arr[i][j] % 2 == 0) {
				count[i]++;
			}
		}
	}

	printf("Count of positive even elements in rows:\n");
	for (int i = 0; i < 3; i++) {
		printf("Row %d: %d\n", i, count[i]);
	}
}

void lab5_task_3()
{
	int arr[5][3];
	int count[3] = { 0 };

	printf("Enter elements for 5x3 array:\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 5; i++) {
			if (arr[i][j] % 2 != 0) {
				count[j]++;
			}
		}
	}

	printf("Count of odd elements in columns:\n");
	for (int j = 0; j < 3; j++) {
		printf("Column %d: %d\n", j, count[j]);
	}
}

void lab5_task_4()
{
	int arr[3][5];
	int sum[3] = { 0 };

	printf("Enter elements for 3x5 array:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[i][j] < 0) {
				sum[i] += arr[i][j];
			}
		}
	}

	printf("Sum of negative elements in rows:\n");
	for (int i = 0; i < 3; i++) {
		printf("Row %d: %d\n", i, sum[i]);
	}
}

void lab5_task_5()
{
	int arr[4][5];
	int product[5] = { 1, 1, 1, 1, 1 };

	printf("Enter elements for 4x5 array:\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 4; i++) {
			if (arr[i][j] >= 1 && arr[i][j] <= 5) {
				product[j] *= arr[i][j];
			}
		}
	}

	printf("Product of elements in range [1, 5] in columns:\n");
	for (int j = 0; j < 5; j++) {
		printf("Column %d: %d\n", j, product[j]);
	}
}

void lab5_run_all()
{
	lab5_example();
	lab5_task_1();
	lab5_task_2();
	lab5_task_3();
	lab5_task_4();
	lab5_task_5();
}

int main(int argc, char* argv[])
{
	lab5_run_all();
	system("pause");
	return 0;
}
