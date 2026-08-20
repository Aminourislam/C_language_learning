#include <stdio.h>

int main()
{
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        // if i=0 --> print 1 ster
        // if i=1 --> print 3 ster
        // if i=2 --> print 5 ster
        // num_of_ster = (2*i+1)
        for (int j = 0; j < (2*i+1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    


    return 0;
}