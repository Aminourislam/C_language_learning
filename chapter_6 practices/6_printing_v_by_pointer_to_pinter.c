#include <stdio.h>
int main()
{
    int i;
    i = 22;
    int *j = &i;
    int **k = &j;
    printf("The value of: %d\n", *(&i));
    printf("The value of: %d\n", *(j));
    printf("The value of: %d\n", i);
    printf("The value of: %d\n", **(k));

    return 0;
}