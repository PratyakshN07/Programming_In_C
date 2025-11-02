#include <stdio.h>

int main()
{
    int arr[4];

    for (int i = 0; i <= 3; i++) // for taking input from user
    {
        printf("Enter the element %d = ", i);
        scanf("%d", &arr[i]);
    }
    for (int a = 3; a >= 0; a--)
    {
        printf("%d ", arr[a]);
    }
    return 0;
}