#include<stdio.h>
int main() {
    int i,sum,n;
    i=1;
    sum = 0;
    printf("Enter the number = ");
    scanf("%d", &n);
    while (i<=n)
    {   
        sum = sum + i;
        i++;
    }    
    printf("The sum of (1+2+3+ ..+ %d) is = %d \n", n, sum);
    return 0;
}