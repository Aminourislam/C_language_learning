#include <stdio.h>

int main() {
    int a;
    float b;
    char c;
    printf("the value that is char:: ");
    scanf("%c", &c);
    printf("The input is = %c\n", c);

    printf("the value that is integer:: ");
    scanf("%d", &a);
    printf("The input is = %d\n", a);

    printf("the value that is float:: ");
    scanf("%f", &b);
    printf("The input is = %.2f\n", b);

    
    return 0;
}
