#include <stdio.h>
int main() {
    char str[] = "swiss";
    for(int i=0; str[i]!='\0'; i++) {
        int repeat = 0;
        for(int j=0; str[j]!='\0'; j++) {
            if(i != j && str[i] == str[j]) { repeat = 1; break; }
        }
        if(!repeat) { printf("First non-repeating: %c\n", str[i]); return 0; }
    }
    return 0;
}