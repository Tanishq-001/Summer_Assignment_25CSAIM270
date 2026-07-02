#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5}, sum = 0;
    for(int i=0; i<5; i++) sum += arr[i];
    printf("Sum: %d, Avg: %.2f\n", sum, (float)sum/5);
    return 0;
}