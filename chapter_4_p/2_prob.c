#include <stdio.h>
int main()
{
    int num, sum, i;
    printf("Enter a number : ");
    scanf("%d", &num);
    sum = 0;
    i = 1;
    while (i <= num)
    {
        sum = sum + i;
        i++;
    }
    printf("The sum of (1+2+...+%d) is %d \n", num, sum);
}