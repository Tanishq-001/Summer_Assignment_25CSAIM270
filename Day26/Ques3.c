#include <stdio.h>
int main() {
    int choice; float balance = 5000.0, amt;
    printf("1.Balance\n2.Deposit\n3.Withdraw\nEnter choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1: printf("Balance: $%.2f\n", balance); break;
        case 2: printf("Enter deposit amount: "); scanf("%f", &amt); balance += amt; break;
        case 3: printf("Enter withdrawal amount: "); scanf("%f", &amt); 
                if(amt<=balance) balance-=amt; else printf("Insufficient balance\n"); break;
    }
    return 0;
}