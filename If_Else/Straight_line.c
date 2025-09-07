#include <stdio.h>
int main()
{
    float x1;
    printf("Enter first point on X-axis = ");
    scanf("%f", &x1);
    float x2;
    printf("Enter second point on X-axis = ");
    scanf("%f", &x2);

    float x3;
    printf("Enter third point on X-axis = ");
    scanf("%f", &x3);

    float y1;
    printf("Enter first point on Y-axis = ");
    scanf("%f", &y1);

    float y2;
    printf("Enter second point on Y-axis = ");
    scanf("%f", &y2);

    float y3;
    printf("Enter third point on Y-axis = ");
    scanf("%f", &y3);

    double m1 = (y2 - y1) / (x2 - x1);
    double m2 = (y3 - y2) / (x3 - x2);
    if (m1 == m2)
    {
        printf("This is a straight line");
    }
    else
    {
        printf("Not a straight line");
    }
    return 0;
}