#include <stdio.h> 
 int main() { 
  int n, i = 2; 
       printf("Enter number: "); 
      scanf("%d", &n); 
           while(i < n) { 
                if(n % i == 0) { 
                  printf("Not Prime"); 
                   return 0; 
          } 
        i++; 
} 
        printf("Prime"); 
    return 0; 
} 