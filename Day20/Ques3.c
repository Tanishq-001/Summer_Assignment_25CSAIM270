#include <stdio.h>
int main() {
    int a[2][2]={{1,2},{3,4}};
    for(int i=0; i<2; i++) {
        int sum = 0;
        for(int j=0; j<2; j++) sum += a[i][j];
        printf("Row %d Sum: %d\n", i+1, sum);
    }
    return 0;
}