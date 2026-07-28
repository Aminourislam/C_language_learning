#include<stdio.h>

int main(){
    int a = 5;
    float b = 5.6;
    char c = 'a';

    printf("Size of int: %d bytes\n", sizeof(a));
    printf("Size of char: %d byte\n", sizeof(b));
    printf("Size of float: %d bytes\n", sizeof(c));
    return 0;
}