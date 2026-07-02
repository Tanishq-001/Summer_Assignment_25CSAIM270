#include <stdio.h>
#include <string.h>
int main() {
    char s1[] = "listen", s2[] = "silent";
    int c1[26]={0}, c2[26]={0}, anagram = 1;
    for(int i=0; s1[i]!='\0'; i++) c1[s1[i]-'a']++;
    for(int i=0; s2[i]!='\0'; i++) c2[s2[i]-'a']++;
    for(int i=0; i<26; i++) if(c1[i] != c2[i]) anagram = 0;
    printf("Anagram: %s\n", anagram ? "Yes" : "No");
    return 0;
}