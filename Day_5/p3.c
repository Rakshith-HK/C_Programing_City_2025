//pointer with Arrays

#include<stdio.h>
int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;

    printf("%d\n", *p) ; // 10
    printf("%d\n", *(p+1)); // 20
    printf("%d\n", *(p+2)); // 30

    return 0;

}