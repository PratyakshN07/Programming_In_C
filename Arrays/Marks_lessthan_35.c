#include <stdio.h>

int main()
{
    int marks[10] = {98, 78, 65, 48, 31, 30, 9, 5, 74, 30};
    for (int i = 0; i <= 9; i++)
    {
        if (marks[i] < 35)
            printf("%d ", i);
    }
    return 0;
}