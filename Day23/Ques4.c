#include <stdio.h>
int main() {
    char str[] = "test sample"; int count[256] = {0}, max = 0; char res;
    for(int i=0; str[i]!='\0'; i++) {
        count[(unsigned char)str[i]]++;
        if(count[(unsigned char)str[i]] > max) { max = count[(unsigned char)str[i]]; res = str[i]; }
    }
    printf("Max occurring char: %c\n", res);
    return 0;
}