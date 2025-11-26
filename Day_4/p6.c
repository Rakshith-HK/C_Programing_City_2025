// Reverse a string without <string.h>
#include <stdio.h>
int main()
{
    char s[50] = "helloworld";
    int i, j;
    char temp;
    for (i = 0, j = 9; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    printf("%s", s);
    return 0;
}
