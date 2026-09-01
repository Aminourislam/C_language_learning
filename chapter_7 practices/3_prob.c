#include <stdio.h>

int main()
{
    int table[10];
    for (int i = 1; i < 11; i++)
    {
        int x = i * 5;
        table[i - 1] = x;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", table[i]);
    }

    return 0;
}