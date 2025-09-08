#include <stdio.h>
int main()
{
    for (int n = 0; n <= 100; n += 1)
        if (n % 2 == 0)
        {
            printf("%d,", n);
        }
    return 0;
}