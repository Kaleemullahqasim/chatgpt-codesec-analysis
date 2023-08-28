#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int a;
    int b;
    int c;
} Tuple;

Tuple* repeatTuple(Tuple* tup, int n) {
    Tuple* result = (Tuple*)malloc(n * sizeof(Tuple));
    
    for (int i = 0; i < n; i++) {
        result[i].a = tup->a;
        result[i].b = tup->b;
        result[i].c = tup->c;
    }
    
    return result;
}