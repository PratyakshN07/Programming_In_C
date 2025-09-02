#include <stdio.h>
int main()
{
    int r;
    printf("Enter the radius =");
    scanf("%d",&r);
    printf("Radius of the Sphere is = %d\n",r);
    float v = 4 * 3.14 * r * r * r / 3;
    printf("The Volume of Sphere = %.2f \n", v);
    return 0;
}