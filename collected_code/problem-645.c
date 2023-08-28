#include <stdio.h>

int findProduct(int tuples[][2], int size, int k) {
    int product = 1;
    for (int i = 0; i < size; i++) {
        product *= tuples[i][k];
    }
    return product;
}

int main() {
    int tuples[][2] = {{2, 3}, {4, 5}, {6, 7}};
    int k = 1;
    int product = findProduct(tuples, 3, k);
    printf("Product of the kth index in the tuples: %d\n", product);
    return 0;
}