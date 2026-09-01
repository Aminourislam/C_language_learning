#include <stdio.h>

int main()
{
    int num;
    printf("how many number table you want to store: \n");
    scanf("%d", &num);
    int  table[num][10], mul[num];
    printf("Enter the numbers serialy: \n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &mul[i]);
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            table[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < num; i++)
    {
        printf("-----The table of %d-----\n", mul[i]);
        for (int j = 0; j < 10; j++)
        {
            printf("The value of %d X %d = %d\n", mul[i], j + 1, table[i][j]);
        }
        printf(" \n");
    }

    return 0;
}