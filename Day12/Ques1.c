#include <stdio.h>
int isPalindrome(int n) {
    int temp = n, rev = 0;
    while (temp > 0) { rev = rev * 10 + (temp % 10); temp /= 10; }
    return (rev == n);
}
int main() {
    printf("Is 121 palindrome? %s\n", isPalindrome(121) ? "Yes" : "No");
    return 0;
}