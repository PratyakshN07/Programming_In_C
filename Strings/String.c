#include <stdio.h>

int main()
{
    char arr[] = "Hello everyone my name is pratyaksh \0";
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}   