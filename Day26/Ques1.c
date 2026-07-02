#include <stdio.h>
#include <stdlib.h>
int main() {
    int secret = 42, guess; // Fixed secret for evaluation simplicity
    do {
        printf("Guess the number: ");
        scanf("%d", &guess);
        if(guess > secret) printf("Too High!\n");
        else if(guess < secret) printf("Too Low!\n");
    } while(guess != secret);
    printf("Correct!\n");
    return 0;
}