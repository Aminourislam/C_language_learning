#include <stdio.h>
int main()
{
    int a, i;
    printf("Enter a number: ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        if (i == 4)
        {
            continue;
        }

        printf("%d\n", i);
    }
    return 0;
}
