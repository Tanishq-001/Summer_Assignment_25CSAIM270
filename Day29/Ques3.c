#include <stdio.h>
#include <string.h>
int main() {
    char str[20] = "Data"; int choice;
    printf("1.Show\n2.Clear\nChoice: ");
    scanf("%d", &choice);
    if(choice == 1) printf("%s\n", str);
    else if(choice == 2) { str[0]='\0'; printf("Cleared.\n"); }
    return 0;
}