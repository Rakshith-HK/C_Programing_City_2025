//swap two numbers
#include <stdio.h> 
 
int main() { 
    int a , b ,temp;
     
    printf("Enter the number :");
    scanf("%d %d" , &a , &b);

    printf ("Before swap : a = %d , b = %d\n" ,a , b);
    //for loop used to perform swap
    for( int i = 0; i < 1; i++) {
        temp = a;
        a = b;
        b = temp;
    }
    printf ("After swap : a = %d , b = %d\n" , a , b);
    return 0;
    } 
