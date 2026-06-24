#include <stdio.h>

int main() {
    int n, sum = 0, expectedSum, missing;

    printf("Enter size of array (n-1): ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    expectedSum = (n + 1) * (n + 2) / 2;
    missing = expectedSum - sum;

    printf("Missing number = %d", missing);

    return 0;
}