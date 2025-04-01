#include <stdio.h>

int main(){
    int r,h;
    printf("Enter the radius of the circle =\n");
    scanf("%d", &r);
    printf("Enter the height of the circle =\n");
    scanf("%d", &h);
    printf("The area of the circle is =%f\n", 3.1416*r*r);
    printf("The volume of the circle is =%f", 3.1416*r*r*h);
    
    return 0;
}