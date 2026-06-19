#include <stdio.h>

int main() {
    int num, remainder;
    long long product = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) product = 0;
    if (num < 0) num = -num;

    while(num > 0) {
        remainder = num % 10;
        product *= remainder;
        num /= 10;
    }

    printf("Product of digits = %lld\n", product);
    return 0;
}