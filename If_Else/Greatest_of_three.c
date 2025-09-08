#include <stdio.h>
int main()
{
    int n1;
    printf("Enter first number = ");
    scanf("%d", &n1);
    int n2;
    printf("Enter second number = ");
    scanf("%d", &n2);
    int n3;
    printf("Enter third number = ");
    scanf("%d", &n3);
    if (n1 > n2 && n1 > n3)
    {
        printf("First number is the greatest");
    }
    if (n2 > n1 && n2 > n3)
    {
        printf("Second number is the greatest");
    }
    if (n3 > n1 && n3 > n2)
    {
        printf("Third number is the greatest");
    }

    return 0;
}