#include <stdio.h>

int main(){
    int a = 34;
    float b = 34.434;
    a = (int) b;
    int c = 3.343;
    printf("detatype : %d\n", a);
    printf("c = 3.343 but c= %d\n", c);
    return 0;
}