#include <stdio.h>
int main() {
    int a[3]={1,2,3}, b[3]={2,3,4};
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(a[i] == b[j]) printf("%d ", a[i]);
    return 0;
}