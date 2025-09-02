#include <stdio.h>
int main()
{
    float l;
    printf("Enter the Length for rectangle = ");
    scanf("%f", &l);
    float b;
    printf("Enter the Breath for rectangle = ");
    scanf("%f", &b);
    float Area = l * b;            // Area varibale is assigned so that it can be compared later in the if/else statements
    float Parimeter = 2 * (l + b); // Parimeter varibale is assigned so that it can be compared later in the if/else statements
    printf("Area of Rectangle %.2f \n", Area);
    printf("Parimeter of Rectangle %.2f \n", Parimeter);
    if (Area > Parimeter)
    {
        printf("Area is Greater Than Parimeter");
    }
    else
    {
        printf("Parimeter is Greater Than Area");
    }

    return 0;
}