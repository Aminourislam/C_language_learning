#include <stdio.h>

int main()
{
    int num;
    char a_char;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("your Entered number is %d.\n\n", num);

    printf("Enter a character: ");
    scanf("%c\n", &a_char);
    printf("This is your entered charactr: %c", a_char);

    // ssssssssssssssssssssss
    // char buff[100];
    // printf("Enter a string: ");

    // // Taking input using gets()
    // gets(buff);
    // printf("You entered: %s", buff);

    return 0;
}