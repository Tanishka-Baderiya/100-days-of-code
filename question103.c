#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int totalSum = 0, leftSum = 0;
    for (i = 0; i < n; i++)
        totalSum += nums[i];

    int pivotIndex = -1;

    for (i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum) {
            pivotIndex = i;
            break;  
        }
        leftSum += nums[i];
    }

    printf("%d\n", pivotIndex);

    return 0;
}