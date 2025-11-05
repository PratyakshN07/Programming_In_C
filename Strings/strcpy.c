#include <stdio.h>
#include <string.h>
int main()
{
    char s1[10] = "Pratyaksh";
    char s2[10] = "Negi";
    strcpy(s2, s1); // it means s1 is copied to s2
    printf("%s", s2);
    return 0;
}