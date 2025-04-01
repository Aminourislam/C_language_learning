#include <stdio.h>

double avrage(int, int, int);

double avrage(int a, int b, int c)
{
    double x = (a + b + c) / 3.0;
    return x;
}

int main()
{
    int a, b, c;
    printf("Enter three numbers for average: ");
    scanf("%d %d %d", &a, &b, &c); // Removed extra space
    double x = avrage(a, b, c);
    printf("The average of %d, %d, and %d is = %lf\n", a, b, c, x);
    return 0;
}
