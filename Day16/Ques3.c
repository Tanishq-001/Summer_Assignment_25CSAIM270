#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5}, sum = 7;
    for(int i=0; i<5; i++)
        for(int j=i+1; j<5; j++)
            if(arr[i] + arr[j] == sum) printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
    return 0;
}