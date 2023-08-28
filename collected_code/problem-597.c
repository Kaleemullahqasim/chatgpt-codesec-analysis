#include<stdio.h>

int kth_element(int arr1[], int arr2[], int n1, int n2, int k) {
    int merged[n1 + n2];
    int i = 0, j = 0, count = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[count++] = arr1[i++];
        }
        else {
            merged[count++] = arr2[j++];
        }
    }

    while (i < n1) {
        merged[count++] = arr1[i++];
    }

    while (j < n2) {
        merged[count++] = arr2[j++];
    }

    return merged[k - 1];
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int k = 5;

    int result = kth_element(arr1, arr2, n1, n2, k);

    printf("The %dth element is %d\n", k, result);

    return 0;
}