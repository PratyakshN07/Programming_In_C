#include <stdio.h>
int main()
{
    int a, *p;
    int b, *q;
    a = 10;
    b = 25;
    p = &a;
    q = &b;
    printf("First Integer = %d \n", a);
    printf("Value of First Integer at it's address = %d \n", *p);
    printf("Adress Of First Integer = %d \n", p);
    printf("Second Integer  =  %d \n", b);
    printf("Value of Second Integer at it's address = %d \n");
    printf("Adress Of Second Integer = %d \n", q);
    return 0;
}