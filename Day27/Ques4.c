#include <stdio.h>
int main() {
    int m1 = 85, m2 = 90, m3 = 78;
    int total = m1 + m2 + m3;
    printf("Total: %d, Percentage: %.2f%%\n", total, (float)total/3);
    return 0;
}