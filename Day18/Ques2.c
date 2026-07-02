#include <stdio.h>
int main() {
    int arr[5] = {64, 25, 12, 22, 11};
    for(int i=0; i<4; i++) {
        int minIdx = i;
        for(int j=i+1; j<5; j++) if(arr[j] < arr[minIdx]) minIdx = j;
        int t = arr[minIdx]; arr[minIdx] = arr[i]; arr[i] = t;
    }
    for(int i=0; i<5; i++) printf("%d ", arr[i]);
    return 0;
}