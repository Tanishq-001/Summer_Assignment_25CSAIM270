#include <stdio.h>
int main() {
    int arr[6] = {1, 2, 2, 3, 2, 4}, target = 2, count = 0;
    for(int i=0; i<6; i++) if(arr[i] == target) count++;
    printf("Frequency: %d\n", count);
    return 0;
}