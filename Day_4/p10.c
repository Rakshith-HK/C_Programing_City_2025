//change the values using pointers
#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    *p = 50; // modifies value of a
    printf("a = %d", a);
    return 0;
}