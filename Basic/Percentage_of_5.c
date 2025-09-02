#include <stdio.h>
int main()
{
    float sub1;
    float sub2;
    float sub3;
    float sub4;
    float sub5;
    printf("Enter Marks in Mathematics:");
    scanf("%f", &sub1);
    // printf("Mathematics = %f \n",sub1);     IF COMMENTED OUT WILL ALSO SHOW THE OUTPUT AS THE NUMBER OF MARKS IN THE SUBJECT USER DEFINED TO THE PROGRAME
    printf("Enter Marks in Physics:");
    scanf("%f", &sub2);
    // printf("Physics = %f \n",sub2);         IF COMMENTED OUT WILL ALSO SHOW THE OUTPUT AS THE NUMBER OF MARKS IN THE SUBJECT USER DEFINED TO THE PROGRAME
    printf("Enter Marks in Chemistry:");
    scanf("%f", &sub3);
    // printf("Chemistry = %f \n",sub3);       IF COMMENTED OUT WILL ALSO SHOW THE OUTPUT AS THE NUMBER OF MARKS IN THE SUBJECT USER DEFINED TO THE PROGRAME
    printf("Enter Marks in Computer Science:");
    scanf("%f", &sub4);
    // printf("Computer Science = %f \n",sub4);   IF COMMENTED OUT WILL ALSO SHOW THE OUTPUT AS THE NUMBER OF MARKS IN THE SUBJECT USER DEFINED TO THE PROGRAME
    printf("Enter Marks in English:");
    scanf("%f", &sub5);
    // printf("English = %f \n",sub5);          IF COMMENTED OUT WILL ALSO SHOW THE OUTPUT AS THE NUMBER OF MARKS IN THE SUBJECT USER DEFINED TO THE PROGRAME
    float t = ("%f", sub1 + sub2 + sub3 + sub4 + sub5);
    float p = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;
    printf("Total marks = %.2f \n", t);
    printf("Percentage = %.2f \n", p);
    // ANOTHER WAY
    //    float total = sub1 + sub2 + sub3 + sub4 + sub5;
    //    float percentage = (total / 500) * 100;
    //    printf("total marks=%.2f \n", total);
    //    printf("percentage = %.2f \n", percentage);

    return 0;
}