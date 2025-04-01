#include <stdio.h>
int main()
{
    int i, factorial, num;
    printf("Enater a number : ");
    scanf("%d", &num);
    factorial = 1;
    i = 1;
    while (i <= num)
    {
        factorial *= i;
        i++;
    }
    printf("The factorial is %d \n", factorial);
    return 0;
}