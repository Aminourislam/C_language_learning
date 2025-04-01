#include<stdio.h>
int main(){
    int i, num, sum;
    i=1;
    sum=0;
    printf("Enter the a number = ");
    scanf("%d", &num);
    do
    {
        sum = sum + i;
        i++;
    } while (i<=num);
    printf("The sum of (1-%d) is = %d \n", num, sum);

return 0;
}