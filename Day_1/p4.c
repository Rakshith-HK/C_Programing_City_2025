//check if a number is Even Or Odd 

#include<stdio.h>

int main () {

    int n ; 
    scanf ("%d" , &n);
    if (n % 2 == 0)  // logic to check even or odd(if divisible by 2 then  it is a even number)
    printf (" It a even number");
    else 
        printf("It is a odd number ");
        return 0;
}