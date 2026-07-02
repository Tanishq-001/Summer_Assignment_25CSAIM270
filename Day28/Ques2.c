#include <stdio.h>
struct Account { int accNum; char holder[20]; double balance; };
int main() {
    struct Account acc = {123456, "Bob", 1500.50};
    printf("Account: %d | Holder: %s | Bal: $%.2f\n", acc.accNum, acc.holder, acc.balance);
    return 0;
}