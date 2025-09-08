#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d", &n);
    if (n % 3 == 0 && n % 5 == 0)
    {
        printf("Number is divisible by 3 and 5 ");
    }
    else
    {
        printf("Not a factor of 3 and 5");
    }
    return 0;
}