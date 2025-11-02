#include <stdio.h>

int main()
{
    int arr[4] = {4, 2, 2, 2};
    int product = 1;
    for (int i = 0; i <= 3; i++)
    {
        product = product * arr[i];
    }
    printf("%d", product);
    return 0;
}