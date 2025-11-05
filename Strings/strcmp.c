#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Cat";
    char s2[] = "Dog";
    printf("%d", strcmp(s1, s2) == 0); // prints 0 (False)
    return 0;
}
