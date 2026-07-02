#include <stdio.h>
int main() {
    int arr[5] = {5, 1, 4, 2, 8};
    for(int i=0; i<4; i++)
        for(int j=0; j<4-i; j++)
            if(arr[j] > arr[j+1]) { int t=arr[j]; arr[j]=arr[j+1]; arr[j+1]=t; }
    for(int i=0; i<5; i++) printf("%d ", arr[i]);
    return 0;
}