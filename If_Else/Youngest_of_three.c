#include <stdio.h>
int main()
{
    int a1;
    printf("Enter age of Ram = ");
    scanf("%d", &a1);

    int a2;
    printf("Enter age of Shyam = ");
    scanf("%d", &a2);

    int a3;
    printf("Enter age of Ajay = ");
    scanf("%d", &a3);

    if (a1 < a2 && a1 < a3)
    {
        printf("Ram is the Youngest");
    }
    if (a2 < a1 && a2 < a3)
    {
        printf("Shyam is the Youngest");
    }
    if (a3 < a1 && a3 < a2)
    {
        printf("Ajay is the Youngest");
    }

    return 0;
}