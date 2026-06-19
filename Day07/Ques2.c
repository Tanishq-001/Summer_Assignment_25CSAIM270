#include <stdio.h>

int fibonacci(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms;
    printf("Enter the number of terms to print: ");
    scanf("%d", &terms);

    printf("Fibonacci Series: ");
    for (int i = 1; i <= terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}