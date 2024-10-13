#include <stdio.h>
#include <stdlib.h>

void lab3_example(void) {
    int a = 0, sum = 0, n = 0;
    while (sum < 20) {
        n += 1;
        a += 2;
        sum += a;
        printf("n=%d a=%d sum=%d\n", n, a, sum);
    } 
    printf("Loops n=%d\n", n);
}

void lab3_task_1(void) {
    int a = 0, sum = 0, n = 0;
    printf("Task 1: Sum of integers divisible by 3 until the last number exceeds 21\n");
    while (a <= 21) {
        n += 1;
        a += 3;
        sum += a;
        printf("n=%d a=%d sum=%d\n", n, a, sum);
    }
    printf("Final number: %d, Total cycles: %d\n\n", a, n);
}

void lab3_task_2(void) {
    int sum = 0, n = 0, input;
    printf("Task 2: Sum of numbers entered from the keyboard until the sum exceeds 100\n");
    while (sum <= 100) {
        printf("Enter a number: ");
        scanf("%d", &input);
        sum += input;
        n += 1;
        printf("n=%d input=%d sum=%d\n", n, input, sum);
    }
    printf("Final sum: %d, Total cycles: %d\n\n", sum, n);
}

void lab3_task_3(void) {
    int a = 0, sum = 0, n = 0;
    printf("Task 3: Sum of integers divisible by 4 until the last number exceeds 36\n");
    while (a <= 36) {
        n += 1;
        a += 4;
        sum += a;
        printf("n=%d a=%d sum=%d\n", n, a, sum);
    }
    printf("Final number: %d, Total cycles: %d\n\n", a, n);
}

void lab3_task_4(void) {
    int sum = 0, n = 0, input;
    printf("Task 4: Sum of numbers entered from the keyboard until the sum exceeds 50\n");
    while (sum <= 50) {
        printf("Enter a number: ");
        scanf("%d", &input);
        sum += input;
        n += 1;
        printf("n=%d input=%d sum=%d\n", n, input, sum);
    }
    printf("Final sum: %d, Total cycles: %d\n\n", sum, n);
}

void lab3_task_5(void) {
    int a = 0, sum = 0, n = 0, cycles;
    printf("Task 5: Sum of integers divisible by 5.");
    printf(" Enter the number of cycles : ");
    scanf("%d", &cycles);
    while (n < cycles) {
        n += 1;
        a += 5;
        sum += a;
        printf("n=%d a=%d sum=%d\n", n, a, sum);
    }
    printf("Final sum: %d, Total cycles: %d\n\n", sum, n);
}

void lab3_run_all(void) {
    lab3_example();
    lab3_task_1();
    lab3_task_2();
    lab3_task_3();
    lab3_task_4();
    lab3_task_5();
}

int main(int argc, char *argv[])
{
    lab3_run_all();
    system("pause");
    return 0;
}