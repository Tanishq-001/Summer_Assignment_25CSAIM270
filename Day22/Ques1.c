#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "radar"; int len = strlen(str), pal = 1;
    for(int i=0; i<len/2; i++) if(str[i] != str[len-1-i]) pal = 0;
    printf("Palindrome: %s\n", pal ? "Yes" : "No");
    return 0;
}