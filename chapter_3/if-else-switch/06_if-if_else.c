#include <stdio.h>

int main(){
    printf("Enter your age to cheak you can drive or not : ");
    int age;
    scanf("%d", &age);
    if (age<18)
    {
        printf("You can\' t drive a car or motorbick! \n Because you are a child. \n");
    }
    else if(age>60)
    {
        printf("You can\' t drive a car or motorbick! \n Because you are a senior citizen. \n");
    }
    else
    {
        printf("You can drive a car or motorbick \n");
    }
    
    
    return 0;
}