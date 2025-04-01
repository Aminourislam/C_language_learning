#include <stdio.h>

// Function proto_type
int function_name(int a, int b)
{
    int value = a % b;
    return value;
}

// Function defination
int sum(int x, int y)
{
    printf("The sum of %d and %d is %d\n", x, y, x + y);
    return x + y;
}

// Real function  IN below

int multi(int x, int y)
{
    int multi = x * y;
    return multi;
}

void faltu()
{
    printf("This is Fultu function.\n");
}

int main()
{
    // Function calling
    sum(12, 13);

    // Function calling
    int multiplication;
    multiplication = multi(2, 33); //function call
    
    printf("The multi is %d\n", multiplication);

// void kisu return kore na ja ase vitore tai dai
    faltu();

    return 0;
}