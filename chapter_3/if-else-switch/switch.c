#include <stdio.h>

int main()
{
    printf("All about switch!!! \n");
    printf("Enter a number between (1-5) : ");
    int a;
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("You entered case 1 \n");
        break;
    case 2:
        printf("You entered case 2 \n");
        break;
    case 3:
        printf("You entered case 3 \n");
        break;
    case 4:
        printf("You entered case 4 \n");
        break;
    case 5:
        printf("You entered case 5 \n");
        break;
    default:
        printf("Nothing matched !!! \n");
    }

    // quiz__in c program

    printf("Practices in C programs!!!! \n");
    printf("Enter your mark : ");
    int mark;
    scanf("%d", &mark);
    if (mark >= 90)
    {
        printf("You got Golden A+ \n");
    }
    else if (mark >= 80)
    {
        printf("You got A+ \n");
    }
    else if (mark >= 70)
    {
        printf("You got A \n");
    }
    else if (mark >= 60)
    {
        printf("You got A- \n");
    }
    else if (mark >= 50)
    {
        printf("You got B \n");
    }
    else if (mark >= 33)
    {
        printf("You got C \n");
    }
    else
    {
        printf("You are fail-!!! \n");
    }
    return 0;
}
