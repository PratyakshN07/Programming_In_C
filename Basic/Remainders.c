#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Dividend :");
    scanf("%d",&a);
    printf("Divisor :");
    scanf("%d",&b);
    int q=a/b;
    int r=a-(b*q);
    printf("Quotient = %d \n",q);
    printf("Remainder when %d is divided by %d is %d \n",a,b,r);
    // printf("DIRECT REMAINDER=%d",a%b);
    // MODULUS OPERATOR (%) IS USED FOR REMAINDER OF THE NUMBERS
    // DIVISION OPERATOR (/) IS USED FOR THE QUOTIENT OF THE NUMBERS 
    return 0;
}