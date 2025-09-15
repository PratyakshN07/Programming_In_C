#include <stdio.h>
int main()
{
    
    int n;
    printf("Enter a number = ");
    scanf("%d", &n);
    int a = n;
    for (int i = n; i <= (a * 10); i = i + n)
        printf("%d \n", i);
    return 0;
}

