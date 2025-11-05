#include <stdio.h>

int main()
{
    int arr[4][2] = {
        {1, 78},
        {2, 96},
        {3, 91},
        {4, 85},
    };
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}