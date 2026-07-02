#include <stdio.h>
int main() {
    char str[] = "swiss";
    for(int i=0; str[i]!='\0'; i++) {
        for(int j=i+1; str[j]!='\0'; j++) {
            if(str[i] == str[j]) { printf("First repeating: %c\n", str[i]); return 0; }
        }
    }
    return 0;
}