#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number = ");
    scanf("%d", &a);
    if (a % 2 == 0) // for even integers
    {
        printf("ENTERED NUMBER IS EVEN");
    }
    if (a % 2 != 0) // for odd integers
    {
        printf("ENTERED NUMBER IS ODD");
    }

    return 0;
}
