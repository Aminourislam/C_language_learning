#include <stdio.h>

int main()
{
    // condition? expression-if-true : expression-if-false
    printf("Check who is greater. a or b \n");
    int a, b;
    printf("Enter the valuc of a : ");
    scanf("%d", &a);
    printf("Enter the valuc of b : ");
    scanf("%d", &b);
    // condition? expression-if-true : expression-if-false
    a>b?printf("a is greater! \n"):printf("b is greater!\n");

    return 0;
}