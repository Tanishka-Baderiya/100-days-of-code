#include <stdio.h>

int main() {
    int n, x, totalSum = 0, leftSum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    totalSum = n * (n + 1) / 2;

    int pivot = -1;
    for (x = 1; x <= n; x++) {
        leftSum += x;
        int rightSum = totalSum - leftSum + x;
        if (leftSum == rightSum) {
            pivot = x;
            break;
        }
    }

    printf("%d\n", pivot);

    return 0;
}