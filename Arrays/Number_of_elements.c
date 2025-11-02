#include <stdio.h>

int main()
{
    int n[] = {1, 2, 3, 5};
    int a = sizeof(n) / sizeof(n[0]);
    printf("Number of elements = %d", a);
    return 0;
}