#include <stdio.h>

int factorial(int n);
int factorial(int n)
{
    // factorial(3)= 1 * 2 * 3
    // factorial(4)= 1 * 2 * 3 * 4
    // factorial(5)= 1 * 2 * 3 * 4 * 5
    // factorial(n)= 1 * 2 * 3 * 4 * 5 * ....* n
    // factorial(n)= 1 * 2 * 3 * 4 * 5 * ....* (n-1) * n
    // factorial(n-1)= 1 * 2 * 3 * 4 * 5 * ....* (n-1)
    // so that , factorial(n) = factorial(n-1) * n;

    // aber amra jani,  factorial(1) o factorial(0) = 1;
    if (n == 1 || n == 0)
    {
        return 1;
    }

    return factorial(n - 1) * n;
}

int main()
{
    int n;
    printf("Enter a number for factorial : ");
    scanf("%d", &n);
    printf("The factorial of %d is = %d\n", n, factorial(n));
    return 0;
}