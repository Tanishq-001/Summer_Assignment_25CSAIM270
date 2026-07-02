#include <stdio.h>
int main() {
    int arr[4] = {1, 2, 4, 5}, n = 5;
    int expectedSum = n * (n + 1) / 2, actualSum = 0;
    for(int i=0; i<4; i++) actualSum += arr[i];
    printf("Missing Number: %d\n", expectedSum - actualSum);
    return 0;
}