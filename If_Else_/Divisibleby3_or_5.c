#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d", &n);
    if (n % 3 == 0 || n % 5 == 0)
    {
        printf("It is divisible by 3 or 5 \n");
    }
    else
    {
        printf("Neither divisible by 3 nor 5 \n");
    }
    return 0;
}