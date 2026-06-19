#include <stdio.h>
void printFibonacci(int n) {
    int t1 = 0, t2 = 1, next;
    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        next = t1 + t2; t1 = t2; t2 = next;
    }
    printf("\n");
}
int main() {
    printFibonacci(5);
    return 0;
}