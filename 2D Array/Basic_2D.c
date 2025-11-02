#include <stdio.h>

int main()
{
    int arr[2][2] = {
        {1, 2},
        {3, 4},
    };
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}