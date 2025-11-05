#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Pratyaksh Negi";
    char *p = str;
    *p = 'P';
    printf("%s", str);
    return 0;
}