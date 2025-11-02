#include <stdio.h>

int main()
{
    int arr[4] = {1, 2, 3, 4};
    int brr[4];
    for (int i = 0; i <= 3; i++)
    {
        brr[i] = arr[3 - i];
    }
    for (int i = 0; i <= 3; i++)
    {
        printf("%d ", brr[i]);
    }
    return 0;
}