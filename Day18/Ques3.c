#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50}, key = 40, low = 0, high = 4, mid;
    while(low <= high) {
        mid = (low + high)/2;
        if(arr[mid] == key) { printf("Found at index %d\n", mid); return 0; }
        (arr[mid] < key) ? (low = mid + 1) : (high = mid - 1);
    }
    printf("Not found\n");
    return 0;
}