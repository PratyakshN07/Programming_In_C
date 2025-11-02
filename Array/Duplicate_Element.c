#include <stdio.h>

int main()
{
    int arr[4] = {1, 5, 6, 1};
    for (int i = 0; i <= 3; i++)
    {
        for (int j = i + 1; j <= 3; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d is the duplicate element", arr[i]);
            }
        }
    }
    return 0;
}