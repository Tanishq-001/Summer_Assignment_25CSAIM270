#include <stdio.h>
#include <math.h>

int main() {
    int low, high, num, originalNum, remainder, result, n;

    printf("Enter lower and upper range boundaries: ");
    scanf("%d %d", &low, &high);

    printf("Armstrong numbers between %d and %d are: ", low, high);

    for (int i = low; i <= high; ++i) {
        originalNum = i;
        num = i;
        n = 0;
        result = 0;

        // Count number of digits
        while (originalNum != 0) {
            originalNum /= 10;
            ++n;
        }

        originalNum = i;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += round(pow(remainder, n));
            originalNum /= 10;
        }

        if (result == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}