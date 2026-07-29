#include <stdio.h>

int main() {
    // it's format specifier is %zu which is more safe. as it is not working in my lap. so...
    printf("Size of char: %d bytes\n", sizeof(char));
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Size of float: %d bytes\n", sizeof(float));
    return 0;
}
