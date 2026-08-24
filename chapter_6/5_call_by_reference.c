#include <stdio.h>

// sum function should change the value of x
int sum(int *, int *);
int sum(int *a, int *b) // address catch korar jonno pointer declaration
{
    *a = 6;
    return *a + *b;
}

int main()
{
    int x = 1, y = 6;
    printf("The sum of %d and %d is %d\n", x, y, sum(&x, &y)); // address passing
    // function e memory address disi
    printf("The valu of x is %d", x);
    return 0;
}