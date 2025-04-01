#include <stdio.h>

int main(){
    int i;
    i = 5;   //i=5
    printf("The value of i is %d\n", i);
    i = i + 5;  //i=10 
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", i++); // print first than incriment kore
    printf("The value of i is %d\n", ++i); // age incriment kore terpor print
    // i++ print first than incriment kore
    // ++i age incriment kore terpor print




    int x = 10;
    printf("The value of x is 10");

    x += 5;  // x = 15
    printf("x += 5: %d\n", x);

    x -= 3;  // x = 12
    printf("x -= 3: %d\n", x);

    x *= 2;  // x = 24
    printf("x *= 2: %d\n", x);

    x /= 4;  // x = 6
    printf("x /= 4: %d\n", x);

    x %= 3;  // x = 0
    printf("x %= 3: %d\n", x)

    x &= 5;  // x = 0
    printf("x &= 5: %d\n", x);

    x |= 3;  // x = 3
    printf("x |= 3: %d\n", x);

    x ^= 2;  // x = 1
    printf("x ^= 2: %d\n", x);

    x <<= 2;  // x = 4
    printf("x <<= 2: %d\n", x);

    x >>= 1;  // x = 2
    printf("x >>= 1: %d\n", x);
    
    
    return 0;
}