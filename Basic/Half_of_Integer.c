#include <stdio.h>
int main()
{
    float x;
    printf("Enter a float number: ");
    scanf("%f", &x);

    int y = (int)x;  // integer part
    printf("Integer part = %d\n", y);

    float z = x - y; // fractional part
    printf("Fractional part = %.2f\n", z);
    return 0;
}

