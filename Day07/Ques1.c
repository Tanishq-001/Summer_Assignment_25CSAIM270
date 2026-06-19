#include <stdio.h>

unsigned long long factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Factorial of negative numbers does not exist.\n");
    } else {
        printf("Factorial of %d is %llu\n", num, factorial(num));
    }
    return 0;
}

//Day 7 uploaded