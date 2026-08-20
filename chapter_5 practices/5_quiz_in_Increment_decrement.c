#include <stdio.h>

int main()
{
    int a = 4;
    printf("%d %d %d\n", a, ++a, a++);
    // we think that its output is 4 5 5
    // but its  output is 6 6 4 both are correct
    // because of evolution order, amera evoution order thik kore na dile compiler ta thik kore nei,
    // ar most of the case a eki variable thakle er evolution order hoi
    // right to left
    // a++, ++a, a
    // 4 6 6
    // so final ans hobe = 6 6 4

    return 0;
}