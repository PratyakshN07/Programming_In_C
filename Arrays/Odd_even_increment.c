// Given an array of integers,change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10
#include <stdio.h>

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i <= 5; i++)
    {
        if (i % 2 != 0)
            arr[i] = arr[i] * 2;
        else
            arr[i] = arr[i] + 10;
        printf("%d ", arr[i]);
    }
    return 0;
}