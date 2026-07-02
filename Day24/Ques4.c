#include <stdio.h>
int main() {
    char str[] = "programming", res[20]; int idx = 0;
    for(int i=0; str[i]!='\0'; i++) {
        int f = 0;
        for(int j=0; j<idx; j++) if(str[i] == res[j]) f = 1;
        if(!f) res[idx++] = str[i];
    }
    res[idx] = '\0';
    printf("Result: %s\n", res);
    return 0;
}