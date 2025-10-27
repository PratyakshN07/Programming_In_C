#include <stdio.h>

int main()
{
    int r;
    printf("Enter number of rows = ");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++) // Number of Rows are denoted by --> "i" variable
    {
        int a = 1;
        for (int j = 1; j <= i; j++) // Number of Columns are denoted by --> "j" variable
        {
            printf("%d ", a);
            a = a + 2;
        }
        printf("\n");
    }

    return 0;
}