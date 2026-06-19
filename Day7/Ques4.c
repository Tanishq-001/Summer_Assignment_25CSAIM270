#include <stdio.h>

int reverseRecursive(int num, int rev) {
    if (num == 0)
        return rev;
    return reverseRecursive(num / 10, rev * 10 + (num % 10));
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int sign = (num < 0) ? -1 : 1;
    if (num < 0) num = -num;

    int reversed = reverseRecursive(num, 0) * sign;
    printf("Reversed number: %d\n", reversed);

    return 0;
}