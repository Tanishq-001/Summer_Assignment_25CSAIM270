#include <stdio.h>
int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) if (n % i == 0) sum += i;
    return (sum == n && n > 0);
}
int main() {
    printf("Is 28 Perfect? %s\n", isPerfect(28) ? "Yes" : "No");
    return 0;
}