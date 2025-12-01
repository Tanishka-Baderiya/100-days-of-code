#include <stdio.h>

int main() {
    long num;
    int count[10] = {0};
    int max = 0, digit;

    printf("Enter an integer: ");
    scanf("%ld", &num);

    while (num != 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++) 
    {
        if (count[i] > max) {
            max = count[i];
            digit = i;
        }
    }

    printf("Digit that occurs most: %d\n", digit);

    return 0;
}