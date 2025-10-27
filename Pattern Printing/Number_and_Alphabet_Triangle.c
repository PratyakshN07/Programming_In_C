#include <stdio.h>

int main()
{
    int r;
    printf("Enter number of rows = ");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            int d = a + 64;
            char ch = (char)d;
            a++;
            if (i % 2 == 0)
            {
                printf("%c ", ch);
            }
            else
                printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}   