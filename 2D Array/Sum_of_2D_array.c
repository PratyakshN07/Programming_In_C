#include <stdio.h>

int main()
{
    int arr[2][2] = {
        {1, 2},
        {3, 4},
    };
    int arr2[2][2] = {
        {9, 8},
        {7, 6},
    };
    int res[2][2];
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("%d\t", res[i][j] = arr[i][j] + arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}