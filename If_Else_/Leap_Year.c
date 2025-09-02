#include<stdio.h>
int main()
{
    int year;
    printf("Enter Year = ");
    scanf("%d",&year);
    if (year % 4==0) //The leap year comes in the interval of 4 years that's why we used (%) with 4.
    {
        printf("It is a Leap Year");
    }
    else {
        printf("It is not a Leap Year");
    }
    return 0;
}