#include <stdio.h>
int Change_value(int);
int Change_value(int i)
{
    i *= 10;
}
int main()
{
    int i;
    printf("Enter a value: ");
    scanf("%d", &i);
    Change_value(i);
    printf("Here 10 times number: %d", i);
    return 0;
}