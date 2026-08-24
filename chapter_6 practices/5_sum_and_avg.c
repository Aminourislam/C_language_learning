#include <stdio.h>

int *sum(int, int);
int *sum(int a, int b)
{
    int s = a + b;
    int *ptr = &s;
    printf("Sum : %d\n", a+b);
    return ptr;
}

float *avg(int, int);
float *avg(int a, int b)
{
    float avg = (a + b) / 2;
    float *ptr = &avg;
    printf("Avarage: %.2f\n", avg);
    return ptr;
}

int main()
{
    int a, b;
    int *ptr1;
    float *ptr2;
    printf("Enter two number for sum and avg: ");
    scanf("%d %d", &a, &b);
    ptr1 = sum(a, b);
    ptr2 = avg(a, b);
    printf("address of sum func %d and avg %d", ptr1,ptr2);
    return 0;
}