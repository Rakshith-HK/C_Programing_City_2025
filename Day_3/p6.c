// Revresing  a number 

#include <stdio.h>

int main() {
    int num, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;

    for (; num != 0; num = num / 10) {
        digit = num % 10;        // extract last digit
        rev = rev * 10 + digit;  // build reverse
    }

    printf("Original number = %d\n", original);
    printf("Reversed number = %d\n", rev);

    return 0;
}

