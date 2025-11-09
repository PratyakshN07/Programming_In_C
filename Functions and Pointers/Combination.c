#include <stdio.h>
int factorial(int a)
{
    int fact = 1;
    for (int i = 2; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter n = ");
    scanf("%d", &n);
    int r;
    printf("Enter r = ");
    scanf("%d", &r);
    int nfact = 1;
    int rfact = 1;
    int nrfact = 1;
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    printf("%d", ncr);
    return 0;
}