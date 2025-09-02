#include<stdio.h>
int main()
{
    float cp;
    printf("Enter Cost Price = ");
    scanf("%f",&cp);
    float sp;
    printf("Enter Selling Price = ");
    scanf("%f",&sp);
    if(sp>cp)
    {
        printf("You are making profit of %.2f",sp-cp);
    }
    if(cp>sp)
    {
        printf("You are in loss = %.2f",sp-cp);
    }
    return 0;
}