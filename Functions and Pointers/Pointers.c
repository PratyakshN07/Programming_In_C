#include <stdio.h>

int main()
{
    int a = 5;
    int *x = &a;
    int b = 5;
    printf("%p\n", &x);
    printf("%p\n", &b);
    return 0;
}