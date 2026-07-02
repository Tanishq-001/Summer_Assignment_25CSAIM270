#include <stdio.h>
int main() {
    int a[2][2]={{1,2},{2,1}}, sym = 1;
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++) if(a[i][j] != a[j][i]) sym = 0;
    printf("Symmetric: %s\n", sym ? "Yes" : "No");
    return 0;
}