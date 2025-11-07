//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, temp, firstDigit, lastDigit, digits = 0, divisor = 1, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    lastDigit = temp % 10;  // get last digit

    // Count digits and find divisor for first digit
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
        digits++;
    }
    firstDigit = temp;  // now temp holds the first digit

    // Remove first and last digits from the number
    int middle = (num % divisor) / 10;

    // Form the swapped number
    swappedNum = lastDigit * divisor + middle * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
