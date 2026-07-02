#include <stdio.h>
#include <string.h>
int main() {
    char s1[] = "ABCD", s2[] = "CDAB", temp[10];
    strcpy(temp, s1); strcat(temp, s1); // temp becomes "ABCDABCD"
    if(strstr(temp, s2) != NULL) printf("Is a rotation\n");
    else printf("Not a rotation\n");
    return 0;
}