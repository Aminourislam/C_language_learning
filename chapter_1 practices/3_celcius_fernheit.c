#include <stdio.h>

int main(){
    int c;
    printf("Enter temperature in celcius degree = ");
    scanf("%d", &c);
    // float a,b,d;
    // a = 9/5;
    // b = a*c;
    // d = b+32
    // printf("The temperature in prenheit is %f", 32+b);
    float F = ((9.0/5.0)*c)+32;
    printf("The temperature in prenheit is %f", F);
    return 0;
}