#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d", &n);
    if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {
            printf("Number is divisible by 5 and 3");
        }
        else
        {
            printf("The number is not divisible by 5 and 3");
        }
    }
    else
    {
        printf("Number is not divisivle by 5 and 3");
    }
    return 0;
}