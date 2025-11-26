//Factorial of number 
#include<stdio.h>
int main() { 
int n, fact = 1;   // initilizing the data type 
printf("Enter number: ");  // print function for user 
scanf("%d", &n); // taking user input 
for(int i = 1; i <= n; i++)  //Start point from 1 and number should be less than or equal to n (number entered by the user )
{ 
fact *= i;   // logic for fact of number 
} 
printf("Factorial = %d", fact); // print statement after finding the logic
return 0; 
} 