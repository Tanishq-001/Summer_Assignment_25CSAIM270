#include <stdio.h>

int main() {
    long long num, maxPrime = -1;

    printf("Enter a number: ");
    scanf("%lld", &num);

    // Divide out the factors of 2
    while (num % 2 == 0) {
        maxPrime = 2;
        num /= 2;
    }

    // Look for odd prime factors
    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            maxPrime = i;
            num /= i;
        }
    }

    // If num is still greater than 2, then the remaining num is prime
    if (num > 2) {
        maxPrime = num;
    }

    printf("Largest prime factor is: %lld\n", maxPrime);

    return 0;
}