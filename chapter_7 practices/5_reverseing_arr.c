#include <stdio.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf(" \n");
}

void reverse(int a[], int n)
{

    // 0-5
    // 1-4
    // 2-3
    // stop

    // i form 0 to n/2
    // arr[i] arr[n-1]
    // arr[i] arr[n-i-1]
    int temp;
    for (int i = 0; i < (n/2); i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}

int main()
{
    int given_arr[] = {1, 2, 3, 4, 5, 6,7};
    // printArray(given_arr,6);
    reverse(given_arr,7);
    printArray(given_arr,7);

    return 0;
}