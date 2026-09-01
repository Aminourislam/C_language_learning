#include <stdio.h>
int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    //  00, 01 ,02
    //  10, 11, 12
    //  20, 21, 22

    // printf("%d", arr[1][1]); // 5

    for (int i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    // multi array in memory location
        for (int i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%u  ", &arr[i][j]);
        }
        printf("\n");
    }

    // Taking input in multidi_arry
        for (int i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("index in array arr[%d][%d]: \n", i, j);
            scanf("%d", &arr[i][j]);
            // printf("");
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
