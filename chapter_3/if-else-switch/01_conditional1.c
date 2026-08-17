#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("We are inside if\n");
        printf("You can access this website\n");
    }
    if (age % 5 == 0)
    {
        printf("Your age is divisible ny 5\n");
    }

    return 0;
}