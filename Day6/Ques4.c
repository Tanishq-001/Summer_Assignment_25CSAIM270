#include <stdio.h>

int main() {
    double base, result = 1.0;
    int exp;

    printf("Enter base (x) and exponent (n): ");
    scanf("%lf %d", &base, &exp);

    int n = (exp < 0) ? -exp : exp;

    for (int i = 0; i < n; i++) {
        result *= base;
    }

    // Handle negative exponents
    if (exp < 0) {
        result = 1.0 / result;
    }

    printf("Result: %.4lf\n", result);

    return 0;
}