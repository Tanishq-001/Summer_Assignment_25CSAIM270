#include <stdio.h>
int main() {
    char str[] = "World"; int len = 5;
    for(int i=0; i<len/2; i++) {
        char t = str[i]; str[i] = str[len-1-i]; str[len-1-i] = t;
    }
    printf("Reversed: %s\n", str);
    return 0;
}