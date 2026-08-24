#include <stdio.h>

int change(int *, int *);
int change(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int main()
{
    int a, b;
    printf("Enter the value of A = ");
    scanf("%d", &a);
    printf("Enter the value of B = ");
    scanf("%d", &b);
    change(&a, &b);
    printf("A = %d\nB = %d", a, b);
}