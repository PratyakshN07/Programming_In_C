#include <stdio.h>

int main()
{
    int arr[10] = {4, 97, 8, 9, 72, 79, 5, 81, 9, 6};
    int x = 72;
    for (int i = 0; i <= 9; i++)
    {
        if (arr[i] == x)
        {
            printf("%d is present in the array at index %d\n", x, i);
        }
    }
    return 0;
}