#include <stdio.h>
int main()
{
    int i = 72;
    char j = 'A';
    float k = 3.1416;

    // pointer declar
    int *a = &i;
    char *b = &j;
    float *c = &k;
    printf("The address of i is %p\n", a);
    printf("The address of i is %p\n", b);
    printf("The address of i is %p\n", c);

    // value at oparator/ * oparator
    printf("The valu at address a is %d\n", *(&i));
    printf("The valu at address b is %d\n", *(&j));
    printf("The valu at address c is %d\n", *(&k));

    return 0;
}