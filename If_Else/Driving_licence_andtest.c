#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age = ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You are eligible for driving test \n");
        int c;
        printf("Have you given any test for driving ? (y/n)");
        scanf(" %c", &c);
        if (c == 'y' || c == 'Y')
        {
            printf("Have you passed the test? (y/n)");
            scanf(" %c", &c);
            if (c == 'Y' || 'y')
            {
                printf("Your licence will be issued soon");
            }
            else if (c == 'N' || c == 'n')
            {
                printf("SORRY!!,You have to pass the test");
            }
        }
        else if (c == 'n' || c == 'N')
        {
            printf("SORRY !!, You have to give the test \n");
        }
    }
    else
    {
        printf("You are under age");
    }
    return 0;
}
