#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number = ");
    scanf("%d", &n);
    if (n % 3 == 0 || n % 5 == 0)  // if (n % 3 == 0 || n % 5 == 0 && n % 15 != 0) will not work due to the concept of hierarchy(BODMAS)
    {
        if (n % 15 != 0)
        {
            printf("Number is divisivle by 3 or 5 but not 15");
        }
        else
        {
            printf("The number is divisible by 15");
        }
    }
    else
    {
        printf("Number is not divisible by 3 or 5");
    }
    return 0;
}

