
// Sum of the digits

#include <stdio.h> 
int main() { 
    int n, sum = 0; 
    printf("Enter number: "); 
    scanf("%d", &n); 

    for (; n > 0; n /= 10) { 
        sum += n % 10; 
    } 

    printf("Sum of digits = %d", sum); 
    return 0; 
}
