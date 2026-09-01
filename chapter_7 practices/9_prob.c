#include <stdio.h>

int main()
{
    int multi_arr[3][5][9];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 9; k++)
            {
                printf("The address of multi_arr[%d][%d][%d] is %u \n", i, j, k, &multi_arr[i][j][k]);
            }
        }
    }

    return 0;
}