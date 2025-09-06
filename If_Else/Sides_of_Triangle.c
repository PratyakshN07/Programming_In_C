#include <stdio.h>
int main()
{
    float s1;
    printf("Enter first side = ");
    scanf("%f", &s1);
    float s2;
    printf("Enter second side = ");
    scanf("%f", &s2);
    float s3;
    printf("Enter first side = ");
    scanf("%f", &s3);
    if (s1 + s2 > s3 && s2 + s3 > s1 && s3 + s1 > s2)
    {
        printf("It will form a valid traingle");
    }
    else
    {
        printf("Not a valid traingle");
    }
    return 0;
}