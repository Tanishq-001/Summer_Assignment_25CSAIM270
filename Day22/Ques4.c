#include <stdio.h>
int main() {
    char str[] = "a b c d", res[10]; int j = 0;
    for(int i=0; str[i]!='\0'; i++) if(str[i] != ' ') res[j++] = str[i];
    res[j] = '\0';
    printf("Result: %s\n", res);
    return 0;
}