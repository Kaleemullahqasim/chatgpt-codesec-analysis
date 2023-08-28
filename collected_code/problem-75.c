#include <stdio.h>

void findDivisibleTuples(int n, int k, int tuples[][2]) {
    printf("Divisible tuples:\n");
    for (int i = 0; i < n; i++) {
        if (tuples[i][0] % k == 0 && tuples[i][1] % k == 0) {
            printf("(%d, %d)\n", tuples[i][0], tuples[i][1]);
        }
    }
}

int main() {
    int n = 4; // Number of tuples
    int k = 3; // Divisor

    int tuples[n][2] = {{1, 6}, {9, -3}, {4, 8}, {10, 12}};

    findDivisibleTuples(n, k, tuples);

    return 0;
}