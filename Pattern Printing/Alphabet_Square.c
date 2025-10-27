#include <stdio.h>

int main()
{
    int r;
    printf("Enter number of rows = ");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++)
    {
        int a = 1;
        for (int j = 1; j <= r; j++)
        {
            int d = a + 64;    // d=65
            char ch = (char)d; // ch=(char)65 --> ch ='A'
            printf("%c ", ch);
            a++;
        }
        printf("\n");
    }

    return 0;
}