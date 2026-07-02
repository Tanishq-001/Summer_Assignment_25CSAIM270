#include <stdio.h>
#include <string.h>
int main() {
    char catalogue[2][20] = {"Physics", "Chemistry"};
    printf("Available books:\n");
    for(int i=0; i<2; i++) printf("- %s\n", catalogue[i]);
    return 0;
}