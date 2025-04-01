#include <stdio.h>
int main()
{
    int num, sum, i,m;
    printf("Enter a number : ");
    scanf("%d", &num);
    sum = 0;
    for (int i = 1; i <=10; i++)
    {
         m = num*i;
        sum+= m;
    }
    
    printf("The sum of table of %d is %d \n", num, sum);
}