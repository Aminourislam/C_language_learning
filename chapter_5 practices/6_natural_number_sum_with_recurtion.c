#include <stdio.h>
int n_sum(int);
int n_sum(int n)
{
    // 1+2+3+4+5+6.
    // n_sum(n)= n_sum(n-1)+n;
    if (n == 1)
    {
        return 1;
    }
    return n + n_sum(n - 1);
}

int main()
{
    int n;
    printf("Enter a number for sum of natural number : ");
    scanf("%d", &n);
    printf("The sum of ( 0 - %d) is : %d \n", n, n_sum(n));
    return 0;
}