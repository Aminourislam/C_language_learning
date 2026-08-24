#include <stdio.h>
int main()
{
    int i = 72;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %d\n", &i);
    printf("The address of i is %u\n", &i); // u for unsigned int
    // pointer declar
    int *j = &i;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);

    // value at oparator/ * oparator
    printf("The valu at address j is %d\n", *(&i));
    printf("The valu at address j is %d\n", *(&j));

    return 0;
}