#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    printf("p = %u\n", p);
    p++; // moves by 4 bytes (size of int)
    printf("p++ = %u\n", p);
    return 0;
}