#include <stdio.h>

void pointer_arr(int *arr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void printArray(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    int arr[] = {12, 23, 43, 52, 562, 22};
    int *ptr = &arr[0];
    // *ptr = &arr;
    printArray(ptr);
    pointer_arr(ptr);

    return 0;
}