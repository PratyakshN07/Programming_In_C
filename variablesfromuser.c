#include <stdio.h>
int main()
{
    // For integer
    int a;
    printf("Enter an Integer:");
    scanf("%d", &a);
    printf("%d \n", a);
    // For Float
    float b;
    printf("Enter a Decimal:");
    scanf("%f", &b);
    printf("%f \n", b);
    // For Character
    char d;
    printf("Enter any character:");
    scanf("%c", &d);
    printf("%c \n", d);
    return 0;
}