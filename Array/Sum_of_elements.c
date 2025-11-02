#include <stdio.h>

int main()
{
    int arr[4] = {4, 6, 2, 8};
    int sum = 0;
    for (int i = 0; i <= 3; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d", sum);
    return 0;
}