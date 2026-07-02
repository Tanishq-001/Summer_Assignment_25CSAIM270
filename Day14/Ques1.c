#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50}, key = 30, found = -1;
    for(int i=0; i<5; i++) if(arr[i] == key) { found = i; break; }
    printf("Element found at index: %d\n", found);
    return 0;
}