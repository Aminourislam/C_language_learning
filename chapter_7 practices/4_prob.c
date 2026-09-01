#include <stdio.h>

int main()
{
    int table[10], num, x;
    printf("Which number table you want: \n");
    scanf("%d", &num);

    for (int i = 1; i < 11; i++)
    {
        x = i * num;
        table[i - 1] = x;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d X %d = %d\n", num, i + 1, table[i]);
    }

    return 0;
}