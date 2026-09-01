#include <stdio.h>
int main()
{
    // array declaration
    int marks[5]; // marks[0-4]
    int class[5] = {6,7,8,9,10};
    int cgpa[] = {50, 90, 45};

    // Inputing element in an arry
    marks[0] = 10;
    marks[1] = 50;

    printf("Getting input using scanf func in a array: ");
    scanf("%d", &marks[3]);

    //  Getting input in an array using a loop
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    // Printing array element
    printf(marks[0]);
    printf(marks[3]);

    // Using loop for output of array
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks at index %d is %d\n", i, marks[i]);
    }

    return 0;
}