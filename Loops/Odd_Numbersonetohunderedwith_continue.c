#include <stdio.h>
int main()
{
    for (int n = 0; n <= 100; n++)
    {
        if (n % 2 == 0)
            continue;
        {
            printf("%d ", n);
        }
    }
    return 0;
}