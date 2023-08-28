#include <stdio.h>
#include <stdbool.h>

void tupleIntersection(int arr1[], int arr2[], int size1, int size2) {
    bool found;

    for (int i = 0; i < size1; i++) {
        found = false;

        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }

        if (found) {
            printf("%d\n", arr1[i]);
        }
    }
}

int main() {
    int tuple1[] = {1, 2, 3, 4, 5};
    int tuple2[] = {4, 5, 6, 7};

    int size1 = sizeof(tuple1) / sizeof(tuple1[0]);
    int size2 = sizeof(tuple2) / sizeof(tuple2[0]);

    tupleIntersection(tuple1, tuple2, size1, size2);

    return 0;
}