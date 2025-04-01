#include <stdio.h>

int main(){
    printf("Logical oparators: and > &&. or > ||. not \n");

    // and mane *
    // or mane +
    // not mane ultai deoya

    printf("When a = 0 and b = 0  \n");
    int a = 0, b = 0;
    printf("Print the value of a and b is %d \n", a && b);
    printf("Print the value of a or b is %d \n\n", a || b);


    printf("When a = 1 and b = 0  \n");
    a = a + 1;
    printf("Print the value of a and b is %d \n", a && b);
    printf("Print the value of a or b is %d \n \n", a || b);


    printf("When a = 0 and b = 1  \n");
    a = a - 1;
    b = b + 1;
    printf("Print the value of a and b is %d \n", a && b);
    printf("Print the value of a or b is %d \n\n", a || b);


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