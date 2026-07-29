#include <stdio.h>
//Explain step by step evaluation of 3*x/y-z+k , where x = 2 , y = 3 , z = 3 , k = 1 .
int main(){
    int x = 2, y = 3, z = 3, k = 1;
    int A = 3*x/y-x+k;
    printf("The value of A = 3*x/y-x+k : %d",A);

    return 0;
}