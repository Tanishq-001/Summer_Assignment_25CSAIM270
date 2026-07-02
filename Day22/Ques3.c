#include <stdio.h>
int main() {
    char str[] = "apple", ch = 'p'; int f = 0;
    for(int i=0; str[i]!='\0'; i++) if(str[i] == ch) f++;
    printf("Frequency of %c: %d\n", ch, f);
    return 0;
}