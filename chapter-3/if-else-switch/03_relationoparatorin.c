#include <stdio.h>

int main()
{
    int num;
    printf("Enter your febarate number: ");
    scanf("%d", &num);
    if (num == 2)
    {
        printf("This is equal relational oparator! \n");
    }
    if (num != 3)
    {
        printf("This is not equal ralational oparator! \n");
    }
    if (num < 4)
    {
        printf("This is lessthen ralational oparator! \n");
    }
    if (num > 5)
    {
        printf("This is getter then ralational oparator! \n");
    }
    if (num <= 63)
    {
        printf("This is lessthen and equal ralational oparator! \n");
    }
    if (num >= 51)
    {
        printf("This is getter then and equal ralational oparator! \n");
    }

    return 0;
}