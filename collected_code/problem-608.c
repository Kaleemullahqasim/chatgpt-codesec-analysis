#include <stdio.h>

long long int bellNumber(int n) {
    long long int bell[n+1][n+1];
    bell[0][0] = 1;
 
    for (int i=1; i<=n; i++) {
        bell[i][0] = bell[i-1][i-1];
 
        for (int j=1; j<=i; j++)
            bell[i][j] = bell[i-1][j-1] + bell[i][j-1];
    }
 
    return bell[n][0];
}
 
int main() {
    int n = 5;
    printf("The %dth Bell Number is %lld", n, bellNumber(n));
    return 0;
}
Note: Replace `n` with the desired value to find the nth Bell number.