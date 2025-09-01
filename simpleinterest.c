#include<stdio.h>
int main()
{
    float p;
    float r;
    float t;
    printf("Enter Principle amount:");
    scanf("%f",&p);
    printf("Enter rate of interest:");
    scanf("%f",&r);
    printf("Enter Time:");
    scanf("%f",&t);
    float SI=p*r*t;
    printf("Simple Interest = %.2f \n",SI/100);
    return 0;
    
}