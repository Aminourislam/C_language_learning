#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    // intialize random number genarator
    srand(time(0));
    // genarate random number between 1 - 100
    int RandomNumber = (rand() % 100) + 1;
    int guesd_num;
    int number_of_guess = 0;
    do
    {
        printf("Gues the number : ");
        scanf("%d", &guesd_num);
        if (guesd_num > RandomNumber)
        {
            printf("Lower number please \n");
        }
        else
        {
            printf("Bigger number please \n");
        }

        number_of_guess++;

    } while (RandomNumber != guesd_num);
    printf("You guesed the number in %d guess\n", number_of_guess);
    printf("The random number is %d\n", RandomNumber);
    return 0;
}