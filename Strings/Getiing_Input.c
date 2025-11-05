#include <stdio.h>
#include <string.h>
#include <string.h>
int main()
{
    int str[50];
    scanf("%[^\n]s",str);
    //gets(str);
    printf("Your input was = %s", str);
    return 0;
}