#include <stdio.h>
int fibonacci(int);
// 0 1 1 2 3 5 8 13 21 ..
// fibonacci(n)= fibonacci(n-2) + fibonacci(n-1)

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }

    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
    int n;
    printf("Enter a number for the value of fibonacci series : ");
    scanf("%d", &n);
    printf("The value of fibonacci series %dth is %d\n", n, fibonacci(n));
    return 0;
}