#include<stdio.h>
 
int countOddElements(int arr[], int size) {
    int count = 0;
 
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 != 0) {
            count++;
        }
    }
 
    return count;
}