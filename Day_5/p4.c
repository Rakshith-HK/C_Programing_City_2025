//pointer to function
// used for swapping, modifying values inside function
#include<stdio.h>

void change(int *x) {
    *x = 100;

}

int main () {
    int a = 10;
    change(&a);
    printf("a=%d" , a); // becomes 100
    return 0;

}
