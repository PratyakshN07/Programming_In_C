#include <stdio.h>

int main()
{
    int r;
    printf("Enter number of rows = ");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++) // Number of Rows are denoted by --> "i" variable
    {
        for (int j = 1; j <= r + 1 - i; j++) // Number of Columns are denoted by --> "j" variable
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}