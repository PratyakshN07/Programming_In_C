#include <stdio.h>
int main()
{
    int marks[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter martrix[%d][%d]", i, j);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d \t", marks[i][j]);
        printf("\n");
    }
    return 0;
}