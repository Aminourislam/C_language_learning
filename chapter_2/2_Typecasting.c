#include <stdio.h>
/*
which of the following is invalid in C?
a. int a = 1; int b = a;
b. int v = 3*3;
c. char dt = '21 dec 2020';
*/
int main(){
    int a = 34;
    float b = 34.434;
    a = (int) b;
    int c = 3.343;
    printf("detatype : %d\n", a);
    printf("c = 3.343 but c= %d\n", c);

    int a = 1; int b = a;
    int v = 3*3;
    //char dt = '21 dec 2020';
    printf("%d", b);
    printf("%d", v);
    //printf("%c", dt); here is the problem

/*  int/int = int
    int/float = float
    float/float = float
*/
    return 0;
}