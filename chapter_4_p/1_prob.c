#include <stdio.h>
int main()
{
    int given_num;
    printf("Enter a number for namta = ");
    scanf("%d", &given_num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d \n", given_num, i, given_num * i);
    }
    printf("This thing is for reverse:-\n");
    for (int i = 10; i; i--)
    {
        printf("%d X %d = %d \n", given_num, i, given_num * i);
    }
    return 0;
}