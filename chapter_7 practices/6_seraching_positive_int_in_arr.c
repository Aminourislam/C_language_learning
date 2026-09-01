#include <stdio.h>

void number_of_posiveNum(int arr[], int n){
    int positive_int_num;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            positive_int_num += 1;
        }
    }
    printf("Number of positive int is %d \n", positive_int_num );
    
}

int main()
{
    int arr[] = {23, 2, 53, -2, -42, 32, 64};
    number_of_posiveNum(arr, 7);
    return 0;
}