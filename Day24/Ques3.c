#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Find the longest word", maxWord[20] = "", actWord[20];
    int i=0, j=0;
    while(1) {
        if(str[i] == ' ' || str[i] == '\0') {
            actWord[j] = '\0';
            if(strlen(actWord) > strlen(maxWord)) strcpy(maxWord, actWord);
            j = 0;
            if(str[i] == '\0') break;
        } else actWord[j++] = str[i];
        i++;
    }
    printf("Longest Word: %s\n", maxWord);
    return 0;
}