#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You can access this website.");
    }
    else
    {
        printf("You can't access this website.");
    }
    

    return 0;
}