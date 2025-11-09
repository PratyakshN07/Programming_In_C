#include <stdio.h>
void swap(int *pa, int *pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}
int main()
{
    int a;
    printf("Enter value of a = ");
    scanf("%d", &a);
    int b;
    printf("Enter value of b = ");
    scanf("%d", &b);
    // Using 3rd Varible
    // int temp = a;
    // a = b;
    // b = temp;

    // Without using 3rd varibale
    // a = a + b;
    // b = a - b;
    // a = a - b;
    swap(&a, &b);
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    return 0;
}