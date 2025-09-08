#include <stdio.h>
int main()
{
    float n;
    printf("Enter Percentage = ");
    scanf("%f", &n);
    if (n > 90)
    {
        printf("Excellent");
    }
    else if (n > 80)    //Repeatedly writing if statements are not good rather than that use else if 
    {
        printf("Very Good");
    }
    else if (n > 70)
    {
        printf("Good");
    }
    else if (n > 60)
    {
        printf("Can do better");
    }
    else if (n > 50)
    {
        printf("Average");
    }
    else if (n > 40)
    {
        printf("Below Average");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}

