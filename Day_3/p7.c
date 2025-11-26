// Even number using while loop
#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 10) {
        if (i % 2 == 0) {   // check even
            printf("%d ", i);
        }
        i++;   // move to next number
    }

    return 0;
}
