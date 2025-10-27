#include <stdio.h>

int main()
{
    int r;
    printf("Enter number of rows = ");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++)
    {
        for (int i = 1; i <= r; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}