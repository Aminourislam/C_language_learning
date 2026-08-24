#include <stdio.h>
int main()
{
    int i = 72;
    int *j = &i;
    int **k = &j;

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", *(&i));
    // ***&&&a = a 
    printf("The value of i is %d\n", **(&j)); // **&j = *j = 72
    printf("The value at j is %d\n", j);
    printf("The value at j is %d\n", **(&k));

    return 0;
}