#include <stdio.h>

int countDigits(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

int power(int base, int exp)
{
    int result = 1;
    for (int i = 1; i <= exp; i++)
        result *= base;
    return result;
}

int isArmstrong(int n)
{
    int digits = countDigits(n);
    int sum = 0, temp = n;

    while (temp != 0)
    {
        int digit = temp % 10;
        sum += power(digit, digits);
        temp /= 10;
    }

    return sum == n;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong\n");

    return 0;
}