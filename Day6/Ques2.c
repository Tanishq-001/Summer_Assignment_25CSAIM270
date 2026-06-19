#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0, weight = 1, rem;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * weight;
        weight = weight * 2;
        binary /= 10;
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}