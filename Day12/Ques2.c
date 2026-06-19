#include <stdio.h>
#include <math.h>
int isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;
    while (temp > 0) { digits++; temp /= 10; }
    temp = n;
    while (temp > 0) { sum += pow(temp % 10, digits); temp /= 10; }
    return (sum == n);
}
int main() {
    printf("Is 153 Armstrong? %s\n", isArmstrong(153) ? "Yes" : "No");
    return 0;
}