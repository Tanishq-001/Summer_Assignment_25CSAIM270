#include <stdio.h>
int findMax(int a, int b) { return (a > b) ? a : b; }
int main() {
    printf("Max: %d\n", findMax(45, 89));
    return 0;
}