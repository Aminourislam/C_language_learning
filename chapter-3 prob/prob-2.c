#include <stdio.h>

int main(){
    int mark1 , mark2 , mark3;
    printf("Enter 1st subject mark : ");
    scanf("%d", &mark1);
    printf("Enter 2nd subject mark : ");
    scanf("%d", &mark2);
    printf("Enter 3rd subject mark : ");
    scanf("%d", &mark3);
    
    if (mark1 <33 || mark2<33 || mark3<33)
    {
        printf("You fail in indivisual subject.");
    }
    else if ((mark1+mark2+mark3)/3 < 33)
    {
        printf("You fail in more then one subject.");
    }
    
    
    return 0;
}