#include <stdio.h>

int sumAlternateChains(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i = i + 4) {
        sum += a[i] + a[i + 2];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = sumAlternateChains(arr, size);
    printf("Sum of alternate chains: %d\n", result);
    return 0;
}