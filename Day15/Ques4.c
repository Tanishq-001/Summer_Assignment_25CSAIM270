#include <stdio.h>
int main() {
    int arr[6] = {1, 0, 2, 0, 3, 4}, count = 0;
    for(int i=0; i<6; i++) if(arr[i] != 0) arr[count++] = arr[i];
    while(count < 6) arr[count++] = 0;
    for(int i=0; i<6; i++) printf("%d ", arr[i]);
    return 0;
}