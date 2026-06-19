#include <stdio.h>
long long factorial(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}
int main() {
    printf("Factorial of 5: %lld\n", factorial(5));
    return 0;
}