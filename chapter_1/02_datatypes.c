#include<stdio.h>

int main(){
    char c = 'a';
    int a = 5;
    float b = 5.6;

    printf("char: %c\n", c);
    printf("int: %d\n", a);
    printf("float: %.2f\n", b);
    printf("float: %f\n\n", b);
    
/*  wrong aproch
    printf("float: %f\n", c);
    printf("int: %d\n", b);
    printf("char: %c\n", a);
*/
    return 0;
}