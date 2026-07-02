#include <stdio.h>
int main() {
    int arr[5] = {12, 35, 1, 10, 34}, max = -1, secMax = -1;
    for(int i=0; i<5; i++) {
        if(arr[i] > max) { secMax = max; max = arr[i]; }
        else if(arr[i] > secMax && arr[i] != max) { secMax = arr[i]; }
    }
    printf("Second Largest: %d\n", secMax);
    return 0;
}