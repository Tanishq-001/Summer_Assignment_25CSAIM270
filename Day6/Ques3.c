#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num;
    while (temp > 0) {
        count += (temp & 1); // Check if the last bit is 1
        temp >>= 1;          // Shift bits right by 1
    }

    printf("Number of set bits (1s) in %d is: %d\n", num, count);

    return 0;
}