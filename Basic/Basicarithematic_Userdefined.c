#include <stdio.h>
int main()
{
    // INTEGER OPERATIONS
    int a;
    int b;
    printf("Enter Number:");
    scanf("%d", &a);
    // If Entered with code it will also show the number which is assigned by the user:- printf("Number 01 = %d \n", a);
    printf("Enter Another Number :");
    scanf("%d", &b);
    // If Entered with code it will also show the number which is assigned by the user:- printf("Number 02 = %d \n", b);
    printf("Addition of Both Numbers= %d \n", a + b);
    printf("Subtraction of Both Numbers= %d \n", a - b);
    printf("Division Of Both Numbers= %d \n", a / b);
    printf("Multiplication of Both Numbers= %d \n", a * b);
    // FLOAT OPERATIONS
    float c;
    float d;
    printf("Enter Decimal Value:");
    scanf("%f", &c);
    // If Entered with code it will also show the Decimal Value which is assigned by the user:- printf("Decimal Value  = %f \n", c);
    printf("Enter Decimal Another Value:");
    scanf("%f", &d);
    // If Entered with code it will also show the number which is assigned by the user:- printf("Decimal Another Value = %f \n", d);
    printf("Addition of Both Decimal Values= %.2f \n", c + d);
    printf("Subtraction of Both Decimal Values= %.2f \n", c - d);
    printf("Division Of Both Decimal Values= %.2f \n", c / d);
    printf("Multiplication of Both Decimal Values= %.2f \n", c * d);
    return 0;
}