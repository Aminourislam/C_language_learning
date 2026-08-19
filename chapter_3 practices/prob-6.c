#include <stdio.h>
//  check which number is bigest among entered number
int main()
    int a, b, c, d;
    printf("Enter 1st number : ");
    scanf("%d", &a );
    printf("Enter 2nd number : ");
    scanf("%d", &b );
    printf("Enter 3rd number : ");
    scanf("%d", &c );
    printf("Enter 4th number : ");
    scanf("%d", &d );
    if (a>b && a>c && a>d)
    {
        printf("1st is the bigest number\n");
    }
    else if (b>a && b>c && b>d)
    {
        printf("2nd is the bigest number\n");
    }
    else if (c>a && c>b && c>d)
    {
        printf("3rd is the bigest number\n");
    }
    else
    {
        printf("4th is the bigest number\n");
    }
    

    return 0;
}