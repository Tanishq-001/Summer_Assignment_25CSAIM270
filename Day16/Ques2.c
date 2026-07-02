#include <stdio.h>
int main() {
    int arr[6] = {1, 3, 2, 1, 2, 2}, maxElement = arr[0], maxCount = 0;
    for(int i=0; i<6; i++) {
        int count = 0;
        for(int j=0; j<6; j++) if(arr[i] == arr[j]) count++;
        if(count > maxCount) { maxCount = count; maxElement = arr[i]; }
    }
    printf("Max Frequency Element: %d\n", maxElement);
    return 0;
}