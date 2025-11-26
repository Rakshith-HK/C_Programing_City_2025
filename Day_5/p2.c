//pointer to pointer 
//pointer storing address of another vatiable 

#include<stdio.h>
int main() {
    int a = 10;
    int *p = &a; //Pointer to int 
    int **pp = &p; //pointer to  pointer

    printf("a=%d\n", a);
    printf("p=%d\n", *p);
    printf("*pp=%d\n", **pp);

    return 0;
    
}