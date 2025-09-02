#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    if (n<0)
    {
        printf("The Number was %d\nIt's Positive Conversion would be %d",n,n*(-1)); //The first %d would print the Value user would input and the Second %d would print the converted value.
    }
    else{
        printf("The Number is %d",n); //If the number defined by the user would be positive no action would be performed. 
    }
    return 0;
}