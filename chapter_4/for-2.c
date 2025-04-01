#include<stdio.h>
int main(){
    int num,e;
    printf("Enter a number = ");
    scanf("%d", &num);
    e = 10;
    for (int i = 1; i <= num; i++)
    {
        if (i == e)
        {
            continue;
        }
        
        printf("The number is %d\n", i);
    }
    printf("This is continue statement");
return 0;
}