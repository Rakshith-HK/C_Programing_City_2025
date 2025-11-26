#include <stdio.h>
int main() {
    int a, b, c;
    // Taking input from user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    // Checking which number is largest
    if (a >= b && a >= c) {
        printf("Largest = %d", a);
    }
    else if (b >= a && b >= c) {
        printf("Largest = %d", b);
    }
    else {
        printf("Largest = %d", c);
    }

    return 0;
}