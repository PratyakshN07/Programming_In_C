#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d", &n);
    if (n > 99 && n < 1000)
    {
        printf("It is a 3 digit number");
    }
    else
    {
        printf("It is not a 3 digit number");
    }
}