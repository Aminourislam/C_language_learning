#include <stdio.h>
int main()
{
    int arr[] = {12, 23, 43, 52, 562, 22};
    int *ptr = &arr[0]; 
    // *ptr = &arr;

    for (int i = 0; i < 6; i++)
    {
        printf("arr element in index %d is %d\n", i, arr[i]);
        printf("arr element in index %d is %d\n", i, *ptr);
        ptr++;
    }

    return 0;
}