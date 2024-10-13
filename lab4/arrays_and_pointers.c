#include <stdio.h>
#include <stdlib.h>

void lab4_example() {
    int arr[10] = { 4,2,-3,8,12,1,-2,9,0,15 }, min, i;
    for (i = 0; i < 10; i++)
        printf("arr[%d]=%3d %p\n", i, arr[i], &arr[i]); printf("Size massiv arr: %d bait\n", sizeof(arr)); min = arr[0];
    for (i = 0; i < 10; i++) if (arr[i] < min) min = arr[i];
    printf("min = %d\n", min);
}

void lab4_task_1() {
    int arr[6], sum = 0, count = 0;
    printf("Task 1: Enter 6 integers to compute the arithmetic mean of non-zero elements\n");

    for (int i = 0; i < 6; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
        if (arr[i] != 0) {
            sum += arr[i];
            count++;
        }
    }

    if (count > 0) {
        double average = (double)sum / count;
        printf("Average of non-zero elements = %.2f\n", average);
    } else {
        printf("No non-zero elements to calculate the average.\n");
    }
    printf("\n");
}

void lab4_task_2() {
    int arr[8], sum = 0, count = 0, min;
    printf("Task 2: Enter 8 integers to compute the arithmetic mean excluding the minimum element\n");

    for (int i = 0; i < 8; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
        if (i == 0 || arr[i] < min) {
            min = arr[i];
        }
    }

    sum -= min;
    count = 7;

    double average = (double)sum / count;
    printf("Average excluding the minimum element (%d) = %.2f\n", min, average);
    printf("\n");
}

void lab4_task_3() {
    int arr[5], sum = 0, count = 0;
    printf("Task 3: Enter 5 integers to compute the arithmetic mean of positive elements\n");

    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            sum += arr[i];
            count++;
        }
    }

    if (count > 0) {
        double average = (double)sum / count;
        printf("Average of positive elements = %.2f\n", average);
    } else {
        printf("No positive elements to calculate the average.\n");
    }
    printf("\n");
}

void lab4_task_4() {
    int arr[6], sum = 0, count = 0;
    printf("Task 4: Enter 6 integers to compute the arithmetic mean of even elements\n");

    for (int i = 0; i < 6; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            sum += arr[i];
            count++;
        }
    }

    if (count > 0) {
        double average = (double)sum / count;
        printf("Average of even elements = %.2f\n", average);
    } else {
        printf("No even elements to calculate the average.\n");
    }
    printf("\n");
}

void lab4_task_5() {
    int arr[7], sum = 0;
    printf("Task 5: Enter 7 integers to compute the sum of squares of negative elements\n");

    for (int i = 0; i < 7; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
        if (arr[i] < 0) {
            sum += arr[i] * arr[i];
        }
    }

    printf("Sum of squares of negative elements = %d\n", sum);
    printf("\n");
}

void lab4_run_all() {
    lab4_example();
    lab4_task_1();
    lab4_task_2();
    lab4_task_3();
    lab4_task_4();
    lab4_task_5();
}

int main(int argc, char *argv[])
{
    lab4_run_all();
    system("pause");
    return 0;
}