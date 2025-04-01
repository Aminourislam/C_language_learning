#include <stdio.h>
int main()
{
    int num, sum, i;
    printf("Enter a number : ");
    scanf("%d", &num);
    sum = 0;
    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    printf("The sum BY FOR LOOP of(1+2+...+%d) is %d \n", num, sum);

    // making this code for do while loop
    int sumdo, a;
    sumdo = 0;
    a = 1;
    do
    {
        sumdo+= a;
        a++;
    } while (a <= num);
    printf("The sum BY DO WHILE LOOP of (1+2+...+%d) is %d \n", num, sumdo);
}