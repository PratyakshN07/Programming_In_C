// Display the AP of-4,7,10,13,16 till nth term
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d", &n);
    // 4,7,10,13,16 ... upto n number of terms
    //  we are going to use extra variable
    int a = 4;
    for (int i = 1; i <= n; i++)
    {
        printf("%d,", a);
        a = a + 3;
    }
    return 0;
}