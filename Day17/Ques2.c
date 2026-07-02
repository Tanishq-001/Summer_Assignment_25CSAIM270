#include <stdio.h>
int main() {
    int a[3]={1,2,3}, b[3]={2,3,4};
    for(int i=0; i<3; i++) printf("%d ", a[i]);
    for(int i=0; i<3; i++) {
        int f = 0;
        for(int j=0; j<3; j++) if(b[i] == a[j]) f = 1;
        if(!f) printf("%d ", b[i]);
    }
    return 0;
}