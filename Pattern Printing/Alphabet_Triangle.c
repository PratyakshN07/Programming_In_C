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
            printf("%c ", ch);
            a++;
        }
        printf("\n");
    }

    return 0;
}