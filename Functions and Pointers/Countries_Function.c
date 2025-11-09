#include <stdio.h>
void england()
{
    printf("England\n");
    return;
}
void Australia()
{
    england();
    printf("Australia\n");
    return;
}
void India()
{
    Australia();
    printf("India\n");
    return;
}
int main()
{
    India();
    return 0;
}