#include <stdio.h>
int main()
{
    int x = 500;
    int *y = &x;
    printf("The address of i is %p\n", &x);
    printf("The address of i in integer is %d\n", y);

    printf("The value of x variable is %d", *y);

    return 0;
}