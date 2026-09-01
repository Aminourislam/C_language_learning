#include <stdio.h>

int main()
{
    int number_arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = number_arr;
    printf("The value at address %u is %d", ptr+2, *(ptr+2));

    return 0;
}