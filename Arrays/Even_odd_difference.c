#include <stdio.h>

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int SUModd = 0;
    int SUMeven = 0;
    for (int i = 0; i <= 5; i++)
        if (i % 2 != 0)
        {
            SUModd += arr[i];
        }
        else
        {
            SUMeven += arr[i];
        }
    int result = SUModd - SUMeven;
    printf("%d", result);
    return 0;
}