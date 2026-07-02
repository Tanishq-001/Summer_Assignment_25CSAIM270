#include <stdio.h>
int main() {
    int arr[5] = {3, 8, 12, 7, 2}, e = 0, o = 0;
    for(int i=0; i<5; i++) (arr[i] % 2 == 0) ? e++ : o++;
    printf("Even: %d, Odd: %d\n", e, o);
    return 0;
}