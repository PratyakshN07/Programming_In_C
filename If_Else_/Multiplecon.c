#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    if(n>5)
    {
        printf("Entered Number is greater than 5");
    }
    if (n==5)
    {
        printf("Entered Number is equal to 5");
    }
    
    else{
        printf("Entered Number is less than 5");
    }
    return 0;
}