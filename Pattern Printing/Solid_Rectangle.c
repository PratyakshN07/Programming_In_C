#include <stdio.h>
int main()
{
    int r;
    printf("Enter number of rows = ");
    scanf("%d", &r);
    int c;
    printf("Enter number of columns = ");
    scanf("%d", &c);
    //*******... upto n number of stars
    for (int i = 1; i <= r; i++)
    {
        for (int i = 1; i <= c; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}