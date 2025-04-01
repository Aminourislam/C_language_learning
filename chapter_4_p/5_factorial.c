#include <stdio.h>
int main()
{
    int num, fact;
    printf("Enter a number for factorial : ");
    scanf("%d", &num);
    // factorial(3) = 1 * 2 * 3
    // factorial(4) = 1 * 2 * 3 * 4
    // factorial(5) = 1 * 2 * 3 * 4 * 5


    fact = 1;
    for (int i = 1; i <= num; i++)
    {
        // int x = fact * i;
        // fact = x;
        fact *= i;
    }
    printf("The factorial is %d \n", fact);
}