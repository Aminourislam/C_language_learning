#include <stdio.h>

float Gravi_F(float);
float Gravi_F(float mass)
{
    float gravi_F = mass * 9.8;
    return gravi_F;
}

int main()
{
    float mass, G_F;
    printf("Enter Mass (in KG) : ");
    scanf("%f", &mass);
    G_F = Gravi_F(mass);
    printf("The gravititional force : %.2f N\n", G_F);

    return 0;
}