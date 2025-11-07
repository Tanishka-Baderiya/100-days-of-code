//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    float numerator = 2.0, denominator = 3.0;  // starting values

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;       // numerator increases by 2 each term
        denominator += 4;     // denominator increases by 4 each term
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
