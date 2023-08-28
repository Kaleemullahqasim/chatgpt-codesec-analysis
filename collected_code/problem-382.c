#include <stdio.h>

int countRotations(int arr[], int n) {
    int low = 0, high = n - 1;
    
    while (low <= high) {
        if (arr[low] <= arr[high]) {
            return low;
        }
        
        int mid = (low + high) / 2;
        int prev = (mid + n - 1) % n;
        int next = (mid + 1) % n;
        
        if (arr[mid] <= arr[prev] && arr[mid] <= arr[next]) {
            return mid;
        }
        
        if (arr[mid] <= arr[high]) {
            high = mid - 1;
        } else if (arr[mid] >= arr[low]) {
            low = mid + 1;
        }
    }
    
    return -1;
}

int main() {
    int arr[] = {8, 9, 10, 1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int rotations = countRotations(arr, n);
    printf("Number of rotations: %d", rotations);
    
    return 0;
}