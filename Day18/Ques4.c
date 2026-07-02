#include <stdio.h>
int main() {
    int arr[5] = {5, 2, 8, 7, 1};
    for(int i=0; i<5; i++)
        for(int j=i+1; j<5; j++)
            if(arr[i] < arr[j]) { int t=arr[i]; arr[i]=arr[j]; arr[j]=t; }
    for(int i=0; i<5; i++) printf("%d ", arr[i]);
    return 0;
}