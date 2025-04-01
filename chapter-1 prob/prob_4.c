#include <stdio.h>

int main(){
    int p,r,t;
    printf("Principal amount : ");
    scanf("%d", &p );
    printf("Rate of interst : ");
    scanf("%d", &r );
    printf("Time in year : ");
    scanf("%d", &t );
    printf("The value of simple intrest is = %d", (p*r*t)/100);
    return 0;
}