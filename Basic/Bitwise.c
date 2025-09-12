#include <stdio.h>
int main()
{
    int a = 2;
    int b = 3;
    printf("Bitwise AND= %d \n", a & b);
    printf("Bitwise OR = %d \n", a | b);
    printf("Bitwise NOT = %d \n",~a);
    printf("Bitwise XOR = %d \n",  a ^ b);
    printf("Bitwise RIGHT SHIFT = %d \n", a >> b);
    printf("Bitwise LEFT SHIFT = %d \n", a << b);
    return 0;
}