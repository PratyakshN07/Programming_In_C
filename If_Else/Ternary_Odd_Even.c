#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d", &n);
    // ternary operator
    // expression 1 ? expression 2 : expression 3 ;
    n % 2 == 0 ? printf("It's a even number") : printf("It's a odd number");
    return 0;
    
}

