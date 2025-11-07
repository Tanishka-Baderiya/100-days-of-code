//Write a program to check if a number is a strong number.
#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number to check if it is a Strong number: ");
    scanf("%d", &num);

    temp = num;  // store original number

    while (temp > 0) {
        digit = temp % 10;           // extract last digit
        sum += factorial(digit);     // add factorial of the digit
        temp /= 10;                  // remove last digit
    }

    if (sum == num)
        printf("%d is a Strong number.\n", num);
    else
        printf("%d is not a Strong number.\n", num);

    return 0;
}
