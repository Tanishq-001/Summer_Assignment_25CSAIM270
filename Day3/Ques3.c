#include <stdio.h>

int main() {
    int n1, n2, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    // Ensure inputs are positive for logic simplicity
    int a = (n1 < 0) ? -n1 : n1;
    int b = (n2 < 0) ? -n2 : n2;

    while(a != b) {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    gcd = a;

    printf("GCD of %d and %d is %d\n", n1, n2, gcd);
    return 0;
}