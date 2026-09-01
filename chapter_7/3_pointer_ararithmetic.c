#include <stdio.h>
int main()
{
    int a = 5;
    int *ptr = &a;
    
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++; // for int it will go ahead 4 bit and for char 1;
    printf("The address of a is %u\n", ptr);
    ptr--;
    printf("The address of a is %u\n", ptr);

    int i = 32;
    int *a = &i; // a = 87994
    a++;
    // address of i or value of a = 87998
    char a = 'A';
    char *b = &a; // a= 87994
    b++;
    // now a = 87995
    float i = 1.7;
    float *a = &i; // now a = 87994
    a++;
    // now a = 87998
    return 0;
}