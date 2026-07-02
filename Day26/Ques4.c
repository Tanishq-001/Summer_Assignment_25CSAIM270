#include <stdio.h>
int main() {
    int ans, score = 0;
    printf("Q1. What is the size of int in standard C?\n1) 2/4 Bytes\n2) 8 Bytes\nAnswer: ");
    scanf("%d", &ans);
    if(ans == 1) score++;
    printf("Your Total Score: %d/1\n", score);
    return 0;
}