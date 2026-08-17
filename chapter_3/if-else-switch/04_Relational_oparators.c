#include <stdio.h>
int main()
{
    int a, b = 20;
    printf("Enter a number : ");
    scanf("%d", &a);

    if (a == b)
    {
        printf(" a is equel to b");
    }
    else if (a != b)
    {
        printf("a is not equel to b");
    }
    else if (a > b)
    {
        printf("a is gatter than b");
    }
    else if (a < b)
    {
        printf("a is less than b");
    }
    else if (a >= b)
    {
        printf("a is gatter or equel to b");
    }
    else if (a <= b)
    {
        printf("a is less than or equal to b");
    }
    else
        printf("Input no valid");

    return 0;
}