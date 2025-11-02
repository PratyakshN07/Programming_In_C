#include <stdio.h>

int main()
{
    int arr[5];

    for (int i = 0; i <= 4; i++) // for taking input from user
    {
        printf("Enter the element %d = ", i);
        scanf("%d", &arr[i]);
    }
    for (int a = 0; a <= 4; a++) // for printing the array
    {
        printf("%d ", arr[a]);
    }
    return 0;
}