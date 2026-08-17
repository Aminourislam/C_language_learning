#include <stdio.h>

int main(){
    printf("Realational oparators:\n and --> &&\n or --> ||\n not --> ! \n");

    // and mane *
    // or mane +
    // not mane ultai deoya
    int a = 0, b = 0;



    printf("When a = 0 and b = 0  \n");
    printf("Print the value of a && b is %d \n", a && b);
    printf("Print the value of a || b is %d \n", a || b);

    printf("a = %d \n",  a);
    printf("The value of not(a) is %d\n\n", !a);

    a = !a;
    printf("When a = 1 and b = 0");
    printf("Print the value of a && b is %d \n", a && b);
    printf("Print the value of a || b is %d \n \n", a || b);


    printf("When a = 0 and b = 1  \n");
    a = 0;
    b = 1;
    printf("Print the value of a and / &&  b is %d \n", a && b);
    printf("Print the value of a or / || b is %d \n\n", a || b);


    printf("Useags of this oparators: \n");
    // a = 1
    // b = 1
    a = a+1;

    if (a && b)
    {   
        printf("Both are true! \n");
    }
   
    // er likthe hoito 

    if (a)
    {
        if (b)
        {
            printf("Both are ture! \n");
        }
        
    }
    
    

    return 0;
}