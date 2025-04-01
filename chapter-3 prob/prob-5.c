#include <stdio.h>

int main(){
    // check entered character is lowercase or not
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    // printf("The value of character is %d\n", ch);
    if ( ch >= 97 && ch<=122)
    {
        printf("The character is lowercase\n");
    }
    else
    {
        printf("The character is not a lowercase\n");
    }

    return 0;
}