#include <stdio.h>
int main() {
    int tktCount; float rate = 12.50;
    printf("Enter number of tickets: ");
    scanf("%d", &tktCount);
    printf("Total Booking Cost: $%.2f\n", tktCount * rate);
    return 0;
}