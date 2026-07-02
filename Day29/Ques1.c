#include <stdio.h>
int main() {
    int choice, a, b;
    printf("1.Add\n2.Sub\nEnter Choice & two numbers: ");
    scanf("%d %d %d", &choice, &a, &b);
    if(choice==1) printf("Ans: %d\n", a+b);
    else if(choice==2) printf("Ans: %d\n", a-b);
    return 0;
}