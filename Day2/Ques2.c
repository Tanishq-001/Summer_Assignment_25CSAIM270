#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int sign = (num < 0) ? -1 : 1;
    if (num < 0) num = -num;

    while(num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    reverse *= sign;
    printf("Reversed number = %d\n", reverse);
    return 0;
}