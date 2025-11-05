#include <stdio.h>

int main()
{
    int arr10[5][5] = {
        {10, 10, 10, 10, 10},
        {10, 10, 10, 10, 10},
        {10, 10, 10, 10, 10},
        {10, 10, 10, 10, 10},
        {10, 10, 10, 10, 10},
    };
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            printf("%d\t", arr10[i][j]);
        }
        printf("\n");
    }
    return 0;
}