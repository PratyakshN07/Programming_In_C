#include <stdio.h>
int main()
{
    float h;
    float b;
    printf("Enter Height Of the Traingle = ");
    scanf("%f", &h);
    printf("Height Of traingle = %.2f \n", h);
    printf("Enter Base of Triangle = ");
    scanf("%f", &b);
    printf("Base of Triangle = %.2f \n", b);
    float Area = (h * b) / 2;
    printf("Area of Triangle with height %.2f and base of %.2f is %f ", h, b, Area);
    return 0;
}
