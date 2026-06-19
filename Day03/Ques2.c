#include <stdio.h>

int main() {
    int low, high, isPrime;

    printf("Enter lower and upper limit: ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);
    for (int i = low; i <= high; i++) {
        if (i <= 1) continue;
        
        isPrime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) printf("%d ", i);
    }
    printf("\n");
    return 0;
}

//Day 3 uploaded