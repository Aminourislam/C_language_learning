#include <stdio.h>
void func(int*);
void func(int* x)
{
    printf("The address of i in function is %d\n", x);
    printf("The value of i in function is %d\n", *x);
}
int main()
{
    int i = 5;
    int*j=&i;
    printf("The address of i is %d\n", &i);
    printf("The value of i : %d\n ", i);
    func(j);
    return 0;
}