#include <stdio.h>
int main()
{
    // arry in memory
    int arry[3];
    // 3302,3306.3310
    printf("arrys' address in memory:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("for index %d address is %u\n", i, &arry[i]);
    }

    return 0;
}