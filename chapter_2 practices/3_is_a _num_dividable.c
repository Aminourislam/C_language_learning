#include <stdio.h>
//Write a program to check whether a number is divisible by 97 or not.
int main(){
    int a; float b;
    printf("check whether a number is divisible by 97 or not?\n");
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a % 97;
    if(b == 0.0){
        printf("Yes\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}