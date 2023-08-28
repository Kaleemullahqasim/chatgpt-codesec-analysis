#include <stdio.h>

double geometricSum(double a, double r, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a * pow(r, i);
    }
    return sum;
}

int main() {
    double a, r;
    int n;
    printf("Enter the first term (a): ");
    scanf("%lf", &a);
    printf("Enter the common ratio (r): ");
    scanf("%lf", &r);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    double sum = geometricSum(a, r, n);
    printf("Sum of the geometric progression series: %lf\n", sum);
    return 0;
}