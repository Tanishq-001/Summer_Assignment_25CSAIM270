#include <stdio.h>
int main() {
    char str[] = "Welcome to C programming"; int words = 1;
    for(int i=0; str[i]!='\0'; i++) if(str[i] == ' ') words++;
    printf("Words: %d\n", words);
    return 0;
}