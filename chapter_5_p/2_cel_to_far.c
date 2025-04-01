#include <stdio.h>

float ctof(float);
float ctof(float c)
{
    return ((c * 9) / 5) + 32;
}

float ftoc(float f)
{
    return ((f - 32) * 5) / 9;
}

int main()
{
    float f, c;
    int num;
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    do
    {
        printf("Enter a number (1 or 2): ");
        scanf("%d", &num);
    } while (num < 1 || num > 2);

    switch (num)
    {
    case 1:
        printf("Enter a temperature in Celsius: ");
        scanf("%f", &c);
        printf("%.2f C = %.2f F\n", c, ctof(c));
        break;
    case 2:
        printf("Enter a temperature in Fahrenheit: ");
        scanf("%f", &f);
        printf("%.2f F = %.2f C\n", f, ftoc(f));
        break;
    }

    return 0;
}