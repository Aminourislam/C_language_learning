#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("Enter a number for squre you need = ");
    scanf("%d", &num);
    // pow Function er return datatype double
    printf("The area of given number is %.2f\n", pow(num, 2));
    return 0;
}